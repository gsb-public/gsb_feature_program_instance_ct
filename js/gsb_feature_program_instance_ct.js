(function ($) {

/**
 * Responds to display on finder toggling.
 */
Drupal.behaviors.gsbProgramInstance = {
  attach: function (context) {

    // Remove any existing display-finder checkboxes

    $('input.gsb-program-instance-ct-display-on-finder').remove();

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
      });

      // Append a display-finder checkbox for each display-on-finder-data span
      $(this).parent().append($checkbox);
    });

    // Remove any existing application-open checkboxes

    $('input.gsb-program-instance-ct-application-open').remove();

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
      });

      // Append a application-open checkbox for each application-open-data span
      $(this).parent().append($checkbox);
    });

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
