<?php
/**
 * @file
 * site_maintenance_block.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function site_maintenance_block_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Maintenance',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '0a7cd885-afc7-495f-aee3-40046ce92b3f',
  'type' => 'page',
  'language' => 'und',
  'created' => 1383167434,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09a40379-9766-4270-811f-a228e8b5c5bb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'This page is just to host the
\'Please postpone updates during site maintenance.\'
block when it\'s not in use.',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>This page is just to host the<br />
\'Please postpone updates during site maintenance.\'<br />
block when it\'s not in use.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'one',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-10-30 17:10:34 -0400',
);
  return $nodes;
}
