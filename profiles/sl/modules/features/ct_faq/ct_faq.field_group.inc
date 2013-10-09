<?php
/**
 * @file
 * ct_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_faq_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_standardfields|node|faq|form';
  $field_group->group_name = 'group_faq_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_faq_term',
      2 => 'field_popular_faq',
      3 => 'title',
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
  $export['group_faq_standardfields|node|faq|form'] = $field_group;

  return $export;
}
