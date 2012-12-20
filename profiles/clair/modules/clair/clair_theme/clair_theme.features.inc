<?php
/**
 * @file
 * clair_theme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_theme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
