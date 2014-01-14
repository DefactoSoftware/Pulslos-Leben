<!-- page.tpl.php-->

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

<div class="slider">
  <div class="slider-content">
    <?php if($page['slider']): ?>
        <?php print render($page['slider']); ?>
    <?php endif; ?>
  </div>
</div>

<div class="block community">
  <h2>Aus der community</h2>
  
  <div class="item">
    <h3>Frage zu Kunstherz</h3>
    <p class="submitted">Von <b>Markus Muller</b> in <b>Technische Fragen</b> am 18/7/2013</p>
    <p>Guten Morgen liebe leser, seit einiger zeit hat eind arbeitskollege von mir ein kunstherz und heute morgen haben wir uber folgendes problem gesprochen: Wir... <a href="#">mehr lesen</a></p>
  </div>
  
  <div class="item">
    <h3>Frage zu Kunstherz</h3>
    <p class="submitted">Von <b>Markus Muller</b> in <b>Technische Fragen</b> am 18/7/2013</p>
    <p>Guten Morgen liebe leser, seit einiger zeit hat eind arbeitskollege von mir ein kunstherz und heute morgen haben wir uber folgendes problem gesprochen: Wir... <a href="#">mehr lesen</a></p>
  </div>
  
  <div class="item">
    <h3>Frage zu Kunstherz</h3>
    <p class="submitted">Von <b>Markus Muller</b> in <b>Technische Fragen</b> am 18/7/2013</p>
    <p>Guten Morgen liebe leser, seit einiger zeit hat eind arbeitskollege von mir ein kunstherz und heute morgen haben wir uber folgendes problem gesprochen: Wir... <a href="#">mehr lesen</a></p>
  </div>
</div>

<div class="block current">
  <h2>Aktuelles & Projekte</h2>
  
<?php if($page['sidebar_first']): ?>
        <?php print render($page['sidebar_first']); ?>
    <?php endif; ?>


<!--
  <div class="item">
    <h3>Was ist ein Kunstherz?</h3>
    <p class="submitted">Von <b>Christian Axel</b> am 18/7/2013</p>
    <p>Ein kunstherz ist eine mechanische pumpe, welche bei herzversagen z.b. einer schweren herzinsuffizienz das herz understutzt, indem es blut in den groBen... <a href="#">mehr lesen</a></p>
  </div>
  
  <div class="item">
    <h3>Was ist ein Kunstherz?</h3>
    <p class="submitted">Von <b>Christian Axel</b> am 18/7/2013</p>
    <p>Ein kunstherz ist eine mechanische pumpe, welche bei herzversagen z.b. einer schweren herzinsuffizienz das herz understutzt, indem es blut in den groBen... <a href="#">mehr lesen</a></p>
  </div>
  
  <div class="item">
    <h3>Was ist ein Kunstherz?</h3>
    <p class="submitted">Von <b>Christian Axel</b> am 18/7/2013</p>
    <p>Ein kunstherz ist eine mechanische pumpe, welche bei herzversagen z.b. einer schweren herzinsuffizienz das herz understutzt, indem es blut in den groBen... <a href="#">mehr lesen</a></p>
  </div>-->
</div>

<div class="bottom">
  <h2>Sponsoren & Partner</h2>
  
  <a href="http://www.mh-hannover.de/" target="_blank"><img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-mhh.png" width="155" height="37" /></a>
  <a href="http://www.defacto.nl/" target="_blank"><img src="<?php echo base_path() . drupal_get_path('theme', 'pulslosleben') . '/images/'; ?>logo-defacto.png" width="133" height="25" /></a>
</div>