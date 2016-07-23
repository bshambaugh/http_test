<?php

function http_test_get_page() {
 // return "This is an http get";
  $options = array(
         'method' => 'GET',
         'headers' => array('Accept' => 'text/turtle')
         );
  $response = drupal_http_request('http://localhost:8080/marmotta/ldp/NASA#137',$options);
  $string = $response->data;
  $string_two = preg_replace('/[<>]/','',$string);
  return $string_two;
}
