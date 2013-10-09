<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */


/**
 * Perform alterations to the content of a block.
 *
 * This hook allows you to modify any data returned by hook_block_view().
 *
 * Note that instead of hook_block_view_alter(), which is called for all
 * blocks, you can also use hook_block_view_MODULE_DELTA_alter() to alter a
 * specific block.
 *
 * @param $data
 *   An array of data, as returned from the hook_block_view() implementation of
 *   the module that defined the block:
 *   - subject: The default localized title of the block.
 *   - content: Either a string or a renderable array representing the content
 *     of the block. You should check that the content is an array before trying
 *     to modify parts of the renderable structure.
 * @param $block
 *   The block object, as loaded from the database, having the main properties:
 *   - module: The name of the module that defined the block.
 *   - delta: The unique identifier for the block within that module, as defined
 *     in hook_block_info().
 *
 * @see hook_block_view_MODULE_DELTA_alter()
 * @see hook_block_view()
 */

/**
 * Adding Conditional Stylesheets for IE. 
 */
function omega_hartnell_preprocess_html(&$variables) {
  // Adding Conditional Stylesheets for IE.
  drupal_add_css(path_to_theme() . '/css/ie-lte-8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie-lte-7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
  drupal_add_css(path_to_theme() . '/css/ie-6.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'IE 6', '!IE' => FALSE), 'preprocess' => FALSE));
}

/**
 * Implements hook_panels_tabs_style_render_region().
 * 
 * This code is a direct copy from theme_panels_tabs_style_render_region(),
 * modified to emit the tab titles after the the tab contents and to 
 * wrap layout divs around the contents and titles. 
 */
function omega_hartnell_panels_tabs_style_render_region(&$vars) {

  // Only handle the audience promotion panel
  if($vars['owner_id'] !== 'audience_promotion') return theme_panels_tabs_style_render_region($vars);

  $display = $vars['display'];
  $region_id = $vars['region_id'];
  $owner_id = $vars['owner_id'];
  $panes = $vars['panes'];

  $tab_id = 'tabs-' . $owner_id . '-' . $region_id;

  $element = array(
    '#prefix' => '<div id="' . $tab_id . '">',
    '#suffix' => '</div>',
    '#attached' => array(
      'library' => array(array('system', 'ui.tabs')),
      'js' => array(
        drupal_get_path('module', 'panels_tabs') . '/js/panels_tabs.js' => array('type' => 'file'),
      ),
    ),
  );

  $settings = array();
  $settings['panelsTabs']['tabsID'][] = $tab_id;

  $element['#attached']['js'][] = array(
    'type' => 'setting',
    'data' => $settings,
  );

  // Get the pane contents
  $items = array();
  $delta = 1;
  foreach ($panes as $pane_id => $item) {
    $element['tabs_content'][$pane_id] = array(
      '#prefix' => '<div id="' . $tab_id . '-' . $delta . '">',
      '#suffix' => '</div>',
      '#markup' => $item,
    );
    ++$delta;
  }

  // Get the pane titles.
  $items = array();
  $delta = 1;
  foreach ($display->panels[$region_id] as $pane_id) {
    // Make sure the pane exists.
    if (!empty($panes[$pane_id])) {
      $title = panels_tabs_pane_titles($display->did, $pane_id);
      $title = $title ? $title : t('Tab @delta', array('@delta' => $delta));
      $items[] = '<a href="#'. $tab_id . '-' . $delta .'">' . $title . '</a>';
      ++$delta;
    }
  }

  $element['tabs_title'] = array('#theme' => 'item_list', '#items' => $items);

  // Wrap tab menus and tab contents in order to add layout classes.
  $element['tabs_title']['#prefix'] = '<div class="grid-3 omega tab-wrapper">';
  $element['tabs_title']['#suffix'] = '</div>';
  $element['tabs_content']['#prefix'] = '<div class="grid-13 omega promo-wrapper">';
  $element['tabs_content']['#suffix'] = '</div>';
  
  return drupal_render($element);

}
/**
 * Implements image button for search from in region: user second.
 */
function omega_hartnell_form_alter(&$form, &$form_state, $form_id) {
  switch($form_id) {
    case 'search_block_form':
      $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
      $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
      $form['search_block_form']['#attributes']['placeholder'] = t('Search');
      $form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
      $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
      $form['search_block_form']['#size'] = 40;  // define size of the textfield
      $form['search_block_form']['#default_value'] = t('Search'); // Set a default value for the textfield
      $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');
      break;
  }
}


/**
 * Implements custom breadcrumb style and seperator.
 */
function omega_hartnell_breadcrumb($variables) {
  $sep = ' &gt; ';
  if (count($variables['breadcrumb']) > 0) {
    return implode($sep, $variables['breadcrumb']);
  }
  else {
    return t("Home");
  }
}

/**
 * Implements hook_preprocess_node().
 */
function omega_hartnell_preprocess_node(&$variables) { 
  // Let's get that read more link out of the generated links variable!
  $variables['content']['links']['node']['#links']['node-readmore']['attributes']['class'][] = 'icon-right-open';

  // Add classes to the Promotion content type
  if ($variables['type'] == 'ad') {
    $ad_type_field = field_get_items('node', $variables['node'], 'field_ad_type');
    $ad_type = field_view_value('node', $variables['node'], 'field_ad_type', $ad_type_field[0]);
    $ad_type_class = 'promotion-type-' . strtolower($ad_type['#title']);
    $variables['attributes_array']['class'][] = $ad_type_class;
  }
}

/**
 * Implements hook_preprocess_block().
 */
function omega_hartnell_preprocess_block(&$vars) {
  // Add DOM elements to the Athletics main menu block to support mobile 
  // drop-down behavior
  if(property_exists($vars['block'], 'bid') && $vars['block']->bid == "menu-menu-athletics---page-menu") {
    $vars['content'] = 
      '<a href="#menu" class="menu-link">Menu</a>' . 
      '<nav id="menu" role="navigation">' . 
        $vars['content'] . 
      '</nav>';
  }
}


function omega_hartnell_panels_default_style_render_region(&$vars) {

  // On a person node, in the athletics theme, wrap the fields in the first content
  // region in a div in order to apply background styling to the 'body' but not
  // the title bar.
  if(@$vars['region_id'] == 'content') {
    if( @$vars['display']->css_id == 'content-type-person-athletics') {
      // Add an opening <div> tag to the first pane after the title & field_person_title,
      // then add a closing <div> tag to the last pane.
      // For convenience sake, we're going to assume that the first pane
      // is the title here.
      $panes_ct = count($vars['panes']);
      $pane_idx = 1;
      $wrapper_opened = false;
      foreach($vars['panes'] as $pane_id => &$pane) {
        $pane_key = $vars['display']->content[$pane_id]->subtype;
        if( (!$wrapper_opened) && 
            $pane_key <> 'node_title' && 
            $pane_key <> 'node:field_person_title') {
          // open wrapper div
          $pane = '<div class="person-node-content-area clearfix">' . $pane;
          $wrapper_opened = true;
        } elseif($pane_idx == $panes_ct) {
          // close wrapper div
          $pane .= '</div>';
        }
        $pane_idx ++;
      }
    }
  }
  // Pass to main theme function for rendering
  return theme_panels_default_style_render_region($vars);
}
