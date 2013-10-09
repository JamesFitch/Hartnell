<?php
/**
 * @file
 * ct_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_faq_taxonomy_default_vocabularies() {
  return array(
    'faq_category' => array(
      'name' => 'FAQ',
      'machine_name' => 'faq_category',
      'description' => 'FAQ Taxonomy Category',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '2',
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
