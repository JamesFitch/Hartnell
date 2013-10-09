<?php
/**
 * @file
 * tax_news_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_news_type_taxonomy_default_vocabularies() {
  return array(
    'news_type' => array(
      'name' => 'News Type',
      'machine_name' => 'news_type',
      'description' => '"On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-2',
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
