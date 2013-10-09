<?php
/**
 * @file
 * ct_file.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_file_taxonomy_default_vocabularies() {
  return array(
    'document_type' => array(
      'name' => 'Document Type',
      'machine_name' => 'document_type',
      'description' => 'For the File content type - rfp, financial report, etc.',
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
