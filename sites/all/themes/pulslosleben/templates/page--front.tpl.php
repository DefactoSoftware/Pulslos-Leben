<div id="header">
  <?php if ($logo): ?>
    <a class="site-logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>

  <?php if($page['header']): ?>
      <?php print render($page['header']); ?>
  <?php endif; ?>
</div>

<?php if($page['slider']): ?>
<div class="slider">
  <div class="slider-content">
        <?php print render($page['slider']); ?>
  </div>
</div>
<?php endif; ?>

<div class="block welcome">
  <?php print render($page['content']); ?>
</div>

<?php if($page['highlighted']): ?>
  <?php print render($page['highlighted']); ?>
<?php endif; ?>

<div class="bottom">
  <h2>Sponsoren &amp; Partner</h2>
  <a href="http://www.mh-hannover.de/" target="_blank"><img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-mhh.png" width="155" height="37" /></a>
  <a href="http://www.defacto.nl/de/" target="_blank"><img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-defacto.png" width="133" height="25" /></a>
</div>
