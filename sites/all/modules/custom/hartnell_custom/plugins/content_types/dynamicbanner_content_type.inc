<?php


/**
 * @file
 * Ctools content type plugin for dynamically rendering flexpage banner
 * images.  If the page has a Banner Image, it will be used.  If not,
 * this plugin will look for a banner image attached to the taxonomy
 * term for this page's site_section (or any of it's ancestor terms).
 *
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Dynamic Page Banner'),
  // Machine name for this content type.
  'content_types' => 'hartnell_custom_dynamicbanner_content_type',
  // 'single' means not to be subtyped.
  'single' => TRUE,
  // Name of a function which will render the block.
  'render callback' => 'dynamicbanner_content_type_render',

  'description' => t('Displays page banner based on page and section.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  
  // block admin edit form callback.
  'edit form' => 'dynamicbanner_content_type_edit_form',
  // block title (for panel content administration page).
  'admin title' => 'hartnell_custom_dynamicbanner_content_type_admin_title',

  // presents a block which is used in the preview of the data.
  // On Panels this is the preview pane shown on the panels building page.
  'admin info' => 'hartnell_custom_dynamicbanner_content_type_admin_info',
  'category' => array(t('Custom blocks'), -9),
);

function hartnell_custom_dynamicbanner_content_type_admin_title($subtype, $conf, $context = NULL) {
  $output = t('Dynamic Banner');
  if ($conf['override_title'] && !empty($conf['override_title_text'])) {
    $output = filter_xss_admin($conf['override_title_text']);
  }
  return $output;
}

/**
 * Callback to provide administrative info (the preview in panels when building
 * a panel).
 *
 * IE: this is what is displayed on the "Content" tab, as the placeholder for
 * this pane.
 *
 * In this case we'll render the content with a dummy argument and
 * a dummy context.
 */
function hartnell_custom_dynamicbanner_content_type_admin_info($subtype, $conf, $context = NULL) {
  // Pass context through for admin preview
  $block = dynamicbanner_content_type_render($subtype, $conf, array("admin"), $context);
  return $block;
}

/**
 * Run-time rendering of the body of the block (content type)
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time
 * @param $args
 * @param $context
 *
 * @return
 *   An object with at least title and content members
 *
 * @todo  refactor to use hartnell_custom_get_site_section_theme_data()
 */
function dynamicbanner_content_type_render($subtype, $conf, $args, $context) {
  if (!empty($context) && empty($context->data)) {
    return;
  }

  $block = new stdClass();

  // Determine if we're rendering the admin preview or node view.
  $pane_mode = ($args[0] == "admin" ? 'admin' : 'node_view');

  // Check if page has banner display disabled
  $no_banner = $conf['no_banner'];

  // Get reference to the node.
  //   Admin preview.
  if($pane_mode == "admin"){
    $node = $context['panelizer']->data; 
  //   Node view.
  } else {
    if(is_array($context)) {
      $node = $context[0]->data; 
    } else {
      $node = $context->data;
    }
  }

  // If this page has a banner (and/or slideshow(??) configured, use it/them.
  if( ! $no_banner ) {
    $node_banner = field_get_items('node', $node, 'field_headerimg', $node->language);
    if($node_banner /* || $node_slideshow */ ) {

      $block->content = '';
      if($node_banner) {
        $banner_item = field_view_field('node', $node, 'field_headerimg', 'full');
      }
      // if($node_slideshow) {
      //   $slideshow_item = field_view_field('node', $node, 'field_flexpage_slideshow', 'full');
      // }

    // No banner on page; look for a default banner based on site section.
    } else {

      // get site section term
      $site_section = field_get_items('node', $node, 'field_site_section', $node->language);
      if($site_section) {
        $site_section = array_shift($site_section);
        // load site section taxonomy and parents.
        $site_section_tree = taxonomy_get_parents_all($site_section['tid']);
        // Use the first term in the tree that has a banner image defined.
        foreach($site_section_tree as $site_section_term){
          $banner_image = field_get_items('taxonomy_term', $site_section_term, 'field_banner_image', $node->language);
          if($banner_image) {  
            $banner_item = field_view_field('taxonomy_term', $site_section_term, 'field_banner_image', 'full');
          }      
        }
      }
    }
  }

  // Render content.
  //   Admin preview.
  if($pane_mode == 'admin'){
    // Give UI feedback about what banner is being used on this page.
    $block->title = 'Banner Image to be displayed: ';
    if( ! empty($banner_item) ) {
      // Get the Site Section, if it's being used
      if($banner_item['#entity_type'] == 'taxonomy_term'){
        $block->title .= '\'' . $banner_item['#object']->name . '\' Site Section banner.';
      } else {
        $block->title .= 'This page\'s Banner Image.';
      }
    } elseif( $no_banner ) {
      // Banner is hidden
      $block->title .= 'Hidden - No banner will be displayed on this page.';
    } else {
      // No banner is available
      $block->title .= 'None - No banner was found on this page or within its Site Section tree.';
    }
    $block->content = 'No preview available.';

  //   Node view.
  } else {
    if(!$no_banner) {
      if(isset($banner_item) && $banner_item) {
        // Apply dynamic image style
        $banner_item[0]['#image_style'] = 'banner_internal';
        $block->content .= render($banner_item);
      } else {
        // ... (no site section, no banner, no content to display);
      }
    } else {
      // ... Banner is hidden.
    }
  }

  return $block;

}

/**
 * Implements hook_form().
 *
 * Define the block edit form.
 * 
 */
function dynamicbanner_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['image_style'] = array(
    '#type' => 'select',
    '#title' => t('Select an image style for this banner'),
    '#options' => array('banner_internal' => 'Internal', 'banner_landing' => 'Landing'),
    '#description' => t('Use "Internal" for pages with sidebar layout, "Landing" for pages with no sidebar.'),
    '#default_value' => !empty($conf['image_style']) ? $conf['image_style'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );  
  $form['no_banner'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide Banner (no banner will be displayed on this page)'),
    '#description' => t('Display no banner on this page, even if one is attached to its Site Section'),
    '#default_value' => !empty($conf['no_banner']) ? $conf['no_banner'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

/**
 * Implements hook_form_submit().
 * @param  [type] $form       [description]
 * @param  [type] $form_state [description]
 * @return [type]             [description]
 *
 * Submit the block edit form.
 */
function dynamicbanner_content_type_edit_form_submit($form, &$form_state) {

  foreach (element_children($form) as $key) {
    if (!empty($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
  // manually handle checkbox/boolean
  $form_state['conf']['no_banner'] = $form_state['values']['no_banner'];
}
