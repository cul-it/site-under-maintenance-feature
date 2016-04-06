<?php
/**
 * @file
 * site_maintenance_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function site_maintenance_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Site under maintenance';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'site_under_maintenance';
  $fe_block_boxes->body = '<div style="background-color:yellow"><h2><strong>Please postpone updates during site maintenance.</strong></h2></div>';

  $export['site_under_maintenance'] = $fe_block_boxes;

  return $export;
}
