<?php
/**
 * @file
 * ct_alert.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_alert_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ct_alert_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_alert_node_info() {
  $items = array(
    'alerts_sitewide' => array(
      'name' => t('Alerts Sitewide'),
      'base' => 'node_content',
      'description' => t('Alerts can be used to post bits of information that should show across the site in the header.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
