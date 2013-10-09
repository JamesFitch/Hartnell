<?php
/**
 * @file
 * ct_slides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ct_slides_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
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
function ct_slides_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ct_slides_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Content type for managing slideshows.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
