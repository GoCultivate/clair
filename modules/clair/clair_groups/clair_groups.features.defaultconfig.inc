<?php
/**
 * @file
 * clair_groups.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function clair_groups_defaultconfig_features() {
  return array(
    'clair_groups' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function clair_groups_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_assignment';
  $strongarm->value = 'autocomplete';
  $export['og_menu_assignment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_block_links';
  $strongarm->value = 0;
  $export['og_menu_block_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_context_limit';
  $strongarm->value = 0;
  $export['og_menu_context_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_create_by_default';
  $strongarm->value = 1;
  $export['og_menu_create_by_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_hide_create_option';
  $strongarm->value = 0;
  $export['og_menu_hide_create_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_max_menus_per_group';
  $strongarm->value = '1';
  $export['og_menu_max_menus_per_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_show_blocks';
  $strongarm->value = 1;
  $export['og_menu_show_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_menu_show_nodetype';
  $strongarm->value = 0;
  $export['og_menu_show_nodetype'] = $strongarm;

  return $export;
}
