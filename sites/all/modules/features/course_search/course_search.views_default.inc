<?php
/**
 * @file
 * course_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function course_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'open_sections';
  $view->human_name = 'Course Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'SEC_ID' => 'SEC_ID',
    'SHORT_TITLE' => 'SHORT_TITLE',
    'SUBJECT' => 'SHORT_TITLE',
    'SEC_NAME' => 'SHORT_TITLE',
    'FACULTY_INFO' => 'SHORT_TITLE',
    'MIN_CRED' => 'SHORT_TITLE',
    'TERM' => 'TERM',
    'LOCATION' => 'TERM',
    'NO_WEEKS' => 'TERM',
    'MEETING_INFO' => 'TERM',
    'OCW_STATUS' => 'OCW_STATUS',
    'LOCAL_AVAIL' => 'OCW_STATUS',
    'LOCAL_USED' => 'OCW_STATUS',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'SEC_ID' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'SHORT_TITLE' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'SUBJECT' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'SEC_NAME' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'FACULTY_INFO' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'MIN_CRED' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'TERM' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'LOCATION' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'NO_WEEKS' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'MEETING_INFO' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'OCW_STATUS' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'LOCAL_AVAIL' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'LOCAL_USED' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Open Sections: SEC_ID */
  $handler->display->display_options['fields']['SEC_ID']['id'] = 'SEC_ID';
  $handler->display->display_options['fields']['SEC_ID']['table'] = 'open_sections';
  $handler->display->display_options['fields']['SEC_ID']['field'] = 'SEC_ID';
  $handler->display->display_options['fields']['SEC_ID']['exclude'] = TRUE;
  /* Field: SHORT_TITLE */
  $handler->display->display_options['fields']['SHORT_TITLE']['id'] = 'SHORT_TITLE';
  $handler->display->display_options['fields']['SHORT_TITLE']['table'] = 'open_sections';
  $handler->display->display_options['fields']['SHORT_TITLE']['field'] = 'SHORT_TITLE';
  $handler->display->display_options['fields']['SHORT_TITLE']['ui_name'] = 'SHORT_TITLE';
  $handler->display->display_options['fields']['SHORT_TITLE']['label'] = 'Section Information';
  $handler->display->display_options['fields']['SHORT_TITLE']['alter']['text'] = '<strong>';
  $handler->display->display_options['fields']['SHORT_TITLE']['element_type'] = 'strong';
  $handler->display->display_options['fields']['SHORT_TITLE']['element_label_colon'] = FALSE;
  /* Field: SUBJECT */
  $handler->display->display_options['fields']['SUBJECT']['id'] = 'SUBJECT';
  $handler->display->display_options['fields']['SUBJECT']['table'] = 'open_sections';
  $handler->display->display_options['fields']['SUBJECT']['field'] = 'SUBJECT';
  $handler->display->display_options['fields']['SUBJECT']['ui_name'] = 'SUBJECT';
  $handler->display->display_options['fields']['SUBJECT']['label'] = '';
  $handler->display->display_options['fields']['SUBJECT']['element_label_colon'] = FALSE;
  /* Field: SEC_NAME (Hidden) */
  $handler->display->display_options['fields']['SEC_NAME']['id'] = 'SEC_NAME';
  $handler->display->display_options['fields']['SEC_NAME']['table'] = 'open_sections';
  $handler->display->display_options['fields']['SEC_NAME']['field'] = 'SEC_NAME';
  $handler->display->display_options['fields']['SEC_NAME']['ui_name'] = 'SEC_NAME (Hidden)';
  $handler->display->display_options['fields']['SEC_NAME']['label'] = '';
  $handler->display->display_options['fields']['SEC_NAME']['exclude'] = TRUE;
  $handler->display->display_options['fields']['SEC_NAME']['element_label_colon'] = FALSE;
  /* Field: SEC_NAME + FACULTY INFO (Rewritten) */
  $handler->display->display_options['fields']['FACULTY_INFO']['id'] = 'FACULTY_INFO';
  $handler->display->display_options['fields']['FACULTY_INFO']['table'] = 'open_sections';
  $handler->display->display_options['fields']['FACULTY_INFO']['field'] = 'FACULTY_INFO';
  $handler->display->display_options['fields']['FACULTY_INFO']['ui_name'] = 'SEC_NAME + FACULTY INFO (Rewritten)';
  $handler->display->display_options['fields']['FACULTY_INFO']['label'] = '';
  $handler->display->display_options['fields']['FACULTY_INFO']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['FACULTY_INFO']['alter']['text'] = '[SEC_NAME] - [FACULTY_INFO]';
  $handler->display->display_options['fields']['FACULTY_INFO']['element_label_colon'] = FALSE;
  /* Field: MIN_CRED (Rewritten) */
  $handler->display->display_options['fields']['MIN_CRED']['id'] = 'MIN_CRED';
  $handler->display->display_options['fields']['MIN_CRED']['table'] = 'open_sections';
  $handler->display->display_options['fields']['MIN_CRED']['field'] = 'MIN_CRED';
  $handler->display->display_options['fields']['MIN_CRED']['ui_name'] = 'MIN_CRED (Rewritten)';
  $handler->display->display_options['fields']['MIN_CRED']['label'] = '';
  $handler->display->display_options['fields']['MIN_CRED']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['MIN_CRED']['alter']['text'] = 'Credits: [MIN_CRED]';
  $handler->display->display_options['fields']['MIN_CRED']['element_label_colon'] = FALSE;
  /* Field: LOCATION (Hidden) */
  $handler->display->display_options['fields']['LOCATION_1']['id'] = 'LOCATION_1';
  $handler->display->display_options['fields']['LOCATION_1']['table'] = 'open_sections';
  $handler->display->display_options['fields']['LOCATION_1']['field'] = 'LOCATION';
  $handler->display->display_options['fields']['LOCATION_1']['ui_name'] = 'LOCATION (Hidden)';
  $handler->display->display_options['fields']['LOCATION_1']['label'] = '';
  $handler->display->display_options['fields']['LOCATION_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['LOCATION_1']['element_label_colon'] = FALSE;
  /* Field: TERM + LOCATION (Rewritten) */
  $handler->display->display_options['fields']['TERM']['id'] = 'TERM';
  $handler->display->display_options['fields']['TERM']['table'] = 'open_sections';
  $handler->display->display_options['fields']['TERM']['field'] = 'TERM';
  $handler->display->display_options['fields']['TERM']['ui_name'] = 'TERM + LOCATION (Rewritten)';
  $handler->display->display_options['fields']['TERM']['label'] = 'Location & Times';
  $handler->display->display_options['fields']['TERM']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['TERM']['alter']['text'] = '[TERM] - [LOCATION_1]';
  $handler->display->display_options['fields']['TERM']['element_type'] = 'strong';
  $handler->display->display_options['fields']['TERM']['element_label_colon'] = FALSE;
  /* Field: NO_WEEKS (Rewritten) */
  $handler->display->display_options['fields']['NO_WEEKS']['id'] = 'NO_WEEKS';
  $handler->display->display_options['fields']['NO_WEEKS']['table'] = 'open_sections';
  $handler->display->display_options['fields']['NO_WEEKS']['field'] = 'NO_WEEKS';
  $handler->display->display_options['fields']['NO_WEEKS']['ui_name'] = 'NO_WEEKS (Rewritten)';
  $handler->display->display_options['fields']['NO_WEEKS']['label'] = '';
  $handler->display->display_options['fields']['NO_WEEKS']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['NO_WEEKS']['alter']['text'] = '([NO_WEEKS] Weeks)';
  $handler->display->display_options['fields']['NO_WEEKS']['element_label_colon'] = FALSE;
  /* Field: MEETING_INFO */
  $handler->display->display_options['fields']['MEETING_INFO']['id'] = 'MEETING_INFO';
  $handler->display->display_options['fields']['MEETING_INFO']['table'] = 'open_sections';
  $handler->display->display_options['fields']['MEETING_INFO']['field'] = 'MEETING_INFO';
  $handler->display->display_options['fields']['MEETING_INFO']['ui_name'] = 'MEETING_INFO';
  $handler->display->display_options['fields']['MEETING_INFO']['label'] = '';
  $handler->display->display_options['fields']['MEETING_INFO']['element_label_colon'] = FALSE;
  /* Field: OCW_STATUS (Rewritten) */
  $handler->display->display_options['fields']['OCW_STATUS']['id'] = 'OCW_STATUS';
  $handler->display->display_options['fields']['OCW_STATUS']['table'] = 'open_sections';
  $handler->display->display_options['fields']['OCW_STATUS']['field'] = 'OCW_STATUS';
  $handler->display->display_options['fields']['OCW_STATUS']['ui_name'] = 'OCW_STATUS (Rewritten)';
  $handler->display->display_options['fields']['OCW_STATUS']['label'] = 'Seats and Capacity';
  $handler->display->display_options['fields']['OCW_STATUS']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['OCW_STATUS']['alter']['text'] = 'Status: <strong>[OCW_STATUS]</strong>';
  $handler->display->display_options['fields']['OCW_STATUS']['element_label_colon'] = FALSE;
  /* Field: LOCAL_AVAIL (Rewritten) */
  $handler->display->display_options['fields']['LOCAL_AVAIL']['id'] = 'LOCAL_AVAIL';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['table'] = 'open_sections';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['field'] = 'LOCAL_AVAIL';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['ui_name'] = 'LOCAL_AVAIL (Rewritten)';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['label'] = '';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['LOCAL_AVAIL']['alter']['text'] = 'Seats Available: [LOCAL_AVAIL] ';
  $handler->display->display_options['fields']['LOCAL_AVAIL']['element_label_colon'] = FALSE;
  /* Field: LOCAL_USED (Rewritten) */
  $handler->display->display_options['fields']['LOCAL_USED']['id'] = 'LOCAL_USED';
  $handler->display->display_options['fields']['LOCAL_USED']['table'] = 'open_sections';
  $handler->display->display_options['fields']['LOCAL_USED']['field'] = 'LOCAL_USED';
  $handler->display->display_options['fields']['LOCAL_USED']['ui_name'] = 'LOCAL_USED (Rewritten)';
  $handler->display->display_options['fields']['LOCAL_USED']['label'] = '';
  $handler->display->display_options['fields']['LOCAL_USED']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['LOCAL_USED']['alter']['text'] = 'Seats Taken: [LOCAL_USED]';
  $handler->display->display_options['fields']['LOCAL_USED']['element_label_colon'] = FALSE;
  /* Filter criterion: Open Sections: COURSE_NAME */
  $handler->display->display_options['filters']['COURSE_NAME']['id'] = 'COURSE_NAME';
  $handler->display->display_options['filters']['COURSE_NAME']['table'] = 'open_sections';
  $handler->display->display_options['filters']['COURSE_NAME']['field'] = 'COURSE_NAME';
  $handler->display->display_options['filters']['COURSE_NAME']['operator'] = 'contains';
  $handler->display->display_options['filters']['COURSE_NAME']['exposed'] = TRUE;
  $handler->display->display_options['filters']['COURSE_NAME']['expose']['operator_id'] = 'COURSE_NAME_op';
  $handler->display->display_options['filters']['COURSE_NAME']['expose']['label'] = 'Course Name';
  $handler->display->display_options['filters']['COURSE_NAME']['expose']['operator'] = 'COURSE_NAME_op';
  $handler->display->display_options['filters']['COURSE_NAME']['expose']['identifier'] = 'COURSE_NAME';
  $handler->display->display_options['filters']['COURSE_NAME']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Open Sections: LOCATION */
  $handler->display->display_options['filters']['LOCATION']['id'] = 'LOCATION';
  $handler->display->display_options['filters']['LOCATION']['table'] = 'open_sections';
  $handler->display->display_options['filters']['LOCATION']['field'] = 'LOCATION';
  $handler->display->display_options['filters']['LOCATION']['operator'] = 'contains';
  $handler->display->display_options['filters']['LOCATION']['exposed'] = TRUE;
  $handler->display->display_options['filters']['LOCATION']['expose']['operator_id'] = 'LOCATION_op';
  $handler->display->display_options['filters']['LOCATION']['expose']['label'] = 'Location';
  $handler->display->display_options['filters']['LOCATION']['expose']['operator'] = 'LOCATION_op';
  $handler->display->display_options['filters']['LOCATION']['expose']['identifier'] = 'LOCATION';
  $handler->display->display_options['filters']['LOCATION']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Open Sections: SHORT_TITLE */
  $handler->display->display_options['filters']['SHORT_TITLE']['id'] = 'SHORT_TITLE';
  $handler->display->display_options['filters']['SHORT_TITLE']['table'] = 'open_sections';
  $handler->display->display_options['filters']['SHORT_TITLE']['field'] = 'SHORT_TITLE';
  $handler->display->display_options['filters']['SHORT_TITLE']['operator'] = 'contains';
  $handler->display->display_options['filters']['SHORT_TITLE']['exposed'] = TRUE;
  $handler->display->display_options['filters']['SHORT_TITLE']['expose']['operator_id'] = 'SHORT_TITLE_op';
  $handler->display->display_options['filters']['SHORT_TITLE']['expose']['label'] = 'Short Title';
  $handler->display->display_options['filters']['SHORT_TITLE']['expose']['operator'] = 'SHORT_TITLE_op';
  $handler->display->display_options['filters']['SHORT_TITLE']['expose']['identifier'] = 'SHORT_TITLE';
  $handler->display->display_options['filters']['SHORT_TITLE']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Open Sections: SUBJECT */
  $handler->display->display_options['filters']['SUBJECT']['id'] = 'SUBJECT';
  $handler->display->display_options['filters']['SUBJECT']['table'] = 'open_sections';
  $handler->display->display_options['filters']['SUBJECT']['field'] = 'SUBJECT';
  $handler->display->display_options['filters']['SUBJECT']['operator'] = 'contains';
  $handler->display->display_options['filters']['SUBJECT']['exposed'] = TRUE;
  $handler->display->display_options['filters']['SUBJECT']['expose']['operator_id'] = 'SUBJECT_op';
  $handler->display->display_options['filters']['SUBJECT']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['SUBJECT']['expose']['operator'] = 'SUBJECT_op';
  $handler->display->display_options['filters']['SUBJECT']['expose']['identifier'] = 'SUBJECT';
  $handler->display->display_options['filters']['SUBJECT']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
  );
  /* Filter criterion: Open Sections: TERM */
  $handler->display->display_options['filters']['TERM']['id'] = 'TERM';
  $handler->display->display_options['filters']['TERM']['table'] = 'open_sections';
  $handler->display->display_options['filters']['TERM']['field'] = 'TERM';
  $handler->display->display_options['filters']['TERM']['operator'] = 'contains';
  $handler->display->display_options['filters']['TERM']['exposed'] = TRUE;
  $handler->display->display_options['filters']['TERM']['expose']['operator_id'] = 'TERM_op';
  $handler->display->display_options['filters']['TERM']['expose']['label'] = 'Term';
  $handler->display->display_options['filters']['TERM']['expose']['operator'] = 'TERM_op';
  $handler->display->display_options['filters']['TERM']['expose']['identifier'] = 'TERM';
  $handler->display->display_options['filters']['TERM']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    10 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['course_search'] = $view;

  return $export;
}
