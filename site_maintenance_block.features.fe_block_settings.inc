<?php
/**
 * @file
 * site_maintenance_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function site_maintenance_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-site_under_maintenance'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'site_under_maintenance',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'site_maintenance',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Site under maintenance',
    'visibility' => 1,
  );

  return $export;
}
