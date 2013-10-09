<?php
/**
 * @file
 * ct_ad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_ad_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
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
function ct_ad_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_ad_node_info() {
  $items = array(
    'ad' => array(
      'name' => t('Promotion'),
      'base' => 'node_content',
      'description' => t('Content type for advertisements and promotions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
