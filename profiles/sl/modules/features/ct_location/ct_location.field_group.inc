<?php
/**
 * @file
 * ct_location.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_location_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hours_operation|node|location|form';
  $field_group->group_name = 'group_hours_operation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hours of Operation',
    'weight' => '1',
    'children' => array(
      0 => 'field_location_hours_operation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-hours-operation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hours_operation|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_standardfields|node|location|form';
  $field_group->group_name = 'group_location_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_location_address',
      2 => 'field_location_phone',
      3 => 'field_location_photo',
      4 => 'field_complete_address',
      5 => 'field_location_city',
      6 => 'field_location_state',
      7 => 'field_location_zip',
      8 => 'field_location_type',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-location-standardfields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location_standardfields|node|location|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_standardfields|node|location|teaser';
  $field_group->group_name = 'group_location_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'location';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_location_address',
      2 => 'field_location_phone',
      3 => 'field_location_photo',
      4 => 'field_location_zip',
      5 => 'field_location_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-location-standardfields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_location_standardfields|node|location|teaser'] = $field_group;

  return $export;
}
