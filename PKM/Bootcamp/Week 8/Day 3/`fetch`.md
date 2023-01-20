---
alias: fetch
tags: api
---
# `fetch`

The [Fetch API](https://developer.mozilla.org/en-US/docs/Web/API/Fetch_API/Using_Fetch) is a newer feature that was added to browsers as an alternative to [[XMLHttpRequest|`XMLHttpRequest`]] for making HTTP requests from Javascript. The `fetch` function, which is globally available in current browsers, is preferable to `XMLHttpRequest` for multiple reasons but perhaps most of all because it works with promises out of the box.

When you call `fetch` and pass it a url, a GET request will be made and the call will return a promise that is resolved with an object representing the HTTP response.

![[Pasted image 20230120220340.png]]

The `body` property of the object representing the response is a stream object similar to the streams you are familiar with from Node except that you interact with them with a different API. The [`Response`](https://developer.mozilla.org/en-US/docs/Web/API/Response) object itself has methods for converting its `body` property to a usable form. The method you will most often use is `json` simply because most of the requests you would ever make with `fetch` would send JSON response bodies.

![[Pasted image 20230120220646.png]]

## POST requests

While GET requests are the default, `fetch` allows you to make requests using any HTTP request method you might want to use. We'll focus on POST requests since that is the non-GET method that is used most frequently.

In addition to the first argument, which is a string representation of a url, `fetch` allows you to pass an object as a second argument. This object may contain parameters for the request, including not only the method to use, but also headers and request bodies, among other things.

```js
fetch('https://example.com/login', {
    method: 'POST',
    headers: {
        'Content-Type': 'application/x-www-form-urlencoded'
    },
    body: 'username=funkychicken&password=letmein'
}).then(
    response => {
        // do something with the response
    }
);
```

More often than not you will want to send a JSON body. Keep in mind that you will not only have to set the `Content-Type` header appropriately, you will also have to ensure that the body is properly stringified.

```js
fetch('https://example.com/login', {
    method: 'POST',
    headers: {
        'Content-Type': 'application/json'
    },
    body: JSON.stringify({
        username: 'funkychicken',
        password: 'letmein'
    })
}).then(
    response => response.json()
).then(
    response => {
        // do something with parsed body
    }
);
```

#### Added by **Marcell** on November 16, 2022

If you wanna have a look at the whole code we did in the class, you can go to the link:

[Our shuffle cards game](https://github.com/marcellpret/shuffleCards) ➡️ Feel free to clone it if you wanna play with it.

### fetch - GET

```js
fetch("http://deckofcardsapi.com/api/deck/new/draw/?count=2")
        .then((resp) => resp.json())
        .then((data) => {
            console.log(data)
        });
```

### fetch - POST

```js
fetch("/contact", {
        method: "POST",
        headers: { "Content-type": "application/json" },
        body: JSON.stringify({ name, message }),
    })
        .then((resp) => resp.json())
        .then((data) => {
            console.log(data);
        });
```