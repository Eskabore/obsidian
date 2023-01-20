# Twitter API

When we last left our [[Week 2/Day 2/Ticker|ticker project]] we were getting our headlines from a flat json file. Let's change it to get our headlines from the Twitter timeline of a news organization, such as [the Onion](https://twitter.com/theonion).

The [Twitter API](https://dev.twitter.com/rest/public) requires authentication. This means credentials need to be passed with each request. If we were to make requests via ajax, we'd have to have our application's credentials available in the browser, which means they would be available to anyone using our site. Unacceptable! We will have to make our requests to the Twitter API from the server.

## `https.request`

Twitter's API requires all requests be made with HTTPS. Thus we will use the [`request`](https://nodejs.org/api/https.html#https_https_request_options_callback) method of Node's [`https`](https://nodejs.org/api/https.html) module. The `request` method takes two arguments: an object containing the details about the request you would like to make and a callback that will run when the response headers are received. The callback will be passed an object representing the response, allowing you to attach event listeners to it so you can get the body of the response when it arrives. The `request` method returns an object representing the request. You must call the `end` method of this request object in order to send your request. Below is an example using the [[Week 4/Day 3/Spotify Search|Spotify Search]] endpoint:

```js
const https = require('https');

const req = https.request({
    method: 'GET',
    host: 'spicedify.herokuapp.com',
    path: '/spotify?q=madonna&type=artist'
}, res => {
    let body = '';
    res.on(
        'data',
        chunk => body += chunk
    ).on(
        'end',
        () => console.log(body)
    ).on(
        'error',
        err => console.log(err)
    );
});

req.end();
```

## Base64 encoding

This exercise requires you to base64 encode a string to put into an Authorization header. In Node you can base64 encode a string by first converting it to a Buffer (which is a representation of the string's data in binary) and then into a base64 encoded string:

```js
Buffer.from("encode me").toString("base64"); // 'ZW5jb2RlIG1l'
```

## Endpoints

A prerequisite for using Twitter's API is creating an application at [https://apps.twitter.com](https://apps.twitter.com/). If you do not wish to do this, you can use [[Twittter#Twitter API Credentials|credentials]] for an app that has already been set up for use in this project.

We will be using [application-only authentication](https://developer.twitter.com/en/docs/basics/authentication/overview/application-only) for this project. In order to make requests to get data, you will first have to obtain what they call a "bearer token." It is the bearer token that you will use to make subsequent requests. To get the bearer token, you must make a POST request to the [oauth2/token](https://developer.twitter.com/en/docs/authentication/api-reference/token) endpoint. Follow [these instructions](https://developer.twitter.com/en/docs/basics/authentication/overview/application-only#issuing-application-only-requests) step by step to obtain your bearer token (the section entitled "Issuing application-only requests").

To get tweets you will use the [statuses/user_timeline](https://developer.twitter.com/en/docs/tweets/timelines/api-reference/get-statuses-user_timeline) endpoint. When making the request, you should pass two query string parameters. With the `screen_name` parameter you will specify the user whose tweets you want. Additionally, you should add `tweet_mode=extended` to the query string to ensure that you get the full tweet text, which, as of early 2018, may be up to 280 characters long. The body of the response from this endpoint will be an array of objects representing tweets. The `full_text` property of each object gives you access to the full text of the tweet. The urls contained in the text are listed in the `entities.urls` array.

## Filtering and Formatting Tweets

In your response to your ajax request, include only tweets that have just one url that appears at the end of the tweet text. Do not include tweets that have no url, have more than one url, or have one url that appears medially. It would be best if you removed the url from the tweet text. The text itself will be contained by an `<a>` tag so there is no need to show the url.

Note that even after you confirm a tweet has only one url and you remove it from the text, other urls may still apear in the text. This is because Twitter includes in the tweet text the urls to images and videos that were included in the tweet. Just as the links in a tweet are listed in the tweet's `entities.urls` array, the media urls will be listed in the `entities.media` array. You can loop through these and remove them from the text.

Note also that **no changes** to your existing ticker code will be necessary. In your express app, you should create a static directory and copy your ticker files into it (except for the json file containing the links, which will not be needed). You should also create a route to handle the ajax request that your client-side Javascript makes (e.g., if your json file had been called "links.json", the url for your route should be `/links.json`). It is in this route that you should initiate the retrieval of the token and then the tweets from the Twitter API. Finally, you should send the tweets back to the client using `res.json`.

#### Added by **Yair** on November 3, 2022

# Next Steps

-   **REMEMBER** your `.gitignore`!
    
-   You need to make a request to getTweets
    
    -   `GET statuses/user_timeline`
    -   Must be a GET to `/1.1/statuses/user_timeline.json`
    -   Add a `screen_name` parameter to the query string
    -   Also add `tweet_mode=extended` to the query string
    -   path should look like this: `/1.1/statuses/user_timeline.json?screen_name=nytimes&tweet_mode=extended`
    -   The authorization header must be the string `"Bearer " + token`
    -   There must be no content type header
    -   The response will be an array of many objects (each object represents a single tweet)
    -   The `full_text` property is the text of the tweet
    -   Each tweet has a property named `entities`, an object with a property named `urls`. - `urls` is an array of objects representing **each url in the tweet**.

# Example snippets

## Example: HTTPS request

```js
const https = require('https');

const options = {
    method: 'GET',
    host: 'spicedify.herokuapp.com',
    path: '/spotify?q=pink+floyd&type=artist',
};

const callback = (result) => {
    let body = '';
    result
        .on('data', (chunk) => (body += chunk))
        .on('error', (error) => {
            console.log(error);
        })
        .on('end', () => console.log(body));
};

const request = https.request(options, callback);
request.end(/* If your request needs a BODY, put it here (string) */);
```

## Example: encoding a string to Base64

```js
const message = "It's a beautiful day";
const base64Message = Buffer.from(message).toString('base64');

console.log(base64Message);
```

# Code from this morning

## package.json

```json
{
    "name": "twitter-api",
    "version": "1.0.0",
    "description": "",
    "main": "server.js",
    "scripts": {
        "test": "echo \"Error: no test specified\" && exit 1",
        "start": "node server.js"
    },
    "author": "",
    "license": "ISC",
    "dependencies": {
        "dotenv": "^16.0.3",
        "express": "^4.18.1"
    }
}
```

## .gitignore

```
node_modules
.env
secrets.json
```

## .env

```
TWITTER_API_KEY=???
TWITTER_API_SECRET=??
PORT=3000
```

## twitter.js

```js
const https = require('https');

const { TWITTER_API_KEY, TWITTER_API_SECRET } = process.env;

module.exports.getToken = (callback) => {
    const credentials = `${TWITTER_API_KEY}:${TWITTER_API_SECRET}`;
    const encodedCredentials = Buffer.from(credentials).toString('base64');
    const config = {
        host: 'api.twitter.com',
        path: '/oauth2/token',
        method: 'POST',
        headers: {
            Authorization: `Basic ${encodedCredentials}`,
            'Content-Type': 'application/x-www-form-urlencoded;charset=UTF-8',
        },
    };

    const getTokenCallback = (result) => {
        if (result.statusCode !== 200) {
            console.log(result);
            callback(new Error(result.statusCode));
            return;
        }

        let body = '';
        result
            .on('data', (chunk) => (body += chunk))
            .on('error', (error) => {
                console.log(error);
                callback(new Error(error));
            })
            .on('end', () => {
                const data = JSON.parse(body);
                callback(null, data.access_token);
            });
    };

    const request = https.request(config, getTokenCallback);
    request.end('grant_type=client_credentials');
};

module.exports.getTweets = (token, callback) => {};

module.exports.filterTweets = (tweets) => {};
```

## server.js

```js
// adds all the variables in .env to process.env!
require('dotenv').config();
const path = require('path');
const express = require('express');

const app = express();

const { getToken, getTweets, filterTweets } = require('./twitter');

const { PORT } = process.env;

app.use(express.static(path.join(__dirname, 'ticker')));

app.get('/headlines.json', (req, res) => {
    // 1. get a token
    // 2. get tweets
    // 3. filter & format the tweets
    // 4. respond with JSON

    getToken((error, token) => {
        // check for errors...
        // send back empty JSON if there is an error!

        getTweets(token, (error, tweets) => {
            console.log('Got some tweets:', tweets);

            const filteredTweets = filterTweets(tweets);

            res.json(filteredTweets);
        });
    });
});

app.listen(PORT, () => {
    console.log(`I'm listening on port ${PORT}`);
});
```