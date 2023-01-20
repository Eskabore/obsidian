# Basic Auth

Basic Authentication is a fairly simple way to control access to websites or parts of websites. The client sends credentials in the `Authorization` header. If the credentials are not present or invalid, the server responds with the `401` status code and the `WWW-Authenticate` response header. This causes the browser to present the user with a password challenge dialog box. Once a successful username and password combination is entered, the browser will continue to send the successful pair in the `Authorization` header in subsequent requests for some time.

The [basic-auth](https://github.com/jshttp/basic-auth) module, which you can install via npm, handles the parsing of the `Authorization` request header for you. If the username and password are not correct, you have to send the response with the `WWW-Authenticate` header manually.

```js
const basicAuth = require('basic-auth');

const auth = function(req, res, next) {
    const creds = basicAuth(req);
    if (!creds || creds.name != 'discoduck' || creds.pass != 'opensesame') {
        res.setHeader('WWW-Authenticate', 'Basic realm="Enter your credentials to see this stuff."');
        res.sendStatus(401);
    } else {
        next();
    }
};

app.use(auth);
```

The `realm` in the `WWW-Authenticate` header is meant to describe the area of the site that is protected. It allows a single site to have multiple protected areas, each with different authentication requirements. Some browsers show the value set for `realm` in the dialog containing the username and password input fields while others do not.

### Exercise

Select one of the directories in your [[Express|Express Portfolio]] project and require users to provide a correct user name and password before they are able to access the files within it.

#### Added by **Jan** on November 1, 2022

```js
const express = require("express");
const app = express();
const cookieParser = require("cookie-parser");
const basicAuth = require("basic-auth");

// register a middleware globally
app.use(cookieParser());

// auth middleware
function auth(req, res, next) {
  const creds = basicAuth(req);
  if (!creds || creds.name !== "jan" || creds.pass != "123") {
    // access denied
    res.setHeader("WWW-Authenticate", 'Basic realm="example"');
    res.sendStatus(401);
  } else {
    // access is granted
    next();
  }
}

// registering a middleware for a specific route
app.get("/", auth, (req, res) => {
  res.send("this is the secret page");
});

// handling cookies
app.get("/cookie", (req, res) => {
  // setting a cookie
  res.cookie("myCookie", "some info");
  // access a cookie
  console.log(req.cookies);
  // deleting a cookie
  //   res.clearCookie("myCookie");
  res.json("hello express");
});

app.get("/about", (req, res) => {
  res.send("hello about");
});
app.listen(3000, () => console.log("listening"));
```

### Example of clicking a button to set / check a cookie

#### server.js

```js
const express = require("express");
const app = express();
const cookieParser = require("cookie-parser");
const basicAuth = require("basic-auth");
// register a middleware globally
app.use(cookieParser());

// this line is needed for express to parse the request body
// when accepting a post request
app.use(express.urlencoded({ extended: false }));



app.get("/", (req, res) => {
  res.sendFile(__dirname + "/index.html");
});

app.post("/register", (req, res, next) => {
  // 'consent' is the name attribute from the checkbox in index.html
  console.log(req.body.consent);
  console.log("button got clicked");
});

app.listen(3000, () => console.log("listening"));
```

#### index.html

```html
<form action="/register" method="POST">
  <input type="checkbox" name="consent" id="consent" />
  <button type="submit">Accept Cookie</button>
</form>
```