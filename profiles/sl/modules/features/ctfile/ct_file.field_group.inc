<?php
/**
 * @file
 * ct_file.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_file_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_standardfields|node|file|form';
  $field_group->group_name = 'group_file_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'file';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_file_file',
      2 => 'field_file_vocab_dtype',
      3 => 'title',
      4 => 'workbench_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_file_standardfields|node|file|form'] = $field_group;

  return $export;
}
