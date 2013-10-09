<?php
/**
 * @file
 * taxonomy_default_handlers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomy_default_handlers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
