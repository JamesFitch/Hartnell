<?php
/**
 * @file
 * roles_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function roles_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'workbench',
  );

  // Exported permission: access workbench access by role.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench access.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: assign workbench access.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: batch update workbench access.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'system',
  );

  // Exported permission: view workbench access information.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(
      0 => 'administrator',
      1 => 'content administrator',
      2 => 'content editor',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: view workbench taxonomy pages.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'workbench_access',
  );

  return $permissions;
}
