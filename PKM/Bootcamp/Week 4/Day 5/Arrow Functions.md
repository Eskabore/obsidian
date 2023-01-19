# Arrow function expressions

There's a new way to define functions in Javascript and it's awesome.

```js
const exclaim = (str) => {
    return str.toUpperCase() + '!!!';
};
```

These so-called arrow function expressions do not require typing the relatively long word "function" and are generally more concise.

They start with an argument list in parentheses. If your function has no arguments, the parentheses may be empty.

```js
const sayHello = () => {
    console.log('Hello!');
};
```

If your function has just one argument, you can omit the parentheses.

```js
const exclaim = str => {
    return str.toUpperCase() + '!!!';
};
```

If the body of your function contains just one expression, you can omit the curly braces and not use the `return` keyword.

```js
const exclaim = str => str.toUpperCase() + '!!!';

exclaim('yes'); // 'YES!!!'
```

Note that arrow functions are function expressions. There is no way to use this syntax to declare a function. Arrow functions must be assigned to a variable or property, or passed to a function, or listed in an array, etc.

What really makes arrow functions great is not their different syntax but their different behavior. When arrow functions run, there is no `this` value given to them. If you use `this` in an arrow function, it will have whatever value it has in the scope in which the arrow function is created.

Before arrow functions, the fact that the meaning of `this` changes in nested functions had to be worked around, as in the following example:

```js
var leo = {
    name: 'Leo',
    waitThenSayHello: function() {
        var me = this;
        setTimeout(function(){
            console.log('Hello, my name is ' + me.name);
        },  1000);
    }
};
```

With arrow functions, `this` can be used in nested functions in a way that feels more natural.

```js
var leo = {
    name: 'Leo',
    waitThenSayHello: function() {
        setTimeout(() => {
            console.log('Hello, my name is ' + this.name);
        }, 1000);
    }
};
```

Similarly to `this`, arrow functions are not given an `arguments` object. The value of `arguments` in an arrow function will be whatever it is in the scope in which the arrow function is defined.

```js
function punctuateArray() {
    return arguments[0].map(str => str + arguments[1]);
}

punctuateArray([ 'best', 'feature', 'ever' ], '!'); // [ 'best!', 'feature!', 'ever!' ]
```

#### Added by **Sven** on October 21, 2022

You can you arrow function almost everywhere. Only the usage as `methods` is not recommended. Due to the fact that there is no access to `this`:

```js
const obj = {
    id: 123,
    getId: function() {
        return this.id;
    }
}

obj.getId();   // 123


const obj2 = {
    id: 321,
    getId: () => this.id
}

console.log(obj2.getId());  // undefined
```