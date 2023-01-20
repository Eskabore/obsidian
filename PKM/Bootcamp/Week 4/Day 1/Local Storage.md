# `localStorage`

`localStorage` is a mechanism for storing data in the browser. As with cookies, access to stored data is governed by the [same-origin policy](https://en.wikipedia.org/wiki/Same-origin_policy). Data can only be read on pages in the same domain as the page on which the data was set.

A major advantage of `localStorage` over cookies is that you can store much more data with it. The exact amount differs from browser to browser, and some browsers allow users to configure the limits, but usually you can expect to have about 5MB available to you. Another important difference between `localStorage` and cookies is that data in `localStorage` is not automatically sent to the server when requests are made within the same domain.

`localStorage` is a key-value database.

```js
localStorage.setItem('motto', 'Failing to prepare is preparing to fail.');
console.log(localStorage.getItem('motto')); // logs "Failing  to prepare is preparing to fail." 
localStorage.removeItem('motto');
```

One annoying thing is how some browsers handle `localStorage` when in private or incognito mode. The `localStorage` object is still available but if you write data to it an exception is thrown. This means that you pretty much have to put your calls in a `try/catch`.

```js
try {
  localStorage.setItem('motto', 'Failing to prepare is preparing to fail.');
  console.log(localStorage.getItem('motto')); // logs "Failing  to prepare is preparing to fail." 
  localStorage.removeItem('motto');
} catch (e) {
  console.log('What a nuisance');
}
```

Strings are the only type of data supported by `localStorage` so the use of `JSON.parse` and `JSON.stringify` is often involved.

`localStorage` has a friend named [`sessionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/Window/sessionStorage) that works in the exact same way except that it is tied to the window. When the user closes the window or tab, the data held by `sessionStorage` is blown away. If a user has two tabs open with the same site in each, the data placed in `sessionStorage` in one tab is _not_ accessible in the other.

## Exercise

Make a static HTML page that has a large `<textarea>` on it. When the user types in it, save the value in `localStorage`. When the user comes back to the page after navigating away or closing the browser, the stored value should automatically appear in the `<textarea>`.

#### Added by **Klaus** on October 17, 2022

```js
let button = document.querySelector("#cookiebanner button");
let cookieBanner = document.querySelector("#cookiebanner");

button.addEventListener("click", function () {
    cookieBanner.style.display = "none";
    try {
        // storing value in localstorage
        localStorage.setItem("consent", "ok");
    } catch (e) {
        // too bad the user will see the cookie banner all the time
    }
});

try {
    // getting value from localstorage
    let consent = localStorage.getItem("consent");
    if (consent === "ok") {
        cookieBanner.style.display = "none";
    }
} catch (e) {
    console.log("err", err);
}

// localStorage.removeItem("consent", "ok");
```

```js
localStorage.setItem("keyvalue", 1);
var numberOrString = localStorage.getItem("keyvalue");
typeof numberOrString //string
numberOrString = parseInt(numberOrString);
typeof numberOrString //number
```