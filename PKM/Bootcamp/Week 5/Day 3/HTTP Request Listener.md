# HTTP Request Listener

This project is quite similar to the one described in the [Anatomy of an HTTP Transaction](https://nodejs.org/en/docs/guides/anatomy-of-an-http-transaction/) guide available at [nodejs.org](https://nodejs.org/) and it is recommended that you read through that and use it as a reference.

Key points from that guide:

-   Require the [`http`](https://nodejs.org/api/http.html) module
    
-   Use the [`createServer`](https://nodejs.org/api/http.html#http_http_createserver_requestlistener) method of that module to create your server. You can pass a _request listener_ (a function that handles requests) to that function.
    
-   Call the [`listen`](https://nodejs.org/api/net.html#serverlisten) method on your server to start listening for requests. Pass it the port you would like to listen on (use 8080).
    
-   Your request listener will be passed a request object and a response object. Both of these are event emitters. You should listen for 'error' events on both because if either emits an 'error' event and it is not handled, the process will end. It is ok if the error handlers simply log the error to the console.
    
-   The request object will have `method`, `url`, and `headers` properties.
    
-   To get the request body, you should create a variable for it and concatenate the _chunks_ that come with the 'data' events emitted by the request object. When the 'end' event is emitted, you have the body in its entirety.
    
    ```js
      let body = '';
      req.on('data', function(chunk) {
          body += chunk;
      }).on('end', function() {
          console.log(body); //logs the entire request body
      });
    ```
    
-   You can call [`setHeader`](https://nodejs.org/api/http.html#http_response_setheader_name_value) on the response object to set an individual header. You should set the 'Content-Type' header appropriately.
    
-   You can call the `write` method on the response object to write to the response body. The `end` method sends the request. You can also pass an entire response body and send it in one go by passing a string to `end`.
    

We would like to do a few things differently than in the examples given in the guide at nodejs.org.

-   For each request, log the method, url, and request headers to the console.
    
-   If the request method is GET or HEAD, set the content type of the response to `'text/html'` and the status code to `200`. If the request method is HEAD, do not write a body before sending the response.
    
-   If the request method is GET, send the following HTML as the body of the response:
    

```HTML
<!doctype html>
<html>
<title>Hello World!</title>
<p>Hello World!</p>
</html>
```

-   If the request method is POST, log the request body to the console. Do not write a body to the response. Instead, set the `'Location'` header of the response to `'/'` and the status code to `302`. This will cause a redirect.
    
-   If the request method is not GET, HEAD, or POST, send a `405` status code.
    

Use [cURL](https://spiced.space/okra/curl/) or [Postman](https://www.getpostman.com/) to test this with various HTTP methods.

## Bonus Part 2

For each request made to your server, use [`fs.appendFile`](https://nodejs.org/api/fs.html#fs_fs_appendfile_file_data_options_callback) to add to a file named "requests.txt" a line with the following information in it:

-   The date and time (use [`Date`](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Global_Objects/Date))
-   The request method
-   The request url
-   The user-agent request header

Separate each item in the line with a tab (`'\t'`).

## Bonus Part 3

If a `GET` request is made with `/requests.txt` as the url, serve the file. To do this, you will want to [create a read stream](https://nodejs.org/api/fs.html#fs_fs_createreadstream_path_options) from the file and then [pipe](https://nodejs.org/api/stream.html#stream_readable_pipe_destination_options) it to the response (which is a writable stream). You should set the `Content-Type` header to `text/plain` beforehand.

#### Added by **Jan** on October 26, 2022

```js
const http = require("http");

http
  .createServer((request, response) => {
    console.log("this url was requested: ", request.url);
    console.log("this is the http method: ", request.method);
    // this part parses the request body
    let body = [];
    request
      .on("data", (chunk) => {
        body.push(chunk);
      })
      .on("end", () => {
        body = Buffer.concat(body).toString();
        console.log("this is the body: ", body);
        response.on("error", (err) => {
          console.log(err);
        });
        if (request.url === "/") {
          // set headers
          response.setHeader("Content-Type", "text/html");
          // set a status code
          response.statusCode = 200;
          response.write("<h1>Hello from the node server</h1>");

          response.end();
          //   response.end("<h1>Hello from the node server</h1>");
          // you can also send a file
          // response.sendFile()
        }
      });
  })
  .listen(8080, () => {
    console.log("server listening on port 8080");
  });
```