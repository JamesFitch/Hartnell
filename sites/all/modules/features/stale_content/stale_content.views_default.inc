<?php
/**
 * @file
 * stale_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function stale_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'stale_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Stale Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Stale Content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
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
    'faq' => 'faq',
    'flexpage' => 'flexpage',
    'person' => 'person',
  );

  /* Display: Stale Flexible Pages and FAQs Page */
  $handler = $view->new_display('page', 'Stale Flexible Pages and FAQs Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stale Flexible Pages and FAQs';
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
    'faq' => 'faq',
    'flexpage' => 'flexpage',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '<';
  $handler->display->display_options['filters']['changed']['value']['value'] = '-6 months';
  $handler->display->display_options['filters']['changed']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['changed']['group'] = 1;
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['changed']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['changed']['group_info']['label'] = 'Last Updated';
  $handler->display->display_options['filters']['changed']['group_info']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['group_info']['default_group'] = '2';
  $handler->display->display_options['filters']['changed']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'More than 3 months ago',
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => '-3 months',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'More than 6 months ago',
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => '-6 months',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'More than 9 months ago',
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => '-9 months',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'More than 1 year ago',
      'operator' => '<',
      'value' => array(
        'type' => 'offset',
        'value' => '-1 year',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/stale/flexpages-faqs';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Stale Flexible Pages and FAQs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Stale Content';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Stale People Page */
  $handler = $view->new_display('page', 'Stale People Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stale People Content';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['changed']['group_info']['label'] = 'Last Updated';
  $handler->display->display_options['filters']['changed']['group_info']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['changed']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Before January 20, 2015',
      'operator' => '<',
      'value' => array(
        'type' => 'date',
        'value' => '2015-01-20',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Before August 15, 2015',
      'operator' => '<',
      'value' => array(
        'type' => 'date',
        'value' => '2015-08-15',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Before January 20, 2016',
      'operator' => '<',
      'value' => array(
        'type' => 'date',
        'value' => '2016-01-20',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Before August 15, 2016',
      'operator' => '<',
      'value' => array(
        'type' => 'date',
        'value' => '2016-08-15',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'admin/content/stale/people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Stale People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['stale_content'] = $view;

  return $export;
}
