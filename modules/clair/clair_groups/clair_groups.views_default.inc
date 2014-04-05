<?php
/**
 * @file
 * clair_groups.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function clair_groups_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clair_groups';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CLAIR Groups';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Popular Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Updated/commented date */
  $handler->display->display_options['fields']['last_updated']['id'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_updated']['field'] = 'last_updated';
  $handler->display->display_options['fields']['last_updated']['label'] = 'Updated';
  $handler->display->display_options['fields']['last_updated']['date_format'] = 'time ago';
  /* Field: Content: Collection Image */
  $handler->display->display_options['fields']['field_collection_image']['id'] = 'field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['table'] = 'field_data_field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['field'] = 'field_collection_image';
  $handler->display->display_options['fields']['field_collection_image']['label'] = '';
  $handler->display->display_options['fields']['field_collection_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_collection_image']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_collection_image']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_collection_image']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  $handler->display->display_options['fields']['field_collection_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['clair_groups'] = $view;

  return $export;
}
