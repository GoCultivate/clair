<?php
/**
 * @file
 * clair_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function clair_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create collection content'.
  $permissions['create collection content'] = array(
    'name' => 'create collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collection content'.
  $permissions['delete any collection content'] = array(
    'name' => 'delete any collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collection content'.
  $permissions['delete own collection content'] = array(
    'name' => 'delete own collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collection content'.
  $permissions['edit any collection content'] = array(
    'name' => 'edit any collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own collection content'.
  $permissions['edit own collection content'] = array(
    'name' => 'edit own collection content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
