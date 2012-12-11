<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Left and Right Rail'),
  'category' => t('CLAIR'),
  'icon' => 'leftrightrail.png',
  'theme' => 'leftrightrail',
  'theme arguments' => array('id', 'content'),
  'css' => 'leftrightrail.css',
  'regions' => array(
    'left' => t('Left Rail'),
    'middle' => t('Middle Content'),
    'right' => t('Right Rail')
  ),
);

