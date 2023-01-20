# Flexbox

[Flexbox](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flexible_Box_Layout/Using_CSS_flexible_boxes) is the name given to a new layout system available in CSS. With Flexbox, you specify in CSS how a containing element (a flex container) should allocate available space to its direct children (flex items). The container can grow or shrink the items within it to make the best use of the space available. Flexbox is particularly well suited to creating layouts that work across a variety of screen sizes. It also makes [many layouts](https://philipwalton.github.io/solved-by-flexbox/) that were historically difficult to achieve with CSS much easier.

To make an element a flex container, set it's `display` property to `flex` (or `inline-flex` if you want the container to behave as an inline element). With the `display` set thus, the children of the element become flex items. The following properties can be added to the container to specify how the items should be laid out:

-   `flex-direction` - specifies the direction in which the items should flow. Possible values are `row` (left to right), `row-reverse` (right to left), `column` (top to bottom), and `column-reverse` (bottom to top). The default is `row`.
-   `justify-content` - specifies how content is aligned and extra space distributed on the main axis (i.e., the axis specified by the `flex-direction` property). Possible values are `space-between` (the first item at the very beginning of the main axis, the last item at the very end, and the items in between separated by empty space), `space-around` (like `space-between` but with empty space before the first item and after the last), `center` (items clustered in the center), `flex-start` (items clustered at the beginning of the main axis), and `flex-end` (items clustered at the end of the main axis).
-   `align-items` - like `justify-content` but for the cross axis (which is the opposite axis of the main axis. If the `flex-direction` is `row` or `row-reverse`, the `align-items` property specifies vertical alignment. Otherwise, it specifies horizontal alignment). The possible values are `flex-start`, `flex-end`, `center`, `baseline` (the baselines of items are aligned), and `stretch` (the items are stretched to fill the container cross axis).
-   `flex-wrap` - specifies whether and how items should wrap. Possible values are `nowrap`, `wrap`, and `wrap-reverse`. The default is `nowrap`.
-   `align-content` - specifies how the lines of items should be spaced when wrapping is enabled. Possible values are `flex-start`, `flex-end`, `center`, `space-between`, `space-around`, and `stretch`.

There are also properties you can add to the individual flex items to control their alignment, sizing, and order of appearance.

-   `order` - An integer that specifies the order in which an item should appear. The default value is `0`, which indicates that the item should appear in the order in which appears in the source HTML. A lower value indicates that the item should appear earlier and a higher value indicates that the item should appear later.
-   `flex-basis` - Specifies the default size of an item before resizing. Can be a specific value specified in units such as `px` or `%`. The default value is `auto`.
-   `flex-grow` - A number greater than or equal to zero that specifies the factor by which the item should grow if there is space available. If a flex item has its `flex-grow` property set to `2` while all the other flex items have a `flex-grow` of `1`, it will be twice the size as all the others.
-   `flex-shrink` - A number greater than or equal to zero that specifies the factor by which item should shrink if required.
-   `flex` - Allows you to specify `flex-grow`, `flex-shrink`, and `flex-basis` (in that order) in one go. The `flex-shrink` and `flex-basis` values can be omitted.
-   `align-self` - Allows you to override the flex container's `align-items` property for this individual item.

[CSS Tricks](https://css-tricks.com/snippets/css/a-guide-to-flexbox/) has a more thorough [guide to Flexbox](https://css-tricks.com/snippets/css/a-guide-to-flexbox/) featuring diagrams and demos. It is highly recommended that read it over and refer to it as you complete the exercises.

## Exercises

1.  There's a fun game called [Flexbox Froggy](http://flexboxfroggy.com/) that will help you master Flexbox. Warning: it gets kind of hard at the end.
    
2.  Create an HTML document with three elements in the `<body>` tag: a `<header>` element, a `<main>` element, and a `<footer>` element. The `<body>` should be made a flex container and have its `min-height` set to `100vh` so it fills the browser window. The `<header>` element should have a solid background color and be 70 pixels tall. The `<footer>` element should have a solid background color and be 30 pixels tall. The `<main>` element should fill the remainder of the available space.

![[Pasted image 20230119155408.png]]

3.  Copy the HTML document you created and add to the `<main>` element a single `<img>` tag with its `src` attribute set to `http://bubble-medicine.glitch.me/gif?tag=kitty`. This url will give you a random cat photo. It will not be possible to know the width and height of the image that will be displayed in advance. Make the `<main>` element a flex container and have the `<img>` element appear centered vertically and horizontally.
    
    ![[Pasted image 20230119155440.png]]
    
4.  Use Flexbox to reproduce the following design. Each outer box should be a flex container that contains only one flex item.
    
    ![[Pasted image 20230119155524.png]]
    
    ​
    

#### Added by **Marcell** on October 10, 2022

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
    <!-- <script src="script.js" defer></script> -->
    <title>Flexbox</title>
</head>

<body>
    <h1>FlexBox 🎁</h1>
    <div class="flex-container">
        <div class="flex-item">1</div>
        <div class="flex-item">2</div>
        <div class="flex-item">Lorem ipsum, dolor sit amet consectetur adipisicing elit. Dicta architecto tempora maxime
            sequi velit debitis officia provident ullam voluptatibus dignissimos. Corrupti eos sapiente sunt maxime
            expedita! Mollitia rem ad quae.</div>
        <div class="flex-item">4</div>
        <div class="flex-item">5</div>
    </div>
</body>

</html>
```

### style.css

```css
* {
    box-sizing: border-box;
    margin: 0;
    padding: 0;
}

body {
    min-height: 100vh;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

.flex-container {
    background-color: palevioletred;
    min-height: 600px;
    padding: 20px;
    width: 90%;

    display: flex;
    justify-content: space-between;
    gap: 20px;
    flex-wrap: wrap;
    align-items: flex-end;
    /* flex-direction: row-reverse; */
}

.flex-item {
    background-color: blanchedalmond;
    border: 1px solid black;
    padding: 20px;
    font-size: 2em;

    /* width: 300px;
    min-width: 150px; */
}

.flex-item:nth-child(1) {
    /* align-self: flex-start; */
    /* order: 3; */
    flex-grow: 2;
}

.flex-item:nth-child(2) {
    flex-grow: 1;
}

.flex-item:nth-child(3) {
    /* flex-grow: 0; */
    width: 400px;
}

.flex-item:nth-child(4) {
    /* align-self: center; */
}

.flex-item:nth-child(5) {
    /* order: -1; */
    /* align-self: stretch; */
}
```

## Useful links

[CSS Tricks FlexBox guide](https://css-tricks.com/snippets/css/a-guide-to-flexbox/)