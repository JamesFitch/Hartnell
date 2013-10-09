(function ($) {

   Drupal.behaviors.sl_corp = {
    attach: function (context, settings) {

       $(document).ready(function() {

			// Define the target element(s) 
			var slides = $("#views_slideshow_cycle_main_front_slide-block_1 .views-field img", context);   

			 // Resize on page load.
			 slides.each( resize_slide );

			 // Trigger resize of element on window resize.
			 $(window).resize(function() {
			    slides.each( resize_slide );
			  });

			  // Define resize function.
			  function resize_slide() {
					var doc_width = $(window).width(); // can also use $(document).width(), which makes resizing faster
				    var doc_height = $(window).height(); // can also use $(document).height(), which makes resizing faster 

				    var image_width = $(this).width();
				    var image_height = $(this).height();

				    var image_ratio = image_width/image_height;
				    var new_width = doc_width; var new_height = Math.round(new_width/image_ratio);

				    $(this).width(new_width);
				    $(this).height(new_height);
				    $(this).removeAttr('width').removeAttr('height');
			    if (new_height<doc_height) {
			    	new_height = doc_height;
			        new_width = Math.round(new_height*image_ratio);

			        $(this).width(new_width);
			        $(this).height(new_height);
			        var width_offset = Math.round((new_width-doc_width)/2);

			        $(this).css("left","-"+width_offset+"px");
					}
				}

			// End $(document).ready
			});
		}
 	};
 }(jQuery));