<?php
// Plugin definition
$plugin = array(
  'title' => t('Brenham Flipped'),
  'icon' => 'brenham-flipped.png',
  'category' => t('Panopoly'),
  'theme' => 'brenham_flipped',
  'css' => 'brenham-flipped.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'content_main' => t('Content'),
  ),
);
