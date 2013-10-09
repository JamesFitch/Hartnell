<?php
/**
 * @file
 * ct_ad.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_ad_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'audience_promotion_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Audience Promotion Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_ad_audience']['id'] = 'field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['table'] = 'field_data_field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['field'] = 'field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['label'] = '';
  $handler->display->display_options['fields']['field_ad_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ad_audience']['alter']['text'] = '[field_ad_audience-tid]';
  $handler->display->display_options['fields']['field_ad_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Ad image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'field_data_field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => 'audience_promotion',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ad_link']['id'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['table'] = 'field_data_field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['field'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['label'] = '';
  $handler->display->display_options['fields']['field_ad_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ad_link']['alter']['text'] = '<a href="[field_ad_link-url]" class="audience-promo-link">Link</a>';
  $handler->display->display_options['fields']['field_ad_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_ad_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ad_link']['type'] = 'link_plain';
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
    'ad' => 'ad',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Audience (field_ad_audience) */
  $handler->display->display_options['filters']['field_ad_audience_tid']['id'] = 'field_ad_audience_tid';
  $handler->display->display_options['filters']['field_ad_audience_tid']['table'] = 'field_data_field_ad_audience';
  $handler->display->display_options['filters']['field_ad_audience_tid']['field'] = 'field_ad_audience_tid';
  $handler->display->display_options['filters']['field_ad_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['operator_id'] = 'field_ad_audience_tid_op';
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['label'] = 'Audience (field_ad_audience)';
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['operator'] = 'field_ad_audience_tid_op';
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['identifier'] = 'field_ad_audience_tid';
  $handler->display->display_options['filters']['field_ad_audience_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ad_audience_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_ad_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_audience_tid']['vocabulary'] = 'audience';
  $handler->display->display_options['filters']['field_ad_audience_tid']['hierarchy'] = 1;

  /* Display: Audience Promotion Blocks */
  $handler = $view->new_display('panel_pane', 'Audience Promotion Blocks', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'audience-promo-tabs';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['hide_admin_links'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Audience */
  $handler->display->display_options['fields']['field_ad_audience']['id'] = 'field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['table'] = 'field_data_field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['field'] = 'field_ad_audience';
  $handler->display->display_options['fields']['field_ad_audience']['label'] = '';
  $handler->display->display_options['fields']['field_ad_audience']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_audience']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ad_audience']['alter']['text'] = '[field_ad_audience-tid]';
  $handler->display->display_options['fields']['field_ad_audience']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_ad_link']['id'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['table'] = 'field_data_field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['field'] = 'field_ad_link';
  $handler->display->display_options['fields']['field_ad_link']['label'] = '';
  $handler->display->display_options['fields']['field_ad_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_link']['alter']['text'] = '<div class="audience-overlay">
[body] 
<a href="[field_ad_link-url]" class="audience-promo-link">Link</a>
</div>';
  $handler->display->display_options['fields']['field_ad_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ad_link']['element_class'] = 'icon-right-open';
  $handler->display->display_options['fields']['field_ad_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ad_link']['type'] = 'link_plain';
  /* Field: Content: Ad image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'field_data_field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['label'] = '';
  $handler->display->display_options['fields']['field_ad_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => 'audience_promotion',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '145';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
  /* Field: Rendered Row */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Rendered Row';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="audience-row">
[field_ad_image]
<div class="audience-overlay">
[body] <a href="[field_ad_link]" class="more-right icon-right-open">more</a>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'views-field-body';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Reference Selection */
  $handler = $view->new_display('entityreference', 'Reference Selection', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Provides selection options when adding a reference to an Ad item.';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_ad_audience' => 0,
    'field_ad_image' => 0,
    'body' => 0,
    'field_ad_link' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'ad' => 'ad',
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Ad Type */
  $handler->display->display_options['fields']['field_ad_type']['id'] = 'field_ad_type';
  $handler->display->display_options['fields']['field_ad_type']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['fields']['field_ad_type']['field'] = 'field_ad_type';
  $handler->display->display_options['fields']['field_ad_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_ad_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<strong>[title]</strong>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Ad image */
  $handler->display->display_options['fields']['field_ad_image']['id'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['table'] = 'field_data_field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['field'] = 'field_ad_image';
  $handler->display->display_options['fields']['field_ad_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_ad_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ad_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'ad' => 'ad',
  );
  /* Filter criterion: Content: Ad Type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_tid']['id'] = 'field_ad_type_tid';
  $handler->display->display_options['filters']['field_ad_type_tid']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_tid']['field'] = 'field_ad_type_tid';
  $handler->display->display_options['filters']['field_ad_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_ad_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ad_type_tid']['expose']['operator_id'] = 'field_ad_type_tid_op';
  $handler->display->display_options['filters']['field_ad_type_tid']['expose']['label'] = 'Ad Type';
  $handler->display->display_options['filters']['field_ad_type_tid']['expose']['operator'] = 'field_ad_type_tid_op';
  $handler->display->display_options['filters']['field_ad_type_tid']['expose']['identifier'] = 'field_ad_type_tid';
  $handler->display->display_options['filters']['field_ad_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ad_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ad_type_tid']['vocabulary'] = 'promo';
  $handler->display->display_options['filters']['field_ad_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['attach'] = array(
    0 => 'node:field_promo_content:flexpage',
  );
  $export['audience_promotion_blocks'] = $view;

  return $export;
}
