<!-- <h1>Add a new Service</h1> -->
<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
	<div class="large-12">
	<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="row <?php print $classes;?> clearfix">

	  <?php if (isset($title_suffix['contextual_links'])): ?>
	  <?php print render($title_suffix['contextual_links']); ?>
	  <?php endif; ?>

	  <?php print $ds_content; ?>
	</<?php print $ds_content_wrapper ?>>

	<?php if (!empty($drupal_render_children)): ?>
	  <?php print $drupal_render_children ?>
	<?php endif; ?>
	</div>
