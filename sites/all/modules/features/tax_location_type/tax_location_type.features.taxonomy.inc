<?php
/**
 * @file
 * tax_location_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_location_type_taxonomy_default_vocabularies() {
  return array(
    'location_type' => array(
      'name' => 'Location Type',
      'machine_name' => 'location_type',
      'description' => 'Values might include campus, building, office, lab, etc.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
