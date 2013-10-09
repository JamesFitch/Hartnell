<?php
/**
 * @file
 * ct_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_faq_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function ct_faq_flag_default_flags() {
  $flags = array();
  // Exported flag: "Popular FAQ".
  $flags['popular_faq'] = array(
    'content_type' => 'node',
    'title' => 'Popular FAQ',
    'global' => '1',
    'types' => array(
      0 => 'faq',
    ),
    'flag_short' => 'Like',
    'flag_long' => 'Popular topic ',
    'flag_message' => 'Popular topic ',
    'unflag_short' => 'Unlike',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'roles' => array(
      'flag' => array(
        0 => '2',
        1 => '3',
        2 => '5',
      ),
      'unflag' => array(
        0 => '2',
        1 => '3',
        2 => '5',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'ct_faq',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function ct_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => t('A frequently asked question and its answer.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
