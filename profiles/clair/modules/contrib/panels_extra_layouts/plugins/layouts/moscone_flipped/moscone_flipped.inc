<?php
// Plugin definition
$plugin = array(
  'title' => t('Moscone Flipped'),
  'icon' => 'moscone-flipped.png',
  'category' => t('Panopoly'),
  'theme' => 'moscone_flipped',
  'css' => 'moscone-flipped.css',
  'regions' => array(
    'header' => t('Header'),
    'sidebar' => t('Content Sidebar'),
    'content_main' => t('Content'),
    'footer' => t('Footer'),
  ),
);
