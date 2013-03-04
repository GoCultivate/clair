<?php
/**
 * @file
 * clair_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function clair_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:collection:add user'
  $permissions['node:collection:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:administer group'
  $permissions['node:collection:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:approve and deny subscription'
  $permissions['node:collection:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:create article content'
  $permissions['node:collection:create article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:create event content'
  $permissions['node:collection:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:create image_display_slideshow content'
  $permissions['node:collection:create image_display_slideshow content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:create object content'
  $permissions['node:collection:create object content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete any article content'
  $permissions['node:collection:delete any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete any event content'
  $permissions['node:collection:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete any image_display_slideshow content'
  $permissions['node:collection:delete any image_display_slideshow content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete any object content'
  $permissions['node:collection:delete any object content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete own article content'
  $permissions['node:collection:delete own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete own event content'
  $permissions['node:collection:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete own image_display_slideshow content'
  $permissions['node:collection:delete own image_display_slideshow content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:delete own object content'
  $permissions['node:collection:delete own object content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:manage members'
  $permissions['node:collection:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:manage permissions'
  $permissions['node:collection:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:manage roles'
  $permissions['node:collection:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:subscribe'
  $permissions['node:collection:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:collection:subscribe without approval'
  $permissions['node:collection:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:unsubscribe'
  $permissions['node:collection:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:collection:update any article content'
  $permissions['node:collection:update any article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update any event content'
  $permissions['node:collection:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update any image_display_slideshow content'
  $permissions['node:collection:update any image_display_slideshow content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update any object content'
  $permissions['node:collection:update any object content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update body field'
  $permissions['node:collection:update body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_collection_image field'
  $permissions['node:collection:update field_collection_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_date field'
  $permissions['node:collection:update field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_event_image field'
  $permissions['node:collection:update field_event_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_id field'
  $permissions['node:collection:update field_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_image field'
  $permissions['node:collection:update field_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_media field'
  $permissions['node:collection:update field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_tags field'
  $permissions['node:collection:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update field_type field'
  $permissions['node:collection:update field_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update group'
  $permissions['node:collection:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:update group_group field'
  $permissions['node:collection:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:update og_group_ref field'
  $permissions['node:collection:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update og_user_node field'
  $permissions['node:collection:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update own article content'
  $permissions['node:collection:update own article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update own event content'
  $permissions['node:collection:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update own image_display_slideshow content'
  $permissions['node:collection:update own image_display_slideshow content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:update own object content'
  $permissions['node:collection:update own object content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view body field'
  $permissions['node:collection:view body field'] = array(
    'roles' => array(
      'non-member' => 'non-member',
      'member' => 'member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:view field_collection_image field'
  $permissions['node:collection:view field_collection_image field'] = array(
    'roles' => array(
      'non-member' => 'non-member',
      'member' => 'member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:collection:view field_date field'
  $permissions['node:collection:view field_date field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_event_image field'
  $permissions['node:collection:view field_event_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_id field'
  $permissions['node:collection:view field_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_image field'
  $permissions['node:collection:view field_image field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_media field'
  $permissions['node:collection:view field_media field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_tags field'
  $permissions['node:collection:view field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view field_type field'
  $permissions['node:collection:view field_type field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view group_group field'
  $permissions['node:collection:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:collection:view og_group_ref field'
  $permissions['node:collection:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:collection:view og_user_node field'
  $permissions['node:collection:view og_user_node field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
