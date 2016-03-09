(function ($) {

/**
 * Responds to display on finder toggling.
 */
Drupal.behaviors.gsbProgramInstance = {
  attach: function (context) {

    var self = this;

    // Loop thru each of the display-on-finder-data spans

    $('span.display-on-finder-data').each(function() {
      var nid = $(this).attr('data-nid');
      var checked = 'checked';
      if ($(this).attr('data-display-finder') == 0) {
        checked = '';
      }
      $checkbox = $('<input type="checkbox" class="gsb-program-instance-ct-display-on-finder"' + 'data-nid="' + nid + '"' + checked + ' />');
      $checkbox.click(function() {
        // Call post to update the display on finder for the program instance
        var checked = $(this).is(':checked') ? 'true' : 'false';
        $.post(Drupal.settings.basePath + 'gsb-feature-program-instance-ct/display-on-finder-update/node/' +  $(this).data('nid'), {display_on_finder: checked});
        self.throbDaThrobber(this);
      });

      // Append a display-finder checkbox for each display-on-finder-data span
      if($(this).siblings().length == 0) {
        self.createThrobber(this);
      }
    });

    // Loop thru each of the application-open-data spans

    $('span.application-open-data').each(function() {
      var nid = $(this).attr('data-nid');
      var checked = 'checked';
      if ($(this).attr('data-application-open') == 0) {
        checked = '';
      }
      $checkbox = $('<input type="checkbox" class="gsb-program-instance-ct-application-open"' + 'data-nid="' + nid + '"' + checked + ' />');
      $checkbox.click(function() {
        // Call post to update the application open  for the program instance
        var checked = $(this).is(':checked') ? 'true' : 'false';
        $.post(Drupal.settings.basePath + 'gsb-feature-program-instance-ct/application-open-update/node/' +  $(this).data('nid'), {application_open: checked});
        self.throbDaThrobber(this);
      });

      // Append a application-open checkbox for each application-open-data span
      if($(this).siblings().length == 0) {
        self.createThrobber(this);
      }
    });

  },

  createThrobber: function(element) {
    $(element).parent().append($checkbox);
    var $throbber = $('<div class="ajax-progress ajax-progress-throbber"><div class="throbber">&nbsp;</div></div>');
    $('.throbber', $throbber).after('<div class="message">' + 'Updating...' + '</div>');
    $(element).parent().append($throbber);
    $throbber.hide();
  },

  throbDaThrobber: function(element) {
    $(element).siblings('.ajax-progress').show();
    $(element).siblings('.ajax-progress').fadeOut();
  }

};

/**
 * Process the response from updating the display on finder.
 */
Drupal.ajax.prototype.commands.gsb_feature_program_instance_ct_update_display_on_finder_result = function (ajax, response, status) {
};

/**
 * Process the response from updating the application open.
 */
Drupal.ajax.prototype.commands.gsb_feature_program_instance_ct_update_application_open_result = function (ajax, response, status) {
};

}(jQuery));
