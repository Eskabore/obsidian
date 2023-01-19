# Ticker

Tickers used to be more popular, but even if they aren't used as much as before, they do provide a good opportunity to look at how [requestAnimationFrame](https://developer.mozilla.org/en-US/docs/Web/API/window/requestAnimationFrame) works.
![[ticker.gif]]

-   When the page loads, the ticker area should be empty and headlines should start crawling in from the right
-   The animation should continue forever. When a headline moves all the way off the screen it should jump to the end.
-   Use six to ten headlines/links from your favorite news site

### Part 2

When a user's mouse moves onto a headline, the animation should pause (which will require [cancelAnimationFrame](https://developer.mozilla.org/en-US/docs/Web/API/Window/cancelAnimationFrame)). The headline should turn blue and gain an underline to indicate that it can be clicked. If the user mouses out without clicking, the animation should resume.

### Bonus Challenge

Create an additional ticker that appears at the bottom of the page and has the headlines scrolling in from left to right rather than right to left.

#### Added by **Yair** on October 5, 2022

## Install `http-server`

```bash
# install the http-server program globally on your system
npm i -g http-server
# you might see a permissions error! in that case, add sudo to the beginning of the command:
sudo npm i -g http-server
```

## Serve your folder via `http-server`

```bash
# serve the current directory on port 3000
http-server . -p 3000
```

## index.html

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Ticker</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <div id="ticker">
        <div id="headlines">
            <a href="https://www.science.org/content/article/nobel-honors-physicists-proved-quantum-weirdness-cant-explained-away-can-used">Trio who proved quantum mechanics is really weird—and useful—honored
            </a><a href="https://www.science.org/content/article/nobel-prize-chemistry-2022">Simple, reliable reactions that 'click' molecules together garner chemistry Nobel
            </a><a href="https://www.science.org/content/article/new-tech-could-provide-cheaper-less-polluting-way-refine-crude-oil">New tech could provide cheaper, less-polluting way to refine crude oil
            </a><a href="https://www.science.org/content/article/exceptional-fossil-suggests-early-birds-were-brainy">‘Exceptional’ fossil suggests early birds were brainy
            </a><a href="https://www.science.org/content/article/holy-science-captures-behind-the-scenes-reactions-asteroid-smashing-mission">‘Holy $@*%!’ Science captures behind-the-scenes reactions to asteroid-smashing mission
            </a><a href="https://www.science.org/content/article/nihs-brain-initiative-puts-dollar500-million-creating-detailed-ever-human-brain-atlas">NIH’s BRAIN Initiative puts $500 million into creating most detailed ever human brain atlas</a>
        </div>
    </div>
    <script src="ticker.js"></script>
</body>
</html>
```

## style.css

```css
* {
    margin: 0;
    box-sizing: border-box;
}

#headlines {
    white-space: nowrap;
    border: 2px red dashed;
    position: absolute;
    left: 50%;
}

#ticker {
    position: relative;
    overflow-x: hidden;
    height: 2em;
}

#headlines > a {
    display: inline-block;
    width: 7rem;
    overflow-x: hidden;
    text-overflow: ellipsis;
}
```

## ticker.js

```js
(function () {
    // grab the headlines div
    // change style.left to -1px
    var headlines = document.getElementById('headlines');

    var headlinesOffsetLeft = headlines.offsetLeft;

    function moveHeadlines() {
        headlinesOffsetLeft--;
        headlines.style.left = headlinesOffsetLeft + 'px';

        requestAnimationFrame(moveHeadlines);
    }

    requestAnimationFrame(moveHeadlines);
})();

// How to get the links to circle around?
// Grab the first link
// Get its width in px
// Get the headlines left offset in px
// IF first link's width === left offset * -1
//     remove the first link
//     append it to the end of #headlines
//     add to offset: width of first link.
```

#### Added by **Yair** on October 6, 2022

# Part 2

## A few notes

-   Define a variable at the top of your IIFE named `requestId`
-   Every time you call `requestAnimationFrame`, **grab** the returned value and assign it to your variable (`requestId`)!
-   This will allow you to **cancel** the animation request whenever you wish (use `cancelAnimationRequest(requestId)`.
-   You will need to add **two event listeners** to each of your headline links!
-   **Iterate** over them. But beware! You can't use `.forEach`, as this isn't actually a real array!

```js
// How to cancel the pending animation request!
cancelAnimationFrame(requestId);

// How to restart the animation sequence again
requestId = requestAnimationFrame(moveHeadlines);
```