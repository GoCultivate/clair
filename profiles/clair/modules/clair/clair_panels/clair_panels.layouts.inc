<?php
/**
 * @file
 * clair_panels.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function clair_panels_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'full_over_left_rail';
  $layout->admin_title = 'Full over Left Rail';
  $layout->admin_description = '';
  $layout->category = 'CLAIR';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom',
          1 => 'right_bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left_bottom' => array(
        'type' => 'region',
        'title' => 'Left Rail',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_bottom' => array(
        'type' => 'region',
        'title' => 'Right Content',
        'width' => '75',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['clone_of_full_over_left_rail'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'full_over_left_and_right_rail';
  $layout->admin_title = 'Full over Left and Right Rail';
  $layout->admin_description = '';
  $layout->category = 'CLAIR';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_rail',
          1 => 'bottom_center',
          2 => 'right_rail',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left_rail' => array(
        'type' => 'region',
        'title' => 'Left Rail',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'bottom_center' => array(
        'type' => 'region',
        'title' => 'Center Content',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_rail' => array(
        'type' => 'region',
        'title' => 'Right Rail',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['full_over_left_and_right_rail'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'full_over_right_rail';
  $layout->admin_title = 'Full over Right Rail';
  $layout->admin_description = '';
  $layout->category = 'CLAIR';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom',
          1 => 'right_bottom',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left_bottom' => array(
        'type' => 'region',
        'title' => 'Left Content',
        'width' => '75',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right_bottom' => array(
        'type' => 'region',
        'title' => 'Right Bottom',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $export['full_over_right_rail'] = $layout;

  return $export;
}
