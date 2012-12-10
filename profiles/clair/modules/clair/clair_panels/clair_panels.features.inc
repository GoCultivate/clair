<?php
/**
 * @file
 * clair_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_panels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
