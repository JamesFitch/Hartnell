<?php
/**
 * @file
 * ct_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'areas_of_expertise';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Areas of Expertise';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'directory?expertise=[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'expertise' => 'expertise',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_expertise');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['areas_of_expertise'] = $view;

  $view = new view();
  $view->name = 'athletics';
  $view->description = 'Views related to athletic teams and players.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Athletics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Player Profiles';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Player number */
  $handler->display->display_options['fields']['field_player_number']['id'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['table'] = 'field_data_field_player_number';
  $handler->display->display_options['fields']['field_player_number']['field'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['label'] = '';
  $handler->display->display_options['fields']['field_player_number']['element_label_colon'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = '';
  $handler->display->display_options['fields']['field_person_namefirst']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = '';
  $handler->display->display_options['fields']['field_person_namelast']['element_label_colon'] = FALSE;
  /* Field: Content: Player position */
  $handler->display->display_options['fields']['field_player_position']['id'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['table'] = 'field_data_field_player_position';
  $handler->display->display_options['fields']['field_player_position']['field'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['label'] = '';
  $handler->display->display_options['fields']['field_player_position']['element_label_colon'] = FALSE;
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Search by sport';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
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
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Player List */
  $handler = $view->new_display('panel_pane', 'Player List', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'player-list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'players-info-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Player number */
  $handler->display->display_options['fields']['field_player_number']['id'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['table'] = 'field_data_field_player_number';
  $handler->display->display_options['fields']['field_player_number']['field'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['label'] = '';
  $handler->display->display_options['fields']['field_player_number']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_player_number']['element_class'] = 'player-number';
  $handler->display->display_options['fields']['field_player_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'player-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = '';
  $handler->display->display_options['fields']['field_person_namefirst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namefirst']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = '';
  $handler->display->display_options['fields']['field_person_namelast']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['text'] = '[field_person_namefirst] [field_person_namelast]';
  $handler->display->display_options['fields']['field_person_namelast']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_person_namelast']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_person_namelast']['element_class'] = 'player-name';
  $handler->display->display_options['fields']['field_person_namelast']['element_label_colon'] = FALSE;
  /* Field: Content: Player position */
  $handler->display->display_options['fields']['field_player_position']['id'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['table'] = 'field_data_field_player_position';
  $handler->display->display_options['fields']['field_player_position']['field'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['label'] = '';
  $handler->display->display_options['fields']['field_player_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_person_namelast) */
  $handler->display->display_options['sorts']['field_person_namelast_value']['id'] = 'field_person_namelast_value';
  $handler->display->display_options['sorts']['field_person_namelast_value']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['sorts']['field_person_namelast_value']['field'] = 'field_person_namelast_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Search by sport';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
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
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'person_type';

  /* Display: Coaching Staff */
  $handler = $view->new_display('panel_pane', 'Coaching Staff', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coaching Staff';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'coaching-staff';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'coach-sport-row clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Search for Faculty';
  $handler->display->display_options['footer']['area']['content'] = '<a class="views-more-link" href ="../welcome-faculty-and-staff-directory"> search All Faculty </a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Headshot (Resized to maximum of 200x250) */
  $handler->display->display_options['fields']['field_person_headshot']['id'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['table'] = 'field_data_field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['field'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot']['settings'] = array(
    'image_style' => 'athletic_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'coach-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = '';
  $handler->display->display_options['fields']['field_person_namefirst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namefirst']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = '';
  $handler->display->display_options['fields']['field_person_namelast']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['text'] = '[field_person_namefirst] [field_person_namelast]';
  $handler->display->display_options['fields']['field_person_namelast']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_person_namelast']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_person_namelast']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_person_namelast']['element_class'] = 'coach-title';
  $handler->display->display_options['fields']['field_person_namelast']['element_label_colon'] = FALSE;
  /* Field: Content: Role or Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Search by division';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
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
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Person Type (field_type_of_person) */
  $handler->display->display_options['filters']['field_type_of_person_tid']['id'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['table'] = 'field_data_field_type_of_person';
  $handler->display->display_options['filters']['field_type_of_person_tid']['field'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['value'] = array(
    91 => '91',
  );
  $handler->display->display_options['filters']['field_type_of_person_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_person_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_type_of_person_tid']['hierarchy'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Coaching Staff by Sport */
  $handler = $view->new_display('panel_pane', 'Coaching Staff by Sport', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Coaching Staff';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'coaching-staff ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'coach-sport-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No information (404)';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This athletic team has no current coaches, please check back later.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_AthleticTeams ';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'sport' => 'sport',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'news_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Headshot (Resized to maximum of 200x250) */
  $handler->display->display_options['fields']['field_person_headshot']['id'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['table'] = 'field_data_field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['field'] = 'field_person_headshot';
  $handler->display->display_options['fields']['field_person_headshot']['label'] = '';
  $handler->display->display_options['fields']['field_person_headshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_headshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_person_headshot']['settings'] = array(
    'image_style' => 'athletic_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'coach-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = '';
  $handler->display->display_options['fields']['field_person_namefirst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namefirst']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = '';
  $handler->display->display_options['fields']['field_person_namelast']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['text'] = '[field_person_namefirst] [field_person_namelast]';
  $handler->display->display_options['fields']['field_person_namelast']['element_label_colon'] = FALSE;
  /* Field: Content: Role or Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 Coaches';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_type_of_person) */
  $handler->display->display_options['filters']['field_type_of_person_tid']['id'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['table'] = 'field_data_field_type_of_person';
  $handler->display->display_options['filters']['field_type_of_person_tid']['field'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['value'] = array(
    91 => '91',
  );
  $handler->display->display_options['filters']['field_type_of_person_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_of_person_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_person_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_type_of_person_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Athletic Team (field_team) */
  $handler->display->display_options['filters']['field_team_tid']['id'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_tid']['field'] = 'field_team_tid';
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
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

  /* Display: Athlete Roster by Sport */
  $handler = $view->new_display('panel_pane', 'Athlete Roster by Sport', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Roster';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'player-roster';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_player_number' => 'field_player_number',
    'title' => 'title',
    'field_player_position' => 'field_player_position',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No information (404)';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This years roster is in development, check back soon...';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_AthleticTeams ';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'sport' => 'sport',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'news_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Player number */
  $handler->display->display_options['fields']['field_player_number']['id'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['table'] = 'field_data_field_player_number';
  $handler->display->display_options['fields']['field_player_number']['field'] = 'field_player_number';
  $handler->display->display_options['fields']['field_player_number']['label'] = '';
  $handler->display->display_options['fields']['field_player_number']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: First (see Title) */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['ui_name'] = 'HIDDEN: Content: First (see Title)';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = '';
  $handler->display->display_options['fields']['field_person_namefirst']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namefirst']['element_label_colon'] = FALSE;
  /* Field: HIDDEN: Content: First (see Title) */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['ui_name'] = 'HIDDEN: Content: First (see Title)';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = '';
  $handler->display->display_options['fields']['field_person_namelast']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['text'] = '[field_person_namefirst] [field_person_namelast]';
  $handler->display->display_options['fields']['field_person_namelast']['element_label_colon'] = FALSE;
  /* Field: REWRITTEN: Content: Title to Full name */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'REWRITTEN: Content: Title to Full name';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_person_namefirst] [field_person_namelast]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Player position */
  $handler->display->display_options['fields']['field_player_position']['id'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['table'] = 'field_data_field_player_position';
  $handler->display->display_options['fields']['field_player_position']['field'] = 'field_player_position';
  $handler->display->display_options['fields']['field_player_position']['label'] = '';
  $handler->display->display_options['fields']['field_player_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1 Roster';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Person Type (field_type_of_person) */
  $handler->display->display_options['filters']['field_type_of_person_tid']['id'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['table'] = 'field_data_field_type_of_person';
  $handler->display->display_options['filters']['field_type_of_person_tid']['field'] = 'field_type_of_person_tid';
  $handler->display->display_options['filters']['field_type_of_person_tid']['value'] = array(
    90 => '90',
  );
  $handler->display->display_options['filters']['field_type_of_person_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_type_of_person_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_person_tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['field_type_of_person_tid']['hierarchy'] = 1;
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
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
  $export['athletics'] = $view;

  $view = new view();
  $view->name = 'contact_person_reference';
  $view->description = 'Lists the referenced people, based on content revision';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = ' Contact person reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Who to contact';
  $handler->display->display_options['css_class'] = 'person-reference';
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
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reference_person_target_id']['id'] = 'field_reference_person_target_id';
  $handler->display->display_options['relationships']['field_reference_person_target_id']['table'] = 'field_revision_field_reference_person';
  $handler->display->display_options['relationships']['field_reference_person_target_id']['field'] = 'field_reference_person_target_id';
  $handler->display->display_options['relationships']['field_reference_person_target_id']['label'] = 'Referenced person';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_location_target_id']['id'] = 'field_person_location_target_id';
  $handler->display->display_options['relationships']['field_person_location_target_id']['table'] = 'field_data_field_person_location';
  $handler->display->display_options['relationships']['field_person_location_target_id']['field'] = 'field_person_location_target_id';
  $handler->display->display_options['relationships']['field_person_location_target_id']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['relationships']['field_person_location_target_id']['label'] = 'Referenced location';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Role or Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_person_title']['element_class'] = 'subhead tight';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_title']['hide_empty'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['field_person_email']['label'] = '';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['field_person_phone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_person_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_person_phone']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_person_phone']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_person_phone']['hide_empty'] = TRUE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_person_location']['id'] = 'field_person_location';
  $handler->display->display_options['fields']['field_person_location']['table'] = 'field_data_field_person_location';
  $handler->display->display_options['fields']['field_person_location']['field'] = 'field_person_location';
  $handler->display->display_options['fields']['field_person_location']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['field_person_location']['label'] = '';
  $handler->display->display_options['fields']['field_person_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_location']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Office */
  $handler->display->display_options['fields']['field_office']['id'] = 'field_office';
  $handler->display->display_options['fields']['field_office']['table'] = 'field_data_field_office';
  $handler->display->display_options['fields']['field_office']['field'] = 'field_office';
  $handler->display->display_options['fields']['field_office']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['fields']['field_office']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_office']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_office']['element_label_class'] = 'label';
  $handler->display->display_options['fields']['field_office']['hide_empty'] = TRUE;
  /* Field: Content: Building Name */
  $handler->display->display_options['fields']['field_location_address']['id'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['table'] = 'field_data_field_location_address';
  $handler->display->display_options['fields']['field_location_address']['field'] = 'field_location_address';
  $handler->display->display_options['fields']['field_location_address']['relationship'] = 'field_person_location_target_id';
  $handler->display->display_options['fields']['field_location_address']['label'] = '';
  $handler->display->display_options['fields']['field_location_address']['element_label_colon'] = FALSE;
  /* Contextual filter: Content revision: Vid */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'node_revision';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['vid']['title'] = 'Who to contact';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['vid']['validate']['type'] = 'numeric';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['relationship'] = 'field_reference_person_target_id';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_reference_person_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );

  /* Display: Contact Person - Content pane (revision) */
  $handler = $view->new_display('panel_pane', 'Contact Person - Content pane (revision)', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Displays a list of the contact people, based on revision';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Contact Person';
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
  $export['contact_person_reference'] = $view;

  $view = new view();
  $view->name = 'entity_reference_person';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity Reference Person';
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
    'person' => 'person',
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
    0 => 'node:field_reference_person:event',
    1 => 'node:field_reference_person:flexpage',
  );
  $export['entity_reference_person'] = $view;

  $view = new view();
  $view->name = 'people_directory';
  $view->description = 'faculty_and_staff_directory';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faculty and Staff Directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Welcome to the Faculty and Staff Directory';
  $handler->display->display_options['css_class'] = 'staff-directory view-people-directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '18';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_person_namefirst' => 'field_person_namefirst',
    'field_person_namelast' => 'field_person_namelast',
    'field_person_phone' => 'field_person_phone',
    'field_person_title' => 'field_person_title',
    'field_academic_area_or_major' => 'field_academic_area_or_major',
    'field_person_location' => 'field_person_location',
    'field_person_email' => 'field_person_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_namefirst' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_namelast' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_area_or_major' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'path',
    'hide' => array(
      'path' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_person_namefirst' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_person_namelast' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_person_phone' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_person_title' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_academic_area_or_major' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_person_location' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'field_person_email' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No people or departments match your search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Path to Node';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_person_namefirst']['id'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['table'] = 'field_data_field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['field'] = 'field_person_namefirst';
  $handler->display->display_options['fields']['field_person_namefirst']['label'] = 'First Name';
  $handler->display->display_options['fields']['field_person_namefirst']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_namefirst']['alter']['text'] = '<a href="[path]"> [field_person_namefirst] </a>';
  $handler->display->display_options['fields']['field_person_namefirst']['type'] = 'text_plain';
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_person_namelast']['id'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['table'] = 'field_data_field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['field'] = 'field_person_namelast';
  $handler->display->display_options['fields']['field_person_namelast']['label'] = 'Last Name';
  $handler->display->display_options['fields']['field_person_namelast']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_person_namelast']['alter']['text'] = '<a href="[path]"> [field_person_namelast] </a>';
  /* Field: Content: Phone number */
  $handler->display->display_options['fields']['field_person_phone']['id'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['table'] = 'field_data_field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['field'] = 'field_person_phone';
  $handler->display->display_options['fields']['field_person_phone']['label'] = 'Ext';
  $handler->display->display_options['fields']['field_person_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Role or Job Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = 'Position';
  $handler->display->display_options['fields']['field_person_title']['type'] = 'text_plain';
  /* Field: Field: Academic Area or Major */
  $handler->display->display_options['fields']['field_academic_area_or_major']['id'] = 'field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['table'] = 'field_data_field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['field'] = 'field_academic_area_or_major';
  $handler->display->display_options['fields']['field_academic_area_or_major']['label'] = 'Area';
  $handler->display->display_options['fields']['field_academic_area_or_major']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_person_location']['id'] = 'field_person_location';
  $handler->display->display_options['fields']['field_person_location']['table'] = 'field_data_field_person_location';
  $handler->display->display_options['fields']['field_person_location']['field'] = 'field_person_location';
  $handler->display->display_options['fields']['field_person_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_person_location']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_person_email']['id'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['table'] = 'field_data_field_person_email';
  $handler->display->display_options['fields']['field_person_email']['field'] = 'field_person_email';
  $handler->display->display_options['fields']['field_person_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'person' => 'person',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    93 => '93',
    97 => '97',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'person_type';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by their first or last name:';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Role or Job Title (field_person_title) */
  $handler->display->display_options['filters']['field_person_title_value']['id'] = 'field_person_title_value';
  $handler->display->display_options['filters']['field_person_title_value']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['filters']['field_person_title_value']['field'] = 'field_person_title_value';
  $handler->display->display_options['filters']['field_person_title_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_person_title_value']['group'] = 1;
  $handler->display->display_options['filters']['field_person_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_title_value']['expose']['operator_id'] = 'field_person_title_value_op';
  $handler->display->display_options['filters']['field_person_title_value']['expose']['label'] = 'Search by Position:';
  $handler->display->display_options['filters']['field_person_title_value']['expose']['operator'] = 'field_person_title_value_op';
  $handler->display->display_options['filters']['field_person_title_value']['expose']['identifier'] = 'field_person_title_value';
  $handler->display->display_options['filters']['field_person_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Location (field_person_location) */
  $handler->display->display_options['filters']['field_person_location_target_id']['id'] = 'field_person_location_target_id';
  $handler->display->display_options['filters']['field_person_location_target_id']['table'] = 'field_data_field_person_location';
  $handler->display->display_options['filters']['field_person_location_target_id']['field'] = 'field_person_location_target_id';
  $handler->display->display_options['filters']['field_person_location_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_person_location_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_person_location_target_id']['expose']['operator_id'] = 'field_person_location_target_id_op';
  $handler->display->display_options['filters']['field_person_location_target_id']['expose']['label'] = 'Search by Location:';
  $handler->display->display_options['filters']['field_person_location_target_id']['expose']['operator'] = 'field_person_location_target_id_op';
  $handler->display->display_options['filters']['field_person_location_target_id']['expose']['identifier'] = 'field_person_location_target_id';
  $handler->display->display_options['filters']['field_person_location_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = 1;
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Search by Area:';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'academic_subject';
  $handler->display->display_options['filters']['tid_1']['hierarchy'] = 1;

  /* Display: Faculty and Staff Directory */
  $handler = $view->new_display('panel_pane', 'Faculty and Staff Directory', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_person_namefirst' => 'field_person_namefirst',
    'field_person_namelast' => 'field_person_namelast',
    'field_person_phone' => 'field_person_phone',
    'field_person_title' => 'field_person_title',
    'field_academic_area_or_major' => 'field_academic_area_or_major',
    'field_person_location' => 'field_person_location',
    'field_person_email' => 'field_person_email',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_namefirst' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_namelast' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_area_or_major' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_email' => array(
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
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['people_directory'] = $view;

  return $export;
}
