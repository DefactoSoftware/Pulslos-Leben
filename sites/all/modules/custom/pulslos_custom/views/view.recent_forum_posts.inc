<?php
$view = new view();
$view->name = 'recent_forum_posts';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'comment';
$view->human_name = 'Recent forum posts';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recent forum posts';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '2';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'comment';
$handler->display->display_options['row_options']['links'] = FALSE;
/* Header: Global: Unfiltered text */
$handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['table'] = 'views';
$handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['header']['area_text_custom']['content'] = 'Aus der community';
/* Relationship: Comment: Content */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'comment';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
$handler->display->display_options['relationships']['nid']['required'] = TRUE;
/* Field: Comment: Title */
$handler->display->display_options['fields']['subject']['id'] = 'subject';
$handler->display->display_options['fields']['subject']['table'] = 'comment';
$handler->display->display_options['fields']['subject']['field'] = 'subject';
$handler->display->display_options['fields']['subject']['label'] = '';
$handler->display->display_options['fields']['subject']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['subject']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Comment: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'comment';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status_node']['id'] = 'status_node';
$handler->display->display_options['filters']['status_node']['table'] = 'node';
$handler->display->display_options['filters']['status_node']['field'] = 'status';
$handler->display->display_options['filters']['status_node']['relationship'] = 'nid';
$handler->display->display_options['filters']['status_node']['value'] = 1;
$handler->display->display_options['filters']['status_node']['group'] = 1;
$handler->display->display_options['filters']['status_node']['expose']['operator'] = FALSE;

/* Display: Home */
$handler = $view->new_display('block', 'Home', 'block_home');

/* Display: Sidebar */
$handler = $view->new_display('block', 'Sidebar', 'block_sidebar');

$translatables['recent_forum_posts'] = array(
  t('Master'),
  t('Recent forum posts'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('From our community'),
  t('Content'),
  t('Home'),
  t('Sidebar'),
);
?>