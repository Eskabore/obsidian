# Twitter API - Part 2

Now let's get headlines from two additional news sources. The requests for tweets from all three news sources should be made simultaneously. The combined list of tweets that you send to the client should be sorted in reverse chronological order. You should also append to each tweet the name of the source in parentheses.

Once again, you should not alter your original ticker Javascript to do this. That is, you should not make three ajax requests and then merge the results on the client. The server should make three simultaneous requests to get tweets and send back a merged list of tweets in response to the single ajax request it received.

![[Pasted image 20230119232755.png]]
You should use `Promise.all` to know when you have the tweets from all three sources.

#### Added by **Sven** on November 4, 2022

# promisify, flatten arrays, sorting

```js
const util = require("util");

function myAsyncFunction(argument1, callback) {
    setTimeout(() =>
        callback(null, [{title: "async function finished " + argument1}]), 500);
}

const promiseBasedAsyncFunction = util.promisify(myAsyncFunction);

const tickerPromises = [];
tickerPromises.push(promiseBasedAsyncFunction("nytimes"))
tickerPromises.push(promiseBasedAsyncFunction("bbc"))
tickerPromises.push(promiseBasedAsyncFunction("bbc"))
tickerPromises.push(promiseBasedAsyncFunction("faz"))

Promise.all(tickerPromises).then(result => {
    console.log("promise.all: ", result.flat().sort((a, b) => {
        return (a.title < b.title)? -1 : (a.title == b.title)? 0 : 1;
    }).reverse());
})
```