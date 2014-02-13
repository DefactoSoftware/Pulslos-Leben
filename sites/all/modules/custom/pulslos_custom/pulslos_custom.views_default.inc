<?php

/**
 * Implements hook_views_default_views().
 */
function pulslos_custom_views_default_views() {

	//Declare views
	if(!isset($views)) {
		$views = array();
	}
 
	//scan views directory
	$files = file_scan_directory(drupal_get_path('module', 'pulslos_custom'). '/views', '/view\..*\.inc$/');

    //loop trough files
	foreach ($files as $file) {

		$filename = 'views/' . $file->filename;

		//include file
		if((include $filename)) {

			//add view to views array
			if (isset($view)) {
				$views[$view->name] = $view;

				//debug info
				$message = 'Added view: %viewname';
			    $variables = array(
			      '%viewname' => $view->name,
			    );
			    watchdog('pulslos_custom', $message, $variables, WATCHDOG_DEBUG);
			}
		}
	}

	return $views;
}

?>