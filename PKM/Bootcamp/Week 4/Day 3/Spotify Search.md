# Spotify Search

Spotify used to have a [search API](https://developer.spotify.com/documentation/web-api/reference/#category-search) that didn't require authentication and supported CORS. It now requires authentication and therefore pretty much can't be used via AJAX directly. However, instead of `https://api.spotify.com/v1/search`, you can use the following url, passing to it all of the query string parameters that you would have passed to Spotify's endpoint: `https://spicedify.herokuapp.com/spotify`. This url will make a request to the Spotify search API with the parameters you specify, and send back the exact JSON that Spotify responds with. So let's use this url to conduct searches for artists and albums and then display the results in a pleasing manner.

-   At the top of the page there should be a text field, a [`<select>`](https://developer.mozilla.org/en/docs/Web/HTML/Element/select) element containing the options "artist" and "album", and a submit button
    
-   When the user submits, the values of the form elements should be used to construct the url to request. Be sure to run the search term through [encodeURIComponent](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/encodeURIComponent) before putting it in the query string if you are building the url manually. If you are passing an object containing the query string fields to `$.ajax` or `$.get`, you do not need to call `encodeURIComponent`. jQuery will do the escaping automatically.
    
-   When you display the results of the search, put the search term in quotes preceded by the string "Results for " in a heading above them
    
-   If there are no results for a search, display a message that says so
    
-   For each result, show one of the images listed in the payload as well as the artist name or album title. Both items should be linked to the url provided in the payload for playing music from that album or artist (if users are not logged in to Spotify they will see a page prompting them to log in)
    
-   Be careful: Sometimes, Spotify will give you back results that do not have any images. Be sure to handle this case in a way that is friendly to your users.
    
-   By default, the number of results per request is limited to 20. If there are more results, there is a field in the payload that gives you the url to get the next batch. You can use the presence of this field to tell you whether or not to include a "more" link at the bottom of the result list.
  
  ![[ledzep.gif]]

## Part 2 - Infinite Scroll

If the string `scroll=infinite` appears in the query string when the page loads, no "More" button should appear. Instead, when users scroll down to the bottom of the listed results, the next page of results should be automatically loaded and appended.

Note: For the reasons described in [this blog post](http://ejohn.org/blog/learning-from-twitter/), do not use scroll events to accomplish this.

#### Added by **Yair** on October 19, 2022

# Part 1

Please carefully ask yourself:

1.  Should this element show on the page?
2.  **When** should it show? **When** should it hide?
3.  What should be displayed if...
    -   there are no results?
    -   there are no more results to load (no 'next' link)?
    -   there is no **image** given for the result item?
    ```html
<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Compatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width, initial-scale=1.0" />
        <title>Spotify Search</title>
        <link rel="stylesheet" href="style.css" />
    </head>
    <body>
        <header><h1>Spotify Search</h1></header>
        <main>
            <section class="search">
                <form class="search-form">
                    <input type="text" name="q" id="search-text" class="text" />
                    <select name="type" id="search-type">
                        <option value="artist">Artist</option>
                        <option value="album">Album</option>
                    </select>
                    <button>Search</button>
                </form>
            </section>
            <section class="results">
                <h2 class="hidden">
                    Results for: "<span class="search-term"></span>"
                </h2>
                <p class="no-results hidden">No results could be found.</p>
                <div class="result-items"></div>
                <div class="button-container">
                    <a class="btn-next" href="#">Load more</a>
                </div>
            </section>
        </main>
        <script
            src="https://code.jquery.com/jquery-3.6.0.min.js"
            integrity="sha256-/xUj+3OJU5yExlq6GSYGSHk7tPXikynS7ogEvDej/m4="
            crossorigin="anonymous"
        ></script>
        <script src="spotify-search.js"></script>
    </body>
</html>
```

```js
(function () {
    // $.ajax({
    //     method: 'GET',
    //     url: 'https://spicedify.herokuapp.com/spotify?',
    //     success: function (data) {
    //         console.log(data);
    //     },
    //     error: function (error) {
    //         console.log(error);
    //     },
    // });

    var form = document.querySelector('.search-form');
    var resultContainer = document.querySelector('.result-items');

    form.addEventListener('submit', function (e) {
        e.preventDefault();
        var searchTerm = document.querySelector('#search-text').value;
        resultContainer.innerHTML = '';
        $.ajax({
            url: 'https://spicedify.herokuapp.com/spotify',
            data: {
                q: searchTerm,
                type: document.querySelector('#search-type').value,
            },
            success: function (data) {
                console.log('data received');
                console.log(data);

                document.querySelector('.search-term').innerText = searchTerm;
                document
                    .querySelector('.results h2')
                    .classList.remove('hidden');

                var info = data.artists || data.albums;
                var items = info.items;
                for (var i = 0; i < items.length; i++) {
                    var item = items[i];

                    var url = 'https://duckduckgo.com';
                    // imageUrl could be:
                    // - given in the item, OR
                    // - not given! In that case, use a default URL as a fallback
                    var imageUrl =
                        'https://upload.wikimedia.org/wikipedia/commons/9/95/Hong_Kong_Okra_Aug_25_2012.JPG';
                    var name = 'Okra';
                    var itemHtml = '';
                    itemHtml += '<div class="result-item">';
                    itemHtml +=
                        '<img src="' + imageUrl + '" alt="' + name + '">';
                    itemHtml += '<h3>' + name + '</h3>';
                    itemHtml += '</div>';

                    resultContainer.innerHTML += itemHtml;
                }
            },
            error: function (error) {
                console.log('Error!');
                console.log(error);
            },
        });
    });
})();
```

#### Added by **Klaus** on October 20, 2022

# Part 2

## Code refactoring pt.1 (generateHtml & showNext function)

```js
(function () {
    var form = document.querySelector(".search-form");
    var resultContainer = document.querySelector(".result-items");
    var resultsTag = document.querySelector(".results h2");
    var noResults = document.querySelector(".no-results");
    var nextButton = document.querySelector(".btn-next");

    var nextUrl;

    form.addEventListener("submit", function (e) {
        e.preventDefault();
        var searchTerm = document.querySelector("#search-text").value;
        resultContainer.innerHTML = "";
        $.ajax({
            url: "https://spicedify.herokuapp.com/spotify",
            data: {
                q: searchTerm,
                type: document.querySelector("#search-type").value,
            },
            success: function (data) {
                document.querySelector(".search-term").innerText = searchTerm;
                var info = data.artists || data.albums;
                var items = info.items;
                if (!items.length) {
                    resultsTag.classList.add("hidden");
                    noResults.classList.remove("hidden");
                } else {
                    resultsTag.classList.remove("hidden");
                    noResults.classList.add("hidden");
                }
                generateHtml(items);
                nextUrl = info.next;
                showNext();
            },
            error: function (error) {
                console.log("Error!");
                console.log(error);
            },
        });
    });

    nextButton.addEventListener("click", function (e) {
        e.preventDefault();
        $.ajax({
            url: nextUrl,
            success: function (data) {
                var info = data.artists || data.albums;
                var items = info.items;
                generateHtml(items);
                nextUrl = info.next;
                showNext();
            },
            error: function (error) {
                console.log("Error!");
                console.log(error);
            },
        });
    });
    function generateHtml(data) {
        for (var i = 0; i < data.length; i++) {
            var itemHtml = "";
            var imageUrl;
            if (data[i].images[0]) {
                imageUrl = data[i].images[0].url;
            } else {
                imageUrl =
                    "https://upload.wikimedia.org/wikipedia/commons/9/95/Hong_Kong_Okra_Aug_25_2012.JPG";
            }
            itemHtml += '<div class="result-item">';
            itemHtml +=
                '<img src="' + imageUrl + '" alt="' + data[i].name + '">';
            itemHtml += "<h3>" + data[i].name + "</h3>";
            itemHtml += "</div>";
            resultContainer.innerHTML += itemHtml;
        }
    }

    function showNext() {
        if (nextUrl !== null) {
            nextButton.classList.remove("hidden");
        } else {
            nextButton.classList.add("hidden");
        }
    }
})();
```

## Code refactoring pt.2 (1 Ajax Request inside a single event handler)

```js
(function () {
    var form = document.querySelector(".search-form");
    var resultContainer = document.querySelector(".result-items");
    var resultsTag = document.querySelector(".results h2");
    var noResults = document.querySelector(".no-results");
    var nextButton = document.querySelector(".btn-next");

    var nextUrl;

    document.body.addEventListener("click", function (e) {
        e.preventDefault();
        var searchTerm = document.querySelector("#search-text").value;
        if (e.target.matches(".search-form button")) {
        // search/submit button was clicked
            resultContainer.innerHTML = "";
            var url = "https://spicedify.herokuapp.com/spotify";
            var data = {
                q: searchTerm,
                type: document.querySelector("#search-type").value,
            };
        } else if (e.target.matches(".btn-next")) {
        // load more button was clicked
            url = nextUrl;
        }
        $.ajax({
            url: url,
            data: data,
            success: function (data) {
                document.querySelector(".search-term").innerText = searchTerm;
                var info = data.artists || data.albums;
                var items = info.items;
                if (e.target.matches(".search-form button")) {
                    if (!items.length) {
                        resultsTag.classList.add("hidden");
                        noResults.classList.remove("hidden");
                    } else {
                        resultsTag.classList.remove("hidden");
                        noResults.classList.add("hidden");
                    }
                }
                generateHtml(items);
                nextUrl = info.next;
                showNext();
            },
            error: function (error) {
                console.log("Error!");
                console.log(error);
            },
        });
    });

    function generateHtml(data) {
        for (var i = 0; i < data.length; i++) {
            var itemHtml = "";
            var imageUrl;
            if (data[i].images[0]) {
                imageUrl = data[i].images[0].url;
            } else {
                imageUrl =
                    "https://upload.wikimedia.org/wikipedia/commons/9/95/Hong_Kong_Okra_Aug_25_2012.JPG";
            }
            itemHtml += '<div class="result-item">';
            itemHtml +=
                '<img src="' + imageUrl + '" alt="' + data[i].name + '">';
            itemHtml += "<h3>" + data[i].name + "</h3>";
            itemHtml += "</div>";
            resultContainer.innerHTML += itemHtml;
        }
    }

    function showNext() {
        if (nextUrl !== null) {
            nextButton.classList.remove("hidden");
        } else {
            nextButton.classList.add("hidden");
        }
    }
})();
```

## Infinite Scroll

### The 3 values that will be helpful in determing the user's scroll position are:

1.  **$(window).height()** -> Height of window (excl. scroll) (what user sees)
    -   vanilla JS version → window.innnerHeight
2.  **$(document).height()** -> Height of page (incl. scroll)
    -   vanilla JS version → document.body.clientHeight
3.  **$(document).scrollTop()** -> How far from the top have you scrolled down
    -   vanilla JS version → window.pageYOffset

```js
if (yourQueryStringIsinUrl){
// call the function to check whether the user is near the bottom of the page
}

function checkScrollposition() {
setTimeout(function() {
    if(userIsNearBottomOfThePage){
        // maybe the user is like 500px or so away from the bottom of the page
        // trigger a new ajax request
    } else {
        // call function to check again later
    }
}, 500)
}
```