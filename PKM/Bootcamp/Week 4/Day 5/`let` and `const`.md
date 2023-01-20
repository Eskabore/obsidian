# `let` and `const`

With the advent of ES6 there are now two additional ways to declare variables in Javascript besides the classic `var`.

## `let`

`let` works much like `var`. You can declare a variable with it and assign a value to that variable later:

```js
let a;

a = 100;
```

You can also declare and assign all in one go:

```js
let a = 100;
```

You can declare a bunch of variables at one time:

```js
let a, b, c, d;
```

And you can reassign as much as you like:

```js
let a = 100;
a = 200;
a = 300;
a *= 1000;
```

The differences between `let` and `var` have to do with scope. As with `var`, a variable declared with `let` in global scope (i.e., outside of any function in a normal Javascript file included in a webpage with a `<script>` tag) is a global variable and a variable declared with `let` in a function is a local variable. However, unlike variables declared with `var`, variables declared with `let` within a _block_ only exist within that block.

```js
if (true) {
    let a = 'something';
    console.log(a); // logs 'something'
}
console.log(a); // ReferenceError: a is not defined
```

This behavior can be very useful. For example, using `let` makes it easy to create functions that use their index in a `for` loop:

```js
let navItems = document.querySelectorAll('.nav-item');
let navMenus = document.querySelectorAll('.nav-menu');

for (let i = 0; i < navItems.length; i++) {
    navItems[i].addEventListener('click', function() {
       navMenus[i].classList.add('open');
    });
}
```

If `i` were declared with `var`, its would have the value of `navItems.length` when the click handler runs. Because it was declared with `let`, it is a different variable in each iteration and the function that is created will always use the value it had in that iteration.

## `const`

Variables that are declared with `const` follow the same scope rules as variables declared with `let`. The difference between `const` and `let` is that variables declared with `const` are constants. They must be assigned values when they are declared and those values can never change. Attempting to change the value of a `const` will result in a syntax error.

```js
const a = 100;

a = 200; // TypeError: Assignment to constant variable.
```

## Hoisting

`let` and `const` declarations do not undergo hoisting in the same way as `var` declarations. They happen in the place they appear and not as soon as the function they are in begins to execute. Attempts to use variables declared with `let` or `const` in the scope in which they are declared prior to the declarations, an error will occur.

## Global Properties

When `let` and `const` are used to declare variables in global scope, global variables are created but global properties are not.

```js
var a = 100;
let b = 200;
const c = 300;

window.a; // 100
window.b; // undefined
window.c; // undefined
```

#### Added by **Sven** on October 21, 2022

# `let`

## scope

A variable declaration inside a block will not _survive_ until after the block. In comparision, a declaration made with `var` will.

```js
if (true) {
    let a = 2;
    console.log("a inside if", a);
}

console.log("a after if", a);
/*
console.log("a after if", a);
                          ^
ReferenceError: a is not defined
*/
```

```js
if (true) {
    var a = 2;
    console.log("a inside if", a);
}

console.log("a after if", a);
/*
a inside if 2
a after if 2
*/
```

Declarations inside a block some kind of _overlay_ former declarations:

```js
let a = 1;
console.log("a before if", a);

if (true) {
    let a = 2;
    console.log("a inside if", a);
}

console.log("a after if", a);
/*
a before if 1
a inside if 2
a after if 1
*/
```

# `const`

## initialzing

`const` declarations **MUST** have an initial assignment:

```js
const a;
/*
const a;
      ^
SyntaxError: Missing initializer in const declaration
*/

const b = "my string"; // OK
```

## `arrays` and `objects` as `constants`

Even if it's not possible to re-assign values to constants, we are still able to manipulate already assigned values:

```js
const usernames = [];

usernames.push('bob');
usernames.push('alice');


const user = {};

user.name = 'Sven';
user.isLoggedIn = true;

/* content of `user` is
{ name: 'Sven', isLoggedIn: true }
*/
```