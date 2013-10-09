<?php
/**
 * @file
 * ct_alert.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_alert_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sitewide_alerts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sitewide Alerts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'sitewide-alerts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Alert Link */
  $handler->display->display_options['fields']['field_alert_link']['id'] = 'field_alert_link';
  $handler->display->display_options['fields']['field_alert_link']['table'] = 'field_data_field_alert_link';
  $handler->display->display_options['fields']['field_alert_link']['field'] = 'field_alert_link';
  $handler->display->display_options['fields']['field_alert_link']['label'] = '';
  $handler->display->display_options['fields']['field_alert_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alert_link']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_alert_link']['element_class'] = 'global-alert';
  $handler->display->display_options['fields']['field_alert_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alert_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_alert_link']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
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
    'alerts_sitewide' => 'alerts_sitewide',
  );

  /* Display: Sitewide Alerts */
  $handler = $view->new_display('block', 'Sitewide Alerts', 'block');
  $handler->display->display_options['display_description'] = 'Block: Sitewide Alerts Published';

  /* Display: Sitewide Alerts */
  $handler = $view->new_display('panel_pane', 'Sitewide Alerts', 'panel_pane_1');
  $export['sitewide_alerts'] = $view;

  return $export;
}
