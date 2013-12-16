<?php
/**
 * @file
 * tax_site_section.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tax_site_section_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_theme_colors|taxonomy_term|site_section|form';
  $field_group->group_name = 'group_section_theme_colors';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'site_section';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_theme_settings';
  $field_group->data = array(
    'label' => 'Section Theme Colors',
    'weight' => '32',
    'children' => array(
      0 => 'field_title_text_color',
      1 => 'field_title_background_color',
      2 => 'field_menu_text_color',
      3 => 'field_menu_background_color',
      4 => 'field_color_settings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-section-theme-colors field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_section_theme_colors|taxonomy_term|site_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_theme_settings|taxonomy_term|site_section|form';
  $field_group->group_name = 'group_theme_settings';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'site_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Theme Settings',
    'weight' => '34',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'group_section_theme_colors',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-theme-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_theme_settings|taxonomy_term|site_section|form'] = $field_group;

  return $export;
}
