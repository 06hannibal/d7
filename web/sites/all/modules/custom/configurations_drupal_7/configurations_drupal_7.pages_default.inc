<?php
/**
 * @file
 * configurations_drupal_7.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function configurations_drupal_7_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'watch_genres';
  $page->task = 'page';
  $page->admin_title = 'Watch genres';
  $page->admin_description = '';
  $page->path = 'watch-gen';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Watch genres Panels',
    'name' => 'navigation',
    'weight' => '6',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_watch_genres__panel';
  $handler->task = 'page';
  $handler->subtask = 'watch_genres';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Watch genres Panels';
  $display->uuid = '179795fb-af72-4b77-8554-70e4343aaef3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_watch_genres__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-783fd678-dc82-4b12-959a-aa367b2732c5';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'watch_genres';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '783fd678-dc82-4b12-959a-aa367b2732c5';
  $display->content['new-783fd678-dc82-4b12-959a-aa367b2732c5'] = $pane;
  $display->panels['center'][0] = 'new-783fd678-dc82-4b12-959a-aa367b2732c5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-783fd678-dc82-4b12-959a-aa367b2732c5';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['watch_genres'] = $page;

  return $pages;

}
