<?php
/**
 * @file
 * clair_admin.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function clair_admin_user_default_roles() {
  $roles = array();

  // Exported role: CMS administrator.
  $roles['CMS administrator'] = array(
    'name' => 'CMS administrator',
    'weight' => 14,
  );

  return $roles;
}
