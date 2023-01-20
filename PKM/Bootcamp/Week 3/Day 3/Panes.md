# Resizable Panes
![[panes.gif]]
Lots of sites seem to have resizable panes these days. They're often used to show before and after photos with both images staying the same size as the user drags the bar to reveal more of one photo and less of the other. Lots of UIs also feature resizable panes in which the content reflows as the pane it is in grows or shrinks. Let's attempt the first variety, the one with images that do not resize. You can use any two images you want.

You'll want to detect mousedown events on the bar that sits on top of the images. After a mousedown (but before a mouseup), the bar should follow the mouse pointer on the x axis but never move out of the area defined by the left edge and right edge of the images. As the bar moves, the visible portions of the images should change correspondingly.

#### Added by **Marcell** on October 12, 2022

# Next Steps

-   When the user mouses down on the slider, you will want to begin listening for a mouse move event
    
-   While the mouse is moving you need to update the width of the top div, and the left hand position of the slider depending on where the mouse is within the container
    
-   When the user mouses up anywhere on the document, you will want to remove the mouse move event listener from the container
    

Tip: If you wanna stop the image to drag when you try to move the slide just set this property `draggable="false"` to the `img` tag.

## Code from class

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
    <title>Panes</title>
</head>

<body>
    <div class="container">
        <div class="background">
            <img src="./1-Yuki-After.webp" alt="" srcset="">
        </div>
        <div class="forground"><img src="./1-Yuki-Before.webp" alt="" srcset=""></div>
        <div class="slider"></div>
    </div>

</body>

</html>
```

### style.css

```css
.container {
    position: relative;
    height: 500px;
    width: 500px;
    overflow: hidden
}

.forground {
    position: absolute;
    overflow: hidden;
    width: 500px;
    height: 500px;

}

.background {
    position: absolute;
    overflow: hidden;
    width: 500px;
    height: 500px;
}

.slider {
    position: absolute;
    width: 5px;
    height: 100%;
    left: 30px;
    z-index: 100;
    background-color: black;
}
```

### script.js

```js
var slider = document.querySelector(".slider");

var isSliding;

slider.addEventListener("mousedown", function (e) {
    console.log("Mouse down on Slider");
    console.log(e);
    isSliding = true;

    // Another event listener that tracks the pointer position
    // When the mouse moves you change the width of the forground
});

document.addEventListener("mouseup", function () {
    console.log("Mouse is up");
    isSliding = false;
});
```

## Useful (and cute 🐶) links

Cursor styles: [https://developer.mozilla.org/en-US/docs/Web/CSS/cursor](https://developer.mozilla.org/en-US/docs/Web/CSS/cursor)

Dogs: [https://www.ifitshipitshere.com/grace-chon-dogs-before-and-after/](https://www.ifitshipitshere.com/grace-chon-dogs-before-and-after/)