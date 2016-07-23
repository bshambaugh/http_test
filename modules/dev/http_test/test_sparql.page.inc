<?php


//$library = libraries_detect('easyrdf');


/**
 * Making a SPARQL SELECT query
 *
 * This example creates a new SPARQL client, pointing at the
 * dbpedia.org endpoint. It then makes a SELECT query that
 * returns all of the countries in DBpedia along with an
 * english label.
 *
 * Note how the namespace prefix declarations are automatically
 * added to the query.
 *
 * @package    EasyRdf
 * @copyright  Copyright (c) 2009-2013 Nicholas J Humfrey
 * @license    http://unlicense.org/
 */

/*
set_include_path(get_include_path() . PATH_SEPARATOR . '../../../libraries/easyrdf-0.9.0/lib/');
require_once "../../../libraries/easyrdf-0.9.0/lib/EasyRdf.php";
//  require_once "../html_tag_helpers.php";
// Setup some additional prefixes for the Drupal Site
EasyRdf_Namespace::set('schema', 'http://schema.org/');
EasyRdf_Namespace::set('content', 'http://purl.org/rss/1.0/modules/content/');
EasyRdf_Namespace::set('dc', 'http://purl.org/dc/terms/');
EasyRdf_Namespace::set('foaf', 'http://xmlns.com/foaf/0.1/');
EasyRdf_Namespace::set('og', 'http://ogp.me/ns#');
EasyRdf_Namespace::set('rdfs', 'http://www.w3.org/2000/01/rdf-schema#');
EasyRdf_Namespace::set('sioc', 'http://rdfs.org/sioc/ns#');
EasyRdf_Namespace::set('sioct', 'http://rdfs.org/sioc/types#');
EasyRdf_Namespace::set('skos', 'http://www.w3.org/2004/02/skos/core#');
EasyRdf_Namespace::set('xsd', 'http://www.w3.org/2001/XMLSchema#');
EasyRdf_Namespace::set('owl', 'http://www.w3.org/2002/07/owl#');
EasyRdf_Namespace::set('rdf', 'http://www.w3.org/1999/02/22-rdf-syntax-ns#');
EasyRdf_Namespace::set('rss', 'http://purl.org/rss/1.0/');
EasyRdf_Namespace::set('site', 'http://localhost/iksce/ns#');
$sparql = new EasyRdf_Sparql_Client('http://localhost:8080/marmotta/sparql/');
$rootcontainer = 'http://localhost:8080/marmotta/ldp';
$target_container = '';
*/

function test_sparql_get_page() {


if (($library = libraries_load('easyrdf')) && !empty($library['loaded'])) {
  // Do something with the library here.
//  return "hello";

$sparql = new EasyRdf_Sparql_Client('http://localhost:8080/marmotta/sparql/');


  $result = $sparql->query(
 '
  SELECT * WHERE {
  <http://localhost:8080/marmotta/ldp/NASA#137> ?property ?object
} 
 
');

/*
  $result = $sparql->query(
 'PREFIX dct: <http://purl.org/dc/terms/>
 PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
 PREFIX schema: <http://schema.org/>
 SELECT ?s { ?s ?p ?o . }
');
*/

 foreach ($result as $key => $value) {
    echo "$value->property"."\n";
 }

// return $result_taxpred;

   return "hello";
} else {

  return "jello";
}

/* 
  $result_taxpred = $sparql->query(
 'PREFIX dct: <http://purl.org/dc/terms/>
 PREFIX rdfs: <http://www.w3.org/2000/01/rdf-schema#>
 PREFIX schema: <http://schema.org/>
 SELECT * { ?s ?p ?o . }
');
*/

// return $result_taxpred;

//   return "hell";

//$path = libraries_get_path('easyrdf');

//return $path;

/*
$library = libraries_detect('easyrdf');
$version = $library['version'];

return $version;
*/
}


