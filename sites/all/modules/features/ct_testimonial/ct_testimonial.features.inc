<?php
/**
 * @file
 * ct_testimonial.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_testimonial_ctools_plugin_api() {
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
function ct_testimonial_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_testimonial_node_info() {
  $items = array(
    'testimonial' => array(
      'name' => t('Testimonial'),
      'base' => 'node_content',
      'description' => t('Content type used for managing testimonial content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
