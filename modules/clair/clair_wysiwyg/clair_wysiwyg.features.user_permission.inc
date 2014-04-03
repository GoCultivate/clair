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

  // Exported permission: 'use text format html'.
  $permissions['use text format html'] = array(
    'name' => 'use text format html',
    'roles' => array(
      'CMS administrator' => 'CMS administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format wyiwyg'.
  $permissions['use text format wyiwyg'] = array(
    'name' => 'use text format wyiwyg',
    'roles' => array(
      'CMS administrator' => 'CMS administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
