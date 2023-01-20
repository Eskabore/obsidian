# Portfolio

-   Create a new directory named "portfolio" for this project.
    
-   Add a directory named "projects" to the portfolio directory. Copy into this directory the directories containing your versions of [[Kitty Carousel]], [[Spotify Search]], etc.
    
-   Add to the portfolio directory a main js file in which you create a server and listen on port 8080. We are only interested in GET requests so you should handle other requests by redirecting or sending an appropriate error.
    
-   Use the `fs` module to determine what files are available to serve. If there is a file in the projects directory corresponding to the `url` property of the request object, serve that file by [creating a read stream](https://nodejs.org/api/fs.html#fs_fs_createreadstream_path_options) and [piping](https://nodejs.org/api/stream.html#stream_readable_pipe_destination_options) it to the response.
    
-   Requests will not just be for HTML files. You will also have to serve CSS, images, Javascript and JSON as well. Be sure to set the `Content-Type` response header appropriately for each file you serve.

<table>
<thead>
<tr>
<th>Extension</th>
<th>Content-Type</th>
</tr>
</thead>
<tbody><tr>
<td>.html</td>
<td>text/html</td>
</tr>
<tr>
<td>.css</td>
<td>text/css</td>
</tr>
<tr>
<td>.js</td>
<td>text/javascript</td>
</tr>
<tr>
<td>.json</td>
<td>application/json</td>
</tr>
<tr>
<td>.gif</td>
<td>image/gif</td>
</tr>
<tr>
<td>.jpg</td>
<td>image/jpeg</td>
</tr>
<tr>
<td>.png</td>
<td>image/png</td>
</tr>
<tr>
<td>.svg</td>
<td>image/svg+xml</td>
</tr>
</tbody></table>

-   If there is not an item in the projects directory that matches the `url` of the request, send a 404.
    
-   If the item that matches the request url is a directory, and the url ends with a slash, the index.html file that is in that directory should be served.
    
-   If the item that matches the request url is a directory, and the url does not end with a slash, redirect to the request url with a slash added to the end of it.
    
-   It is critical that we only allow files that are contained in the projects directory to be served. If you are checking the file system for a file that corresponds to the url with every request, you cannot trust that the url will not be crafted in such a way that when it is appended to `__dirname + '/projects'` it would not refer to a file that is not in that directory. You must perform validation to prevent such mischief. A good way to do this validation would be to avoid using straight concatenation or interpolations and instead use [`path.join`](https://nodejs.org/api/path.html#pathjoinpaths) to construct the path and then confirm that the result refers to an item in the projects folder. `path.join` will produce an absolute path that takes into account any directory traversal with "../" in the strings it joins.
    
    ```js
    const myPath = path.join(__dirname, 'projects', req.url);
    const projectsRoot = path.join(__dirname, 'projects');
    
    if (!myPath.startsWith(projectsRoot)) { 
        res.statusCode = 403;
        return res.end();
    }
    ```
    

The overall logic of the request handler runs like this:

![[download.svg]]

## Part 2

Create a page that lists and links to all of the projects in your portfolio.

-   Create a module to generate the projects page. This module should require `fs` and and use it to read the contents of the projects directory and build a list of links and link text to put into html. The link href can be to the project directory and the link text can just be the name of the directory containing the project. Finally, this module should add to its `exports` a method that returns the html string it created.
    
-   Your main module should require the module that generates the project page HTML and write the string returned by the function it exposes to the response if the request's `url` property equals `'/'`.

#### Added by **Jan** on October 27, 2022

// main.js

```js
const http = require("http");
const fs = require("fs");
const path = require("path");
// this gets us the full absolute path to the current directory
console.log(__dirname);
const contentTypes = {
  ".html": "text/html",
  ".css": "text/css",
  ".js": "text/javascript",
  ".json": "application/json",
  ".gif": "image/gif",
  ".jpg": "image/jpeg",
  ".png": "image/png",
  ".svg": "image/svg+xml",
};

const server = http.createServer((req, res) => {
  if (req.method !== "GET") {
    res.statusCode = 400;
    res.end();
    return;
  }
  if (req.url === "/") {
    // create the home page
  }
  const filePath = path.join(__dirname, req.url);
  // is this path valid
  if (fs.existsSync(filePath)) {
    //
  }

  if (fs.statSync(filePath).isFile()) {
    // we need to get the file extension
    // path.extname(filePath)
    // use the lookup object to set the content type
    // header

    const readStream = fs.createReadStream(filePath);
    readStream.pipe(res);
    readStream.on("end", () => {
      // send the response
      res.end();
    });
  }
  if (fs.statSync(filePath).isDirectory()) {
    // if the filepath does not end with '/'
    // then: set header location to '/'
    //
    // if the filepath doesend with '/'
    // -> server index.html
  }
});

server.listen(8080);
```