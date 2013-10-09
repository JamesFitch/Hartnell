<?php
/**
 * @file
 * roles_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: about section.
  $roles['about section'] = array(
    'name' => 'about section',
    'weight' => '3',
  );

  // Exported role: academic section.
  $roles['academic section'] = array(
    'name' => 'academic section',
    'weight' => '5',
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '7',
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => '2',
  );

  // Exported role: enrollment section.
  $roles['enrollment section'] = array(
    'name' => 'enrollment section',
    'weight' => '4',
  );

  // Exported role: student life section.
  $roles['student life section'] = array(
    'name' => 'student life section',
    'weight' => '6',
  );

  return $roles;
}
