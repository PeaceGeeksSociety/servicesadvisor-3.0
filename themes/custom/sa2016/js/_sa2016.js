/* Implement custom javascript here */
(function (window, document, $, Drupal) {
  Drupal.behaviors.activate_search_btn = {
    attach: function (context, settings) {
      $('#search-submit-custom').click(function(event){
        event.preventDefault();
        $('#edit-submit-services-advisor-dashboard').click();
      });
    }
  };
  Drupal.behaviors.formPrettify = {
    //flips all right classes with left
    attach: function (context, settings) {
      $('.add-to-dropbox.form-submit').addClass('right');
      $('#edit-actions #edit-submit').removeClass('secondary').addClass('success');
    }
  };
  Drupal.behaviors.rtlClassSupport = {
    //flips all right classes with left
    attach: function (context, settings) {
      if($('html').attr('dir') === 'rtl'){
        $('html').addClass('rtl-session');
        $('html .left').addClass('tag-left');
        $('html .right').removeClass('right').addClass('left');
        $('html .tag-left').removeClass('left').addClass('right');
        $('html select').addClass('chosen-rtl');
        $('.f-dropdown').css('left','9999px');
        var y = $(window).scrollTop();  //your current y position on the page
        $(window).scrollTop(y+1);
      }
    }
  };
  // lang-outdated
  Drupal.behaviors.langOutdated = {
    //flips all right classes with left
    attach: function (context, settings) {
      $item = $('.lang-outdated');
      if($item.length > 0){
        $item.each(function(){
          $(this).prepend('<i class="fi-alert"></i>');
        });
      }
    }
  };
  Drupal.behaviors.addClassActive = {
    attach: function (context, settings) {
      $('.language-list-item ').each(function(){
        if($(this).find('a').hasClass('active')){
          $(this).addClass('active');
        }
      });
    }
  };
  Drupal.behaviors.chosenTrigger = {
    attach: function (context, settings) {
      $('html', context).once('chosenTrigger', function () {
        $('#edit-organization , #edit-coverage , #edit-services-provided, #edit-intake-criteria , #edit-accessibility , #edit-sa-loc-tid, #edit-coverage , #edit-nationality, #edit-partner-type, #edit-expired-1, #edit-expired-2').on('change', function(evt, params) {
          setTimeout(function(){
            $('#search-submit-custom').click();
          }, 300);
        });
      });
    }
  };
  //Clean up "---term" ---> "--- term" for edit-services-provided
  Drupal.behaviors.termCleanUp = {
    attach: function (context, settings) {
      var $terms = $('#edit-services-provided option', context);
      var regExDash = /(\-{1,})/;
      cleanStr = function(str) { return  str.replace(regExDash, '$1 '); } ;
      $terms.each(function(){
        $(this).text(cleanStr($(this).text()));
      });
      //reset chosen select
      $('#edit-services-provided', context).trigger('chosen:updated');
    }
  };
  Drupal.behaviors.ShowAll = {
    attach: function (context, settings) {
      $('html').removeClass('hidden');
    }
  };
})(window, document, jQuery, Drupal);
