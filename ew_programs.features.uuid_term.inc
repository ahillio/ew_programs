<?php
/**
 * @file
 * ew_programs.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ew_programs_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Special',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '21a0dbde-d0f9-408f-a9c9-867d791f1062',
    'vocabulary_machine_name' => 'program_type',
  );
  $terms[] = array(
    'name' => 'After School',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '21c34f55-9ce8-45a6-8125-31bccc8c5007',
    'vocabulary_machine_name' => 'program_type',
    'parent' => array(
      0 => 'd0fe19d0-3650-429f-aa69-8b5b83b40a01',
    ),
  );
  $terms[] = array(
    'name' => 'Day Program',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '40acd2ba-17e4-41a4-a9b3-9b96f65f9ac9',
    'vocabulary_machine_name' => 'program_type',
    'parent' => array(
      0 => 'd0fe19d0-3650-429f-aa69-8b5b83b40a01',
    ),
  );
  $terms[] = array(
    'name' => 'EarthWalk Institute',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '510e5e97-2898-42f9-ba1d-199e1a52ff5e',
    'vocabulary_machine_name' => 'program_type',
  );
  $terms[] = array(
    'name' => 'Summer Camps',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8db16386-683a-4f2e-9064-9f4078e43d38',
    'vocabulary_machine_name' => 'program_type',
    'parent' => array(
      0 => 'ff14290e-c1cc-48b7-b378-2d0a2e9ae673',
    ),
  );
  $terms[] = array(
    'name' => 'School Year',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd0fe19d0-3650-429f-aa69-8b5b83b40a01',
    'vocabulary_machine_name' => 'program_type',
    'parent' => array(
      0 => 'ff14290e-c1cc-48b7-b378-2d0a2e9ae673',
    ),
  );
  $terms[] = array(
    'name' => 'Youth',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => 'ff14290e-c1cc-48b7-b378-2d0a2e9ae673',
    'vocabulary_machine_name' => 'program_type',
  );
  return $terms;
}
