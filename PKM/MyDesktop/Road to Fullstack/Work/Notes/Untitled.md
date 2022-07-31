// an example using an object liternal notation to encapsulate into a nice package
const jsblogprogress = {

    // create some properties
    elements: \[\],
    y: false,

    init: function () {
        this.capture();
    },

    capture: function () {

        let progressBar = $('.c-progress-bar\_\_line');
        let container = $('.b-case-article\_\_text\_\_block');

        $(window).on('scroll', function () {
            
            let start = $(document).scrollTop();
            let bottom = $(container).outerHeight();

            if (start > 0) {
                let width = 0;
                if ($(window).width() > 992) {
                    width = Math.abs(start) / (bottom - 200) \* 100 + "%";
                } else {
                    width = Math.abs(start) / (bottom - 600) \* 100 + "%";
                }
                progressBar.css('width', width);
            }

            if (start == 0) {
                width = 0;
                progressBar.css('width', width);

            }
        });

    }

};

// finally boot the beast up
jsblogprogress.init();