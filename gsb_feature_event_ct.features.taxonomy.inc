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
    'discipline' => array(
      'name' => 'Discipline',
      'machine_name' => 'discipline',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
