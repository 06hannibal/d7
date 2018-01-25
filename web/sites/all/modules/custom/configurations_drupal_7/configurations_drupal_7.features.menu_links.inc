<?php
/**
 * @file
 * configurations_drupal_7.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function configurations_drupal_7_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_film:film.
  $menu_links['main-menu_film:film'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'film',
    'router_path' => 'film',
    'link_title' => 'Film',
    'options' => array(
      'identifier' => 'main-menu_film:film',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_my-database:my_database/.
  $menu_links['main-menu_my-database:my_database/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my_database/',
    'router_path' => 'my_database/',
    'link_title' => 'my database',
    'options' => array(
      'identifier' => 'main-menu_my-database:my_database/',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: main-menu_reviews:reviews.
  $menu_links['main-menu_reviews:reviews'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'reviews',
    'router_path' => 'reviews',
    'link_title' => 'Reviews',
    'options' => array(
      'identifier' => 'main-menu_reviews:reviews',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 0,
  );
  // Exported menu link: main-menu_watch-genres:watch-gen.
  $menu_links['main-menu_watch-genres:watch-gen'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'watch-gen',
    'router_path' => 'watch-gen',
    'link_title' => 'Watch genres',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_watch-genres:watch-gen',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 6,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Film');
  t('Home');
  t('Reviews');
  t('Watch genres');
  t('my database');

  return $menu_links;
}
