We have already discussed preventing SQL injection attacks. There are several other vulnerabilities that are extremely easy to introduce into your site by accident. It is best to use libraries and adopt policies and procedures that help you to prevent these vulnerabilities. However, even if you do this, you must remain constantly vigilant.

## `eval`

`eval` is a global Javascript function that we have not yet looked at primarily because using it is almost always ill-advised. It accepts a string as a parameter and expects that string to consist of Javascript code. It compiles the string passed to it and runs it.

There are actually multiple reasons to avoid `eval` but the one we are concerned with here is security. If the string you pass to `eval` is not trusted (if, for example, it was provided by a user), anything could happen.

It is important to know that `eval` is not the only thing that does what `eval` does. Both `setTimeout` and `setInterval` can take a string rather than a function as an argument. Also, the `Function` constructor takes a string representing the body of the function to be created by it.

Fortunately, it is very easy to avoid using all of these things and it is a good idea to do so unless there is absolutely no other way to achieve your goals. If you do use them, you must be absolutely certain that the string you pass cannot do any mischief. The string you pass must come from a trusted source.

## XSS

Cross-site scripting (abbreviated _XSS_) vulnerabilities allow attackers to inject their own scripts into your pages. It is common to take input from users and show it to other users. It is critical that this input be _sanitized_ before it is displayed. If it contains HTML that is not escaped, attackers can include their own scripts on your page and do anything they want.

Sanitizing involves escaping the characters &, <, >, ", and ', all of which are meaningful in HTML. Keep in mind that if you want to put untrusted content into `<script>` tags, they must be escaped for Javascript rather than HTML. Another complicating factor is that you sometimes want to allow users to include some HTML formatting of the content they submit.

There are numerous sanitization libraries available. Handlebars helps a great deal by automatically escaping everything. If you want to use unescaped content in a Handlebars template, you have to take special action. This makes it easier to avoid accidents but can also lull you into a false sense of security and make you let down your defenses. So be careful!

To further aid in preventing XSS attacks, most browsers now support the [`Content-Security-Policy`](https://developer.mozilla.org/en/docs/Web/Security/CSP/CSP_policy_directives) header, which allows you to specify the precise origins from which scripts and other resources may be included in your site.

## Clickjacking

Clickjacking is tricking users into thinking they are clicking on one thing when they are really clicking on another. To get somebody to click on a button on your site when they think they are clicking on something else, an attacker may load your site in a frame on another site. To prevent this from happening you can use the [X-Frame-Options](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options) header to disallow framing of your page by unauthorized parties.

## CSRF

Cross-site request forgeries (CSRF) exploit the fact that browsers automatically send cookies set by a domain with every request to that domain. If a user who is logged in to your site goes to another malicious site, the malicious site can invisibly make a request to yours and it will look to you like it is a legitimate request from a logged-in user. This is a big problem if the server does anything more than simply return content in response.

Modern browsers support the ["SameSite"](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Set-Cookie/SameSite) attribute for cookies, which eliminates this problem. This attribute can be set to prevent the browser from sending the cookies set by a domain as part of requests to that domain unless the user really is viewing a page served by that domain.

Express and the cookie-session middleware both make it easy to set this attribute.

```js
res.cookie('url', req.url, {
    maxAge: 1000 * 60 * 60,
    secure: true,
    httpOnly: true,
    sameSite: true
});
```

```js
app.use(require('cookie-session')({
    secret: `I'm always angry.`,
    maxAge: 1000 * 60 * 60 * 24 * 14,
    sameSite: true
}));
```

If your site supports older browsers such as Internet Explorer, you should [follow these steps](https://spiced.space/okra/csrf) to solve this problem using a more laborious technique.

## Helmet

[Helmet](https://github.com/helmetjs/helmet) is a collection of Express middlewares that set HTTP headers in order to prevent several of the vulnerabilities described here as well as a few others.

#### Added by **Sven** on November 9, 2022

# Security

## eval

Paste that into a `index.html` and open it in your browser. What ever you type into the `textarea` gets executed when you press the **Execute** button! **DANGEROUS**!!!

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Evil Eval</title>
    <style>
        button {
            display: block;
        }
    </style>
</head>
<body>
    <h1>EVAL</h1>
    <textarea id="input" cols="40" rows="10"></textarea>
    <button onclick="eval(document.getElementById('input').value)">Execute</button>
</body>
</html>
```

#### Added by **Sven** on November 10, 2022

## XSS

Paste that into a index.html and open it in your browser. Append a querystring like `?title=<b>My%20title</b>` -> You'll get a bold title inside your page. Great!

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>XSS</title>
</head>

<body>
    <p>Provide a querystring named <code>title</code></p>
    <script>
        const queryValues = {};
        let valueArr;
        location.search.split("?")[1].split("&").forEach(item => {
            valueArr = item.split("=");
            queryValues[valueArr[0]] = valueArr[1];
        })

        document.writeln("<h1>" +  decodeURI(queryValues["title"]) + "</h1>")
    </script>
</body>

</html>
```

Provide the following querystring:

`?title=</h1><script>alert('OWNED!')</script>`

### Nice XSS challenge

[alert(1) challenge](https://alf.nu/alert1)

## Click Jacking

Save the following files inside the same directory and open `index.html` in your browser. Click the button!

### index.html

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Click Jacking Example</title>
    <style>
        #iframe {
            position: absolute;
            top: -74px;
            left: -3px;
            opacity: 0;
        }
    </style>
</head>

<body>
    <button>Harmless button</button>
    <iframe id="iframe" src="./iframe.html">
</body>

</html>
```

### iframe.html

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>iFrame</title>
</head>

<body>
    <h1>iframe</h1>

    <button onclick="handleClick()">HARMFUL BUTTON</button>
    <script>
        function handleClick() {
            alert('OWNED!');
        }
    </script>
</body>

</html>
```

## Eval (Updated)

The former version is not quite as dangerous as the following, because it does not depend on _external_ data. The version below is much more dangerous, as an attacker could try to force you to click on a prepared manupulated link to execute malicious code within your scope. E. g. trigger certain actions within your user session (changing profile data, resetting password, etc.)

```html
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Evil Eval</title>
    <style>
        button {
            display: block;
        }
    </style>
</head>

<body>
    <h1>EVAL</h1>
    <form action="">
        <textarea id="input" name="input" cols="40" rows="10"></textarea>
        <button>Execute</button>
    </form>
    <script>
        const queryValues = {};
        let valueArr;
        location.search.split("?")[1].split("&").forEach(item => {
            valueArr = item.split("=");
            queryValues[valueArr[0]] = valueArr[1];
        })
        eval(decodeURI(queryValues['input']))
    </script>
</body>

</html>
```