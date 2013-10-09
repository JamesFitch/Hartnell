<?php
/**
 * @file
 * ct_slides.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_slides_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entity_reference_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Reference Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_flexpage_slideshow:flexpage',
  );
  $export['entity_reference_slideshow'] = $view;

  $view = new view();
  $view->name = 'featured_programs_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Featured programs slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slide_description' => 0,
    'field_slide_image' => 0,
    'field_slide_url' => 0,
    'field_slide_image_1' => 0,
    'field_slide_title' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nothing' => 'nothing',
    'field_slide_description' => 0,
    'field_slide_image' => 0,
    'field_slide_url' => 0,
    'field_slide_image_1' => 0,
    'field_slide_title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_slideshow_slides_node']['id'] = 'field_slideshow_slides_node';
  $handler->display->display_options['relationships']['field_slideshow_slides_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_slides_node']['field'] = 'field_slideshow_slides_node';
  $handler->display->display_options['relationships']['field_slideshow_slides_node']['required'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slide_description']['id'] = 'field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['table'] = 'field_data_field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['field'] = 'field_slide_description';
  $handler->display->display_options['fields']['field_slide_description']['label'] = '';
  $handler->display->display_options['fields']['field_slide_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_description']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slide_image']['id'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slide_url']['id'] = 'field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['table'] = 'field_data_field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['field'] = 'field_slide_url';
  $handler->display->display_options['fields']['field_slide_url']['label'] = '';
  $handler->display->display_options['fields']['field_slide_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_url']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slide_image_1']['id'] = 'field_slide_image_1';
  $handler->display->display_options['fields']['field_slide_image_1']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['fields']['field_slide_image_1']['field'] = 'field_slide_image';
  $handler->display->display_options['fields']['field_slide_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_image_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_slide_title']['id'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['element_label_colon'] = FALSE;
  /* Field: Custom text - slideshow pager */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom text - slideshow pager';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="featured-programs-slideshow-pager-item">
