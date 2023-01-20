# Data Types

As of this writing there are eight data types in the Javascript language:

1.  Undefined
2.  `null`
3.  Boolean - `true` and `false`
4.  Number - 90210, 3.1, -55
5.  String - "Why, hello there!"
6.  Symbol - introduced with ES 2015, symbols are unique values that can serve in the place of strings as keys for the properties of objects in order to avoid the risk of naming collisions. They have no other use, and, because they are of such limited interest, we will discuss them no further
7.  BigInt - this is new in the latest version of ES. It is for representing numbers larger than 253 - 1, something that the classic Number type cannot do. BigInts are marked with an _n_ at the end (e.g., 9007199254740992n or 5n). An important thing to know about BigInts is that they cannot be implicitly coerced into numbers. For example, `10n - 2` results in an error
8.  Object

The first seven types in the list above are called _primitive_ data types.

## The `typeof` operator

The `typeof` operator can be used to check the type of a value.

```js
typeof 'test'; //'string'

typeof 99; //'number'

typeof function(){}; //'function'

typeof {}; //'object'

typeof [1,2,3]; //'object'
```

Since `typeof` returns 'object' for arrays, how can you determine if you have an array on your hands? In most situations the `isArray` method attached to the `Array` constructor will work for you.

```js
Array.isArray([1,2,3]); //true
Array.isArray('pizza'); //false
```

`typeof null` returns 'object', which is widely considered to be a bug. To test whether something is `null` you can use `===`:

```js
var n = null;
n === null; //true;
```

Another strange case is `NaN`, which means "not a number." This value is produced when you do something mathematically nonsensical like multiplying a string by an object.

```js
typeof NaN; //number
```

Wow. Also strange is that `NaN` doesn't equal anything.

```js
NaN == NaN; //false
NaN === NaN; //false
```

So how can you tell if you have `NaN` on your hands? There is a function called `isNaN` for this specific purpose.

```js
isNaN(NaN); //true
```

In addition to the global `isNaN`, there is also a version attached to the `Number` constructor but it behaves slightly differently. If the argument passed to the global `isNaN` is not of the type number, it will convert it to a number and return `true` if the result of that conversion is `NaN` and false otherwise. `Number.isNaN` will not convert its argument and will return `false` if the type of argument passed to it is not number whether or not it can be converted to a number.

```js
isNaN(NaN); //true
Number.isNaN(NaN); //true

isNaN("1"); //false
Number.isNaN("1"); //false

isNaN("not a number!"); //true
Number.isNaN("not a number!"); //false
```

## Constructors

As with objects and arrays, Javascript provides constructors for strings, numbers, and booleans. When these functions are used as constructors (i.e., when they are used with the `new` keyword), they return primitive values _wrapped_ in an object.

```js
typeof new String("test"); //'object'
typeof new Number(55); //'object'
```

When used without the `new` keyword, these functions can be used to _cast_ strings to numbers, numbers to strings, booleans to numbers, etc.

```js
String(666); //'666'
Number('100'); //100
Number('pizza'); //NaN
Number(true); //1
Boolean(0); //false
```

## Truthiness and Falsiness

Only booleans can be `true` or `false` but every value in Javascript is either truthy or falsey. A truthy value will be treated as `true` in conditional contexts and falsey values will be treated as `false`.

-   `null` and `undefined` are both falsey.
-   0 and `NaN` are both falsey. All other numbers (including negative numbers) are truthy.
-   "" (a string with no length) is falsey. All other strings are truthy.
-   All objects, arrays, and functions are truthy.

```js
if (0) {
    // we will never get here
}

if (-1) { 
    // we will get here
}

if ('') {
    // we will never get here
}

if ('tuna') {
    // we will get here
}

if ([]) {
    // we will get here
}
```

#### Added by **Yair** on September 28, 2022

## Numbers

```js
// Number
99
-2358
3.1415

// BigInt
var number = 99n
```

## Strings

```js
console.log('Hello, Okra!');
console.log("It's a great day to learn to code");
console.log('It\'s a great day to learn to code');
```

## Booleans

```js
console.log(true);
console.log(false);
```

## Empty types

```js
var name;
console.log('name is', name); // undefined

var weather = null;
console.log('weather is', weather);
```

## Array, function, object

```js
console.log(['this', 'is', 'an', 'array']);

var myFunction = function () {};
console.log(myFunction);

// object
console.log({
    firstName: 'Sally',
    lastName: 'Jones'
});
```

## Equality

```js
console.log('3 === 3', 3 === 3);
console.log('3 === 3.25', 3 === 3.25);
console.log("3 === '3'", 3 === '3');
console.log('3 === "three"', 3 === 'three');

console.log('/////////////////');

console.log('3 == 3', 3 == 3);
console.log('3 == 3.25', 3 == 3.25);
console.log("3 == '3'", 3 == '3');
console.log('3 == "three"', 3 == 'three');
```

## Checking types of data

```js
console.log("typeof 'message for you':", typeof 'message for you');
console.log("typeof 98:", typeof 98);
console.log("typeof function () {}:", typeof function () {});
console.log("typeof { name: 'bobby' }:", typeof { name: 'bobby' });
// console.log("typeof ['a', 'b', 'c']:", typeof ['a', 'b', 'c']);
console.log("Array.isArray(['a', 'b', 'c']):", Array.isArray(['a', 'b', 'c']));
// console.log("typeof null:", typeof null);
console.log("Is null null?", null === null);

// NaN is... a number???
// console.log(typeof (12 / 'hello'));
// NaN is.... not NaN???
// console.log("Is 12 / 'hello' NaN?", (12 / 'hello') === NaN);
console.log("Is 12 / 'hello' NaN?", isNaN(12 / 'hello'));
```

## Constructors

```js
console.log(typeof "I'm a string");
// use a constructor to create a reference type object!
console.log(typeof new String("I'm a string, too!"));

console.log(typeof '5');
console.log(typeof Number('5'));
console.log(typeof String(999));
```

## Variables

```js
var student = {
    firstName: 'Sally',
    lastName: 'Jones'
};

console.log(student);

var color = 'purple';
console.log(color); // purple
color = 'red'; 
console.log(color); // red
```