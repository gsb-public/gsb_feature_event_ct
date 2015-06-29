<?php
/**
 * @file
 * gsb_feature_event_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_event_ct_taxonomy_default_vocabularies() {
  return array(
    'event_attendance_statement' => array(
      'name' => 'Event Attendance Statement',
      'machine_name' => 'event_attendance_statement',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
