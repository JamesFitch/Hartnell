<?php
/**
 * @file
 * ct_webform.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_webform_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform_promo_fields|node|webform|form';
  $field_group->group_name = 'group_webform_promo_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_webform_promo_field_a',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-webform-promo-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_webform_promo_fields|node|webform|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_webform_standardfields|node|webform|form';
  $field_group->group_name = 'group_webform_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'webform';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_audience',
      2 => 'field_headerimg',
      3 => 'field_site_section',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-webform-standardfields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_webform_standardfields|node|webform|form'] = $field_group;

  return $export;
}
