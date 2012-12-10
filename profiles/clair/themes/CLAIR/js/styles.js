// Using the closure to map jQuery to $.
(function ($) {
  // Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.bartik_subtheme = {
    attach: function (context, settings) {
      $('#footer .social:first').addClass('first-social-item');
    }
  };
}(jQuery));
