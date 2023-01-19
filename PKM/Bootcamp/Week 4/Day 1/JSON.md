# JSON

JSON is a format for data that is based on syntax used in the Javascript programming language. The name JSON stands for _Javascript Object Notation_. You already know how to write valid JSON since the format is just a stricter version of object literal syntax with which you are familiar.

JSON files are text files. If they have a file extension it is usually `.json` and when they are transferred via HTTP the content-type is usually `application/json`, although you sometimes see `text/json` and even `text/javascript` used instead.

The following is a valid JSON document:

```json
{
    "name": "Superman",
    "secretIdentity": "Clark Kent",
    "age": 77,
    "wearsCapes": true,
    "spouse": null,
    "powers": [ "flight", "strength", "x-ray vision" ],
    "residences": {
        "Metropolis": "main",
        "Antarctica": "weekends and holidays"
    }
}
```

Note that all of the property names are surrounded by quotes. In Javascript, quotes are optional for properties of object literals that are valid identifiers. They are not optional in JSON.

Below are some other examples of valid JSON documents.

```json
[ "Wonder Woman", "Batman", "Superman" ]
```

```json
"JSON is fun!"
```

```json
90210
```

```json
true
```

```json
null
```

## Dealing with JSON in Javascript

Javascript has a built in `JSON` object with two very useful methods:

-   `parse` - converts a valid JSON string into a Javascript object
    
-   `stringify` - converts a Javascript object into a valid JSON string
    

Both of these methods can throw exceptions when they receive invalid input. Unless you are very confident in what you are parsing or stringifying, you will want to use `try...catch` when calling these methods.

When you pass an object to `JSON.stringify` containing properties that JSON does not allow, those properties will be omitted from the resulting string and no exception will be thrown.

```js
var shape = {
    type: 'rectangle',
    width: undefined,
    height: undefined,
    getArea: function() {
        return this.width * this.height;
    }
}

console.log(JSON.stringify(shape)); //logs '{ "type": "rectangle" }'
```

Undefined values and functions are not allowed in JSON. Similarly, properties that are inherited from a prototype or are unenumerable are also omitted.

```js
var square = Object.create({ type: 'rectangle' }, {
    width: {
        value: 10
    },
    height: {
        value: 10,
        enumerable: true
    }
});

console.log(JSON.stringify(square)); //logs '{ "height": 10 }'
```

#### Added by **Klaus** on October 17, 2022

```js
let cohort = {
    name: "Okra",
    amountOfStudents: 16,
    teachers: [
        { name: "Gimena", age: 33 },
        { name: "Jan", age: undefined },
        { name: "Klaus", age: 34 },
    ],
    loveCoding: true,
    sayHi: function () {
        console.log("hello" + this.name);
    },
    // bigInt: 14384489n,
};

// stringify --> converts the JS object into its JSON representation (serializing)
// console.log("json", json);
let json = JSON.stringify(
    cohort,
    null,
    // The second parameter can be a function to perform replacement while stringifying.
    // A null or undefined second parameter means that you want to use standard stringification,
    // without any customization.
    // function (key, value) {
    //     if (key === "name") {
    //         return value.toUpperCase();
    //     } else {
    //         return value;
    //     }
    // },
    2
);

console.log("json", json);

try {
      throw new Error("Please fill up the form");
} catch (e) {
      console.log("Error in the catch:\t ", e)
} finally {
        console.log('IN FINALLY: HAPPENS REGARDLESS');
}
// console.log("typeof json", typeof json);
// console.log("json.name", json.name);

// parse --> turn JSON back to its native JS object (deserialize)
// let backToJS = JSON.parse(json);
// console.log("backToJS", backToJS);
// console.log("typeof backToJS", typeof backToJS);

// function input(name) {
//     if (name.length >= 9) {
//         throw "Your name is too long";
//     }
//     return name;
// }
// try {
//     console.log(input("Alex"));
// } catch (err) {
//     console.log("err", err);
// }

// console.log("I'M also still running");
```