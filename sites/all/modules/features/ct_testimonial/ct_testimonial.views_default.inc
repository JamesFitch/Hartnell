<?php
/**
 * @file
 * ct_testimonial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_testimonial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'testimonials';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Testimonials';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'testimonial-views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'testimonial-rows';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No testimonials for these search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Attribution */
  $handler->display->display_options['fields']['field_attribution']['id'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['table'] = 'field_data_field_attribution';
  $handler->display->display_options['fields']['field_attribution']['field'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['label'] = '';
  $handler->display->display_options['fields']['field_attribution']['element_label_colon'] = FALSE;
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_affiliation']['element_label_colon'] = FALSE;
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonial_image']['element_class'] = 'left';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonials_image_hartnell',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'testimonial' => 'testimonial',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Testimonial type (field_testimonial_type) */
  $handler->display->display_options['filters']['field_testimonial_type_tid']['id'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['table'] = 'field_data_field_testimonial_type';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['field'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_testimonial_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['operator_id'] = 'field_testimonial_type_tid_op';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['label'] = 'Testimonial type (field_testimonial_type)';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['operator'] = 'field_testimonial_type_tid_op';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['identifier'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_testimonial_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['vocabulary'] = 'testimonial_type';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Academic Area or Major (field_academic_area_or_major) */
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['id'] = 'field_academic_area_or_major_tid';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['table'] = 'field_data_field_academic_area_or_major';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['field'] = 'field_academic_area_or_major_tid';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['expose']['operator_id'] = 'field_academic_area_or_major_tid_op';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['expose']['label'] = 'Academic Area or Major (field_academic_area_or_major)';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['expose']['operator'] = 'field_academic_area_or_major_tid_op';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['expose']['identifier'] = 'field_academic_area_or_major_tid';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['vocabulary'] = 'academic_subject';
  $handler->display->display_options['filters']['field_academic_area_or_major_tid']['hierarchy'] = 1;

  /* Display: Testimonials with Search */
  $handler = $view->new_display('panel_pane', 'Testimonials with Search', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonial_image']['element_class'] = 'testimonial-image';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
    'image_style' => 'testimonials_image_hartnell',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'testimonial-header';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '390';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'testimonial-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Attribution */
  $handler->display->display_options['fields']['field_attribution']['id'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['table'] = 'field_data_field_attribution';
  $handler->display->display_options['fields']['field_attribution']['field'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['label'] = '';
  $handler->display->display_options['fields']['field_attribution']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['field_attribution']['element_label_class'] = 'attribution';
  $handler->display->display_options['fields']['field_attribution']['element_label_colon'] = FALSE;
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_affiliation']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_affiliation']['element_class'] = 'affiliation';
  $handler->display->display_options['fields']['field_affiliation']['element_label_colon'] = FALSE;
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
    'testimonial' => 'testimonial',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Testimonial type (field_testimonial_type) */
  $handler->display->display_options['filters']['field_testimonial_type_tid']['id'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['table'] = 'field_data_field_testimonial_type';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['field'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_testimonial_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['operator_id'] = 'field_testimonial_type_tid_op';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['label'] = 'Search by type of Testimonial:';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['operator'] = 'field_testimonial_type_tid_op';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['identifier'] = 'field_testimonial_type_tid';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_testimonial_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['vocabulary'] = 'testimonial_type';
  $handler->display->display_options['filters']['field_testimonial_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Academic Area or Major (Content: Has taxonomy term) */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['ui_name'] = 'Academic Area or Major (Content: Has taxonomy term)';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Search by type of Program:';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'academic_area';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'academic_subject';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Related Testimonials Shortlist */
  $handler = $view->new_display('panel_pane', 'Related Testimonials Shortlist', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Testimonials';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'testimonial-views athletic-testimonials';
  $handler->display->display_options['display_description'] = 'List of testimonials filterable by testimonial type and/or major, with a specified number of results returned and optional image';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Testimonial Image */
  $handler->display->display_options['fields']['field_testimonial_image']['id'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['table'] = 'field_data_field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['field'] = 'field_testimonial_image';
  $handler->display->display_options['fields']['field_testimonial_image']['label'] = '';
  $handler->display->display_options['fields']['field_testimonial_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_testimonial_image']['element_class'] = 'testimonial-image';
  $handler->display->display_options['fields']['field_testimonial_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_testimonial_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_testimonial_image']['settings'] = array(
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
  $handler->display->display_options['fields']['title']['element_class'] = 'testimonial-header ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more ';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '250',
  );
  /* Field: Content: Attribution */
  $handler->display->display_options['fields']['field_attribution']['id'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['table'] = 'field_data_field_attribution';
  $handler->display->display_options['fields']['field_attribution']['field'] = 'field_attribution';
  $handler->display->display_options['fields']['field_attribution']['label'] = '';
  $handler->display->display_options['fields']['field_attribution']['element_label_colon'] = FALSE;
  /* Field: Content: Affiliation */
  $handler->display->display_options['fields']['field_affiliation']['id'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['table'] = 'field_data_field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['field'] = 'field_affiliation';
  $handler->display->display_options['fields']['field_affiliation']['label'] = '';
  $handler->display->display_options['fields']['field_affiliation']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['testimonials'] = $view;

  return $export;
}
