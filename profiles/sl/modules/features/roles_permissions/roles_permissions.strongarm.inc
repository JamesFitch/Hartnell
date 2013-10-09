<?php
/**
 * @file
 * roles_permissions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function roles_permissions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access';
  $strongarm->value = 'taxonomy';
  $export['workbench_access'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_allow_multiple';
  $strongarm->value = 0;
  $export['workbench_access_allow_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_auto_assign';
  $strongarm->value = 1;
  $export['workbench_access_auto_assign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_label';
  $strongarm->value = 'Editorial Site Section';
  $export['workbench_access_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_taxonomy';
  $strongarm->value = array(
    'site_section' => 'site_section',
    'event_type' => 0,
    'audience' => 0,
    'location_type' => 0,
    'testimonial_type' => 0,
    'sport' => 0,
    'academic_subject' => 0,
    'page_type' => 0,
    'person_type' => 0,
    'news_type' => 0,
    'department_editorial_access' => 0,
    'promo' => 0,
    'faq_category' => 0,
  );
  $export['workbench_access_taxonomy'] = $strongarm;

  return $export;
}
