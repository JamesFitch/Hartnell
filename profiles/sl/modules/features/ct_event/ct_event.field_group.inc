<?php
/**
 * @file
 * ct_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_event_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_athletic_information|node|event|form';
  $field_group->group_name = 'group_athletic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Athletic Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_hartnell_score',
      1 => 'field_news',
      2 => 'field_opponent',
      3 => 'field_opponent_score',
      4 => 'field_team',
      5 => 'field_win_loss',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-athletic-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_athletic_information|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_standardfields|node|event|form';
  $field_group->group_name = 'group_event_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_audience',
      2 => 'field_event_date',
      3 => 'field_event_type',
      4 => 'field_headerimg',
      5 => 'field_reference_person',
      6 => 'field_related_files',
      7 => 'field_related_links',
      8 => 'field_sign_up_form_link',
      9 => 'field_coordinator',
      10 => 'field_event_thumb',
      11 => 'field_location',
      12 => 'field_speaker_notes',
      13 => 'field_site_section',
      14 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-event-standardfields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_event_standardfields|node|event|form'] = $field_group;

  return $export;
}
