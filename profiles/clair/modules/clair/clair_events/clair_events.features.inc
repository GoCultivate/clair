<?php
/**
 * @file
 * clair_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function clair_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function clair_events_flag_default_flags() {
  $flags = array();
  // Exported flag: "Promoted Event".
  $flags['promoted_event'] = array(
    'content_type' => 'node',
    'title' => 'Promoted Event',
    'global' => '1',
    'types' => array(
      0 => 'event',
    ),
    'flag_short' => 'Promote This Event',
    'flag_long' => 'This Event will appear at the top of all items',
    'flag_message' => 'This Event has been promoted',
    'unflag_short' => 'Remove Promoted Event',
    'unflag_long' => 'Remove this Event from Promoted',
    'unflag_message' => 'This Event has been removed from promoted Events',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'clair_events',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function clair_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event to be displayed on a Event Calendar / Event List'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
