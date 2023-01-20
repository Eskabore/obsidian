---
alias: express_router
tags: express, router
---
## Express Router

Express Router is like a mini-version of an express app, but it only handles routes. It allows you to use all the routing APIs to configure your routes. When you initially set up an Express app, it comes with a default router object - the one that we all have been using up to this point. `Express.Router` essentially sets up a **sub-router**. So you can create multiple sub-routers to handle different types of routes, depending on how you want to organize your app.

To set it up, all you need is:

```js
// ./routers/router.js
const express = require('express');
const router = express.Router();
```

Then you're ready to go!

You use the Router as you normally would when writing your routes in express.

```js
// ./routers/router.js
router.get('/', (req,res) => {
    res.render('home')
});

router.post('/signup', (req,res) => {
    // run your post route
});

//export your router
module.exports = router;
```

Include it in your server with:

```js
// server.js
const router = require('./routers/router');

app.use(router);
```

If you pass a path as the first parameter to `app.use`, the router you pass as the second argument will apply to that path. For example, if you have a router that defines a route for `/home` and you pass that router as the second argument to `app.use` with `/about` as the first argument, the url that will match the `/home` route will be `/about/home`.

#### Added by **Martin** on November 15, 2022
![[Pasted image 20230120215859.png]]


# server.js

```js
const express = require('express');
const app = express();
const authRouter = require('./routes/auth');
const petitionRouter = require('./routes/petition');
const cookieSession = require("cookie-session");


app.use( // used for created a Session object (req.session) and persist this object
    cookieSession({
        secret: `I'm always hungry.`,
        maxAge: 1000 * 60 * 60 * 24 * 14,
        sameSite: false
    })
);

app.use(authRouter);
app.use(petitionRouter);

app.listen(8080, () => {
    console.log('server listening to localhost:8080');
})
```

# auth.js

```js
const express = require('express');
const router = express.Router();
const path = require('path');

router.use(['/register', '/login'], (req, res, next) => {
    if (!req.session.userId) {
        next();
    } else {
        let signature = true;
        if (signature) {
            res.redirect('/thanks');
        } else {
            res.redirect('/petition');
        }
    }
});

router.get('/register', (req, res, next) => {
    res.sendFile(path.join(__dirname, 'public', 'register.html'));
});

router.post('/register', (req, res) => {
    res.send({ status: 'POST /register ok'});
});

router.get('/login', (req, res) => {
    res.send({ status: 'GET /login ok'});
});

router.post('/login', (req, res) => {
    res.send({ status: 'POST /login ok'});
});

router.get('/logout', (req, res) => {
    req.session.userId = null;
    res.send({ status: 'GET /logout okay'});
})

module.exports = router;
```

# petition.js

```js
const express = require('express');
const router = express.Router();

router.get('/petition', (req, res) => {
    res.send({ status: 'GET /petition ok'});
});

router.post('/petition', (req, res) => {
    res.send({ status: 'POST /petition ok'});
});

router.get('/thanks', (req, res) => {
    res.send({ status: 'GET /thanks ok'});
});

router.get('/signers', (req, res) => {
    res.send({ status: 'GET /signers ok'});
});

router.get('/signers/:city', (req, res) => {
    res.send({ status: 'GET /signers/:city ok'});
});

router.get('/profile', (req, res) => {
    res.send({ status: 'GET /profile ok'});
});

router.post('/profile', (req, res) => {
    res.send({ status: 'POST /profile ok'});
});

router.get('/edit-profile', (req, res) => {
    res.send({ status: 'GET /edit-profile ok'});
});

router.post('/edit-profile', (req, res) => {
    res.send({ status: 'POST /edit-profile ok'});
});

module.exports = router;
```