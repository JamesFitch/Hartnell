<?php
/**
 * @file
 * tax_sport.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_sport_taxonomy_default_vocabularies() {
  return array(
    'sport' => array(
      'name' => 'Athletic Teams',
      'machine_name' => 'sport',
      'description' => 'Optionally applies to news, events and people.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
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
