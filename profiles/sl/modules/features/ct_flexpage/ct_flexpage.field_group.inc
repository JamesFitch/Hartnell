<?php
/**
 * @file
 * ct_flexpage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_flexpage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_about|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About this content',
    'weight' => '2',
    'children' => array(
      0 => 'field_audience',
      1 => 'field_site_section',
      2 => 'field_gainful_employment',
      3 => 'field_include_in_a_z_index',
      4 => 'field_team',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-flexpage-about field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_flexpage_about|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_cta|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_cta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Call to action',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-flexpage-cta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_flexpage_cta|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_gallery_settings|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_gallery_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gallery flexpage settings',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-flexpage-gallery-settings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_flexpage_gallery_settings|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_media|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_flexpage_slideshow',
      1 => 'field_headerimg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-flexpage-media field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_flexpage_media|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_other|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related items',
    'weight' => '6',
    'children' => array(
      0 => 'field_flexpage_location',
      1 => 'field_reference_person',
      2 => 'field_related_links',
      3 => 'field_related_flexpages',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Related items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-flexpage-other field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_flexpage_other|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_promo_fields|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_promo_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional fields',
    'weight' => '5',
    'children' => array(
      0 => 'field_flexpage_promo_field_a',
      1 => 'field_flexpage_promo_field_b',
      2 => 'field_flexpage_promo_field_c',
      3 => 'field_flexpage_promo_field_d',
      4 => 'field_flexpage_promo_field_e',
      5 => 'field_flexpage_promo_field_f',
      6 => 'field_promo_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-flexpage-promo-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_flexpage_promo_fields|node|flexpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_flexpage_standardfields|node|flexpage|form';
  $field_group->group_name = 'group_flexpage_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'flexpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Standard fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-flexpage-standardfields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_flexpage_standardfields|node|flexpage|form'] = $field_group;

  return $export;
}
