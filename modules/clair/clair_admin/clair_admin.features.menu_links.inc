<?php
/**
 * @file
 * clair_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function clair_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_add-content:node/add
  $menu_links['management_add-content:node/add'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add Content',
    'options' => array(
      'identifier' => 'management_add-content:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_content:admin/content',
  );
  // Exported menu link: management_article:node/add/article
  $menu_links['management_article:node/add/article'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/article',
    'router_path' => 'node/add/article',
    'link_title' => 'Article',
    'options' => array(
      'identifier' => 'management_article:node/add/article',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_add-content:node/add',
  );
  // Exported menu link: management_collection:node/add/collection
  $menu_links['management_collection:node/add/collection'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/collection',
    'router_path' => 'node/add/collection',
    'link_title' => 'Collection',
    'options' => array(
      'identifier' => 'management_collection:node/add/collection',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_add-content:node/add',
  );
  // Exported menu link: management_event:node/add/event
  $menu_links['management_event:node/add/event'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/event',
    'router_path' => 'node/add/event',
    'link_title' => 'Event',
    'options' => array(
      'identifier' => 'management_event:node/add/event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_add-content:node/add',
  );
  // Exported menu link: management_object:node/add/object
  $menu_links['management_object:node/add/object'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/object',
    'router_path' => 'node/add/object',
    'link_title' => 'Object',
    'options' => array(
      'identifier' => 'management_object:node/add/object',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'management_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Content');
  t('Article');
  t('Collection');
  t('Event');
  t('Object');


  return $menu_links;
}
