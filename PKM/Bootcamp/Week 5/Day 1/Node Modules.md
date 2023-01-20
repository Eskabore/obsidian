# Node Modules

Node modules are just js files. However, there are some important differences between Node modules and js files that run in the browser. Apart from the different APIs that are available, there is also a difference related to scope.

In a js file that runs in the browser, if you declare a variable outside of any function, you create a global variable/property. This does not happen in Node modules. Variables you declare outside of a function are local to the module and do not become a property of the global object. It is as if the content of Node modules are wrapped by an invisible iife.

It is also as if the invisible immediately-invoked function wrapping a module's contents has several arguments passed to it. One of these is `module`, an object representing the module. This object has a property named `exports` which starts out as an empty object. There is also a local variable named `exports` that refers to this object. If you want to make any data or function available to other modules that use your module, you must attach it to this object. `this` within a module refers to the same object as `exports`.

Note that if you want to replace a module's `exports` with a brand new object of your creation, you have to explicitly set `module.exports`. Merely setting `exports` to a new value will not change what other modules get when they use your module.

```js
module.exports = function() {
    console.log('This module is just a function.');
};
```

## `require`

For a module to use another module, it must first include or import it with a call to the global function `require`.

```js
const url = require('url');
```

In the example above, the `url` variable is now equal to the `exports` object of the url module.

Once a module is required by another module, all other calls to require it return the exact same object that the first one did. Every module is initialized only once.

```js
const url = require('url');
require('url') == url; //true
```

It is possible for Node modules to have _circular dependencies_. If module A requires module B and module B requires module A, B will not be able to access everything that A attaches to its `exports` object if A is still in the process of initializing. In this situation, A will appear to B to be an empty object.

[Modules that come with Node](https://nodejs.org/api/) can be included simply by passing their name to `require`. Modules that you install into your project with `npm install` can also be required in this manner (these are placed in a directory named `node_modules` in the root of your project). You can set an environment variable named `NODE_PATH` if you wish to access modules in your project directories in this manner, or you can include a path in the string you pass to `require`.

```js
const http = require('http'); //require the built-in http module
const handlebars = require('handlebars'); //require the handlebars module installed from npm
const myModule = require('./my-module'); //require my-module from the current directory
```

Every node process has a main module. This is the module whose filename was typed after `node` on the command line when the process was started. If for some reason you want to access this module, you can with `require.main`.

## The `process` module

The `process` module is special in that you do not have to require it to use it - it is available as a global.

`process` provides information about the current Node process that is running. For example, its `argv` property gives you access to the arguments that were used to start the process and its `env` property gives you access to the current environment variables.

## Exercise

Write a module that describes a url passed to it as a command line argument. It should log to the console the following parts of the url: the protocol, the host, the hostname, the port, the pathname, and the query string. Additionally, if there is query string in the url, it should log the value of each parameter.

For example, if you run the module with the following command

```bash
node index.js "http://127.0.0.1:8080/test?a=100&b=200"
```

you would get the following as output

```
The protocol is http:
The host is 127.0.0.1:8080
The hostname is 127.0.0.1
The port is 8080
The pathname is /test
The query is a=100&b=200
The value of the a parameter is 100
The value of the b parameter is 200
```

If you run the module by typing

```bash
node index.js "https://spiced.academy/program/full-stack-web-development/"
```

you would get the following as output

```
The protocol is https:
The host is spiced.academy
The hostname is spiced.academy
The port is null
The pathname is /program/full-stack-web-development/
The query is null
```

All of this can be accomplished using Node's [url](https://nodejs.org/api/url.html) and [querystring](https://nodejs.org/api/querystring.html) modules, both of which have a `parse` method that accepts a string as a parameter and returns an object. (The [parse](https://nodejs.org/api/url.html#url_url_parse_urlstring_parsequerystring_slashesdenotehost) method of the url module is described as a legacy API. It is not deprecated, however, and you can feel free to use it.)

#### Added by **Jan** on October 24, 2022

index.js

```js
// this is a node internal module - it still needs to
// be required
const crypto = require("crypto");

const randomString = crypto.randomBytes(64).toString("Hex");
// console.log(randomString);

// use a package from npm
// npm install supervillains
const supervillains = require("supervillains");

//=> ['Abattoir', 'Able Crown', …]

const randomVillain = supervillains.random();
// console.log(randomVillain);

// we require the add function

const add = require("./add");
// console.log(add(7, 5));

const { hello, goodbye } = require("./functions");
// console.log(functions.hello());

// we can use 'process' to access the argv array
console.log(process.argv);
```

add.js

```js
function add(a, b) {
  return a + b;
}

module.exports = add;
```

functions.js

```js
function hello() {
  return "hello";
}
function goodbye() {
  return "goodbye";
}

module.exports = {
  hello: hello,
  goodbye: goodbye,
};
```