<div class="featured-programs-slideshow-pager-image">[field_slide_image_1]</div>
<div class="featured-programs-slideshow-pager-title">[field_slide_title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - slide */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - slide';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="featured-programs-slideshow-slide">
<div class="featured-programs-slideshow-slide-image">[field_slide_image]</div>
<div class="featured-programs-slideshow-slide-description">[field_slide_description]</div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;

  /* Display: Featured Programs Slideshow */
  $handler = $view->new_display('panel_pane', 'Featured Programs Slideshow', 'panel_pane_1');
  $export['featured_programs_slideshow'] = $view;

  $view = new view();
  $view->name = 'slides';
  $view->description = 'Slideshow panes for both home and internal pages.';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slideshow-home';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Slideshow Node */
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['id'] = 'field_slideshow_image_node_1';
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['ui_name'] = 'Slideshow Node';
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['label'] = 'Slideshow Node';
  $handler->display->display_options['relationships']['field_slideshow_image_node_1']['required'] = TRUE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'slideshow_internal',
    'image_link' => '',
  );
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'home-slideshow';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_slideshow_image_desc']['id'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['table'] = 'field_data_field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['field'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['max_length'] = '294';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_slideshow_image_url']['id'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['type'] = 'link_plain';
  /* Field:  Custom text - left div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Custom text - left div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="slide-image" href="[field_slideshow_image_url]">[field_slideshow_image_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'left-div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - right div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - right div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2 class="slide-title"><a href="[field_slideshow_image_url] ">[field_slideshow_image_title]</a></h2>
<div class="slide-description">[field_slideshow_image_desc]</div>
<a class="read-more" href="[field_slideshow_image_url]">Read more</a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'float-left-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Internal Slideshow */
  $handler = $view->new_display('panel_pane', 'Internal Slideshow', 'panel_pane_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-athletic slideshow-internal';
  $handler->display->display_options['display_description'] = 'Placed on internal pages with a sidebar menu.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Slideshow Image (field_slideshow_image) */
  $handler->display->display_options['relationships']['field_slideshow_image_node']['id'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['id'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['field'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'athletic_slideshow_hartnell',
    'image_link' => '',
  );
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'slide-title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_slideshow_image_desc']['id'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['table'] = 'field_data_field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['field'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['max_length'] = '294';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_slideshow_image_url']['id'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['type'] = 'link_plain';
  /* Field:  Custom text - left div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Custom text - left div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="slide-image" href="[field_slideshow_image_url]">[field_slideshow_image_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'left-div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - right div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - right div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2 class="slide-title"><a href="[field_slideshow_image_url]">[field_slideshow_image_title]</a></h2>
<div class="slide-description">[field_slideshow_image_desc]</div>
<a class="read-more athletic-read-more icon-right-open" href="[field_slideshow_image_url]"> more information </a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'float-left-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['relationship'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['pane_description'] = 'Placed on internal pages with a sidebar menu.';
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'context',
      'context' => 'entity:node.vid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content revision: Vid',
    ),
  );

  /* Display: Home - Main Slide */
  $handler = $view->new_display('panel_pane', 'Home - Main Slide', 'panel_pane_home_main_slide');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'main_slide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Slideshow Image (field_slideshow_image) */
  $handler->display->display_options['relationships']['field_slideshow_image_node']['id'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'home_slideshow_hartnell',
    'image_link' => '',
  );
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'home-slideshow';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_slideshow_image_desc']['id'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['table'] = 'field_data_field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['field'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['more_link_text'] = 'more information';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_slideshow_image_url']['id'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['type'] = 'link_plain';
  /* Field: Redirect URL Path */
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['id'] = 'field_slideshow_image_url_1';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['ui_name'] = 'Redirect URL Path';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url_1']['type'] = 'link_plain';
  /* Field: Redirect URL Title */
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['id'] = 'field_slideshow_image_url_2';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['ui_name'] = 'Redirect URL Title';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url_2']['type'] = 'link_title_plain';
  /* Field:  Custom text - left div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Custom text - left div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="slide-image" href="[field_slideshow_image_url]">[field_slideshow_image_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'left-div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - right div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - right div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2 class="slide-title"><a href="[field_slideshow_image_url_1]">[field_slideshow_image_title]</a></h2>
<div class="slide-description">[field_slideshow_image_desc]</div>
<a class="read-more  icon-right-open" href="[field_slideshow_image_url_1]"> more information </a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'float-left-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Home - Thumbnail Carousel */
  $handler = $view->new_display('attachment', 'Home - Thumbnail Carousel', 'attachment_home_thumbnail');
  $handler->display->display_options['display_description'] = 'Attachment';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'main_thumbnail';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Slideshow Image (field_slideshow_image) */
  $handler->display->display_options['relationships']['field_slideshow_image_node']['id'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'home_slideshow_thumbnail_hartnell',
    'image_link' => '',
  );
  /* Field: Field: Academic Area or Major */
  $handler->display->display_options['fields']['field_academic_area_or_major']['id'] = 'field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['table'] = 'field_data_field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['field'] = 'field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['label'] = '';
  $handler->display->display_options['fields']['field_academic_area_or_major']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_area_or_major']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['alter']['text'] = '[field_academic_area_or_major]';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'thumb-title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'panel_pane_home_main_slide' => 'panel_pane_home_main_slide',
    'default' => 0,
    'panel_pane_1' => 0,
    'panel_pane_3' => 0,
    'panel_pane_4' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Landing Page Slideshow */
  $handler = $view->new_display('panel_pane', 'Landing Page Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-landing';
  $handler->display->display_options['display_description'] = 'Placed on internal pages without a sidebar menu.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field collection item: Entity with the Slideshow Image (field_slideshow_image) */
  $handler->display->display_options['relationships']['field_slideshow_image_node']['id'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['id'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['field'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['reverse_field_flexpage_slideshow_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'slideshow_landing',
    'image_link' => '',
  );
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'home-slideshow';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_slideshow_image_desc']['id'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['table'] = 'field_data_field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['field'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_slideshow_image_url']['id'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['type'] = 'link_plain';
  /* Field:  Custom text - left div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Custom text - left div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="slide-image" href="[field_slideshow_image_url]">[field_slideshow_image_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'left-div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - right div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - right div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2 class="slide-title"><a href="[field_slideshow_image_url] ">[field_slideshow_image_title]</a></h2>
<div class="slide-description">[field_slideshow_image_desc]</div>
<a class="read-more athletic-read-more icon-right-open" href="[field_slideshow_image_url]"> more information </a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'float-left-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['relationship'] = 'reverse_field_flexpage_slideshow_node';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['pane_description'] = 'Placed on internal pages without a sidebar menu.';
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'context',
      'context' => 'entity:node.vid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content revision: Vid',
    ),
  );
  $export['slides'] = $view;

  $view = new view();
  $view->name = 'slides_internal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Slides Internal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slideshow-home';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_image_image' => 0,
    'field_slideshow_image_title' => 0,
    'field_slideshow_image_desc' => 0,
    'field_slideshow_image_url' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Slideshow Node */
  $handler->display->display_options['relationships']['field_slideshow_image_node']['id'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['field'] = 'field_slideshow_image_node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['ui_name'] = 'Slideshow Node';
  $handler->display->display_options['relationships']['field_slideshow_image_node']['label'] = 'Slideshow Node';
  /* Field: Field collection item: Image */
  $handler->display->display_options['fields']['field_slideshow_image_image']['id'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['table'] = 'field_data_field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['field'] = 'field_slideshow_image_image';
  $handler->display->display_options['fields']['field_slideshow_image_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image_image']['settings'] = array(
    'image_style' => 'slideshow_internal',
    'image_link' => '',
  );
  /* Field: Field collection item: Title */
  $handler->display->display_options['fields']['field_slideshow_image_title']['id'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['table'] = 'field_data_field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['field'] = 'field_slideshow_image_title';
  $handler->display->display_options['fields']['field_slideshow_image_title']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_class'] = 'home-slideshow';
  $handler->display->display_options['fields']['field_slideshow_image_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_slideshow_image_desc']['id'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['table'] = 'field_data_field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['field'] = 'field_slideshow_image_desc';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_slideshow_image_desc']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_desc']['element_label_colon'] = FALSE;
  /* Field: Field collection item: URL */
  $handler->display->display_options['fields']['field_slideshow_image_url']['id'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['table'] = 'field_data_field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['field'] = 'field_slideshow_image_url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_class'] = 'call-to-action';
  $handler->display->display_options['fields']['field_slideshow_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slideshow_image_url']['type'] = 'link_plain';
  /* Field:  Custom text - left div */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = ' Custom text - left div';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="slide-image" href="[field_slideshow_image_url]">[field_slideshow_image_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'left-div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Custom text - right div */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Custom text - right div';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h2 class="slide-title"><a href="[field_slideshow_image_url] ">[field_slideshow_image_title]</a></h2>
<div class="slide-description">[field_slideshow_image_desc]</div>
<a class="read-more" href="[field_slideshow_image_url]">Read more</a>';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'float-left-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Internal slideshow */
  $handler = $view->new_display('panel_pane', 'Internal slideshow', 'panel_pane_home_main_slide');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['relationship'] = 'field_slideshow_image_node';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'vid' => array(
      'type' => 'context',
      'context' => 'entity:node.vid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content revision: Vid',
    ),
  );
  $export['slides_internal'] = $view;

  return $export;
}
