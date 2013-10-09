<?php
/**
 * @file
 * tax_site_section.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tax_site_section_taxonomy_default_vocabularies() {
  return array(
    'site_section' => array(
      'name' => 'Editorial Site Section',
      'machine_name' => 'site_section',
      'description' => 'Section of the site where this content belongs. Controls editorial access to creating and editing content (Workbench Access)',
      'hierarchy' => '1',
      'module' => 'tax_site_section',
      'weight' => '-1',
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
