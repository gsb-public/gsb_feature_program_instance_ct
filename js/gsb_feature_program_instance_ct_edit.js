(function ($) {

/**
 * Handles changes to the Instance Date state.
 */
Drupal.behaviors.gsbProgramInstanceEdit = {
  attach: function (context) {

    //debugger;

    var groupMainTabs = $('.group-main-vtab');

    var activeTab = $(groupMainTabs).find('#active-vertical-tab');

    if (activeTab.length !== 0) {
      activeTab = $(activeTab)[0];
      var activeTabText = $(activeTab).parent().text();
      if (activeTabText === "Faculty Directors(active tab)") {
        setupFaculty("field-faculty-directors", "field_faculty_directors");
      }
      if (activeTabText === "Faculty 1(active tab)") {
        setupFaculty("field-faculty-1", "field_faculty_1");
      }
      if (activeTabText === "Faculty 2(active tab)") {
        setupFaculty("field-faculty-2", "field_faculty_2");
      }
      if (activeTabText === "Guest Speakers and Advisors(active tab)") {
        setupFaculty("field-guest-speakers-advisors-fc", "field_guest_speakers_advisors_fc");
      }
    }

    var vertTabButtons = $(groupMainTabs).find('.vertical-tab-button');

    for (var index = 0; index < vertTabButtons.length; index++) {
      var buttonAnchor = $(vertTabButtons[index]).find('a');
      $(buttonAnchor).on("click", function() {
        var activeTabText = $(this).text();
        if (activeTabText === "Faculty Directors(active tab)") {
          setupFaculty("field-faculty-directors", "field_faculty_directors");
        }
        if (activeTabText === "Faculty 1(active tab)") {
          setupFaculty("field-faculty-1", "field_faculty_1");
        }
        if (activeTabText === "Faculty 2(active tab)") {
          setupFaculty("field-faculty-2", "field_faculty_2");
        }
        if (activeTabText === "Guest Speakers and Advisors(active tab)") {
          setupFaculty("field-guest-speakers-advisors-fc", "field_guest_speakers_advisors_fc");
        }
      });
    }

  }

};

function findRowIndex(facultyRows, radioName, itemIndex) {

  for (var rowIndex = 0; rowIndex < facultyRows.length; rowIndex++) {

    var facultyItem = $(facultyRows)[rowIndex];

    if (!$(facultyItem).hasClass('draggable')) {
      continue;
    }

    var facultyOrOther = $(facultyItem).find(".field-name-field-faculty-or-other");

    var rbGroup = $(facultyOrOther).find(':input[name="' + radioName + '[und][' + itemIndex + '][field_faculty_or_other][und]"]');

    if (parseInt($(rbGroup).attr("data-item-index")) === parseInt(itemIndex)) {
      break;
    }

  }

  return rowIndex;
}

function findDirectorRowIndex(facultyRows, itemIndex) {

  for (var rowIndex = 0; rowIndex < facultyRows.length; rowIndex++) {

    var facultyItem = $(facultyRows)[rowIndex];

    if (!$(facultyItem).hasClass('draggable')) {
      continue;
    }

    var facultyDirectorTitle = $(facultyItem).find(".field-name-field-faculty-director-title");
    var rbDirectorTitleGroup = $(facultyDirectorTitle).find(':input[name="' + "field_faculty_directors" + '[und][' + itemIndex + '][field_faculty_director_title][und]"]');

    if (parseInt($(rbDirectorTitleGroup).attr("data-item-index")) === parseInt(itemIndex)) {
      break;
    }

  }

  return rowIndex;
}

function toogleFacultyDisplay(facultyRows, radioName, itemIndex) {

  var rowIndex = findRowIndex(facultyRows, radioName, itemIndex);

  var facultyItem = $(facultyRows)[rowIndex];

  var facultyOrOther = $(facultyItem).find(".field-name-field-faculty-or-other");
  var facultyNameDiv = $(facultyItem).find(".field-name-field-person-fac-single-ref");
  var otherNameDiv = $(facultyItem).find(".field-name-field-other-name");
  var photoDiv = $(facultyItem).find(".field-name-field-image-single-public");
  var urlDiv = $(facultyItem).find(".field-name-field-link-single");
  var academicTitleDiv = $(facultyItem).find(".field-name-field-academic-title");

  var rbChecked = $(facultyItem).find(':input[name="' + radioName + '[und][' + itemIndex + '][field_faculty_or_other][und]"]:checked');

  if ($(rbChecked).val() === "UseEntityReference") {
    $(otherNameDiv).hide();
    $(photoDiv).hide();
    $(urlDiv).hide();
    $(academicTitleDiv).hide();
    $(facultyNameDiv).show();
  }
  else {
    $(otherNameDiv).show();
    $(photoDiv).show();
    $(urlDiv).show();
    $(academicTitleDiv).show();
    $(facultyNameDiv).hide();
  }

}

function toogleDirectorTitle(facultyRows, itemIndex) {

  var rowIndex = findDirectorRowIndex(facultyRows, itemIndex);

  var facultyItem = $(facultyRows)[rowIndex];

  var facultyDirectorTitle = $(facultyItem).find(".field-name-field-faculty-director-title");
  var title = $(facultyItem).find(".field-name-field-director-title-other");

  var rbDirectorChecked = $(facultyDirectorTitle).find(':input[name="' + "field_faculty_directors" + '[und][' + itemIndex + '][field_faculty_director_title][und]"]:checked');

  if ($(rbDirectorChecked).val() === "Other") {
    $(title).show();
  }
  else {
    $(title).hide();
  }

}

function setupFaculty(fieldName, radioName) {

  var facultyField = $(".field-name-" + fieldName);

  var facultyTable = $(facultyField).find('table');

  var facultyRows = $(facultyTable).find("tr");

  var itemIndex = 0;

  for (var rowIndex = 0; rowIndex < facultyRows.length; rowIndex++) {

    var facultyItem = $(facultyRows)[rowIndex];

    if (!$(facultyItem).hasClass('draggable')) {
      continue;
    }

    var facultyOrOther = $(facultyItem).find(".field-name-field-faculty-or-other");

    var rbGroup = $(facultyOrOther).find(':input[name="' + radioName + '[und][' + itemIndex + '][field_faculty_or_other][und]"]');

    if ($(rbGroup).length > 0 && $(rbGroup).attr("data-item-index") === undefined) {

      $(rbGroup).attr("data-item-index", itemIndex);
      toogleFacultyDisplay(facultyRows, radioName, itemIndex);

      $(rbGroup).on("change", function () {
        toogleFacultyDisplay(facultyRows, radioName, $(this).attr("data-item-index"));
      });

    }
    else {
      toogleFacultyDisplay(facultyRows, radioName, itemIndex);
    }

    var facultyDirectorTitle = $(facultyItem).find(".field-name-field-faculty-director-title");
    if (facultyDirectorTitle.length > 0 ) {

      var rbDirectorTitleGroup = $(facultyDirectorTitle).find(':input[name="' + "field_faculty_directors" + '[und][' + itemIndex + '][field_faculty_director_title][und]"]');

      if ($(rbDirectorTitleGroup).length > 0 && $(rbDirectorTitleGroup).attr("data-item-index") === undefined) {

        $(rbDirectorTitleGroup).attr("data-item-index", itemIndex);
        toogleDirectorTitle(facultyRows, itemIndex);

        $(rbDirectorTitleGroup).on("change", function () {
          toogleDirectorTitle(facultyRows, $(this).attr("data-item-index"));
        });

      }
      else {
        toogleDirectorTitle(facultyRows, itemIndex);
      }
    }

    itemIndex++;
  }

}

}(jQuery));
