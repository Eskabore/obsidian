# Hamburger Menu

Let's take [the page we worked on last week](https://spiced.space/okra/html_css_lab) and add to it the menu that appears when users click on the hamburger icon on the upper right. After the menu appears, clicks outside of it should make it disappear (clicks on the X in the upper right corner of the menu should also make it disappear).

![[Pasted image 20230119155130.png]]
![[Pasted image 20230119155139.png]]

![](https://spiced.space/okra/hamburger_menu/minmenu.png)

Use [CSS transitions](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Transitions/Using_CSS_transitions) to make the white menu slide in from the right when the user clicks the hamburger button.

#### Added by **Marcell** on October 7, 2022

# Next Steps

## 1. HTML&css

-   Overlay
    -   should have position fixed
    -   make sure the overlay fills the screen entirely by working with TOP, BOTTOM, LEFT and RIGHT properties or INSET.
    -   the overlay must have a background color and be semi-transparent. You can use rbga or opacity to get the semi-transparency effect (little heads up opacity has side effects for child elements)
    -   the overlay **MUST** be under the white side-nav. You can accomplish this either with explicit z-index or source order, depending on the structure of your page, you might need z-index
-   Side-nav menu
    -   should be white and 100% tall
    -   give it a set width
    -   work with padding / margin to make sure links aren't touching the border
    -   can be moved to the right with the `right` css property, and then move it offscreen by transforming it on the x-axis.
    -   links should be on their own line & `x` should be on the top right corner

## 2. **Javascript**:

1.  clickhandler on the hamburger menu:
    -   adds a class to make menu & overlay appear
2.  clickhandler on the 'X'
    -   removes class that makes menu and overlay appear
3.  clickhandler on the overlay / container element
    -   removes class that makes menu and overlay appear

**_Note: remember to_** **_handle propagation on the menu, if necessary. Nothing should happen when you click on the menu itself, only when you click the X or the overlay_**

# Code from the class

### index.html

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <link rel="stylesheet" href="style.css">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="script.js" defer></script>
    <title>Move Box</title>
</head>

<body>
    <h1>Let's move it!</h1>
    <div id="box"></div>
    <div id="move">
        Move
        <button id="move-back">Back</button>
    </div>
    <a id="shape" href="javascript://">Shape</a>
    <div id="overlay"></div>

</body>

</html>
```

### style.css

```css
body {
    background-color: papayawhip;
}

#box {
    width: 200px;
    aspect-ratio: 1/1;
    background-color: purple;
    transition: 1000ms ease-in-out;
}

#move {
    background-color: red;
}

.move-right {
    transform: translateX(400%);
}

.change-shape {
    border-radius: 50%;
}

#overlay {
    position: fixed;
    /* top: 0;
    left: 0;
    right: 0;
    bottom: 0; */
    inset: 0;
    background-color: rgba(0, 0, 0, 0.5);
}
```

### script.js

```js
var box = document.getElementById("box");
var move = document.getElementById("move");
var shape = document.getElementById("shape");
var back = document.getElementById("move-back");

move.addEventListener("click", function () {
    box.classList.add("move-right");
});

shape.addEventListener("click", function () {
    box.classList.toggle("change-shape");
});

back.addEventListener("click", function (event) {
    event.stopPropagation();
    box.classList.remove("move-right");
});
```