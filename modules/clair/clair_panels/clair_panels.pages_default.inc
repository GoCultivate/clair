<?php
/**
 * @file
 * clair_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function clair_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = 'This panel controls the site\'s frontpage.';
  $page->path = 'homepage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'taylor';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'slider' => NULL,
      'slidergutter' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'footercolumn1' => NULL,
      'footercolumn2' => NULL,
      'footercolumn3' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'content_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '439be10c-a4f8-4064-8501-d85b0f1d1442';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6c4485b8-bb0a-46c4-afc1-86b5f8fc2a50';
    $pane->panel = 'half';
    $pane->type = 'views';
    $pane->subtype = 'clair_front_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6c4485b8-bb0a-46c4-afc1-86b5f8fc2a50';
    $display->content['new-6c4485b8-bb0a-46c4-afc1-86b5f8fc2a50'] = $pane;
    $display->panels['half'][0] = 'new-6c4485b8-bb0a-46c4-afc1-86b5f8fc2a50';
    $pane = new stdClass();
    $pane->pid = 'new-f438fd63-4dc8-4ee1-b613-71b9dc68717d';
    $pane->panel = 'quarter1';
    $pane->type = 'views';
    $pane->subtype = 'clair_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'bog_unfiltered_block',
      'override_title' => 1,
      'override_title_text' => 'Popular Articles',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f438fd63-4dc8-4ee1-b613-71b9dc68717d';
    $display->content['new-f438fd63-4dc8-4ee1-b613-71b9dc68717d'] = $pane;
    $display->panels['quarter1'][0] = 'new-f438fd63-4dc8-4ee1-b613-71b9dc68717d';
    $pane = new stdClass();
    $pane->pid = 'new-b1c370ab-5fe9-4852-8ff1-b5fa089271ae';
    $pane->panel = 'quarter2';
    $pane->type = 'views';
    $pane->subtype = 'clair_events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'unfiltered_events',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1c370ab-5fe9-4852-8ff1-b5fa089271ae';
    $display->content['new-b1c370ab-5fe9-4852-8ff1-b5fa089271ae'] = $pane;
    $display->panels['quarter2'][0] = 'new-b1c370ab-5fe9-4852-8ff1-b5fa089271ae';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
