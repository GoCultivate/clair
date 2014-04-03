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

  // Exported role: content creator.
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => 11,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 12,
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 13,
  );

  return $roles;
}
