[Express](http://expressjs.com/) is a framework that makes serving websites with Node much easier. Many of the tasks involved in our [[HTTP Request Listener]] and [[Portfolio]] projects are done automatically by Express.

## Getting Started

-   Create a new directory in your repo named "express-project" or something along those lines.
    
-   `cd` into your Express project directory and install Express.
    
    ```bash
      npm init
    ```
    
    ```bash
      npm install express
    ```
    

-   In `index.js` (or whatever you decided to call your main js file) `require` express and create an instance of it.
    
    ```js
      const express = require('express');
      const app = express();
    ```
    
-   This would be a good time to add your first _route_, i.e., tell Express what to do when a request is made for a specific url using a specific HTTP method.
    
    ```js
      app.get('/hello/world', function(req, res) {
          res.send('<!doctype html><title>Hello World!</title><p>Hello World!');
      });
    ```
    
    The use of the `get` method means that the handler specified as the second argument will only run for GET requests to `/hello/world`.
    
    Route handlers are passed request and response objects that have been enhanced by Express. For example, response objects have a `send` method. Full descriptions of request and response objects in Express are available [here](http://expressjs.com/en/4x/api.html#req) and [here](http://expressjs.com/en/4x/api.html#res).
    
    The route in this example is very simple but Express supports more complex routing as well. See [this guide](http://expressjs.com/en/guide/routing.html) for examples and explanations of the kinds of routes you can create.
    
-   Start listening for requests.
    
    ```js
      app.listen(8080);
    ```
    

## Middleware

Central to Express is the concept of _middleware_, functions that process requests and responses and pass them along to the next function in the chain if they do not send a response themselves.

To add a middleware function for processing all requests that are received, you use the `use` method.

```js
app.use(function logUrl(req, res, next) {
    console.log(req.url);
    next();
});
```

The above example will cause the url of every request to be logged to the console.

Note that middleware functions are run in the order in which they are added. If a middleware function added before the one in the example does not call next, `logUrl` will not run.

Express used to come with a set of very useful middleware. It was decided to break most of them out into [separate npm modules](http://expressjs.com/en/guide/migrating-4.html#core-changes). One useful middleware function that is still built in to Express is `express.static`. You can use this function to specify a directory or directories from which static content (e.g., html, css, images, js files, etc.) should be served.

```js
const path = require('path');

app.use(
    express.static(
        path.join(__dirname, 'static')
    )
);
```

Files contained in the directory named "static" will now be served from "/". That is, the word "static" will not appear in the url.

Another useful middleware function that comes with Express is `express.urlencoded`. This middleware will automatically wait for urlencoded request bodies (such as those that browsers automatically generate when forms using the POST method are submitted), parse them, and make the resulting object available as `req.body`. When you `use` the `express.urlencoded` middleware, you need to pass a configuration object to avoid an annoying warning in console.

```js
app.use(
    express.urlencoded({
        extended: false
    })
);
```

There is also `express.json`, a middleware function that parses bodies that are in JSON format.

## Exercises

1.  Copy the projects directory from your [portfolio](https://spiced.space/okra/portfolio) project into your new Express project and use `express.static` to serve its contents.
    
2.  Install [cookie-parser](https://github.com/expressjs/cookie-parser) and `use` it in your Express project.
    
    ```js
     app.use(
         require('cookie-parser')()
     );
    ```
    
    This will cause an object named `cookies` containing values from the `cookie` request header to be attached to request objects.
    
3.  In this app, users will be allowed to access any route - but only if they have agreed to let you store a cookie in their browser. Every route they try to access should **redirect** to the `/cookie` route, if they have not yet agreed. Before redirecting, remember to **store** the url that the user is requesting for later. How should we store it? In a cookie! You can read the value of the url from the cookie later on.
    
    There must be two routes which are **always available**, even if the user has not agreed to cookies: `GET /cookie` and `POST /cookie`. These routes will allow the user to choose if they want to allow cookies or not. If we don't make them always available, there will be no way for the user to agree to cookies...
    
4.  Create a `/cookie` route that responds to GET requests, with a page that warns users that they must accept cookies to be able to user our site. The page should have a checkbox for users to indicate that they accept the cookie policy, and a button to submit. When users click on the button, a POST to `/cookie` should occur.
    
5.  Create a `POST /cookie` route. It should check the value of the checkbox that was submitted. If the user agreed to cookies, set a cookie to remember that fact across requests, and redirect to the url the user had been trying to navigate to before being redirected to `/cookie`. (Read the url from the cookie you set earlier.) If the user did not accept the cookie policy, send a page that tells the user they cannot use the site without accepting cookies. You can set the cookie using the [`res.cookie`](http://expressjs.com/en/4x/api.html#res.cookie) method.

#### Added by **Yair** on October 28, 2022
![[Pasted image 20230119223248.png]]

![[Pasted image 20230119223255.png]]

## index.js

```js
const path = require('path');
const express = require('express');
const cookieParser = require('cookie-parser');
const app = express();
const PORT = 3000;

// install middleware to help us read cookies easily
app.use(cookieParser());
// install middleware to help us read POST body (form data) easily
app.use(express.urlencoded({ extended: false }));

// Our own custom logger middleware!
app.use((req, res, next) => {
    const now = new Date();
    console.log(`${now.toUTCString()}\t${req.method}\t${req.url}`);
    next();
});

// serve the `public` directory's contents at /, with NO PREFIX
// public/style.css -> /style.css
// public/script.js -> /script.js
app.use(express.static(path.join(__dirname, 'public')));

// serve the `projects` directory's contents at /projects, WITH PREFIX
app.use('/projects', express.static(path.join(__dirname, 'projects')));

app.get('/', (request, response) => {
    console.log('A console message first...');
    response.send('Hi there, Okra!');
});

app.get('/vote', (req, res) => {
    // only send the file if the user has NOT voted yet!
    // read the cookie!
    const cookies = req.cookies;
    console.log({ cookies });
    if (cookies.voted === '1') {
        return res.redirect('/');
    }
    res.sendFile(path.join(__dirname, 'vote.html'));
});

app.post('/vote', (request, response) => {
    // read data sent by the user in the form!
    const body = request.body;
    console.log(body);
    const { animal, message } = body;

    console.log(`User voted for ${animal}. Added: "${message}"`);

    // setting the cookie to be sent to the client
    response.cookie('voted', 1);
    response.send('Thanks for voting');
});

app.get('/secret', (req, res) => {
    res.redirect('/');
});

app.get('/very-secret', (req, res) => {
    res.sendStatus(403);
});

app.get('/pool-table', (req, res) => {
    const myJsonObject = {
        color: 'green',
        weight: 250,
        pockets: 6,
    };
    res.json(myJsonObject);
});

// listen on port 3000
app.listen(PORT, () => {
    console.log(`Listening on port ${PORT}`);
});
```