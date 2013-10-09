<?php
/**
 * @file
 * ct_flexpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_flexpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
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
function ct_flexpage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_flexpage_node_info() {
  $items = array(
    'flexpage' => array(
      'name' => t('Flexible Page'),
      'base' => 'node_content',
      'description' => t('This is a flexible \'flexpage\' content type that can be used for simple pages, or can use optional fields to create more complex page types with embedded video, slideshows, calls to action, etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
