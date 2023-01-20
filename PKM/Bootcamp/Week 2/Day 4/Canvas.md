# Canvas

The [`<canvas>`](https://developer.mozilla.org/en-US/docs/Web/API/Canvas_API) element allows you to draw custom graphics and animations.

You start by adding the element. It is important to give the canvas width and height attributes. If you just set the width and height in CSS you will get unexpected results.

```html
<canvas id="canv" width="200" height="200"></canvas>
```

You then use Javascript to get a reference to it and from that a _rendering context_.

```js
var context = document.getElementById('canv').getContext('2d');
```

There are other kinds of contexts you can get (for doing [WebGL](https://developer.mozilla.org/en-US/docs/Web/API/WebGL_API) graphics, for example) but we are only interested in drawing 2D graphics here.

You draw by calling methods of the context object.

```js
context.strokeStyle = '#900';
context.beginPath();
context.moveTo(100, 0);
context.lineTo(0, 200);
context.moveTo(100, 0);
context.lineTo(200, 200)
context.lineTo(0, 200);
context.stroke();
```

After running these commands the canvas will look like this:

![[Pasted image 20230119155021.png]]
![](https://spiced.space/okra/canvas/canvas.png)

## Useful context methods and properties

-   [`strokeStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeStyle) - Gets and sets the style of lines
    
-   [`fillStyle`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillStyle) - Gets and sets the style for filling in shapes
    
-   [`fillRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fillRect) - Draws a solid rectangle of the specified width and height at the specified coordinates
    
-   [`strokeRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/strokeRect) - Draws the outline of a rectangle of the specified width and height at the specified coordinates
    
-   [`clearRect`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/clearRect) - Erases the specified rectangular area. This method is very useful for clearing the entire canvas prior to drawing a new frame of animation
    
-   [`beginPath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/beginPath) - Creates a new path. Subsequent commands add to the path until [`closePath`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/closePath) is called.
    
-   [`moveTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/moveTo) - Moves the 'pen' to the specified coordinates
    
-   [`stroke`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/stroke) - Draws the outline of a shape in the current `strokeStyle`
    
-   [`fill`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/fill) - Fills a shape in the current `fillStyle`;
    
-   [`lineTo`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/lineTo) - Adds a line from the current position of the 'pen' to the specified coordinates.
    
-   [`arc`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/arc) - Adds an arc with the specified center, radius, and start and end angles. Note that angles are specified with [radians](https://www.google.com/search?q=radians+to+degrees+formula&tbm=isch) rather than degrees
    
-   [`drawImage`](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D/drawImage) - Draws an image to the canvas. Canvases can themselves be used as images in other canvases.
    

## Exercise

Draw a [stick figure](https://spiced.space/okra/html_css_lab_2) using a `<canvas>` element.

## Bonus exercise

Make your stick figure move around the canvas in response to clicks on arrow keys by the user. Use two canvases: one on which the stick figure is drawn, and another, larger canvas on which the first canvas is drawn as an image. Every time the user hits an arrow key, erase what's on the big canvas and redraw the small canvas on it in a new location.

#### Added by **Klaus** on October 7, 2022

```js
console.log("sanity");
const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");

/*** DRAWING A TRIANGLE ***/
// I take the ctx variable from line 2 which now holds 
// all canvas settings and drawing methods. 
ctx.strokeStyle = "hotpink"; // color of the 'pen'
ctx.lineWidth = 5; //thickness of the 'pen'

ctx.beginPath();  //get ready to draw!
ctx.moveTo(/*horizontal X*/ 10, /*vertical Y*/20); // starting point
ctx.lineTo(490, 300);
ctx.lineTo(10, 300);
ctx.closePath(10, 20);
ctx.stroke(); 

ctx.fill(); // does the filling / default is black

// Gonna be using different colours, good palette picker.
// https://coolors.co/
ctx.fillStyle = "hotpink";

/*** BIGGER CIRCLE ***/
// Expects five arguments 
// Built in arc method
ctx.arc(300, 200, 80, 0, Math.PI * 2);
// last value is in radiants and it converts to 360 degrees
// ctx.arc(x, y, radius, startAngle(in radians), endAngle(in radians));

ctx.beginPath();
ctx.fillStyle = "skyblue";
ctx.fill();

/*** SMALLER CIRCLE ***/
ctx.arc(330, 200, 50, 0, Math.PI * 2);
ctx.fillStyle = "lemonchiffon";
ctx.fill();

/*** SEMI CIRCLE ***/
ctx.beginPath();
ctx.arc(250, 350, 100, 0, Math.PI);
ctx.strokeStyle = "tomato"; //OTHERWISE STILL HOTPINK
ctx.lineWidth = 10;
ctx.stroke();

/*** DRAWING A RECTANGLE ***/
ctx.beginPath();
ctx.strokeStyle = "yellow";
ctx.rect(400, 20, 80, 50);
// Expects four arguments 
// ctx.rect(x, y(=upper-left corner), width(in px), height(in px));
ctx.stroke();

// SAME AS WRITING : (no need to beginPath)
ctx.strokeStyle = "green";
ctx.strokeRect(400, 100, 80, 100);

ctx.beginPath();
ctx.fillStyle = "gold";
ctx.fillRect(0, 0, canvas.width, canvas.height);
// We need to place this at the top so that it doesn't 
// cover all of the other drawings - order matters!


ctx.clearRect(0, 0, canvas.width, canvas.height); //clears area (makes it transparent)
```

### [https://coolors.co/](https://coolors.co/)

### [https://codepen.io/ppmathis/pen/DRJbjV](https://codepen.io/ppmathis/pen/DRJbjV)

### [https://fractalfantasy.net/#tour](https://fractalfantasy.net/#tour)