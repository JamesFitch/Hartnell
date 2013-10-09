<?php
/**
 * @file
 * tax_audience.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_audience_taxonomy_default_vocabularies() {
  return array(
    'audience' => array(
      'name' => 'Audience',
      'machine_name' => 'audience',
      'description' => 'This assists in populating landing pages for specific audience types, like different types of prospective students etc.',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-9',
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
