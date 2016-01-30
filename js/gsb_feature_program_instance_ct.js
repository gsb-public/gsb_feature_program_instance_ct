(function ($) {

/**
 * Responds to display on finder toggling.
 */
Drupal.behaviors.gsbProgramInstance = {
  attach: function (context) {

    $(context).find('.gsb-program-instance-ct-display-on-finder').once(function () {

      var $element = $(this);

      // Create a new Drupal.ajax object that responds to the
      // gsb_program_instance_display_on_finder_change event.
      var ajax = new Drupal.ajax(false, $element, {
        event: 'gsb_program_instance_display_on_finder_change',
        url: Drupal.settings.basePath + 'gsb-feature-program-instance-ct/display-on-finder-update/node/' + $element.data('nid')
      });

      // When the element is changed, store the new value in the ajax data and
      // trigger the event.
      $element.change(function () {
        ajax.options.data.display_on_finder = $(this).is(':checked');
        $(ajax.element).trigger('gsb_program_instance_display_on_finder_change');
      });

    });

    $(context).find('.gsb-program-instance-ct-application-open').once(function () {

      var $element = $(this);

      // Create a new Drupal.ajax object that responds to the
      // gsb_program_instance_application_change event.
      var ajax = new Drupal.ajax(false, $element, {
        event: 'gsb_program_instance_application_change',
        url: Drupal.settings.basePath + 'gsb-feature-program-instance-ct/application-open-update/node/' + $element.data('nid')
      });

      // When the element is changed, store the new value in the ajax data and
      // trigger the event.
      $element.change(function () {
        ajax.options.data.application_open = $(this).is(':checked');
        $(ajax.element).trigger('gsb_program_instance_application_change');
      });

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
