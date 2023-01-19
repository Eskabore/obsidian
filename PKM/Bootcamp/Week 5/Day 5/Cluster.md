# Cluster

The [cluster](https://nodejs.org/api/cluster.html) module allows you to create multiple node instances that can all handle requests. The main purpose of this is take advantage of multi-core systems. It is more efficient to divide up work between multiple processes running simultaneously than to have only one process do everything.

A side benefit of using cluster is that if a process dies because of an error you can automatically start a new process to take its place. This can be quite helpful. For example, imagine you are using a module that has a small memory leak. If you deploy every day and are frequently restarting node, you might not notice any problem. But if you go on vacation for two weeks that small memory leak can eventually cause your node process to run out of memory, which will cause it to exit. Under such circumstances it is definitely better to have a new process automatically start up than to have your site be unavailable until you can manually restart node.

When you use `cluster`, you have a _master process_ from which you create _child processes_. The child processes are called _workers_. You will usually want to have as many workers as you have processors (the [`os`](https://nodejs.org/api/os.html) module can tell you that number). To create a new process you call `cluster.fork`.

```js
const cluster = require('cluster');
const os = require('os');

for (let i = 0, l = os.cpus().length; i < l; i++) {
    cluster.fork();
}
```

By default, the workers will all use the same js file as the master for their main module. You can use `cluster`'s `isMaster` property to make sure that you don't call `fork` from a worker. Alternatively, you can use `cluster.setupMaster` to configure a different main module for the workers.

```js
const cluster = require('cluster');
const os = require('os');

cluster.setupMaster({
    exec: __dirname + '/app.js'
});

for (let i = 0, l = os.cpus().length; i < l; i++) {
    cluster.fork();
}
```

To know when a worker dies, use the `exit` event.

```js
cluster.on('exit', function(worker) {
    console.log(worker.process.pid + ' bit the dust');
    cluster.fork();
});
```

An important thing to keep in mind when using `cluster` is that none of the processes involved share memory. Each process has its own copy of every variable, function, and module you use. If you want to communicate between processes, you need to pass messages using [message events](https://nodejs.org/api/cluster.html#cluster_event_message).

## Exercise
Create a new module in your [[Portfolio|portfolio project]] that uses `cluster` to create multiple worker processes that handle requests.

#### Added by **Jan** on October 28, 2022

### index.js

```js
const process = require("process");
setTimeout(() => {
  console.log("timeout");
  console.log(process.pid);
  process.exit();
}, 1000 + Math.random() * 5000);
```

### cluster.js

```js
const cluster = require("cluster");
const os = require("os");
const total = os.cpus().length;
const path = require("path");

cluster.setupPrimary({
  exec: path.join(__dirname, "./index.js"),
});

for (let i = 0; i < total; i++) {
  // this creates a child process
  cluster.fork();
}

let count = 0;
cluster.on("exit", (worker) => {
  console.log("process ended", worker.process.pid);
  count++;
  if (count === total) {
    console.log("all done ✅");
  }
});
```

### server.js

```js
const cluster = require("cluster");
const process = require("process");
// if this is the primary process
// -> create 2 child processses
if (cluster.isPrimary) {
  console.log("this is the primary", process.pid);
  cluster.fork();
  cluster.fork();
} else {
  // start the server
  // this is just a minimal express server
  require("express")()
    .get("/", (req, res) => {
      res.send("<h1>Hi 👋</h1>");
    })
    .listen(5000, console.log(`Listening`));
}

cluster.on("exit", () => {
  console.log(`this process stopped ${process.pid}`);
  cluster.fork();
});
```