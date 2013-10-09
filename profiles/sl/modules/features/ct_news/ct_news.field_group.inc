<?php
/**
 * @file
 * ct_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_standardfields|node|news|form';
  $field_group->group_name = 'group_news_standardfields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Standard fields',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_audience',
      2 => 'field_emergency',
      3 => 'field_news_date',
      4 => 'field_news_hero',
      5 => 'field_site_section',
      6 => 'field_type_of_news',
      7 => 'field_team',
      8 => 'field_news_banner',
      9 => 'title',
      10 => 'field_location',
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
  $export['group_news_standardfields|node|news|form'] = $field_group;

  return $export;
}
