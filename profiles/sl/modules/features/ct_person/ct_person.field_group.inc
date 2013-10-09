<?php
/**
 * @file
 * ct_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_person_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|person|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Information',
    'weight' => '15',
    'children' => array(
      0 => 'field_person_email',
      1 => 'field_person_location',
      2 => 'field_person_phone',
      3 => 'field_office',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-contact-info field-group-fieldset',
      ),
    ),
  );
  $export['group_contact_info|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_standardfields|node|person|form';
  $field_group->group_name = 'group_person_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General fields',
    'weight' => '1',
    'children' => array(
      0 => 'field_person_bioshort',
      1 => 'field_person_email',
      2 => 'field_person_headshot',
      3 => 'field_person_location',
      4 => 'field_person_namefirst',
      5 => 'field_person_namelast',
      6 => 'field_person_phone',
      7 => 'field_person_prefix',
      8 => 'field_person_title',
      9 => 'field_type_of_person',
      10 => 'field_bio',
      11 => 'field_favorite_athletes',
      12 => 'field_favorite_foods',
      13 => 'field_favorite_hobbies',
      14 => 'field_favorite_movies',
      15 => 'field_office',
      16 => 'field_person_quote',
      17 => 'field_url',
      18 => 'field_academic_area_or_major',
      19 => 'field_related_files',
      20 => 'field_site_section',
      21 => 'field_body',
      22 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-person-standardfields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_person_standardfields|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_player_info|node|person|default';
  $field_group->group_name = 'group_player_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Player Information',
    'weight' => '16',
    'children' => array(
      0 => 'field_activated',
      1 => 'field_high_school',
      2 => 'field_person_height',
      3 => 'field_person_weight',
      4 => 'field_player_number',
      5 => 'field_player_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-player-info field-group-fieldset',
      ),
    ),
  );
  $export['group_player_info|node|person|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_specialized|node|person|form';
  $field_group->group_name = 'group_specialized';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Specialized fields',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-specialized field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_specialized|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_athlete|node|person|form';
  $field_group->group_name = 'group_student_athlete';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Athletic Information',
    'weight' => '3',
    'children' => array(
      0 => 'field_activated',
      1 => 'field_birth_date',
      2 => 'field_birth_place',
      3 => 'field_high_school',
      4 => 'field_hometown',
      5 => 'field_p1name_first',
      6 => 'field_p1name_last',
      7 => 'field_p2name_first',
      8 => 'field_p2name_last',
      9 => 'field_person_height',
      10 => 'field_person_weight',
      11 => 'field_photo_id',
      12 => 'field_player_number',
      13 => 'field_player_position',
      14 => 'field_student_id',
      15 => 'field_team',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Athletic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'athletic-details group-student-athlete field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_student_athlete|node|person|form'] = $field_group;

  return $export;
}
