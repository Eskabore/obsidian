# Express + Handlebars

Express has a built-in mechanism to support server-side templates but does not require any particular template language. There are multiple template languages for which [Express-compatible 'engines'](https://github.com/expressjs/express/wiki?_ga=1.45443236.128052078.1471765293#template-engines) are available. For Handlebars, which is a particularly popular template language, there are at least four engines to choose from. Let's go with [express-handlebars](https://github.com/ericf/express-handlebars).

```bash
npm install express-handlebars
```

In your project you need to tell Express to use Handlebars as its template engine.

```js
const { engine } = require('express-handlebars');
app.engine('handlebars', engine());
app.set('view engine', 'handlebars');
```

By default, templates will be looked for in a directory named "views" but you can change this if you wish. Also by default, the files in the views directory are expected to have ".handlebars" as their extension but you can change this too if you wish. Assuming that you do not change either of these things and that you have a file named "hello.handlebars" in your views directory, you can render that template and send it to the browser using the [`res.render`](http://expressjs.com/en/4x/api.html#res.render) method.

```js
app.get('/hello', function(req, res) {
    res.render('hello', {
        name: 'kitty'
    });
});
```

The second argument passed to `res.render` is the data to be used by the template.

## Layouts

On most websites there are a lot of common elements on different pages. Usually there are common elements such as headers and footers that change very little from page to page while there is a main content area that is completely unique to the particular page. `express-handlebars` allows you to create _layouts_ (main wrappers for site content) to handle this common situation. A layout may look something like this:

```html
<!doctype html>
<html>
    <head>
        <title>{{title}}</title>
        <link rel="stylesheet" href="/stylesheet.css">
    </head>
    <body>
        <header><!-- header content goes here --></header>

        {{{body}}}

        <footer><!-- footer content goes here--></footer>
    </body>
</html>
```

If this file were named "layout.handlebars" and you wanted to use it to wrap content from a template named "content.handlebars", your call to render the template would look like this:

```js
app.get('/layout-example', function(req, res) {
    res.render('content', {
        layout: 'layout',
        title: 'My Title'
    });
});
```

What `res.render` will do is first render the template specified by the first argument. It will then render the layout, passing the rendered main template to it as a property named `body`. The reason `{{{body}}}` in the layout uses triple curly braces is to tell Handlebars not to escape HTML control characters such as `<` and `>`.

By default layouts are expected to be in a subdirectory of the views directory named "layouts". Also by default, if you leave out the layout property from the data you pass as the second argument to res.render, Express Handlebars will attempt to use a layout named "main". If you don't want to use any layout at all, you must manually set the `layout` property of the data you pass to `null`. On the other hand, if you only use one layout and you name it "main.handlebars", you will never have to add a `layout` property at all.

## Exercise

You can do this work in your already-existing Express project or create a new Express app for it. If you create a new project, you will have to copy your projects folder into it and use `express.static` to serve its contents.

When users navigate to your site (i.e., when `req.url` is `'/'`), you should serve them a page that welcomes them to your portfolio. This page should be generated using `express-handlebars` so you will have to create a template for it and place it in the views directory. This template should expect to be passed an array of objects containing information about your projects. Two bits of information will be needed for each project: the name of the project and the name of the directory it is in. These are two distinct things since it is likely that the name of the project you want to show users is not the same as the name of the folder that the project files are in and that will appear in urls.

The array of objects representing your projects can come from a json file that you create. An easy way to read the contents of the json file in your app is to use `require`. That is roughly equivalent to using `fs.readFileSync` and then passing to `JSON.parse` the contents of the file.

```JSON
[
    {
        "title": "Kitty Carousel",
        "directory": "kitty_carousel"
    },
    {
        "title": "Connect Four",
        "directory": "connect_four"
    }
]
```

Apart from all the files the project requires there is something else you should put in each project folder: a screenshot of your project.

When your template receives this array of objects it can loop through it and create an element for each one. This element should contain the name of the project and the screenshot. Both the project name and the screen shot should link to the project itself.

Apart from the elements created in the loop, the template for this page should contain a heading of some kind as well as some text explaining that this is your portfolio site.

We will be adding another page soon so it makes sense to create a layout now. This layout file should contain the basic skeleton of the page. You will most likely want a `<head>` element with a `<title>` element in it and perhaps a `<link>` for your stylesheet. It should also contain a `<footer>` element in the `<body>`. You can put some normal footer-like content in it, such as a copyright notice.

![[Pasted image 20230119223733.png]]

## Helpful guidline for excercise

### possible folder structure

```
📦express-handlebars
 ┣ 📂projects
 ┃ ┣ 📂connect_four
 ┃ ┃ ┣ 📜index.html
 ┃ ┃ ┗ 📜screenshot.png
 ┃ ┗ 📂kitty_carousel
 ┃ ┃ ┣ 📜index.html
 ┃ ┃ ┗ 📜screenshot.png
 ┣ 📂public
 ┃ ┗ 📜styles.css
 ┣ 📂views
 ┃ ┣ 📂layouts
 ┃ ┃ ┗ 📜main.handlebars
 ┃ ┣ 📜dinosaurs.handlebars
 ┃ ┣ 📜portfolio.handlebars
 ┃ ┗ 📜simple.handlebars
 ┣ 📜index.js
 ┣ 📜projects.json
```

### Next steps

0.  Test out simple handlebars templates/examples in express to get used to the syntax and file location logic
    
    -   `npm i express-handlebars`
    -   make sure to have a `main.handlebars` layout in `views/layouts`
    -   make sure to have at least one handlebars template in `views`
    -   render the handlebars template with express
1.  Setup a new project - create a new directory for this project, with its own index.js file.
    
    -   In this new directory, create a directory called projects and copy the projects you want to showcase inside this directory
    -   use `express.static` to service the project files -> test the routes like `http://localhost:8080/connect_four` for example if static file serving is working
2.  Create a route for `/` which should be used as homepage to showcase all projects
    
    -   create `projects.json` and add information according to the projects you copied to the `projects` folder. Look up in the encounter material how the projects.json can look like.
    -   retrieve the information from the `projects.json` with the help of the `fs` and `path` module. You'll need as well the `JSON.parse()` method which will transform a string into a JavaScript object.
    -   make sure to create screenshots of your projects and put the screenshots in the projects folder themselves as `screenshot.jpg`
    -   make use of express-handlebars to welcome the user to your homepage and show them all your projects with an image/screenshot `<img src="...">` of it and a link `<a href="...">` to the project itself

## Encounter information

### Using express-handlebars

2 important things:

-   having a `main.handlebars` **layout** file within `views/layouts` folder
    -   used for general boilerplate like tags
-   having a `views` folder with at least one **view** ending with `.handlebars` (e.g. `simple_view.handlebars`)
    -   used for representing the data inside the

### Basic usage in JS:

```js
const express = require('express');
const handlebars = require('express-handlebars');

const app = express();
app.engine('handlebars', handlebars.engine());
app.set('view engine', 'handlebars');

app.get('/show_name', (req, res) => {
    const name = 'Foo Bar';
    res.render('simple', {
        name: name
    });
});
```

### views/layouts/main.handlebars

```handlebars
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Main handlebars layout | {{ title }}</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    {{{ body }}}
</body>
</html>
```

### views/dinosaurs.handlebars

```handlebars
<ul>
{{#dinosaurs}}
    <li>Dinosaur {{name}}' had an average height of {{height}}</li>
{{/dinosaurs}}
</ul>
```

### views/simple.handlebars

```handlebars
<h1>My name is {{name}}</h1>
```

### index.js

```js
const express = require('express');
const path = require('path');
const fs = require('fs');
const handlebars = require('express-handlebars');

const app = express();
app.engine('handlebars', handlebars.engine());
app.set('view engine', 'handlebars');
app.use(); // add middleware express.static to serve ./projects folder
app.use(); // add middleware express.static to serve ./public folder

// http://localhost:8080/show_name
app.get('/show_name', (req, res) => {
    const name = 'Foo bar';
    res.render('simple', {
        name: name
    });
});

// http://localhost:8080/dinosaurs_handlebars
app.get('/dinosaurs_handlebars', (req, res) => {
    const dinosaurs = [
        { name: 'Tyrannosaurus', height: '7m' },
        { name: 'Triceratops', height: '3m' },
        { name: 'Velociraptor', height: '0.6m' },
        { name: 'Stegosaurus', height: '3.5m' },
        { name: 'Spinosaurus', height: '2.4m' }
    ];  
    res.render('dinosaurs', {
        dinosaurs: dinosaurs
    });
});

// http://localhost:8080
app.get('/', (req, res) => {
    const projectsAsString = // read out projects from projects.json with the fs module
    const projects = // transform string to JS object


    res.render(
        // render portfolio handlebars view with projects as passed variable
    );
});

app.listen(8080, () => console.log('server listening to 8080'));
```