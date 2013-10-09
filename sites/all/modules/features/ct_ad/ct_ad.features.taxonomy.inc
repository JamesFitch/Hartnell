<?php
/**
 * @file
 * ct_ad.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ct_ad_taxonomy_default_vocabularies() {
  return array(
    'promo' => array(
      'name' => 'Promotion Type',
      'machine_name' => 'promo',
      'description' => 'Promotion Types applies to Promo Content Type',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '1',
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
