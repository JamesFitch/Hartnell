<?php
/**
 * @file
 * ct_location.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_location_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'entity_reference_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Reference Location';
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
    'location' => 'location',
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
    0 => 'node:field_flexpage_location:flexpage',
    1 => 'node:field_person_location:person',
    2 => 'node:field_location:event',
  );
  $export['entity_reference_location'] = $view;

  $view = new view();
  $view->name = 'locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'community-locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location_type' => 'location_type',
    'event_type' => 0,
    'audience' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'news_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  /* Field: Content: Location Photo */
  $handler->display->display_options['fields']['field_location_photo']['id'] = 'field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['table'] = 'field_data_field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['field'] = 'field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['label'] = '';
  $handler->display->display_options['fields']['field_location_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_photo']['element_class'] = 'location-thumb';
  $handler->display->display_options['fields']['field_location_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'locations';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address_1']['id'] = 'field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_class'] = 'button-burgundy';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_address_1']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_location_address_1']['settings'] = array(
    'include_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'Get directions',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );

  /* Display: Campus Locations Content pane */
  $handler = $view->new_display('panel_pane', 'Campus Locations Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Campus Locations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location Photo */
  $handler->display->display_options['fields']['field_location_photo']['id'] = 'field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['table'] = 'field_data_field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['field'] = 'field_location_photo';
  $handler->display->display_options['fields']['field_location_photo']['label'] = '';
  $handler->display->display_options['fields']['field_location_photo']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_location_photo']['element_class'] = 'location-thumb';
  $handler->display->display_options['fields']['field_location_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_location_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_location_photo']['settings'] = array(
    'image_style' => 'locations-thumb',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'locations';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['label'] = '';
  $handler->display->display_options['fields']['field_person_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address_1']['id'] = 'field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_class'] = 'goldButtn';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address_1']['type'] = 'simple_gmap';
  $handler->display->display_options['fields']['field_location_address_1']['settings'] = array(
    'include_map' => 0,
    'iframe_width' => '200',
    'iframe_height' => '200',
    'include_link' => 1,
    'link_text' => 'Get directions',
    'zoom_level' => '14',
    'information_bubble' => 1,
    'include_text' => 0,
    'map_type' => 'm',
    'langcode' => 'en',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Content: Location type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
    57 => '57',
    56 => '56',
    59 => '59',
    58 => '58',
  );
  $handler->display->display_options['filters']['field_location_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';

  /* Display: Community Locations Content Pane */
  $handler = $view->new_display('panel_pane', 'Community Locations Content Pane', 'panel_pane_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  /* Filter criterion: Content: Location type (field_location_type) */
  $handler->display->display_options['filters']['field_location_type_tid']['id'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['table'] = 'field_data_field_location_type';
  $handler->display->display_options['filters']['field_location_type_tid']['field'] = 'field_location_type_tid';
  $handler->display->display_options['filters']['field_location_type_tid']['value'] = array(
    101 => '101',
  );
  $handler->display->display_options['filters']['field_location_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_location_type_tid']['vocabulary'] = 'location_type';
  $export['locations'] = $view;

  $view = new view();
  $view->name = 'locations_by_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Locations by Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations by Term';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'locations-by-term';

  /* Display: Pane -- General Numbers */
  $handler = $view->new_display('panel_pane', 'Pane -- General Numbers', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: General Numbers */
  $handler = $view->new_display('block', 'General Numbers', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Locations by Term General';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_location_address' => 'field_location_address',
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
    'field_location_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    350 => '350',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'location_type';
  $handler->display->display_options['block_description'] = 'General Numbers';

  /* Display: General Number Pane */
  $handler = $view->new_display('panel_pane', 'General Number Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['locations_by_term'] = $view;

  $view = new view();
  $view->name = 'map_from_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map from Location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['type'] = 'simple_gmap_embed_map_and_link';
  $handler->display->display_options['fields']['field_location_address']['settings'] = array(
    'iframe_width' => '200',
    'iframe_height' => '200',
    'link_text' => 'View Larger Map',
    'zoom_level' => '10',
    'information_bubble' => 0,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['map_from_location'] = $view;

  $view = new view();
  $view->name = 'referenced_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Referenced location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'No results to show.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Node referencing the location */
  $handler->display->display_options['relationships']['reverse_field_person_location_node']['id'] = 'reverse_field_person_location_node';
  $handler->display->display_options['relationships']['reverse_field_person_location_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_person_location_node']['field'] = 'reverse_field_person_location_node';
  $handler->display->display_options['relationships']['reverse_field_person_location_node']['ui_name'] = 'Node referencing the location';
  $handler->display->display_options['relationships']['reverse_field_person_location_node']['label'] = 'Node referencing the location';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_location_phone']['id'] = 'field_location_phone';
  $handler->display->display_options['fields']['field_location_phone']['table'] = 'field_data_field_location_phone';
  $handler->display->display_options['fields']['field_location_phone']['field'] = 'field_location_phone';
  $handler->display->display_options['fields']['field_location_phone']['label'] = '';
  $handler->display->display_options['fields']['field_location_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_location_phone']['alter']['text'] = 'Phone: [field_location_phone]';
  $handler->display->display_options['fields']['field_location_phone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location_phone']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_location_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_phone']['hide_empty'] = TRUE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_location_address']['element_class'] = 'address-text';
  $handler->display->display_options['fields']['field_location_address']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_location_address']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  /* Contextual filter: Page Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_person_location_node';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Page Nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Location - Content pane */
  $handler = $view->new_display('panel_pane', 'Location - Content pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Referenced Location - Content pane';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Location list';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Page Nid',
    ),
  );

  /* Display: Referenced location -- Content pane */
  $handler = $view->new_display('panel_pane', 'Referenced location -- Content pane', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Locations: FOO BAR!!';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Referenced location -- Content pane';
  $export['referenced_location'] = $view;

  return $export;
}
