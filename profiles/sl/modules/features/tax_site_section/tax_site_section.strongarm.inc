<?php
/**
 * @file
 * tax_site_section.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tax_site_section_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_custom_form';
  $strongarm->value = 0;
  $export['workbench_access_custom_form'] = $strongarm;

  return $export;
}
