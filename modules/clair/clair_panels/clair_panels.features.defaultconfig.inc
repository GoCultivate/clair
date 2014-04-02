<?php
/**
 * @file
 * clair_panels.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function clair_panels_defaultconfig_features() {
  return array(
    'clair_panels' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function clair_panels_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_article';
  $strongarm->value = array(
    'status' => '1',
    'default' => '1',
    'choice' => '1',
  );
  $export['panelizer_defaults_node_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_collection';
  $strongarm->value = array(
    'status' => '1',
    'default' => '1',
    'choice' => '1',
  );
  $export['panelizer_defaults_node_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_event';
  $strongarm->value = array(
    'status' => '1',
    'default' => '1',
    'choice' => '1',
  );
  $export['panelizer_defaults_node_event'] = $strongarm;

  return $export;
}
