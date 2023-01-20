# CSS Selectors, Transforms, Transitions, and Animations

## Selectors

CSS Selectors are patterns that are used to select HTML elements in order to apply styles. We can use different types of selectors to catch multiple elements that satisfy the selector's criteria. This enables us to do cool stuff like style the odd `<li>` elements in a `<ul>`, or only apply styles to the last child of a div. There are many different combinations we can use to get the output we want.

CSS selectors use patterns to determine the element we want to select. These are the most common:

```css
Selector

Name

What it does

`*`

Global Selector

Global styles, selects _everything_

`div .child`

Descendent Selector

Selects all _.child_ elements that are descendants of any _div_ element

`div > .child`

Direct Child Selector

Select all _.child_ elements where their parent is a _div_

`div + .sibling`

Adjacent Sibling Selector

Selects an element (._sibling_) that follows directly after the prior element (_div_), in which both elements share the same parent

`p ~ ul`

General Sibling Selector

Selects an element (_ul_) that follows anywhere after the prior element (_p_), in which both elements share the same parent

`.mydiv:first-child`

Pseudo Class

Selects every element with class _.mydiv_ that is the first child of its parent

`section.this-class`

Multiple classes

Selects any _section_ element with a class of _.this-class_

`h1, h2, h3`

Comma separated selectors

Selects all _h1_, _h2_, and _h3_ elements

`input[type=password]`

Attribute Selector

Selects all _input_ elements that have a type equal to password
```
The last two selectors from this table are called **attribute selectors**. They scan the attributes of the element specified. You can learn more about attibute selectors [here](https://css-tricks.com/almanac/selectors/a/attribute/).

## Pseudo Class Selectors
![[Pasted image 20230119005757.png]]
Pseudo classes are used as a way to be even _more_ specific about the elements you are trying to select. They allow us to construct more complicated CSS selectors quite easily. They start with a colon - `:` - followed by the pseudo selector. Some also take an argument.

Also check out this awesome [tester](https://css-tricks.com/examples/nth-child-tester/) from CSS-Tricks.

### The most common & useful pseudo selectors are:

-   **:link** - select links on the page.
-   **:visited** - selects all links that have been visited.
-   **:active** - selects all links and applies styles to them when they become active (ie. are clicked on).
-   **:hover** - use this to set styles for when the mouse hovers over an element. Easy way to really spice up your design.
-   **:first-child** - select the first child within a parent.
-   **:last-child** - select the last child within a parent.
-   **:nth-child(num)** - accepts an algebraic expression to specify the different **_child_** elements you want to select. You can use this to select only the fifth child, or every odd or even element, or the first 5 child elements, and more! [This article](https://css-tricks.com/how-nth-child-works/) talks about how `:nth-child` works and [this article](https://css-tricks.com/useful-nth-child-recipies/) goes over different formulas you can use.
-   **:nth-of-type(num)** - accepts an algebraic expression to specify the different **_type_** of elements you want to select. You can pass it a mathematical expression, `even`, or `odd`.
-   **:before** - allows you to insert content onto a page (from your CSS file) _before_ an HTML element. The result is not actually on the DOM, but it appears as if it is. You need to include a _content_ property.
-   **:after** - allows you to insert content onto a page (from your CSS file) _after_ an HTML element. Just like with _:before_, the result is not actually on the DOM. You also need to include a _content_ property.

**_Note_** - `:hover` MUST come after `:link` and `:visited` in the CSS definition in order to be effective! `:active` MUST come after `:hover` in the CSS definition in order to be effective! Pseudo-class names are not case-sensitive.

## Transform, Transition, & Animation

### Transform

Transforms change the shape and position of the affected content by modifying the coordinate space. Transforms do not disrupt the normal document flow.

```css
/* shifts element 200px to the right */
.my-image { transform: translateX(200px); }

/* shifts element 200px right, 50px down */
.my-image { transform: translate(200px, 50px); }

/*
shifts element 200px right, 50px down
skew rotates and stretches the element
scale increases the size. scale(2) makes the element 2x as big
rotate rotates the element clockwise
*/
.my-image { transform: translate(200px, 50px) skew(20deg) scale(2) rotate(45deg); }
```

### Transition

From [MDN](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Transitions/Using_CSS_transitions):

> CSS transitions provide a way to control animation speed when changing CSS properties. Instead of having property changes take effect immediately, you can cause the changes in a property to take place over a period of time. For example, if you change the color of an element from white to black, usually the change is instantaneous. With CSS transitions enabled, changes occur at time intervals that follow an acceleration curve, all of which can be customized.

Transitions are made up of 4 properies:

1.  **transition-property**: the CSS property that we will apply our transition effect to (ex. color, opacity, width, etc).
2.  **trasition-duration**: the time it takes for the transition to complete.
3.  **transition-timing-function**: defines how a transition will proceed during its duration. The names of the properties help explain what this property does. [More info on these keywords here](https://developer.mozilla.org/en/docs/Web/CSS/transition-timing-function).
    -   ease | linear | ease-in | ease-out | ease-in-out | step-start | step-end
4.  **transition-delay**: define a length of time to delay the start of a transition.

Fortunately, there is a shorthand syntax:

```css
div {
    transition: <property> <duration> <timing-function> <delay>;
}
```

Here is an example:

```css
.my-image {
  background-color: purple;
  margin: 20px;
  transition: background .5s ease-in;
}

.my-image:hover {
  background: green;
}
```

## Animation

CSS also has an `animation` property built-in. We can use this feature to create even more complex animations!

There are 2 steps to creating a CSS animation:

1.  Define the animation and give it a name using _@keyframes_
2.  Assign it to a specific element(s)

**_@keyframes_** is a list describing what should happen over the course of the animation. We assign it a name, and then give it the styles we want it to run during the animation. You can use the keywords _from_, _to_, or use percentages to define when to use which styles.

The animate property has several _sub-properties_ you can define for further customization. These include _animation-name_ (which is required), _animation-duration_, etc. You can read more about the sub-properties [here](https://css-tricks.com/almanac/properties/a/animation/#article-header-id-0).

```css
.animate-element {
    animation-name: slide;
    animation-duration: 3s;
    animation-fill-mode: forwards;
}

@keyframes slide {
    0% {transform: translateX(0);}
    50% {transform: translateX(900px) rotate(270deg);}
    100% {transform: translateX(0);}
}
```

Here's a link to MDN explaining more about [@keyframes](https://developer.mozilla.org/en/docs/Web/CSS/@keyframes).

-   [This article from CSS Tricks](https://css-tricks.com/pseudo-class-selectors/) details all of the different pseudo class selectors.
-   [Here's a more detailed article on :nth-of-type](https://css-tricks.com/almanac/selectors/n/nth-of-type/).

#### Added by **Marcell** on September 29, 2022

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
    <title>HTML Semantic and CSS selectors</title>
</head>

<body>
    <header>
        <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQFw__VI7FKFNtG0GN5rLQxPmtvZ1rSUpK3bA&usqp=CAU"
            alt="Delicious Okras">
        <nav>
            <!-- ul>li*3>a[href=javascript:;] -->
            <ul>
                <li> <a href="javascript://">About</a> </li>
                <li> <a href="javascript://">Contact</a> </li>
                <li> <a href="javascript://">Sign in</a> </li>
            </ul>
        </nav>
    </header>
    <hr>
    <main>
        <h1>My Website</h1>
        <h3>Welcome to my page, let me know what you think</h3>
        <section class="info">
            <article>
                <p>Okra or Okro (US: /ˈoʊkrə/, UK: /ˈɒkrə/), Abelmoschus esculentus, known in many English-speaking
                    countries as ladies'
                    fingers or ochro, is a flowering plant in the mallow family. It has edible green seed pods. The
                    geographical origin of
                    okra is disputed, with supporters of West African, Ethiopian, Southeast Asian, and South Asian
                    origins.
                    Cultivated in
                    tropical, subtropical, and warm temperate regions around the world, okra is used in the cuisines of
                    many
                    countries.[2]
                </p>
            </article>
        </section>

        <aside class="facts">
            <h4>Interesting fact</h4>
            <p>The first use of the word okra (alternatively; okro or ochro) appeared in 1679 in the Colony of Virginia,
                deriving from
                the Igbo word ọ́kụ̀rụ̀.[5] The word gumbo was first recorded to be used in American vernacular around
                1805, deriving
                from Louisiana Creole,[6] but originates from either the Umbundu word ochinggômbo[7] or the Kimbundu
                word ki-ngombo.</p>
            <a href="#">Learn More...</a>
        </aside>
        <div id="dropdown">
            <details>
                <summary>Uses</summary>
                <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Placeat aliquid rem voluptates ex tempore,
                    sapiente dolores cupiditate provident debitis unde est necessitatibus animi blanditiis quidem
                    nesciunt ullam ab maxime ducimus?</p>
            </details>
            <details>
                <summary>Toxity</summary>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Iure ipsum dolorum officia. Obcaecati
                    tempora ab praesentium cumque ullam itaque blanditiis dolorem voluptatum voluptates! Et, fugit
                    aperiam. Nemo unde eligendi non hic ea amet quidem accusantium, voluptas vel et at asperiores atque
                    aspernatur ab sed quis! Praesentium debitis vero delectus earum?
                </p>
            </details>
            <details>
                <summary>Chemistry</summary>
                <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Incidunt corporis eaque iure dolore. Odio,
                    asperiores animi exercitationem assumenda quasi repudiandae hic ab officiis quos aspernatur, ipsam
                    soluta beatae velit nesciunt. Dolores ut pariatur laborum incidunt non voluptatem, dolorum odio
                    minima?
                </p>
            </details>
        </div>

    </main>
    <hr>
    <footer>
        <p>&copy; <strong>Copyright</strong> <em>Spiced Academy 2022</em></p>
    </footer>

    <div class="anim1">

    </div>
    <div class="anim2">
        <h2>Party time</h2>
    </div>
    <div class="anim3">

    </div>


</body>

</html>
```

### style.css

```css
* {
    box-sizing: border-box;
    font-family: Arial, Helvetica, sans-serif;
}

header {}

header img {
    height: 150px;
    float: left
}

header nav {
    float: right
}

header nav ul li {
    float: left;
    list-style: none;
    margin-left: 10px;
}

header nav ul li:last-child a {
    background-color: blue;
    color: white;
    padding: 10px 30px;
}

hr {
    clear: both;
}

.info,
.facts {
    float: left;
    padding: 20px
}

.info {
    width: 60%
}

.facts {
    width: 40%
}

details {
    float: left;
    width: 33.33333%
}

/* header img[alt="Delicious Okras"] {
    border: 2px solid black;
} */

.anim1 {
    width: 200px;
    height: 200px;
    background-color: cadetblue;
    transition: border-radius 1000ms cubic-bezier(1, .12, .69, 1.65);
}

.anim1:hover {
    border-radius: 50%;
}

.anim1:active {
    background-color: black;
}

.anim2 {
    width: 60%;
    height: 300px;
    background-color: greenyellow;
    /* animation-name:  */
    animation-iteration-count: infinite;
    animation-duration: 1s;
    line-height: 300px;
    text-align: center;
}

.anim2 h2:before {
    content: "🎉"
}

.anim2 h2:after {
    content: " ";
    position: absolute;
    width: 50px;
    height: 50px;
    border-radius: 50%;
    background-color: blue;
}


@keyframes clubbing {
    0% {
        background-color: blue;
        transform: scale(1);

    }

    20% {
        background-color: yellow;
        transform: scale(0.8);
    }

    40% {
        background-color: red;
        transform: scale(1.1);
    }

    60% {
        background-color: green;
        transform: scale(0.4);
    }

    80% {
        background-color: magenta;
        transform: scale(1.2);
    }

    100% {
        background-color: black;
        transform: scale(1);
    }

}

.anim3 {

    width: 250px;
    height: 250px;
    background-color: chocolate;
    animation: moving infinite 2s;
}

@keyframes moving {
    50% {
        transform: translateX(400%);
    }

    75% {

        transform: translateX(200%);
    }

    95% {

        transform: translateX(300%);
    }
}
```

## Useful Links

[Cubic-Bezier](https://cubic-bezier.com/#.17,.67,.83,.67) [Semantic Tags](https://www.w3schools.com/html/html5_semantic_elements.asp) [CSS Animations](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Animations/Using_CSS_animations)

#### Added by **Marcell** on September 30, 2022
![[Pasted image 20230119005959.png]]

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
    <title>HTML Semantic and CSS selectors</title>
</head>

<body>
    <header>
        <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQFw__VI7FKFNtG0GN5rLQxPmtvZ1rSUpK3bA&usqp=CAU"
            alt="Delicious Okras">
        <nav>
            <!-- ul>li*3>a[href=javascript:;] -->
            <ul>
                <li> <a href="javascript://">About</a> </li>
                <li> <a href="javascript://">Contact</a> </li>
                <li> <a href="javascript://">Sign in</a> </li>
            </ul>
        </nav>
    </header>
    <hr>
    <main>
        <h1>My Website</h1>
        <h3>Welcome to my page, let me know what you think</h3>
        <section class="info">
            <article>
                <p>Okra or Okro (US: /ˈoʊkrə/, UK: /ˈɒkrə/), Abelmoschus esculentus, known in many English-speaking
                    countries as ladies'
                    fingers or ochro, is a flowering plant in the mallow family. It has edible green seed pods. The
                    geographical origin of
                    okra is disputed, with supporters of West African, Ethiopian, Southeast Asian, and South Asian
                    origins.
                    Cultivated in
                    tropical, subtropical, and warm temperate regions around the world, okra is used in the cuisines of
                    many
                    countries.[2]
                </p>
            </article>
        </section>

        <aside class="facts">
            <h4>Interesting fact</h4>
            <p>The first use of the word okra (alternatively; okro or ochro) appeared in 1679 in the Colony of Virginia,
                deriving from
                the Igbo word ọ́kụ̀rụ̀.[5] The word gumbo was first recorded to be used in American vernacular around
                1805, deriving
                from Louisiana Creole,[6] but originates from either the Umbundu word ochinggômbo[7] or the Kimbundu
                word ki-ngombo.</p>
            <a href="#">Learn More...</a>
        </aside>
        <div id="dropdown">
            <details>
                <summary>Uses</summary>
                <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Placeat aliquid rem voluptates ex tempore,
                    sapiente dolores cupiditate provident debitis unde est necessitatibus animi blanditiis quidem
                    nesciunt ullam ab maxime ducimus?</p>
            </details>
            <details>
                <summary>Toxity</summary>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Iure ipsum dolorum officia. Obcaecati
                    tempora ab praesentium cumque ullam itaque blanditiis dolorem voluptatum voluptates! Et, fugit
                    aperiam. Nemo unde eligendi non hic ea amet quidem accusantium, voluptas vel et at asperiores atque
                    aspernatur ab sed quis! Praesentium debitis vero delectus earum?
                </p>
            </details>
            <details>
                <summary>Chemistry</summary>
                <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Incidunt corporis eaque iure dolore. Odio,
                    asperiores animi exercitationem assumenda quasi repudiandae hic ab officiis quos aspernatur, ipsam
                    soluta beatae velit nesciunt. Dolores ut pariatur laborum incidunt non voluptatem, dolorum odio
                    minima?
                </p>
            </details>
        </div>

    </main>
    <hr>
    <footer>
        <p>&copy; <strong>Copyright</strong> <em>Spiced Academy 2022</em></p>
    </footer>

    <div class="anim1">

    </div>
    <div class="anim2">
        <h2>Party time</h2>
    </div>
    <div class="anim3">

    </div>


</body>

</html>
```

### style.css

```css
* {
    box-sizing: border-box;
    font-family: Arial, Helvetica, sans-serif;
}

header {}

header img {
    height: 150px;
    float: left
}

header nav {
    float: right
}

header nav ul li {
    float: left;
    list-style: none;
    margin-left: 10px;
}

header nav ul li:last-child a {
    background-color: blue;
    color: white;
    padding: 10px 30px;
}

hr {
    clear: both;
}

.info,
.facts {
    float: left;
    padding: 20px
}

.info {
    width: 60%
}

.facts {
    width: 40%
}

details {
    float: left;
    width: 33.33333%
}

/* header img[alt="Delicious Okras"] {
    border: 2px solid black;
} */

.anim1 {
    width: 200px;
    height: 200px;
    background-color: cadetblue;
    transition: border-radius 1000ms cubic-bezier(1, .12, .69, 1.65);
}

.anim1:hover {
    border-radius: 50%;
}

.anim1:active {
    background-color: black;
}

.anim2 {
    width: 60%;
    height: 300px;
    background-color: greenyellow;
    /* animation-name:  */
    animation-iteration-count: infinite;
    animation-duration: 1s;
    line-height: 300px;
    text-align: center;
}

.anim2 h2:before {
    content: "🎉"
}

.anim2 h2:after {
    content: " ";
    position: absolute;
    width: 50px;
    height: 50px;
    border-radius: 50%;
    background-color: blue;
}


@keyframes clubbing {
    0% {
        background-color: blue;
        transform: scale(1);

    }

    20% {
        background-color: yellow;
        transform: scale(0.8);
    }

    40% {
        background-color: red;
        transform: scale(1.1);
    }

    60% {
        background-color: green;
        transform: scale(0.4);
    }

    80% {
        background-color: magenta;
        transform: scale(1.2);
    }

    100% {
        background-color: black;
        transform: scale(1);
    }

}

.anim3 {

    width: 250px;
    height: 250px;
    background-color: chocolate;
    animation: moving infinite 2s;
}

@keyframes moving {
    50% {
        transform: translateX(400%);
    }

    75% {

        transform: translateX(200%);
    }

    95% {

        transform: translateX(300%);
    }
}
```

## Useful Links

[Cubic-Bezier](https://cubic-bezier.com/#.17,.67,.83,.67)

[Semantic Tags](https://www.w3schools.com/html/html5_semantic_elements.asp)

[CSS Animations](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Animations/Using_CSS_animations)