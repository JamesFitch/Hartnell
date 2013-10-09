<?php
/**
 * @file
 * ct_external_resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_external_resource_taxonomy_default_vocabularies() {
  return array(
    'resource_type' => array(
      'name' => 'Resource Type',
      'machine_name' => 'resource_type',
      'description' => 'For the External Resource content type',
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
