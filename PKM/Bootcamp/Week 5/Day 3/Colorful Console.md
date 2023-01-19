# Colorful Console

[Chalk](https://github.com/chalk/chalk) is a module that allows you to stylize text in the console. Let's use it to log out colorful messages.

First, create a directory for this project. Then `cd` into it and type the following:

```bash
npm init
```

This launches a wizard that guides you through creating a `package.json` file that describes your project. You can just hit enter repeatedly to choose the default options.

Next, install the `chalk` module.

```bash
npm install chalk@4.0.0
```

This command downloads the module and places it in a directory named `node_modules`. The `--save` option causes the dependency to be listed in your `package.json` file (since npm v5 this option is also enabled by default).

Now you can use `chalk` in your project.

```js
var chalk = require('chalk');
console.log(chalk.red('this text is red'));
console.log(chalk.green('this text is green'));
```

Let's allow users to decide what text we stylize.

Create an `index.js` for this project in which you create a server similar to the one in the [[HTTP Request Listener|HTTP request listener]]. When this server receives a `GET` request, it should use `response.write` to generate a page that looks like this:

```html
<!doctype html>
<html>
<title>Colors</title>
<form method="POST">
  <input type="text" name="text">
  <select name="color">
    <option value="red">red</option>
    <option value="blue">blue</option>
    <option value="green">green</option>
    <option value="yellow">yellow</option>
    <option value="gray">gray</option>
    <option value="magenta">magenta</option>
    <option value="cyan">cyan</option>
  </select>
  <button type="submit">Go</button>
</form>
</html>
```

If the server receives a `POST`, it should use the built in `querystring` module to parse the body. Before parsing the body should look something like this:

```
text=it+is+better+to+have+loved+and+lost+than+never+to+have+loved+at+all&color=magenta
```

And parsed it would look like this:

```js
{ text: 'it is better to have loved and lost than never to have loved at all',
  color: 'magenta' }
```

You should use `chalk` to `console.log` the specified `text` in the specified `color`. You should also send a response that looks like this:

```html
<!doctype html>
<html>
<title>it is better to have loved and lost than never to have loved at all</title>
<a href="/" style="color:magenta">it is better to have loved and lost than never to have loved at all</a>
</html>
```

Clicking the link on that page should take you back to the page with the form.

#### Added by **Jan** on October 26, 2022

### querystring is deprecated - use `new UrlSearchParams()` instead

```js
     // body is the parsed body
     const query = new URLSearchParams(body);
        console.log("this is the query: ", query);
        console.log(
          "these are the query values: ",
          query.get("text"),
          query.get("color")
        );
```