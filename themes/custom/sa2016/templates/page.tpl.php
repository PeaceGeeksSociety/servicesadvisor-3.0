<!--.page -->
<div role="document" class="page">

  <!--.l-header -->
  <header role="banner" class="l-header">

    <!-- Title, slogan and menu -->
    <?php $alt_header = TRUE; ?>
    <?php if ($alt_header): ?>
      <section class="row">
        <?php if ($site_slogan): ?>
          <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>
          <!--.l-header-region -->
          <section class="l-header-region columns">
            <div class="row"> 
              <div class="small-12 medium-8 columns">
                <?php if ($site_name): ?>
                  <h1 id="site-name">
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                      <?php if ($logo_img): print $logo_img; endif; ?>
                      <span class="site-name"><?php print $site_name; ?></span>
                    </a>
                  </h1>
                <?php endif; ?>
              </div>
              <?php if ($alt_main_menu): ?>
              <div class="small-12 medium-6 columns">
                <nav id="main-menu" class="navigation" role="navigation">
                  <?php print ($alt_main_menu); ?>
                </nav> 
              </div>
              <?php endif; ?>
              <?php if ($alt_secondary_menu): ?>
                <?php if ($logged_in): ?>
                  <div class="small-12 medium-4 columns">
                  <?php print render($page['header']); ?>
                   
                  <button href="#" data-dropdown="drop1" aria-controls="drop1" aria-expanded="false" class="button small right user-logout dropdown">
                    <i class="fi-torso"></i><?php print $user->name; ?>
                  </button><br>
                <?php endif; ?>
                <ul id="drop1" data-dropdown-content class="f-dropdown" aria-hidden="true">
                  <?php print $alt_secondary_menu; ?>
                </ul>
                </div>
              <?php endif; ?>
            </div>
          </section>
          <!--/.l-header-region -->


      </section>
    <?php endif; ?>


  </header>
  <!--/.l-header -->

  <?php if (!empty($page['featured'])): ?>
    <!--.l-featured -->
    <section class="l-featured row">
      <div class="columns">
        <?php print render($page['featured']); ?>
      </div>
    </section>
    <!--/.l-featured -->
  <?php endif; ?>

  <?php if ($messages && !$zurb_foundation_messages_modal): ?>
    <!--.l-messages -->
    <section class="l-messages row">
      <div class="columns">
        <?php if ($messages): print $messages; endif; ?>
      </div>
    </section>
    <!--/.l-messages -->
  <?php endif; ?>

  <?php if (!empty($page['help'])): ?>
    <!--.l-help -->
    <section class="l-help row">
      <div class="columns">
        <?php print render($page['help']); ?>
      </div>
    </section>
    <!--/.l-help -->
  <?php endif; ?>

  <!--.l-main -->
  <main role="main" class="row l-main">
    <!-- .l-main region -->
    <div class="<?php print $main_grid; ?> main columns">
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlight panel callout">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <a id="main-content"></a>

      <?php if ($breadcrumb): print $breadcrumb; endif; ?>

      <?php if ($title): ?>
        <?php print render($title_prefix); ?>
        <h1 id="page-title" class="title"><?php print $title; ?></h1>
        <?php print render($title_suffix); ?>
      <?php endif; ?>

      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
        <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
      <?php endif; ?>

      <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
      <?php endif; ?>

      <?php print render($page['content']); ?>
    </div>
    <!--/.l-main region -->

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
        <?php print render($page['sidebar_first']); ?>
      </aside>
    <?php endif; ?>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
        <?php print render($page['sidebar_second']); ?>
      </aside>
    <?php endif; ?>
  </main>
  <!--/.l-main -->

  <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
    <!--.triptych-->
    <section class="l-triptych row">
      <div class="triptych-first medium-4 columns">
        <?php print render($page['triptych_first']); ?>
      </div>
      <div class="triptych-middle medium-4 columns">
        <?php print render($page['triptych_middle']); ?>
      </div>
      <div class="triptych-last medium-4 columns">
        <?php print render($page['triptych_last']); ?>
      </div>
    </section>
    <!--/.triptych -->
  <?php endif; ?>


  <!--.l-footer -->
  <footer class="l-footer  row" role="contentinfo">
    <?php if (!empty($page['footer'])): ?>
      <div class="column medium-12 footer-first">
        <div class="footer columns">
          <?php print render($page['footer']); ?>
        </div>
      </div>
    <?php endif; ?>

  </footer>
  <!--/.l-footer -->
  <!--.l-footer-under -->
  <footer class="l-footer-under panel row" role="contentinfo">

      <div class="column large-9 large-offset-1  footer-second">
        <div class="copyright ">
          &copy; <?php print date('Y') . ' Services Advisor'; ?>
        </div>
        <?php if (!empty($page['footer_under'])): ?>
              <?php print render($page['footer_under']); ?>
        <?php endif; ?>
      </div>
  </footer>
  <!--/.l-footer -->

  <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
</div>
<!--/.page -->
