<?php
/**
 * @file
 * faq_functionality.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function faq_functionality_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'faq';
  $view->description = 'FAQ listings';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FAQ';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'View all FAQs';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Ask';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_term',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: FAQ Term */
  $handler->display->display_options['fields']['field_faq_term']['id'] = 'field_faq_term';
  $handler->display->display_options['fields']['field_faq_term']['table'] = 'field_data_field_faq_term';
  $handler->display->display_options['fields']['field_faq_term']['field'] = 'field_faq_term';
  $handler->display->display_options['fields']['field_faq_term']['label'] = '';
  $handler->display->display_options['fields']['field_faq_term']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_faq_term']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_faq_term']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_faq_term']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_faq_term']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['field_faq_term']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_faq_term']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_faq_term']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_faq_term']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_faq_term']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_faq_term']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> </p> <br> <h2> <h3> <h4> <h5> </h2> </h3> </h4> </h5>  <a> </a>';
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;

  /* Display: Block - Random FAQs */
  $handler = $view->new_display('block', 'Block - Random FAQs', 'faq_random');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Random FAQs';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content: Updated/commented date */
  $handler->display->display_options['sorts']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['sorts']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['sorts']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['block_description'] = 'Random FAQs';

  /* Display: FAQ Content pane */
  $handler = $view->new_display('panel_pane', 'FAQ Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faq-content-panel-style white-bg';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_term',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: FAQ Term (field_faq_term) */
  $handler->display->display_options['arguments']['field_faq_term_tid']['id'] = 'field_faq_term_tid';
  $handler->display->display_options['arguments']['field_faq_term_tid']['table'] = 'field_data_field_faq_term';
  $handler->display->display_options['arguments']['field_faq_term_tid']['field'] = 'field_faq_term_tid';
  $handler->display->display_options['arguments']['field_faq_term_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_faq_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_faq_term_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_faq_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_faq_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_faq_term_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_faq_term_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_faq_term_tid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Multi-search computed (field_faq_multi_search_computed) */
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['id'] = 'field_faq_multi_search_computed_value';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['table'] = 'field_data_field_faq_multi_search_computed';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['field'] = 'field_faq_multi_search_computed_value';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['operator_id'] = 'field_faq_multi_search_computed_value_op';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['label'] = 'What\'s your question?';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['operator'] = 'field_faq_multi_search_computed_value_op';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['identifier'] = 'question';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['multiple'] = FALSE;
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
    'field_faq_term_tid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: FAQ Term (field_faq_term)',
    ),
  );

  /* Display: General FAQ Content pane */
  $handler = $view->new_display('panel_pane', 'General FAQ Content pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faq-content-panel-style';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_faq_term',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Multi-search computed (field_faq_multi_search_computed) */
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['id'] = 'field_faq_multi_search_computed_value';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['table'] = 'field_data_field_faq_multi_search_computed';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['field'] = 'field_faq_multi_search_computed_value';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['group'] = 1;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['operator_id'] = 'field_faq_multi_search_computed_value_op';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['label'] = 'What\'s your question?';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['operator'] = 'field_faq_multi_search_computed_value_op';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['identifier'] = 'question';
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_faq_multi_search_computed_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: FAQ Term (field_faq_term) */
  $handler->display->display_options['filters']['field_faq_term_tid']['id'] = 'field_faq_term_tid';
  $handler->display->display_options['filters']['field_faq_term_tid']['table'] = 'field_data_field_faq_term';
  $handler->display->display_options['filters']['field_faq_term_tid']['field'] = 'field_faq_term_tid';
  $handler->display->display_options['filters']['field_faq_term_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_faq_term_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_faq_term_tid']['expose']['operator_id'] = 'field_faq_term_tid_op';
  $handler->display->display_options['filters']['field_faq_term_tid']['expose']['label'] = 'Or search by topic';
  $handler->display->display_options['filters']['field_faq_term_tid']['expose']['operator'] = 'field_faq_term_tid_op';
  $handler->display->display_options['filters']['field_faq_term_tid']['expose']['identifier'] = 'faq_topic';
  $handler->display->display_options['filters']['field_faq_term_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_faq_term_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_faq_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_faq_term_tid']['vocabulary'] = 'lorem_ipsum';
  $handler->display->display_options['filters']['field_faq_term_tid']['error_message'] = 1;
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
      'type' => 'panel',
      'context' => 'terms.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID (with depth)',
    ),
  );
  $export['faq'] = $view;

  $view = new view;
  $view->name = 'faq_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'FAQ Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topical FAQs';
  $handler->display->display_options['css_class'] = 'topical-faq-block-style';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['row_options']['separator'] = ' ';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'lorem_ipsum' => 'lorem_ipsum',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_type'] = 'span';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = 1;
  $handler->display->display_options['fields']['name']['convert_spaces'] = 0;
  $export['faq_terms'] = $view;

  return $export;
}
