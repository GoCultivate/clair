<?php
/**
 * @file
 * clair_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function clair_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function clair_blog_flag_default_flags() {
  $flags = array();
  // Exported flag: "Promoted Article".
  $flags['promoted_article'] = array(
    'content_type' => 'node',
    'title' => 'Promoted Article',
    'global' => 1,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Promote This Article',
    'flag_long' => 'This Article will appear at the top of all items',
    'flag_message' => 'This Article has been promoted',
    'unflag_short' => 'Remove Promoted Article',
    'unflag_long' => 'Remove this Article from promoted',
    'unflag_message' => 'This Article has been removed from promoted Articles',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 3,
      ),
      'unflag' => array(
        0 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 1,
    'i18n' => 0,
    'module' => 'clair_blog',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function clair_blog_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
