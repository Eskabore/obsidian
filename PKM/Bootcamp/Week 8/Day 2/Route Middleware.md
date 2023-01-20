---
alias: route_middleware
tags: express, middleware
---
# Middleware

By now the concept of [middleware](http://expressjs.com/en/guide/writing-middleware.html) in Express is familiar to you. To recap, middleware functions are functions that you tell Express to run whenever a request is received. You do this by passing them to `app.use`. When Express calls a middleware function that was passed to `app.use`, it passes to it the request and response objects as well as a reference to the next matching middleware function or route handler. This gives you an opportunity to either a) send a response and end the processing of the request or b) modify the request or response objects in order to affect how they are handled further down the line.

By default, middleware functions will run for every request that is received. This makes them an ideal place to do work that must be done for all or most requests. For example, if you wanted to make sure that logged out users can't do anything on your site except log in or register, you could write a middleware function that redirects logged out users to the log in or registration page if they attempt to go anywhere else.

```js
app.use((req, res, next) => {
    if (!req.session.userId && req.url != '/login' && req.url != '/register') {
        res.redirect('/register');
    } else {
        next();
    }
});
```

If you wanted to do the inverse - redirect logged in users away from the log in and registration pages - you could add another condition to the middleware function above. Alternatively, you could write a middleware function that does not check the url at all and instead have Express only run it for the `/login` and `/register` routes.

Express allows you to limit the routes that a middleware function applies to in multiple ways. One way is to pass a path as the first argument to `app.use`. When you do this, Express will only call the middleware function passed as the second argument to `use` if the url of the request begins with the path you passed as the first argument.

```js
app.use('/funky', (req, res, next) => {
    console.log(
        req.url,
        req.baseUrl,
        req.originalUrl
    );
    next();
});
```

The middleware function above will only run when the url of the request starts with `/funky`. If the url were `/funky`, the log would show

```
/ /funky /funky
```

If the url were `/funky/chicken`, the log would show

```
/chicken /funky /funky/chicken
```

If the url were `/disco` or `/disco/duck`, there would be no log at all because the function would not be called.

To return to the log in and registration example, this would be a way to make a middleware function that only ran for those routes. If you made the routes start with the same path segment (e.g., `/auth/login` and `/auth/register`), you could pass that path segment (`/auth`) to `app.use` as the first argument and a function that confirms that the user is logged out as the second argument.

## Route middleware

In a sense, route handlers (the functions you pass to `app.get`, `app.post`, etc.) are themselves middleware functions. We don't normally think about them that way because usually they send a response and do not call `next`. However, they _can_ call `next` instead of sending a response, allowing another function to have the final word.

What's more, it is possible to pass more than one function to `app.get` and `app.post`. When you do this, Express runs them in the order in which they are passed.

```js
app.get(
    '/funky/:bird',
    function firstHandler(req, res, next) {
        if (req.params.bird == 'chicken') {
            next();
        } else {
            res.sendStatus(400);
        }
    },
    function secondHandler(req, res) {
        res.sendStatus(200);
    }
);
```

In this example, the first function passed to `app.get` (`firstHandler`) decides whether to allow processing to continue or send a response. If it calls `next`, Express runs the next function that was passed to `app.get` (`secondHandler`). If it does not call `next`, then `secondHandler` will never get called.

Functions such as `firstHandler` may be called _route middleware_. They are middleware functions that apply to specific routes.

Returning once again to the log in and registration example, the desired effect can be achieved quite nicely using route middleware. The first step would be to write a single middleware function that does the necessary logic:

```js
function requireLoggedOutUser(req, res, next) {
    if (req.session.userId) {
        res.redirect('/');
    } else {
        next();
    }
}
```

and then applying it to the relevant routes:

```js
app.get('/login', requireLoggedOutUser, (req, res) => {
    /* ... */
});

app.post('/login', requireLoggedOutUser, (req, res) => {
    /* ... */
});

app.get('/register', requireLoggedOutUser, (req, res) => {
    /* ... */
});

app.post('/register', requireLoggedOutUser, (req, res) => {
    /* ... */
});
```

There is a lot going for this technique. Route middleware allows us to

-   share logic across multiple routes without repeating code
    
-   have the route handlers themselves focus on their specific tasks
    
-   see at a glance what processing will occur for requests that match a specific route

#### Added by **Martin** on November 15, 2022
![[Pasted image 20230120215647.png]]

```js
const path = require('path');
const express = require('express');
const app = express();

// 1. 
// GLOBAL MIDDLEWARES FOR ALL ROUTES:
// Middlewares are just functions, that gets executed for routes
app.use((req, res, next) => {
    console.log('First custom middleware');
    next();
});

app.use((req, res, next) => {
    console.log('Second custom middleware');
    next();
});

// 2. some standard middlewares
const cookieSession = require("cookie-session");

app.use(express.static(path.join(__dirname, 'public'))); // used to serve static files
app.use(express.urlencoded({ extended: false })); // used for POST/PUT requests, where you have a body as simple string
app.use(express.json()); // used for POST/PUT requests, where you have a JSON string as body
app.use( // used for created a Session object (req.session) and persist this object
    cookieSession({
        secret: `I'm always hungry.`,
        maxAge: 1000 * 60 * 60 * 24 * 14,
        sameSite: false
    })
);


// 3. middlewares for custom routes
app.use('/animal', (req, res, next) => {
    console.log('Executed only for /animal')
    next();
});

app.use('/animal/:type', (req, res, next) => {
    console.log('middleware for /animal/:type');
    console.log('url: ', req.url);
    console.log('baseurl: ', req.baseUrl);
    console.log('original url: ', req.originalUrl);
    next();
});

// 4. `app.get`, `app.post`, `app.put` and so on are middlewares aswell!
app.get('/', (req, res, next) => {
    console.log('app.get is a middle ware itself with next param');
    next();
}, (req, res, next) => {
    res.send({ status: 'multiple middlewares done' });
});


// 5. add custom middleware for petition project
app.use((req, res, next) => {
    if (!req.session.userId && req.url !== '/login' && req.url !== '/register') {
        res.redirect('/register');
    } else {
        next();
    }
});
```