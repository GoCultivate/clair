<?php
/**
 * @file
 * rjs_blog_demo_mode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_demo_mode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
