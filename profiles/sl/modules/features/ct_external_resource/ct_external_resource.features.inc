<?php
/**
 * @file
 * ct_external_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_external_resource_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ct_external_resource_node_info() {
  $items = array(
    'external_Resource
' => array(
      'name' => t('External Resource
'),
      'base' => 'node_content',
      'description' => t('External research databases'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
