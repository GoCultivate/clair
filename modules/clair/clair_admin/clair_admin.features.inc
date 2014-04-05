<?php
/**
 * @file
 * clair_admin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function clair_admin_ctools_plugin_api($module = NULL, $api = NULL) {
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
function clair_admin_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function clair_admin_image_default_styles() {
  $styles = array();

  // Exported image style: large_thumb.
  $styles['large_thumb'] = array(
    'name' => 'large_thumb',
    'label' => 'Large Square Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function clair_admin_node_info() {
  $items = array(
    'object' => array(
      'name' => t('Object'),
      'base' => 'node_content',
      'description' => t('Use <i>objects</i> for defining art that is included in a collection'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>pages</em> for basic page content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
