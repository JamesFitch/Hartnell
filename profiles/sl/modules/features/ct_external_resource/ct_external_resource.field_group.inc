<?php
/**
 * @file
 * ct_external_resource.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_external_resource_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_externalr_standardfields|node|external_Resource
|form';
  $field_group->group_name = 'group_externalr_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'external_Resource
';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_externalresource_link',
      2 => 'field_externalresource_vocab',
      3 => 'title',
      4 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Standard fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_externalr_standardfields|node|external_Resource
|form'] = $field_group;

  return $export;
}
