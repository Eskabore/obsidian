# spiced-pg

`spiced-pg` is a simple wrapper around [the node-postgres package](https://node-postgres.com/) (aka `pg`) that was created for use in this course. Using it ensures that you do not create too many database connections and that the process of deploying your project will be fairly straightforward.

### Usage

When you require the module you get a function to which you can pass a string. That string should be the url for your Postgres database.

```js
const spicedPg = require('spiced-pg');
const db = spicedPg('postgres:spicedling:password@localhost:5432/actors');
```

When you do this, `spiced-pg` will create a [pool](https://node-postgres.com/features/pooling) of 10 connections to the specified database. These connections will close after 30 seconds of inactivity but will be reopened when activity resumes. If you call the function again with the same string, no new connections will be created.

The object that is returned from the call above has a single method, `query`, that you can use to query your database.

```js
db.query('SELECT * FROM actors').then(function(result) {
    console.log(result.rows);
}).catch(function(err) {
    console.log(err);
});
```

The promise that `query` returns will be resolved with an object that has a lot of data included in it. Usually, it is only the `rows` property that is of any interest to you. This `rows` property is an array of objects, each of which represents a row from the result set your query produced. The columns will be represented as properties of the row objects.

### Preventing SQL injection

If untrusted strings, such as input from users, must be used to construct your query, it is important that you do not build the string yourself. Instead, you should let the `pg` module escape the input for you. To do this, replace the untrusted input in your query with `$1`, `$2`, etc. and pass as the second argument to the `query` method an array containing the values you want to be interpolated into the query.

```js
function getActorByName(actorName) {
    return db.query(
        `SELECT * FROM actors WHERE name = $1`,
        [actorName]
    );
}
```

In the example above, the `$1` in the query will be replaced with an escaped `cityName`, preventing any mischief.