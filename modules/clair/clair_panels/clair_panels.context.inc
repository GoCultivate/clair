<?php
/**
 * @file
 * clair_panels.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function clair_panels_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'powered_by_drupal';
  $context->description = 'Your friendly "Powered by Drupal" block';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('Your friendly "Powered by Drupal" block');
  $export['powered_by_drupal'] = $context;

  return $export;
}
