<?php
/**
 * @file
 * ct_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ct_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['css_class'] = 'pR-page athletic-news ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-view-row';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results Message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, we couldn\'t find any matching content.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Emergency */
  $handler->display->display_options['fields']['field_emergency']['id'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['table'] = 'field_data_field_emergency';
  $handler->display->display_options['fields']['field_emergency']['field'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['label'] = '';
  $handler->display->display_options['fields']['field_emergency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['text'] = '<strong>Alert: </strong>';
  $handler->display->display_options['fields']['field_emergency']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_emergency][body]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a><strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
  /* Sort criterion: Content: Emergency (field_emergency) */
  $handler->display->display_options['sorts']['field_emergency_value']['id'] = 'field_emergency_value';
  $handler->display->display_options['sorts']['field_emergency_value']['table'] = 'field_data_field_emergency';
  $handler->display->display_options['sorts']['field_emergency_value']['field'] = 'field_emergency_value';
  $handler->display->display_options['sorts']['field_emergency_value']['order'] = 'DESC';
  /* Sort criterion: Content: Publish Date (field_news_date) */
  $handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'news';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link icon-right-open" href="/news">Read all news</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
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
      'label' => 'Audience',
    ),
  );

  /* Display: News: Home */
  $handler = $view->new_display('panel_pane', 'News: Home', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'In The News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'news-home';
  $handler->display->display_options['display_description'] = 'Homepage News';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'news_slide';
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
    'field_news_hero' => 0,
    'title' => 0,
    'field_news_date' => 0,
    'path' => 0,
    'body' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['fields'] = array(
    'field_news_hero' => 0,
    'title' => 0,
    'field_news_date' => 0,
    'path' => 0,
    'body' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'field_news_hero' => 0,
    'title' => 0,
    'field_news_date' => 0,
    'path' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['hide_on_single_slide'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['fields'] = array(
    'field_news_hero' => 0,
    'title' => 0,
    'field_news_date' => 0,
    'path' => 0,
    'body' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['display_delay'] = '850';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_xtra_overlay']['pause_after_mouse_move'] = '2000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '750';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_when_hidden_type'] = 'horizontal';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['amount_allowed_visible'] = '50%';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Hero */
  $handler->display->display_options['fields']['field_news_hero']['id'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['table'] = 'field_data_field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['field'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['label'] = '';
  $handler->display->display_options['fields']['field_news_hero']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_hero']['element_class'] = 'news-slide-image';
  $handler->display->display_options['fields']['field_news_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_hero']['settings'] = array(
    'image_style' => 'in_the_news_slideshow_hartnell',
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
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_type'] = 'div';
  $handler->display->display_options['fields']['counter']['element_class'] = 'numeric-pager';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
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
      'label' => 'Audience',
    ),
  );

  /* Display: Latest News - All */
  $handler = $view->new_display('panel_pane', 'Latest News - All', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['display_description'] = 'This displays all of the latest news item, with no site section or audience filter';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link icon-right-open"  href="/news">Read all news</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: All news page (panel pane) */
  $handler = $view->new_display('panel_pane', 'All news page (panel pane)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'all-news-page';
  $handler->display->display_options['display_description'] = 'This displays all of the latest news item for the full page view';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_label_class'] = 'field-label-inline ';
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Emergency */
  $handler->display->display_options['fields']['field_emergency']['id'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['table'] = 'field_data_field_emergency';
  $handler->display->display_options['fields']['field_emergency']['field'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['label'] = '';
  $handler->display->display_options['fields']['field_emergency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['text'] = '<strong>Alert: </strong>';
  $handler->display->display_options['fields']['field_emergency']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_emergency][body]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a><strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Title:';
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
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator_id'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['label'] = 'Search by Type of News ';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['identifier'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
  /* Filter criterion: Content: Athletic Team (field_team) */
  $handler->display->display_options['filters']['field_team_tid']['id'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_tid']['field'] = 'field_team_tid';
  $handler->display->display_options['filters']['field_team_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_tid']['expose']['operator_id'] = 'field_team_tid_op';
  $handler->display->display_options['filters']['field_team_tid']['expose']['label'] = 'Search by Team';
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
  $handler->display->display_options['filters']['field_team_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_tid']['vocabulary'] = 'sport';
  $handler->display->display_options['pane_title'] = 'All news page (panel pane)';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: News: Configurable Audience */
  $handler = $view->new_display('panel_pane', 'News: Configurable Audience', 'panel_pane_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['display_description'] = 'Panel-configurable display for News items';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="more-link icon-right-open" href="/news">Read all news</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_NewsAthletics';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Hero */
  $handler->display->display_options['fields']['field_news_hero']['id'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['table'] = 'field_data_field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['field'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['label'] = '';
  $handler->display->display_options['fields']['field_news_hero']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_hero']['element_class'] = 'left-thumbnail';
  $handler->display->display_options['fields']['field_news_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_hero']['settings'] = array(
    'image_style' => 'athletic_news_feed_hartnell',
    'image_link' => 'content',
  );
  /* Field: Content: Emergency */
  $handler->display->display_options['fields']['field_emergency']['id'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['table'] = 'field_data_field_emergency';
  $handler->display->display_options['fields']['field_emergency']['field'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['label'] = '';
  $handler->display->display_options['fields']['field_emergency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['text'] = '<strong>Alert: </strong>';
  $handler->display->display_options['fields']['field_emergency']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_emergency][title]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '325';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: News Type */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['ui_name'] = 'News Type';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    85 => '85',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator_id'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['label'] = 'Type of News (field_type_of_news)';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['identifier'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
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
  $handler->display->display_options['filters']['field_team_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_team_tid']['vocabulary'] = 'sport';
  $handler->display->display_options['filters']['field_team_tid']['hierarchy'] = 1;
  $handler->display->display_options['pane_title'] = 'News listing by type';
  $handler->display->display_options['pane_description'] = 'Lists News items filtered by the News Type field.';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
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
      'label' => 'Audience',
    ),
  );

  /* Display: News: Faculty QuickTab */
  $handler = $view->new_display('panel_pane', 'News: Faculty QuickTab', 'panel_pane_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Hard-coded News listing for display in quick_tab';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link icon-right-open" href="/news">Read all Hartnell news</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_NewsAthletics';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Hero */
  $handler->display->display_options['fields']['field_news_hero']['id'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['table'] = 'field_data_field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['field'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['label'] = '';
  $handler->display->display_options['fields']['field_news_hero']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_hero']['element_class'] = 'left-thumbnail';
  $handler->display->display_options['fields']['field_news_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_hero']['settings'] = array(
    'image_style' => 'square_thumbnail',
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
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: News Type */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['ui_name'] = 'News Type';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator_id'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['label'] = 'Type of News (field_type_of_news)';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['identifier'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
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

  /* Display: PR - Home */
  $handler = $view->new_display('panel_pane', 'PR - Home', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'press-releases';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link icon-right-open" href="press-releases">more press releases</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Emergency */
  $handler->display->display_options['fields']['field_emergency']['id'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['table'] = 'field_data_field_emergency';
  $handler->display->display_options['fields']['field_emergency']['field'] = 'field_emergency';
  $handler->display->display_options['fields']['field_emergency']['label'] = '';
  $handler->display->display_options['fields']['field_emergency']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_emergency']['alter']['text'] = '<strong>Alert: </strong>';
  $handler->display->display_options['fields']['field_emergency']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_emergency][body]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a><strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
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
      'label' => 'Audience',
    ),
  );

  /* Display: PR - Page */
  $handler = $view->new_display('panel_pane', 'PR - Page', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Releases';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'prPage';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '350';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a><strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
  /* Filter criterion: Content: Publish Date (field_news_date) */
  $handler->display->display_options['filters']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['filters']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['filters']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['filters']['field_news_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_news_date_value']['expose']['operator_id'] = 'field_news_date_value_op';
  $handler->display->display_options['filters']['field_news_date_value']['expose']['label'] = 'Search by Year:';
  $handler->display->display_options['filters']['field_news_date_value']['expose']['description'] = 'Search for Press Releases by Year Published.';
  $handler->display->display_options['filters']['field_news_date_value']['expose']['operator'] = 'field_news_date_value_op';
  $handler->display->display_options['filters']['field_news_date_value']['expose']['identifier'] = 'field_news_date_value';
  $handler->display->display_options['filters']['field_news_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_news_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_news_date_value']['year_range'] = '-7:+1';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
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
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: CP - Athletic Home */
  $handler = $view->new_display('panel_pane', 'CP - Athletic Home', 'panel_pane_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'athletic-news';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link" href="/news">more News</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_NewsAthletics';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Hero */
  $handler->display->display_options['fields']['field_news_hero']['id'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['table'] = 'field_data_field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['field'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['label'] = '';
  $handler->display->display_options['fields']['field_news_hero']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_hero']['element_class'] = 'left-thumbnail';
  $handler->display->display_options['fields']['field_news_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_hero']['settings'] = array(
    'image_style' => 'athletic_news_feed_hartnell',
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
  $handler->display->display_options['fields']['title']['element_class'] = 'sports-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '325';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    85 => '85',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
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
      'label' => 'Audience',
    ),
  );

  /* Display: News: Faculty QuickTab */
  $handler = $view->new_display('panel_pane', 'News: Faculty QuickTab', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest News';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Hard-coded News listing for display in quick_tab';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="read-more-link icon-right-open" href="/news">Read all Hartnell news</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'term_NewsAthletics';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'news_type' => 'news_type',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'site_section' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: News Hero */
  $handler->display->display_options['fields']['field_news_hero']['id'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['table'] = 'field_data_field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['field'] = 'field_news_hero';
  $handler->display->display_options['fields']['field_news_hero']['label'] = '';
  $handler->display->display_options['fields']['field_news_hero']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_hero']['element_class'] = 'left-thumbnail';
  $handler->display->display_options['fields']['field_news_hero']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_news_hero']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_news_hero']['settings'] = array(
    'image_style' => 'square_thumbnail',
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
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'news_date_no_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: News Type */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['ui_name'] = 'News Type';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator_id'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['label'] = 'Type of News (field_type_of_news)';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['operator'] = 'field_type_of_news_tid_op';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['identifier'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
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

  /* Display: PR - Annual Archive */
  $handler = $view->new_display('page', 'PR - Annual Archive', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Annual Archive';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'press-archive';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'news-view-row';
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publish Date */
  $handler->display->display_options['fields']['field_news_date']['id'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['fields']['field_news_date']['field'] = 'field_news_date';
  $handler->display->display_options['fields']['field_news_date']['label'] = '';
  $handler->display->display_options['fields']['field_news_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_date']['element_class'] = 'publish-date';
  $handler->display->display_options['fields']['field_news_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_date']['settings'] = array(
    'format_type' => 'published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '[field_emergency][body]';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a><strong>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'news-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publish Date (field_news_date) */
  $handler->display->display_options['sorts']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['sorts']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['sorts']['field_news_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Publish Date (field_news_date) */
  $handler->display->display_options['arguments']['field_news_date_value']['id'] = 'field_news_date_value';
  $handler->display->display_options['arguments']['field_news_date_value']['table'] = 'field_data_field_news_date';
  $handler->display->display_options['arguments']['field_news_date_value']['field'] = 'field_news_date_value';
  $handler->display->display_options['arguments']['field_news_date_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_news_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_news_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_news_date_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_news_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_news_date_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_news_date_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_news_date_value']['year_range'] = '-10:+10';
  $handler->display->display_options['arguments']['field_news_date_value']['granularity'] = 'year';
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type of News (field_type_of_news) */
  $handler->display->display_options['filters']['field_type_of_news_tid']['id'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['table'] = 'field_data_field_type_of_news';
  $handler->display->display_options['filters']['field_type_of_news_tid']['field'] = 'field_type_of_news_tid';
  $handler->display->display_options['filters']['field_type_of_news_tid']['value'] = array(
    50 => '50',
  );
  $handler->display->display_options['filters']['field_type_of_news_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_news_tid']['vocabulary'] = 'news_type';
  $handler->display->display_options['path'] = 'archive';
  $export['news'] = $view;

  return $export;
}
