<?php
/**
 * @file
 * clair_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function clair_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format html.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format wyiwyg.
  $permissions['use text format wyiwyg'] = array(
    'name' => 'use text format wyiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'content creator' => 'content creator',
      'editor' => 'editor',
      'publisher' => 'publisher',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
