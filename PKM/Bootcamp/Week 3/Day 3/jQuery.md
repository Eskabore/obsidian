# jQuery

jQuery is probably the most widely used Javascript library of all time. Its popularity seems to have peaked and entered decline, primarily because many of the problems it solves have become less significant as browsers have improved and become more consistent. However, it is still incredibly widely used and it is very likely you will encounter it on projects in the future.

jQuery provides [tons of methods](http://api.jquery.com/) designed to help you traverse the DOM tree, manipulate elements, make ajax requests, and handle user action.

## DOM

When you include jQuery, it creates two global variables, `jQuery` and `$`, both of which refer to the same thing: a function that returns jQuery objects.

If you pass a selector to this function, it returns an object representing any elements on the page that match the selector. Note that it _does not_ return the elements themselves. The object it returns has references to the elements themselves, but you usually do not need to access them. The jQuery object _wraps_ the elements. When you call methods on the jQuery object, it acts upon the elements without the methods being directly attached to them.

Most jQuery methods return the object they belong to, which allows you to _chain_ your method calls.

```js
$('h1').css({
    color: 'red'
}).html('jQuery is pretty great!');
```

In this example, the `style.color` and `innerHTML` of _all_ `<h1>` elements of the page have been changed. No loop is required.

If you pass a string containing HTML content to `jQuery` or `$`, it creates the element(s).

```js
$('<div>I love jQuery!</div>').css({
    textDecoration: 'underline'
}).addClass('happy').appendTo('body');
```

If you pass a reference to an element to `jQuery` or `$`, a wrapped object is returned.

```js
$(document.body).css('backgroundColor', '#fff');
```

It is common for jQuery methods that are setters (such as [`attr`](http://api.jquery.com/attr/), [`val`](http://api.jquery.com/val/), and [`html`](http://api.jquery.com/html/)) to also be getters. If they are not passed a value to set, they return the current value.

The objects that jQuery returns may wrap many elements. You can use the `eq` method to get a wrapper around a single element selected by its index.

```js
var divs = $('div');

divs.eq(0).html('jQuery is great.');
```

You can also use square brackets to access individual elements, but when you do you get a native DOM element and not a jQuery object.

```js
var divs = $('div');

divs[0].innerHTML = 'I <3 elements!!!';
```

## Events

jQuery has had several different APIs for adding and removing event listeners through the years (`bind`/`unbind`, `live`/`die`, `delegate`/`undelegate`). The current methods to use for this are [`on`](http://api.jquery.com/on/) and [`off`](http://api.jquery.com/off).

```js
$('.pretty').on('mousedown', function fn(e) {
    console.log(e.currentTarget.id);
    $(e.currentTarget).off('mousedown', fn);
});
```

jQuery allows you to give events a _namespace_, which is very handy for removing listeners without references to the functions themselves.

```js
$('a').on('mouseover.removeAfterFirstClick', function() {
    console.log('mouseover!');
}).on('click.removeAfterFirstClick', function(e) {
    $(e.currentTarget).off('.removeAfterFirstClick'); //removes all events in the removeAfterFirstClick namespace
});
```

You can give events arbitrary names and trigger them at will.

```js
$('body').on('whatever', function() {
    console.log('The "whatever" event happened');
}).trigger('whatever');
```

jQuery also supports creating [custom events](http://benalman.com/news/2010/03/jquery-special-events/) that are composites of other events.

## Including jQuery

In order to use jquery, you have to include it with a `script` tag in your HTML. You can either download the [latest version](http://jquery.com/download/) or include it from the CDN like so:

```html
<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
```

## Exercises

1.  Refactor your [ticker project](https://spiced.space/okra/ticker) to use jQuery for all DOM manipulations. Do not change how the animation works. That is, you should continue to use `requestAnimationFrame` just as you are already.
    
2.  Using jquery, create a modal dialog for your 'Welcome to Berlin and the Future' page. A modal dialog is a popup that users must interact with before they can do anything else. Typically, modals on website involve a box of content sitting on top of a semi-transparent background that fills the browser window.
    
    Your modal should appear 1 second after users arrive at the page. The modal should disappear when the user clicks the X in the upper right corner.
    
    ![[Pasted image 20230119160259.png]]

#### Added by **Yair** on October 12, 2022

## index.html

```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Compatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width, initial-scale=1.0" />
        <title>My Task List</title>
        <link rel="stylesheet" href="/style.css" />
    </head>
    <body>
        <header>
            <h1>My Tasks</h1>
            <p>3 to go</p>
        </header>
        <main>
            <div class="tasks">
                <div class="task">
                    <input type="checkbox" />
                    <label>Walk the dog</label>
                </div>
                <div class="task">
                    <input type="checkbox" />
                    <label>Buy some milk</label>
                </div>
                <div class="task done">
                    <input type="checkbox" checked="true" />
                    <label>Meet up with some friends</label>
                </div>
                <div class="task">
                    <input type="checkbox" />
                    <label>Read more about jQuery</label>
                </div>
            </div>
            <form class="add-task">
                <input type="text" name="task-name" />
                <button>Add</button>
            </form>
        </main>
        <script src="https://code.jquery.com/jquery-3.6.1.min.js" integrity="sha256-o88AwQnZB+VDvE9tvIXrMQaPlFFSUTR+nldQm1LuPXQ=" crossorigin="anonymous"></script>
        <script src="to-do.js"></script>
    </body>
</html>
```

## style.css

```css
header {
    text-align: center;
}

header h1,
header p {
    margin-top: 0;
    margin-bottom: 0;
}

.tasks {
    width: 60%;
    margin: 0 auto;
}

.task {
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
    font-size: 14px;
}

.task.done {
    font-style: italic;
    color: #9a9a9a;
}

.add-task {
    margin-left: 25px;
    margin-top: 10px;
}
```

## to-do.js

```js
function domSelectAndManipulateVanilla() {
    // Select from DOM
    // document.getElementById

    var h1 = document.querySelector('h1');
    console.log('h1', h1);

    // get inner text, inner html
    console.log('h1 text is:', h1.innerText);
    console.log('h1 inner HTML is:', h1.innerHTML);

    // modify/set inner text, inner html
    h1.innerText = 'My Things to Do';
    h1.innerHTML = 'My <sup>Cool</sup> Things to Do';

    // get checkboxes
    var checkboxes = document.querySelectorAll('.task input[type=checkbox]');
    console.log('checkboxes', checkboxes);

    // check the first one
    checkboxes[0].checked = true;

    // get all labels
    var labels = document.querySelectorAll('.task label');
    for(var i = 0; i < labels.length; i++) {
        labels[i].style.color = 'red';
    }
}

function domSelectAndManipulateJquery() {
    // jQuery
    var $h1 = jQuery('h1');
    $h1 = $('h1');
    console.log('h1', $h1);
    console.log('actual h1 element:', $h1[0]);

    // get inner text, inner html
    console.log('$h1 text is:', $h1.text());
    console.log('$h1 inner HTML is:', $h1.html());

    // change inner text, inner html
    $h1.text('My Cool Tasks');
    $h1.html('My <sup>Cool</sup> Things to Do');

    var $checkboxes = $('.task input[type=checkbox]');
    console.log($checkboxes);

    // get the [first] DOM element matching the selector
    $checkboxes[0];

    // get a jQuery object wrapping around the DOM element matching
    // the selector
    var $firstCheckbox = $checkboxes.eq(0);
    var $firstCheckbox = $($checkboxes[0]);
    console.log($firstCheckbox);

    $firstCheckbox.prop('checked', true);

    // change the style of all the labels
    var $labels = $('.task label');
    $labels.css({
        fontFamily: 'Courier New, monospace',
        color: 'red'
    }).css({
        backgroundColor: 'beige'
    }).fadeOut(1000);
}

function eventsVanilla() {
    // events
    var checkboxes = document.querySelectorAll('.task input');
    for (var i = 0; i < checkboxes.length; i++) {
        checkboxes[i].addEventListener('change', function (e) {
            var checkbox = e.currentTarget;
            checkbox.parentElement.classList.add('done');

            checkbox.disabled = true;
        });
    }
}

function eventsjQuery() {
    $('.task input').on('change', function (e) {
        // console.log('change event!')
        var $target = $(e.currentTarget);
        console.log($target);

        $target.parent().addClass('done');
        $target.prop('disabled', true).fadeOut(1000);
    });

    // When ADD button is clicked - what should happen?
    // 1. get text from input
    // 2. create element with this text + checkbox
    // 3. add it to the list of tasks
    // 4. clear text from input

    $('.add-task').on('submit', function (e) {
        e.preventDefault();
        var text = $('.add-task input[type=text]').val();
        console.log(text);

        var html =
        '<div class="task">' +
            '<input type="checkbox" />' +
            '<label>' + text + '</label>' +
        '</div>';
        // Wrap around to BUILD the HTML DOM element (div)
        // and append it to the end of .tasks
        $(html).appendTo('.tasks');

        // Clear the text input - give it a value of empty string
        $('.add-task input[type=text]').val('');
    });
}

// domSelectAndManipulateVanilla();
domSelectAndManipulateJquery();

// eventsVanilla();
eventsjQuery();
```