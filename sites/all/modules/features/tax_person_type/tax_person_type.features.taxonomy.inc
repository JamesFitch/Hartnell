<?php
/**
 * @file
 * tax_person_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_person_type_taxonomy_default_vocabularies() {
  return array(
    'person_type' => array(
      'name' => 'Person Type',
      'machine_name' => 'person_type',
      'description' => 'Taxonomy for biographies of staff and student ahtletes and government',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-3',
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
