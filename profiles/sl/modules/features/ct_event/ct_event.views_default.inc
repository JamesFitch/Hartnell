<?php
/**
 * @file
 * ct_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Browse all events ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filters';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['firstDay'] = '1';
  $handler->display->display_options['style_options']['weekMode'] = 'liquid';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator_id'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['identifier'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_audience_tid']['vocabulary'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['error_message'] = FALSE;

  /* Display: Cp - FullCalendar */
  $handler = $view->new_display('panel_pane', 'Cp - FullCalendar', 'panel_pane_calendar');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar';
  $handler->display->display_options['display_description'] = 'This displays the FullCalendar';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
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
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['pane_title'] = 'FullCalendar';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Cp - FullCalendar, one week */
  $handler = $view->new_display('panel_pane', 'Cp - FullCalendar, one week', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Week at a glance';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar week';
  $handler->display->display_options['display_description'] = 'This displays one week of the calendar';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View full calendar';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = 'node/48';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['defaultView'] = 'basicWeek';
  $handler->display->display_options['style_options']['weekMode'] = 'liquid';
  $handler->display->display_options['style_options']['left'] = '';
  $handler->display->display_options['style_options']['center'] = 'Week at a glance';
  $handler->display->display_options['style_options']['right'] = '';
  $handler->display->display_options['style_options']['timeformat'] = '';
  $handler->display->display_options['style_options']['sameWindow'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_address']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'FullCalendar - week';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Week list */
  $handler = $view->new_display('panel_pane', 'Week list', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 0,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'day_of_the_week',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Calendar week list';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: List - FullCalendar */
  $handler = $view->new_display('panel_pane', 'List - FullCalendar', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mobile - Calendar';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'calendar-responsive';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: HIDDEN: Calendar Day of the Week */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'HIDDEN: Calendar Day of the Week';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'mobile_calendar',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'calendar-title-list';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Time */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'REWRITTEN: Time';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date_1']['element_class'] = 'calendar-time-list';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator_id'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['identifier'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_audience_tid']['vocabulary'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Event Date - end date (field_event_date:value2) */
  $handler->display->display_options['filters']['field_event_date_value2']['id'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value2']['field'] = 'field_event_date_value2';
  $handler->display->display_options['filters']['field_event_date_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_event_date_value2']['default_date'] = 'now';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Browse all events ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reset filters';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event-view-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Location Entity */
  $handler->display->display_options['relationships']['field_location_target_id']['id'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_target_id']['field'] = 'field_location_target_id';
  $handler->display->display_options['relationships']['field_location_target_id']['ui_name'] = 'Location Entity';
  $handler->display->display_options['relationships']['field_location_target_id']['label'] = 'Location entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Location Name */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Location Name';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Location Address */
  $handler->display->display_options['fields']['field_location_address_1']['id'] = 'field_location_address_1';
  $handler->display->display_options['fields']['field_location_address_1']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address_1']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_location_address_1']['ui_name'] = 'Location Address';
  $handler->display->display_options['fields']['field_location_address_1']['label'] = '';
  $handler->display->display_options['fields']['field_location_address_1']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More ';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Content: Athletic Team (field_team) */
  $handler->display->display_options['arguments']['field_team_tid']['id'] = 'field_team_tid';
  $handler->display->display_options['arguments']['field_team_tid']['table'] = 'field_data_field_team';
  $handler->display->display_options['arguments']['field_team_tid']['field'] = 'field_team_tid';
  $handler->display->display_options['arguments']['field_team_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_team_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';

  /* Display: cp-Events List */
  $handler = $view->new_display('panel_pane', 'cp-Events List', 'panel_pane_event_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'events-academic';
  $handler->display->display_options['display_description'] = 'Events list content pane';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Site Section */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'Site Section';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'site_section' => 'site_section',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '5';
  /* Contextual filter: Audience */
  $handler->display->display_options['arguments']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['ui_name'] = 'Audience';
  $handler->display->display_options['arguments']['field_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['pane_title'] = 'Event list details';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:node.field_site_section',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Site Section',
    ),
    'field_audience_tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_audience',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Audience (field_audience)',
    ),
  );

  /* Display: cp-Events List short */
  $handler = $view->new_display('panel_pane', 'cp-Events List short', 'panel_pane_event_list_short');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'events-academic';
  $handler->display->display_options['display_description'] = 'Events list content pane - short';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: HIDDEN: Calendar Month */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'HIDDEN: Calendar Month';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['max_length'] = '3';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_event_date_1']['element_class'] = 'calendar-month';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month_abreviated',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: REWRITTEN: Event Date Month/Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'REWRITTEN: Event Date Month/Date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="date-block">
<h6 class:\'\'day-box">[field_event_date_1] </h6>
<h2 class:\'\'month-box">[field_event_date] </h2>
</div>';
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'calendar-date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['empty'] = '<div class="date-block">
<h6 class:\'\'day-box">[field_event_date_1] </h6>
<h2 class:\'\'month-box">[field_event_date_2] </h2>
</div.';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'day_of_the_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: HIDDEN: Calendar Event: Time */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'HIDDEN: Calendar Event: Time';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_event_date_2']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: REWRITTEN: Time / Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'REWRITTEN: Time / Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="event-lock">
<h6 class="event-time">[field_event_date_2]</h6>
<h4 class="feed-title">[title]</h4>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_class'] = 'homepage-event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Site Section */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'Site Section';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'site_section' => 'site_section',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['fail'] = 'summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '5';
  /* Contextual filter: Audience */
  $handler->display->display_options['arguments']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['ui_name'] = 'Audience';
  $handler->display->display_options['arguments']['field_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['pane_title'] = 'Event list details - short';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:node.field_site_section',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Site Section',
    ),
    'field_audience_tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_audience',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Audience',
    ),
  );

  /* Display: cp-Events Archive List */
  $handler = $view->new_display('panel_pane', 'cp-Events Archive List', 'panel_pane_event_archive_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events Archive';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'event-archive';
  $handler->display->display_options['display_description'] = 'Events archive list content pane';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: No results text */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No results text';
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, your filters returned no results!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Location Name */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Location Name';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More ';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Site Section */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['ui_name'] = 'Site Section';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'site_section' => 'site_section',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '5';
  /* Contextual filter: Audience */
  $handler->display->display_options['arguments']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['ui_name'] = 'Audience';
  $handler->display->display_options['arguments']['field_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Audience (field_audience) */
  $handler->display->display_options['filters']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['filters']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['filters']['field_audience_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator_id'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['label'] = 'Audience';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['operator'] = 'field_audience_tid_op';
  $handler->display->display_options['filters']['field_audience_tid']['expose']['identifier'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_audience_tid']['vocabulary'] = 'audience';
  $handler->display->display_options['filters']['field_audience_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Event type';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Site Section (field_site_section) */
  $handler->display->display_options['filters']['field_site_section_tid']['id'] = 'field_site_section_tid';
  $handler->display->display_options['filters']['field_site_section_tid']['table'] = 'field_data_field_site_section';
  $handler->display->display_options['filters']['field_site_section_tid']['field'] = 'field_site_section_tid';
  $handler->display->display_options['filters']['field_site_section_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_site_section_tid']['expose']['operator_id'] = 'field_site_section_tid_op';
  $handler->display->display_options['filters']['field_site_section_tid']['expose']['label'] = 'Event category';
  $handler->display->display_options['filters']['field_site_section_tid']['expose']['operator'] = 'field_site_section_tid_op';
  $handler->display->display_options['filters']['field_site_section_tid']['expose']['identifier'] = 'site_section';
  $handler->display->display_options['filters']['field_site_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_site_section_tid']['vocabulary'] = 'site_section';
  $handler->display->display_options['filters']['field_site_section_tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'Event archive list';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:node.field_site_section',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Site Section',
    ),
    'field_audience_tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_audience',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Audience (field_audience)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: cp - Events Home */
  $handler = $view->new_display('panel_pane', 'cp - Events Home', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Homepage events - Promote to front.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Browse all events ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event-view-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<ul class="event-list">
     <li class="add-event"> <a class="read-more icon-right-open"" href="node/add/event"> add an event </li>
     <li class="read-more"> <a class="read-more icon-right-open" href="academic-calender"> all events </li>
</ul>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: HIDDEN: Calendar Month */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'HIDDEN: Calendar Month';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_event_date_1']['element_class'] = 'calendar-month';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_date_1']['multi_type'] = 'ul';
  /* Field: REWRITTEN: Event Date Month/Date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'REWRITTEN: Event Date Month/Date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['alter']['text'] = '<div class="date-block">
<h6 class:\'\'day-box">[field_event_date_1] </h6>
<h2 class:\'\'month-box">[field_event_date_2] </h2>
</div.';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_class'] = 'calendar-date';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'day_of_the_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: HIDDEN: Calendar Event: Time */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'HIDDEN: Calendar Event: Time';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: REWRITTEN: Time / Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'REWRITTEN: Time / Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="event-lock">
<h6 class="event-time">[field_event_date]</h6>
<h4 class="feed-title">[title]</h4>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'homepage-event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Read More */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['ui_name'] = 'REWRITTEN: Read More';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<p><a class="more-events icon-right-open" href="[path]"> </a></p>';
  $handler->display->display_options['fields']['path']['element_type'] = 'div';
  $handler->display->display_options['fields']['path']['element_class'] = 'more-of-event';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'Now';

  /* Display: cp-athletic events-at a glance */
  $handler = $view->new_display('panel_pane', 'cp-athletic events-at a glance', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Schedules At A Glance!';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'athletic-events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date (Time) */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'Content: Event Date (Time)';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_class'] = 'schedules-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date (Short) */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Content: Event Date (Short)';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Opponent */
  $handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
  $handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['label'] = '';
  $handler->display->display_options['fields']['field_opponent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_opponent']['alter']['text'] = 'Hartnell vs [field_opponent]';
  $handler->display->display_options['fields']['field_opponent']['element_label_colon'] = FALSE;
  /* Field: Location Name */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Location Name';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'More ';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Event Date (Weekday) */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Content: Event Date (Weekday)';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1]<span class="athletic-day">[field_event_date]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_event_date_1']['element_class'] = 'athletic-event';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'weekday',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Athletic Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['label'] = '';
  $handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Athletic Team (field_team) */
  $handler->display->display_options['filters']['field_team_tid']['id'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_tid']['field'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_team_tid']['value'] = '';
  $handler->display->display_options['filters']['field_team_tid']['vocabulary'] = 'sport';
  $handler->display->display_options['pane_title'] = 'Schedules at Glance';
  $handler->display->display_options['argument_input'] = array(
    'field_team_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Athletic Team (field_team)',
    ),
  );

  /* Display: cp-athletic events-past */
  $handler = $view->new_display('panel_pane', 'cp-athletic events-past', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Game Results';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'athletic-events-past';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'schedules-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Win-Loss */
  $handler->display->display_options['fields']['field_win_loss']['id'] = 'field_win_loss';
  $handler->display->display_options['fields']['field_win_loss']['table'] = 'field_data_field_win_loss';
  $handler->display->display_options['fields']['field_win_loss']['field'] = 'field_win_loss';
  $handler->display->display_options['fields']['field_win_loss']['label'] = '';
  $handler->display->display_options['fields']['field_win_loss']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_win_loss']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['field_win_loss']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_win_loss']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['field_win_loss']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_win_loss']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_win_loss']['element_class'] = 'win-loss-field';
  $handler->display->display_options['fields']['field_win_loss']['element_label_colon'] = FALSE;
  /* Field: Date (Weekday) - Group Title */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Date (Weekday) - Group Title';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '<span class="date-left">[field_event_date_1]</span> <span class="win-loss">[field_win_loss]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'weekday',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: HIDDEN: Date (Short) - Group Title */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'HIDDEN: Date (Short) - Group Title';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: REWRITTEN: Time */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'REWRITTEN: Time';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['alter']['text'] = '<span class="athletic-day">[field_event_date]</span><span class="athletic-time">[field_event_date_2]</span>';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: HIDDEN: Content: Opponent */
  $handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
  $handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['ui_name'] = 'HIDDEN: Content: Opponent';
  $handler->display->display_options['fields']['field_opponent']['label'] = '';
  $handler->display->display_options['fields']['field_opponent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent']['alter']['text'] = 'Hartnell vs [field_opponent]';
  $handler->display->display_options['fields']['field_opponent']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Title to vs Opponent */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'REWRITTEN: Title to vs Opponent';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Hartnell vs [field_opponent]';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'team-vs-team';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'HIDDEN: Content: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'HIDDEN: Content: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'REWRITTEN: Location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_location_city], [field_location_state]';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'game-location';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Athletic Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['label'] = '';
  $handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Hartnell score */
  $handler->display->display_options['fields']['field_hartnell_score']['id'] = 'field_hartnell_score';
  $handler->display->display_options['fields']['field_hartnell_score']['table'] = 'field_data_field_hartnell_score';
  $handler->display->display_options['fields']['field_hartnell_score']['field'] = 'field_hartnell_score';
  $handler->display->display_options['fields']['field_hartnell_score']['label'] = 'Panthers';
  $handler->display->display_options['fields']['field_hartnell_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hartnell_score']['empty'] = 'n/a';
  /* Field: Content: Opponent score */
  $handler->display->display_options['fields']['field_opponent_score']['id'] = 'field_opponent_score';
  $handler->display->display_options['fields']['field_opponent_score']['table'] = 'field_data_field_opponent_score';
  $handler->display->display_options['fields']['field_opponent_score']['field'] = 'field_opponent_score';
  $handler->display->display_options['fields']['field_opponent_score']['label'] = 'Opponent';
  $handler->display->display_options['fields']['field_opponent_score']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_opponent_score']['empty'] = 'n/a';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Athletic Team (field_team) */
  $handler->display->display_options['filters']['field_team_tid']['id'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_tid']['field'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['value'] = array(
    76 => '76',
  );
  $handler->display->display_options['filters']['field_team_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_tid']['expose']['operator_id'] = 'field_team_tid_op';
  $handler->display->display_options['filters']['field_team_tid']['expose']['label'] = 'Athletic Team (field_team)';
  $handler->display->display_options['filters']['field_team_tid']['expose']['operator'] = 'field_team_tid_op';
  $handler->display->display_options['filters']['field_team_tid']['expose']['identifier'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_team_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_team_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_tid']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['field_team_tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'Past Athletic Events';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_team_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Athletic Team (field_team)',
    ),
  );

  /* Display: cp-athletic events-upcoming */
  $handler = $view->new_display('panel_pane', 'cp-athletic events-upcoming', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Game Schedules';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'athletic-events-upcoming';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_event_date_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'schedules-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date (Weekday) */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'Content: Event Date (Weekday)';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'weekday',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: HIDDEN: Date (Short) - Group Title */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'HIDDEN: Date (Short) - Group Title';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: REWRITTEN Content: Event Date (Time) */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'REWRITTEN Content: Event Date (Time)';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '<span class="athletic-day">[field_event_date]</span><span class="athletic-time">[field_event_date_1]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field:  HIDDEN: Content: Opponent */
  $handler->display->display_options['fields']['field_opponent']['id'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['table'] = 'field_data_field_opponent';
  $handler->display->display_options['fields']['field_opponent']['field'] = 'field_opponent';
  $handler->display->display_options['fields']['field_opponent']['ui_name'] = ' HIDDEN: Content: Opponent';
  $handler->display->display_options['fields']['field_opponent']['label'] = '';
  $handler->display->display_options['fields']['field_opponent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_opponent']['alter']['text'] = 'Hartnell vs [field_opponent]';
  $handler->display->display_options['fields']['field_opponent']['element_label_colon'] = FALSE;
  /* Field: Hartnell vs Opponent link to content */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Hartnell vs Opponent link to content';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<p class="opponents">Hartnell <br>
 vs<br>
[field_opponent] </p>';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'vs-opponent';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: City */
  $handler->display->display_options['fields']['field_location_city']['id'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['table'] = 'field_data_field_location_city';
  $handler->display->display_options['fields']['field_location_city']['field'] = 'field_location_city';
  $handler->display->display_options['fields']['field_location_city']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_location_city']['ui_name'] = 'HIDDEN: Content: City';
  $handler->display->display_options['fields']['field_location_city']['label'] = '';
  $handler->display->display_options['fields']['field_location_city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_city']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: State */
  $handler->display->display_options['fields']['field_location_state']['id'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['table'] = 'field_data_field_location_state';
  $handler->display->display_options['fields']['field_location_state']['field'] = 'field_location_state';
  $handler->display->display_options['fields']['field_location_state']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['field_location_state']['ui_name'] = 'HIDDEN: Content: State';
  $handler->display->display_options['fields']['field_location_state']['label'] = '';
  $handler->display->display_options['fields']['field_location_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_state']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title']['ui_name'] = 'REWRITTEN: Location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_location_city], [field_location_state]';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'game-location';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  /* Filter criterion: Athletic Team */
  $handler->display->display_options['filters']['field_team_tid_1']['id'] = 'field_team_tid_1';
  $handler->display->display_options['filters']['field_team_tid_1']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_tid_1']['field'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid_1']['ui_name'] = 'Athletic Team';
  $handler->display->display_options['filters']['field_team_tid_1']['value'] = array(
    76 => '76',
  );
  $handler->display->display_options['filters']['field_team_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_tid_1']['expose']['operator_id'] = 'field_team_tid_1_op';
  $handler->display->display_options['filters']['field_team_tid_1']['expose']['label'] = 'Athletic Team (field_team)';
  $handler->display->display_options['filters']['field_team_tid_1']['expose']['operator'] = 'field_team_tid_1_op';
  $handler->display->display_options['filters']['field_team_tid_1']['expose']['identifier'] = 'field_team_tid_1';
  $handler->display->display_options['filters']['field_team_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_team_tid_1']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_team_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_tid_1']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['field_team_tid_1']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'Upcoming Athletic Events';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_team_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Athletic Team (field_team)',
    ),
  );

  /* Display: cp-Events by Audience */
  $handler = $view->new_display('panel_pane', 'cp-Events by Audience', 'panel_pane_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'events-audience';
  $handler->display->display_options['display_description'] = 'Events list content pane, filtered by Audience(s)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<p class="calendar"> <a class="read-more icon-right-open" href="">View the Entire Calendar</a> </p>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Calendar Month */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Calendar Month';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_type'] = 'h6';
  $handler->display->display_options['fields']['field_event_date_1']['element_class'] = 'calendar-month';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'month_abreviated',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['delta_offset'] = '0';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '<div class="date-block">
<h6 class:\'\'day-box">[field_event_date_1]</h6>
<h2 class:\'\'month-box">[field_event_date]</h2>
</div.';
  $handler->display->display_options['fields']['field_event_date']['element_label_class'] = 'calendar-date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'day_of_the_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Calendar Event: Time */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['ui_name'] = 'Calendar Event: Time';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_event_date_2']['element_class'] = 'event-time';
  $handler->display->display_options['fields']['field_event_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'format_type' => 'start_time',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_event_date_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_2']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="event-lock">
<h6 class="event-time">[field_event_date_2]</h6>
<h4 class="feed-title">[title]</h4>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_class'] = 'homepage-event';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Location Name */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Location Name';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'location-name';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Audience (field_audience) */
  $handler->display->display_options['arguments']['field_audience_tid']['id'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['table'] = 'field_data_field_audience';
  $handler->display->display_options['arguments']['field_audience_tid']['field'] = 'field_audience_tid';
  $handler->display->display_options['arguments']['field_audience_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_audience_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_audience_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_audience_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_audience_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_audience_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['vocabularies'] = array(
    'audience' => 'audience',
  );
  $handler->display->display_options['arguments']['field_audience_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_audience_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Event list by audience';
  $handler->display->display_options['pane_description'] = 'Events listing, filtered by audience(s)';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'term_node_tid_depth' => array(
      'type' => 'context',
      'context' => 'entity:node.field_site_section',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Site Section',
    ),
    'field_audience_tid' => array(
      'type' => 'context',
      'context' => 'entity:node.field_audience',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Audience (field_audience)',
    ),
  );
  $export['events'] = $view;

  return $export;
}
