# Kitty Carousel

People probably [shouldn't use carousels](http://shouldiuseacarousel.com/) on their websites but they do anyway. The odds are good that sooner or later someone will ask you to make one. Fortunately, they can be fun to make. So let's make one!

![[carousel.gif]]

-   Use [these four assets](https://spiced.space/okra/carousel/assets.zip)
-   The height of the carousel area should be 600px
-   The carousel should fill the browser horizontally
-   Each image should stay on screen for 5 seconds before sliding off
-   Use [CSS transitions](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Transitions/Using_CSS_transitions) for the animation effect
-   The dots are just indicators and are not navigation

### Part 2

The dots should be clickable. When a user clicks a dot that is not lit up, the corresponding image slides in from the right. The image should slide in from the right even if its dot is to the left of the one that was lit up when the user clicks.

### Bonus Part 3

-   600px is too tall for most phones. Make the carousel fill the screen on phones in either orientation.
-   Allow users with touch screens to trigger the transition by swiping

#### Added by **Yair** on October 10, 2022

## Kitty Carousel - Part 1

![[Pasted image 20230119155707.png]]

```html
<div id="carousel">
    <img
        class="kitty onscreen"
        src="assets/kit1.jpg"
        alt="kitty 1"
    />
    <img class="kitty" src="assets/kit2.jpg" alt="kitty 2" />
    <img class="kitty" src="assets/kit3.jpg" alt="kitty 3" />
    <img class="kitty" src="assets/kit4.jpg" alt="kitty 4" />
</div>
```

```css
* {
    box-sizing: border-box;
}

#carousel {
    width: 100%;
    height: 600px;
    overflow: hidden;
    position: relative;
}

#carousel .kitty {
    width: 100%;
    flex-shrink: 0;
    /* Must be offscreen by default! */
    transform: translateX(100%);
    position: absolute;
}

#carousel .kitty.onscreen {
    transform: translateX(0);
    border: 3px pink solid;
    transition-property: transform;
    transition-duration: 3s;
}

#carousel .kitty.hidden-left {
    transform: translateX(-100%);
    border: 3px blue solid;
    transition-property: transform;
    transition-duration: 3s;
}
```

```js
(function () {
    // Things we'll need to do:
    // - grab the images and store in a var
    // - .classList.add / .classList.remove
    // - keep track of which image is shown onscreen
    // - cycle back when we get to the end
    // - repeat this!

    var images = document.querySelectorAll('img.kitty');
    var currentImageIndex = 0;

    function moveImages() {
        images[currentImageIndex].classList.remove('onscreen');
        images[currentImageIndex].classList.add('hidden-left');
        currentImageIndex++;
        // if current image index > four, then set it back to zero!

        // now find the new current image and ADD .onscreen to it!

        // find the image that is .hidden-left
        // remove the .hidden-left class from it!

        setTimeout(moveImages, 3000);
    }

    // kick things off!
    setTimeout(moveImages, 1000);

    document.addEventListener('transitionend', function () {
        // we want to find the .hidden-left element, and
        // remove the class .hidden-left.
        // BUT - careful! transitionend will be triggered
        // for TWO transitions in our page!
        // We need to CHECK which element has triggered,
        // or rather, check the trigger element for a specific class!
        // How? Hint: inspect the element that triggered the event!
        // (you might need to add a *parameter* to your event listener...)
    });
})();
```

**NB** The delay between calls to your function needs to be longer than the time it takes for the kitties to transition on and off screen! Otherwise, you'll see some very strange behaviour...

#### Added by **Jan** on October 11, 2022

# Next steps

### Render the dots

-   create the necessary html and css
-   we need a way to change the styling for the dot that represents the current image
-   for this we toggle a class `current`

### Highlight the dot of the current image whenever the image changes

-   get all the dot elements and put then into an array
-   add a function `setDot`. This will add the class `current` to the dot that corresponds to the shown image
-   `setDot` loops over all the dot elements and removes the current class from every element. Then it adds the current class to the correct element in the list. The index of the element needs to be passed as an argument.
-   `setDot` needs to be called in the function that moves the kitties. We also have access to the current index here that we need to pass as an argument

### Dots should be clickable and display the corresponding image

-   we need to add an event listener to every dot. For this we need to select them via `querySelectorAll` and then loop over the result.
-   in the callback of the event listener we need to set the variable that holds the value of the `next image` to the index of the clicked dot. You can get this index from the loop that iterates over all the dots before adding the event listener.
-   we need to trigger the movement of the images / kitties

### Also cover the following scenarios:

-   when we click on a dot that is already highlighted nothing should happen.
-   when a transition just happens clicking on a dot should not change the picture
-   when a dot was clicked stop the next setTimeout that was already triggered