---
alias: imageboard_1
tags: project
---
# Image Board SPA

## Overview

Imagine a site where anybody could go and post an image of their choosing, along with a title and a textual description of that image, and others could go and look at that image and make thoughtful remarks about it. We have the technology to make this vision a reality.

This will be a single-page application made with [[Vue.js]].

## Part 1

For part 1 we want to create the main screen that users see when they arrive at the site. They should see a screen with the 6 to 12 most recently uploaded images. These should be shown as 'cards' arranged in a grid on larger screens and a column on smaller screens.

Each card should show the scaled-down image and its title.

Ultimately we will have to add some mechanism for pagination (either with buttons or infinite scroll). This will be difficult to implement while we only have three images to show. It will be easier to do after [[Image Board - Part 2|part 2]]  is completed.

![[Pasted image 20230120221641.png]]

In your Javascript you will have to create a `Vue` app and when it mounts make a network request to get the data for the images. Once you have it, your HTML template should loop through them and render each one.

#### Added by **Sven** on November 17, 2022

# Image board

## Next steps

### create a new database

```bash
createdb imageboard
```

### Clone the repo

```bash
git clone git@github.com:spicedacademy/okra-imageboard.git
```

### Import the provided SQL file

```bash
psql -d imageboard -f ./sql/images.sql
```

### **Ensure you are using node version 14!!!**

#### (Optional) Install `nvm`

-   Navigate to [https://github.com/nvm-sh/nvm#installing-and-updating](https://github.com/nvm-sh/nvm#installing-and-updating)
-   Follow the instructions
-   Execute `nvm` inside a terminal window to see if the installation was successful
-   `cd` into your project folder and run `nvm use`
-   sometimes you have to execute `nvm install` before

### Install all packages

```bash
npm install
```

### Start coding

-   Prepare state(s) for the images
-   Render empty page
-   Add `mounted()` lifecycle hook
-   Create endpoint in `server.js` for delivering the images from the DB
    -   Fetch images from DB -> implement a `db.js` file
    -   Return images as JSON
-   Fetch images after your page gets mounted and update your internal state(s)

## Files from the encounter

### `app.js`

```js
import * as Vue from './vue.js';

const cities = [
    {
        name: "Paris",
        country: "France"
    },
    {
        name: "Lisboa",
        country: "Portugal"
    },
    {
        name: "Berlin",
        country: "Germany"
    }
];

Vue.createApp({
    data() {
        return {
            headline: "My fancy image board",
            headlineCss: "headlineClass",
            cities: [],
            firstName: "",
            count: 0,
        }
    },
    methods: {
        updateName: function (e) {
            this.firstName = "Sven";
        },
        increaseCount: function () {
            this.count++;
        }

    },
    mounted() {
        fetch("/cities").then(res => res.json()).then(cities => {
            this.cities = cities;
        })
    }
}).mount('#main');
```

### server.js

```js
const path = require("path");
const express = require("express");
const app = express();
require('dotenv').config();
const { PORT = 8080 } = process.env;

app.use(express.static(path.join(__dirname, "public")));
app.use(express.json());

const cities = [
    {
        name: "Paris",
        country: "France"
    },
    {
        name: "Lisboa",
        country: "Portugal"
    },
    {
        name: "Berlin",
        country: "Germany"
    }
];

app.get("/cities", (req, res) => {
    res.json(cities);
})

app.get("*", (req, res) => {
    res.sendFile(path.join(__dirname, "index.html"));
});

app.listen(PORT, () => console.log(`I'm listening on port ${PORT}`));
```

### `index.html`

```html
<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8" />
        <meta name="viewport" content="width=device-width, initial-scale=1" />
        <title>Image Board</title>
        <style>
            .headlineClass {
                color: hotpink;
            }
        </style>
    </head>
    <script>
        console.log(document.getElementsByClassName("headlineClass"));
    </script>
    <body>
        <div id="main">
            <h1 class="secondClass" :class="headlineCss">{{ headline }}</h1>
            <ul v-for="city of cities">
                <li>{{city.name}} in {{city.country}}</li>
            </ul>
            first name:  {{firstName}}<br />
            <input type="text" v-model="firstName" name="firstName" id="">

            <button v-on:click="increaseCount">Click me({{count}})</button>

        </div>
        <script
            src="/js/app.js"
            type="module"
            crossorigin="use-credentials"
        ></script>
    </body>
</html>
```

## Nice to have dev tools

### browser-sync

Updates your browser automatically, when files change

-   install `browser-sync` and `concurrently`
    
    ```bash
    npm i browser-sync concurrently -D
    ```
    
-   Update your `package.json` (`nodemon` **HAS TO BE INSTALLED!!!**)
    
    ```json
      "scripts": {
          "test": "echo \"Error: no test specified\" && exit 1",
          "start": "concurrently \"nodemon server.js\" \"browser-sync start --proxy 'localhost:8080' --files '**/*'\""
      },
    ```
    
-   Run your stack with `npm start`

### git aliases

Inside your home folder, there is a file `.gitconfig`. Inside that file you can define aliases like so:

```ini
[alias]
        co = checkout
        ci = commit
        st = status
        br = branch
```

Now you can type e. g.:

```bash
>git st
Auf Branch sven
Ihr Branch ist auf demselben Stand wie 'origin/sven'.

Änderungen, die nicht zum Commit vorgemerkt sind:
  (benutzen Sie "git add <Datei>...", um die Änderungen zum Commit vorzumerken)
  (benutzen Sie "git restore <Datei>...", um die Änderungen im Arbeitsverzeichnis zu verwerfen)
        geändert:       index.html
        geändert:       package-lock.json
        geändert:       package.json
        geändert:       public/js/app.js

keine Änderungen zum Commit vorgemerkt (benutzen Sie "git add" und/oder "git commit -a")
```