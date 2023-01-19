# The Document Object Model (DOM)

The Document Object Model (DOM) is the interface to the content of webpages that browsers provide to Javascript developers. By using the DOM we are able to change the content and appearance of webpages after they have loaded. In the early days of the web this was not possible - the only way to change what was displayed was to load a new page.

The entry point to the DOM is the `document` object. Through it we gain access to the entire tree of HTML elements (nodes). For example, `document.body` is a reference to the `<body>` element and `document.documentElement` is a reference to the `<html>` element (the root node).

Every node has a `parentNode` property (which is `null` in the case of the `document` object) and a `children` property (an array-like object containing all of the node's child elements). There are also other properties to aid in traversal (`firstChild`, `nextSibling`, etc.).

There are several methods available for finding specific nodes that you wish to manipulate:

-   [`document.getElementById`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementById) - returns the element with the specified id or `null` if there is no such element
    
-   [`document.getElementsByTagName`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByTagName) - returns an array-like object containing all of the elements with the specified tag name
    
-   [`document.getElementsByClassName`](https://developer.mozilla.org/en-US/docs/Web/API/Document/getElementsByClassName) - returns an array-like object containing all of the elements with the specified class name
    
-   [`document.querySelector`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelector) - returns the first element that matches the specified selector or `null` if there is no such element
    
-   [`document.querySelectorAll`](https://developer.mozilla.org/en-US/docs/Web/API/Document/querySelectorAll) - returns an array-like object containing all of the elements that match the specified selector
    

With the exception of `getElementById`, all of the methods above also exist on individual nodes. Calling them on individual nodes limits the search to the children of that node.

## Changing the appearance of elements

Every element has a `className` property which contains the current value of the element's `class` attribute. You can edit this string to add and remove classes to an element, which will update the element's appearance in accordance with linked stylesheets. A more convenient way to add and remove classes is through the [`classList`](https://developer.mozilla.org/en-US/docs/Web/API/Element/classList) property available in current browsers.

Every element also has a `style` property which is an object representing the current value of the element's `style` attribute. Changing properties on the element's `style` object is like adding style rules to the element's `style` attribute.

```js
var elem = document.getElementById('main');

elem.style.marginLeft = '100px';
elem.style.paddingTop = '20px';
elem.style.position = 'relative';
elem.style.display = 'inline';
```

Note that the property names do not have dashes and are camelCase. `margin-left` becomes `marginLeft` and `padding-top` becomes `paddingTop`.

## Changing the content of elements

Every element has an `innerHTML` property that contains the entirety of its HTML content as a string. You can set this property to alter an element's HTML content.

```js
document.body.innerHTML = ''; //the <body> is now empty

document.body.innerHTML = '<h1>innerHTML is fun</h1><p>I like changing innerHTML';
```

There are also methods for creating, adding, and removing nodes.

-   [`document.createElement`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createElement)
-   [`document.createTextNode`](https://developer.mozilla.org/en-US/docs/Web/API/Document/createTextNode)
-   [`appendChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/appendChild)
-   [`insertBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Node/insertBefore)
-   [`removeChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/removeChild)
-   [`replaceChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/replaceChild)

## Exercises

1.  Write a function that expects a string representing a selector to be passed as a parameter. The function should find all the elements in the document that match the selector and change their style so that the text they contain is italic, underlined, and bold.
    
2.  Write a function that expects a string representing a class name to be passed as a parameter. The function should return an array containing all the elements in the document that have the class that was passed in.
    
3.  Write a function that inserts an element into the `body` of the currently loaded page. That element should have fixed position, z-index of 2147483647, left of 20px, top of 100px, font-size of 200px, and contain the text 'AWESOME'.
    

#### Added by **Marcell** on October 5, 2022

# Code from the class

### index.html

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <script src="script.js" defer></script>
    <title>DOM manipulation</title>
</head>

<body>
    <h1 id="title">Welcome Okra</h1>



    <p class="text">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum pariatur ducimus dolores quisquam
        fuga sunt dignissimos sint. Ratione aut, placeat adipisci ex porro eos id, hic nulla recusandae, ullam nostrum.
    </p>
    <p class="text">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum pariatur ducimus dolores quisquam
        fuga sunt dignissimos sint. Ratione aut, placeat adipisci ex porro eos id, hic nulla recusandae, ullam nostrum.
    </p>
    <p class="text">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Nostrum pariatur ducimus dolores quisquam
        fuga sunt dignissimos sint. Ratione aut, placeat adipisci ex porro eos id, hic nulla recusandae, ullam nostrum.
    </p>
    <div class="test"></div>
    <img src="https://picsum.photos/200/300" alt="Nice Image" id="image">
    <!-- <script src="script.js"></script> -->
</body>

</html>
```

### script.js

```js
(function () {

    // Selecting Elements

    var title = document.getElementsByTagName("h1");
    console.log("h1: ", title);

    var img = document.getElementById("image");
    console.log(img);


    img.classList.add("roundImg"); // Adding a class to an Element 

    var paragraphs = document.getElementsByClassName("text");
    console.log("paragraphs: ", paragraphs);

    var h1 = document.querySelector("#title");
    console.log("h1: ", h1);

    h1.style.fontSize = "50px"; // Styling in JS
    h1.style.color = "green"; // Styling in JS

    var ps = document.querySelectorAll(".text");
    console.log("ps: ", ps);

    // Adding `background-color` to an array of Elements

    for (var i = 0; i < ps.length; i++) {
        ps[i].style.backgroundColor = "gray";
    }

    ps[1].style.backgroundColor = "pink"; // Adding `background-color` to a specific Element in an array.

    // Create element

    var h3 = document.createElement("h3");
    var text = document.createTextNode("Happy day!!!");
    h3.appendChild(text);
    document.body.appendChild(h3);

    // Add HTML to an existing Element

    var div = document.querySelector(".test");
    div.innerHTML = "<h2>Another beautiful day!</h2>";

})();
```

## Useful Links

[HTMLCollection x NODEList](https://medium.com/@layne_celeste/htmlcollection-vs-nodelist-4b83e3a4fb4b)