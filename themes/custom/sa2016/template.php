<?php

/**
 * Implements template_preprocess_html().
 */
// function sa2016_preprocess_html(&$variables) {
//   dpm($variables);
// }
// function sa2016_phptemplate_variables(&$variables) {
//   dpm($variables);
//
// }

/**
 * Implements template_preprocess_page.
 */
// function sa2016_preprocess_page(&$variables) {
//   dpm($variables);
// }

/**
 * Implements template_preprocess_node.
 */
// function sa2016_preprocess_node_edit(&$variables) {
//
// }

//alter the secondary form output
function sa2016_links__system_secondary_menu($variables) {
	$output = '';
	foreach($variables['links'] as $menu => $item) {
		$title = $item['title'];
		$href = $item['href'];
		$output .= '<li>'.l($title, $href).'</li>';
	}
	return $output;

}
function sa2016_menu_tree__menu_footermenu($variables) {
    // Change id of menu ul
    return '<ul class="inline-list">' . $variables['tree'] . '</ul>';
}

//language block
function sa2016_links__locale_block(&$vars) {
	// global $language ;
	global $language_content;
	//calling the global lang variable cause a bug in the theme function rendering the dir and lang attributes on html element.
  // an array of list items
	// $def_lang = variable_get('language_default');
  $items = array();
	$output = '<nav id="secondary-menu" class="navigation" role="navigation">';
	$output .= '<button href="#" data-dropdown="drop2" aria-controls="drop2" aria-expanded="false" class="button small lang-select dropdown">'.$language_content->name.'</button><br>';
  foreach($vars['links'] as $language => $info) {
		$name     = $info['language']->native;
		$href     = isset($info['href']) ? $info['href'] : '';
		$li_classes   = array('language-list-item');
		// $link_classes = array('link-class1', 'link-class2');
		//$options = array('attributes' => array('class'    => $link_classes), 'language' => $info['language'], 'html' => true );
		$options = array('language' => $info['language'], 'html' => true );
		$link = l($name, $href, $options);
		// display only translated links
		if ($href) $items[] = array('data' => $link, 'class' => $li_classes);
	  }
	  // output
	  $attributes = array('class' => array('f-dropdown'), 'id' => 'drop2', 'data-dropdown-content', 'aria-hidden' => 'true');   
	  $output .= theme_item_list(array('items' => $items, 'title' => '', 'type'  => 'ul', 'attributes' => $attributes)).'</nav>';
	  return $output;
}

//Hook Breadcrumb
function sa2016_breadcrumb($variables) {
	$node = menu_get_object();
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $breadcrumbs = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $breadcrumbs .= '<ul class="breadcrumbs">';

    foreach ($breadcrumb as $value) {
      $breadcrumbs .= '<li>' . $value . '</li>';
    }
		if($node->type == 'service_location' and isset($node->og_group_ref['und'][0]['entity'])){
			$ogTitle = $node->og_group_ref['und'][0]['entity']->title;
			$ogNid = $node->og_group_ref['und'][0]['entity']->nid;
 	    $breadcrumbs .= '<li><a href="/node/'. $ogNid. '">' . $ogTitle . '</a></li>';
		}
    $title = strip_tags(drupal_get_title());
    $breadcrumbs .= '<li class="current"><a href="#">' . $title . '</a></li>';
    $breadcrumbs .= '</ul>';
		
    return $breadcrumbs;
  }
}


//Hook theme links
function sa2016_links($variables) {
  $links = $variables['links'];
 
  //Need to take out the arabic/english lang switcher link and leave out the print icon
  if(isset($links['translation_ar'])){
    unset($links['translation_ar']);
  }
  if(isset($links['translation_en'])){
    unset($links['translation_en']);
  }
  
  $attributes = $variables['attributes'];
  $heading = $variables['heading'];
  global $language_url;
  $output = '';
	// dpm($links[$language_url->language]['#suffix']);
	

  if (count($links) > 0) {
    // Treat the heading first if it is present to prepend it to the
    // list of links.
    if (!empty($heading)) {
      if (is_string($heading)) {
        // Prepare the array that will be used when the passed heading
        // is a string.
        $heading = array(
          'text' => $heading,
          // Set the default level of the heading.
          'level' => 'h2',
        );
      }
      $output .= '<' . $heading['level'];
      if (!empty($heading['class'])) {
        $output .= drupal_attributes(array('class' => $heading['class']));
      }
      $output .= '>' . check_plain($heading['text']) . '</' . $heading['level'] . '>';
    }

    $output .= '<ul' . drupal_attributes($attributes) . '>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = array($key);

      // Add first, last and active classes to the list of links to help out
      // themers.
      if ($i == 1) {
        $class[] = 'first';
      }
      if ($i == $num_links) {
        $class[] = 'last';
      }
      if (isset($link['href']) && ($link['href'] == $_GET['q'] || ($link['href'] == '<front>' && drupal_is_front_page()))
         && (empty($link['language']) || $link['language']->language == $language_url->language)) {
        $class[] = 'active';
      }
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';
			if(isset($link['#prefix'])) {
				$output .= $link['#prefix'] ;
			}
      if (isset($link['href'])) {
        // Pass in $link as $options, they share the same keys.
        $output .= l($link['title'], $link['href'], $link);
      }
      elseif (!empty($link['title'])) {
        // Some links are actually not links, but we wrap these in <span> for
        // adding title and class attributes.
        if (empty($link['html'])) {
          $link['title'] = check_plain($link['title']);
        }
        $span_attributes = '';
        if (isset($link['attributes'])) {
          $span_attributes = drupal_attributes($link['attributes']);
        }
        $output .= '<span' . $span_attributes . '>' . $link['title'] . '</span>';
      }
      if(isset($link['#suffix'])){
        $output .= $link['#suffix'];
      }
      
      $i++;
      $output .= "</li>\n";
    }
    $output .= '</ul>';
  }

  return $output;
}

/**
 * Theme a feed link.
 *
 * This theme function uses the theme pattern system to allow it to be
 * overidden in a more specific manner. The options for overiding this include
 * providing per display id; per type; per display id and per type.
 *
 * e.g.
 * For the view "export_test" with the display "page_1" and the type "csv" you
 * would have the following options.
 *   views_data_export_feed_icon__export_test__page_1__csv
 *   views_data_export_feed_icon__export_test__page_1
 *   views_data_export_feed_icon__export_test__csv
 *   views_data_export_feed_icon__page_1__csv
 *   views_data_export_feed_icon__page_1
 *   views_data_export_feed_icon__csv
 *   views_data_export_feed_icon
 *
 * @ingroup themeable
 *
 * @see theme_views_data_export_feed_icon
 */
function sa2016_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);

  $url_options = array('attributes' => array(
    'class' => 'right button tiny alert'
  ));

  if ($query) {
    $url_options['query'] = $query;
  }

  return l($text, $url, $url_options);
}
