<?php
/**
 * @file
 * ew_programs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ew_programs_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'program' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function ew_programs_default_registration_type() {
  $items = array();
  $items['institute'] = entity_import('registration_type', '{
    "name" : "institute",
    "label" : "Institute",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['school_year_program'] = entity_import('registration_type', '{
    "name" : "school_year_program",
    "label" : "School Year Program",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  $items['summer_camp'] = entity_import('registration_type', '{
    "name" : "summer_camp",
    "label" : "Summer Camp",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
