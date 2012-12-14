<?php
/**
 * @file
 * clair_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function clair_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_search_disabled_node';
  $strongarm->value = TRUE;
  $export['page_manager_search_disabled_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_user_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_user_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_page';
  $strongarm->value = array(
    'status' => 1,
    'default' => 1,
    'choice' => 1,
  );
  $export['panelizer_defaults_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_taxonomy_term_tags';
  $strongarm->value = array(
    'status' => 1,
    'default' => 1,
    'choice' => 1,
  );
  $export['panelizer_defaults_taxonomy_term_tags'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_user_user';
  $strongarm->value = array(
    'status' => 1,
    'default' => 1,
    'choice' => 1,
  );
  $export['panelizer_defaults_user_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:11:"panels_page";s:23:"allowed_layout_settings";a:55:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:28:"flexible:full_over_left_rail";b:0;s:38:"flexible:full_over_left_and_right_rail";b:0;s:29:"flexible:full_over_right_rail";b:0;s:6:"whelan";b:1;s:12:"webb_flipped";b:1;s:4:"webb";b:1;s:20:"twocol_77_23_stacked";b:0;s:20:"twocol_70_30_stacked";b:0;s:20:"twocol_63_37_stacked";b:0;s:20:"twocol_30_70_stacked";b:0;s:16:"threecol_7_62_31";b:0;s:25:"threecol_44_37_19_stacked";b:0;s:25:"threecol_44_35_21_stacked";b:0;s:25:"threecol_42_29_29_stacked";b:0;s:25:"threecol_15_70_15_stacked";b:0;s:19:"three_four_adaptive";b:0;s:14:"taylor_flipped";b:1;s:6:"taylor";b:1;s:12:"sutro_double";b:1;s:5:"sutro";b:1;s:13:"selby_flipped";b:1;s:5:"selby";b:1;s:17:"sanderson_flipped";b:1;s:9:"sanderson";b:1;s:5:"rolph";b:1;s:4:"pond";b:1;s:6:"phelan";b:1;s:15:"moscone_flipped";b:1;s:7:"moscone";b:1;s:8:"mccoppin";b:1;s:15:"hewston_flipped";b:1;s:7:"hewston";b:1;s:6:"harris";b:1;s:5:"geary";b:1;s:19:"four_three_adaptive";b:0;s:12:"burr_flipped";b:1;s:4:"burr";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"bryant";b:1;s:5:"brown";b:1;s:20:"bricks_25_75_stacked";b:0;s:15:"brenham_flipped";b:1;s:7:"brenham";b:1;s:6:"boxton";b:1;s:16:"bartlett_flipped";b:1;s:8:"bartlett";b:1;}s:10:"form_state";N;}';
  $export['panels_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_allowed_types';
  $strongarm->value = array(
    'vocabulary_terms-vocabulary_terms' => 'vocabulary_terms-vocabulary_terms',
    'user_picture-user_picture' => 'user_picture-user_picture',
    'user_profile-user_profile' => 'user_profile-user_profile',
    'user_signature-user_signature' => 'user_signature-user_signature',
    'term_description-term_description' => 'term_description-term_description',
    'term_list-term_list' => 'term_list-term_list',
    'search_form-search_form' => 'search_form-search_form',
    'search_result-search_result' => 'search_result-search_result',
    'page_actions-page_actions' => 'page_actions-page_actions',
    'page_breadcrumb-page_breadcrumb' => 'page_breadcrumb-page_breadcrumb',
    'page_feed_icons-page_feed_icons' => 'page_feed_icons-page_feed_icons',
    'page_help-page_help' => 'page_help-page_help',
    'page_logo-page_logo' => 'page_logo-page_logo',
    'page_messages-page_messages' => 'page_messages-page_messages',
    'page_primary_links-page_primary_links' => 'page_primary_links-page_primary_links',
    'page_secondary_links-page_secondary_links' => 'page_secondary_links-page_secondary_links',
    'page_site_name-page_site_name' => 'page_site_name-page_site_name',
    'page_slogan-page_slogan' => 'page_slogan-page_slogan',
    'page_tabs-page_tabs' => 'page_tabs-page_tabs',
    'page_title-page_title' => 'page_title-page_title',
    'node_form_author-node_form_author' => 'node_form_author-node_form_author',
    'node_form_buttons-node_form_buttons' => 'node_form_buttons-node_form_buttons',
    'node_form_comment-node_form_comment' => 'node_form_comment-node_form_comment',
    'node_form_log-node_form_log' => 'node_form_log-node_form_log',
    'node_form_menu-node_form_menu' => 'node_form_menu-node_form_menu',
    'node_form_path-node_form_path' => 'node_form_path-node_form_path',
    'node_form_publishing-node_form_publishing' => 'node_form_publishing-node_form_publishing',
    'node_form_title-node_form_title' => 'node_form_title-node_form_title',
    'node_attachments-node_attachments' => 'node_attachments-node_attachments',
    'node_author-node_author' => 'node_author-node_author',
    'node_body-node_body' => 'node_body-node_body',
    'node_comment_form-node_comment_form' => 'node_comment_form-node_comment_form',
    'node_comments-node_comments' => 'node_comments-node_comments',
    'node_content-node_content' => 'node_content-node_content',
    'node_created-node_created' => 'node_created-node_created',
    'node_links-node_links' => 'node_links-node_links',
    'node_terms-node_terms' => 'node_terms-node_terms',
    'node_title-node_title' => 'node_title-node_title',
    'node_type_desc-node_type_desc' => 'node_type_desc-node_type_desc',
    'node_updated-node_updated' => 'node_updated-node_updated',
    'node-node' => 'node-node',
    'form-form' => 'form-form',
    'membership_links-membership_links' => 'membership_links-membership_links',
    'views_attachments-views_attachments' => 'views_attachments-views_attachments',
    'views_empty-views_empty' => 'views_empty-views_empty',
    'views_exposed-views_exposed' => 'views_exposed-views_exposed',
    'views_feed-views_feed' => 'views_feed-views_feed',
    'views_footer-views_footer' => 'views_footer-views_footer',
    'views_header-views_header' => 'views_header-views_header',
    'views_pager-views_pager' => 'views_pager-views_pager',
    'views_row-views_row' => 'views_row-views_row',
    'views_view-views_view' => 'views_view-views_view',
    'panelizer_form_default-panelizer_form_default' => 'panelizer_form_default-panelizer_form_default',
    'token-node:comment-count' => 'token-node:comment-count',
    'token-node:comment-count-new' => 'token-node:comment-count-new',
    'token-node:diff' => 'token-node:diff',
    'token-node:diff-markdown' => 'token-node:diff-markdown',
    'token-node:nid' => 'token-node:nid',
    'token-node:vid' => 'token-node:vid',
    'token-node:tnid' => 'token-node:tnid',
    'token-node:type' => 'token-node:type',
    'token-node:type-name' => 'token-node:type-name',
    'token-node:title' => 'token-node:title',
    'token-node:body' => 'token-node:body',
    'token-node:summary' => 'token-node:summary',
    'token-node:language' => 'token-node:language',
    'token-node:url' => 'token-node:url',
    'token-node:edit-url' => 'token-node:edit-url',
    'token-node:created' => 'token-node:created',
    'token-node:changed' => 'token-node:changed',
    'token-node:author' => 'token-node:author',
    'token-comment:cid' => 'token-comment:cid',
    'token-comment:hostname' => 'token-comment:hostname',
    'token-comment:name' => 'token-comment:name',
    'token-comment:mail' => 'token-comment:mail',
    'token-comment:homepage' => 'token-comment:homepage',
    'token-comment:title' => 'token-comment:title',
    'token-comment:body' => 'token-comment:body',
    'token-comment:url' => 'token-comment:url',
    'token-comment:edit-url' => 'token-comment:edit-url',
    'token-comment:created' => 'token-comment:created',
    'token-comment:changed' => 'token-comment:changed',
    'token-comment:parent' => 'token-comment:parent',
    'token-comment:node' => 'token-comment:node',
    'token-comment:author' => 'token-comment:author',
    'token-site:name' => 'token-site:name',
    'token-site:slogan' => 'token-site:slogan',
    'token-site:mail' => 'token-site:mail',
    'token-site:url' => 'token-site:url',
    'token-site:url-brief' => 'token-site:url-brief',
    'token-site:login-url' => 'token-site:login-url',
    'token-date:short' => 'token-date:short',
    'token-date:medium' => 'token-date:medium',
    'token-date:long' => 'token-date:long',
    'token-date:custom' => 'token-date:custom',
    'token-date:since' => 'token-date:since',
    'token-date:raw' => 'token-date:raw',
    'token-file:fid' => 'token-file:fid',
    'token-file:name' => 'token-file:name',
    'token-file:path' => 'token-file:path',
    'token-file:mime' => 'token-file:mime',
    'token-file:size' => 'token-file:size',
    'token-file:url' => 'token-file:url',
    'token-file:timestamp' => 'token-file:timestamp',
    'token-file:owner' => 'token-file:owner',
    'token-term:tid' => 'token-term:tid',
    'token-term:name' => 'token-term:name',
    'token-term:description' => 'token-term:description',
    'token-term:node-count' => 'token-term:node-count',
    'token-term:url' => 'token-term:url',
    'token-term:vocabulary' => 'token-term:vocabulary',
    'token-term:parent' => 'token-term:parent',
    'token-vocabulary:vid' => 'token-vocabulary:vid',
    'token-vocabulary:name' => 'token-vocabulary:name',
    'token-vocabulary:description' => 'token-vocabulary:description',
    'token-vocabulary:node-count' => 'token-vocabulary:node-count',
    'token-vocabulary:term-count' => 'token-vocabulary:term-count',
    'token-user:uid' => 'token-user:uid',
    'token-user:name' => 'token-user:name',
    'token-user:mail' => 'token-user:mail',
    'token-user:url' => 'token-user:url',
    'token-user:edit-url' => 'token-user:edit-url',
    'token-user:last-login' => 'token-user:last-login',
    'token-user:created' => 'token-user:created',
    'token-view:name' => 'token-view:name',
    'token-view:description' => 'token-view:description',
    'token-view:machine-name' => 'token-view:machine-name',
    'token-view:title' => 'token-view:title',
    'token-view:url' => 'token-view:url',
    'entity_form_field-comment:comment_body' => 'entity_form_field-comment:comment_body',
    'entity_form_field-node:body' => 'entity_form_field-node:body',
    'entity_form_field-og_membership:og_membership_request' => 'entity_form_field-og_membership:og_membership_request',
    'entity_field-comment:comment_body' => 'entity_field-comment:comment_body',
    'entity_field-node:body' => 'entity_field-node:body',
    'entity_field-og_membership:og_membership_request' => 'entity_field-og_membership:og_membership_request',
    'entity_field_extra-taxonomy_term:description' => 'entity_field_extra-taxonomy_term:description',
    'entity_field_extra-user:summary' => 'entity_field_extra-user:summary',
    'custom-custom' => 'custom-custom',
    'block-comment-recent' => 'block-comment-recent',
    'block-diff-inline' => 'block-diff-inline',
    'block-menu-features' => 'block-menu-features',
    'block-node-syndicate' => 'block-node-syndicate',
    'block-node-recent' => 'block-node-recent',
    'block-search-form' => 'block-search-form',
    'block-shortcut-shortcuts' => 'block-shortcut-shortcuts',
    'block-system-powered-by' => 'block-system-powered-by',
    'block-system-help' => 'block-system-help',
    'block-system-navigation' => 'block-system-navigation',
    'block-system-management' => 'block-system-management',
    'block-system-user-menu' => 'block-system-user-menu',
    'block-system-main-menu' => 'block-system-main-menu',
    'block-user-login' => 'block-user-login',
    'block-user-new' => 'block-user-new',
    'block-user-online' => 'block-user-online',
    'entity_view-comment' => 'entity_view-comment',
    'entity_view-node' => 'entity_view-node',
    'entity_view-og_membership_type' => 'entity_view-og_membership_type',
    'entity_view-og_membership' => 'entity_view-og_membership',
    'entity_view-taxonomy_term' => 'entity_view-taxonomy_term',
    'entity_view-user' => 'entity_view-user',
    'views-og_members' => 'views-og_members',
    'views-og_nodes' => 'views-og_nodes',
    'views-og_user_groups' => 'views-og_user_groups',
    'views-og_all_user_group_content' => 'views-og_all_user_group_content',
    'views-og_members_admin' => 'views-og_members_admin',
    'views_panes-og_members-panel_pane_1' => 'views_panes-og_members-panel_pane_1',
    'views_panes-og_nodes-panel_pane_1' => 'views_panes-og_nodes-panel_pane_1',
    'views_panes-og_user_groups-panel_pane_1' => 'views_panes-og_user_groups-panel_pane_1',
    'views_panes-og_all_user_group_content-panel_pane_1' => 'views_panes-og_all_user_group_content-panel_pane_1',
  );
  $export['panels_page_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_page_default';
  $strongarm->value = array(
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_field' => 'entity_field',
    'entity_field_extra' => 'entity_field_extra',
    'custom' => 'custom',
    'block' => 'block',
    'entity_view' => 'entity_view',
    'panels_mini' => 'panels_mini',
    'views' => 'views',
    'views_panes' => 'views_panes',
    'other' => 'other',
  );
  $export['panels_page_default'] = $strongarm;

  return $export;
}
