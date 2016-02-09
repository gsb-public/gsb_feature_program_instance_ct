(function ($) {

/**
 * Handles changes to the Instance Date state.
 */
Drupal.behaviors.gsbProgramInstanceEdit = {
  attach: function (context) {

    $(context).find('input[name="field_instance_date_text_select[und]"]:radio').once(function () {
      var $element = $(this);
      $element.change(function () {
        $checked = $('input[type="radio"][name="field_instance_date_text_select[und]"]:checked');
        // Clear the Text input field if the 'Date' radio is checked
        if ($checked.val() == 'Date') {
          var instanceText = $.find('input[name="field_instance_text[und][0][value]"]')[0];
          $(instanceText).val('');
        }
        // Clear the Start and End Date input fields if the 'Text' radio is checked
        if ($checked.val() == 'Text') {
          var dateText1 = $.find('input[name="field_instance_date[und][0][value][date]"]')[0];
          var dateText2 = $.find('input[name="field_instance_date[und][0][value2][date]"]')[0];
          $(dateText1).val('');
          $(dateText2).val('');
        }
      });
    });

  }
};

}(jQuery));
