# Constructors

Constructors are functions that, when called with the `new` keyword, return a newly created object (an _instance_). By convention, the names of constructors begin with capital letters.

```js
  function Country(name) {
      this.name = name;
  }

  var germany = new Country('Germany');
```

When a constructor is called with `new`, `this` in the body of the constructor function refers to the newly created object that will be returned.

Note that the `Country` function above does not have a `return` statement. No `return` statement is necessary since the newly created object will be returned automatically. In fact, if a constructor called with `new` does have a `return` statement that returns a primitive value, the newly created object will still be returned and the primitive value will not be.

```js
  function Country(name) {
      this.name = name;
      return 10;
  }

  var germany = new Country('Germany'); //{ name: 'Germany' } (and not 10)
```

However, a `return` statement that returns a different object will be effective.

```js
  function Country(name) {
      this.name = name;
      return {};
  }

  var germany = new Country('Germany'); //{} (and not { name: 'Germany' })
```

If a constructor is called with `new` and without any parameters passed in, it is not necessary to use parentheses. The presence of `new` is enough to make it clear that the function is being invoked and not merely accessed. However, parentheses are required if you wish to immediately access one of the newly created object's properties.

```js
var date = new Date; //no parentheses needed

var time = new Date().getTime(); //parentheses are needed
```

# Prototypes

Every function automatically has a `prototype` property whose value is an object with no enumerable properties. If a function is not called with `new`, its prototype property does not have any role to play. When a function is called with `new`, the function's prototype property becomes the prototype of the object that the function returns.

```js
  function GermanCity(name) {
      this.name = name;
  }

  GermanCity.prototype.country = 'Germany';

  var berlin = new GermanCity('Berlin');
  var hamburg = new GermanCity('Hamburg');

  berlin.country; //'Germany'
  hamburg.country; //'Germany'
```

Prior to the advent of `Object.create` with ES 5, this was the only way to assign a prototype to an object.

Note that the connection between instances and their prototype is 'live' - changes to the properties of the prototype are immediately visible when those properties are accessed via the instances.

```js
function GermanCity(name) {
    this.name = name;
}

GermanCity.prototype.country = 'Germany';

var berlin = new GermanCity('Berlin');
var hamburg = new GermanCity('Hamburg');

berlin.country; //'Germany'
hamburg.country; //'Germany'

GermanCity.prototype.country = 'Deutschland';

berlin.country; //'Deutschland'
hamburg.country; //'Deutschland'
```

The prototype objects that are automatically attached to functions have an unenumerable property named `constructor` whose value is the function to which the prototype is attached. This is where the `constructor` property that all objects have comes from. If you overwrite a constructor's `prototype` property with a new object that doesn't have a `constructor` property, instances will lose the reference to their constructor.

```js
function GermanCity(name) {
    this.name = name;
}

var berlin = new GermanCity('Berlin');

berlin.constructor; //GermanCity

GermanCity.prototype = {};

var hamburg = new GermanCity('Hamburg');

hamburg.constructor; //Object
```

Prototypes are themselves objects that have other objects as their prototypes. The default object that is automatically assigned to a function's `prototype` property has `Object.prototype` as its prototype, as do object literals and objects created with the `Object` constructor. Through developer action it is possible for there to be long chains of prototypes attached to instances.

## The `instanceof` operator

The `instanceof` operator is used to test whether a given constructor exists as a constructor property of any of the prototypes in an object's prototype chain.

```js
var date = new Date;

date instanceof Date; //true

date instanceof Object; //true

date instanceof Array; //false
```

If you would like to make a constructor that can be called without `new` and still return an instance, the `instanceof` operator can help with that.

```js
function Country(name) {
    if (!(this instanceof Country)) {
        return new Country(name);
    }
    this.name = name;
}

var country = Country('Germany');

country instanceof Country; //true
```

#### Added by **Jan** on October 4, 2022

# Constructors

Function that when called with the keyword `new` returns a created object.

```js
  function Document(name) {
      this.title= name;
  }
  var doc = new Document('email');
```

`This` refers to the object itself.

You can also return a primitive from the function

```js
  function Country(name) {
      this.name = name;
      return 10;
  }
  var germany = new Country('Germany'); //{ name: 'Germany' } (and not 10)
```

But you cannot return an object from the function.

```js
  function Country(name) {
      this.name = name;
      return {};
  }

  var germany = new Country('Germany'); //{} (and not { name: 'Germany' })
```

If you don't pass any parameters you could also just use `new` without the parantheses.

```js
var date = new Date; //no parentheses needed

var time = new Date().getTime(); //parentheses are needed
```

## Prototypes

Every function has a prototype object that is returned when the function is called with the keyword `new`.

```js
  function GermanCity(name) {
      this.name = name;
  }

  GermanCity.prototype.country = 'Germany';

  var berlin = new GermanCity('Berlin');
  var hamburg = new GermanCity('Hamburg');

  berlin.country; //'Germany'
  hamburg.country; //'Germany'
```

The connection between instances and their prototype is 'live' - changes to the properties of the prototype are immediately visible.

```js
function GermanCity(name) {
    this.name = name;
}

GermanCity.prototype.country = 'Germany';

var berlin = new GermanCity('Berlin');
var hamburg = new GermanCity('Hamburg');

berlin.country; //'Germany'
hamburg.country; //'Germany'

GermanCity.prototype.country = 'Deutschland';

berlin.country; //'Deutschland'
hamburg.country; //'Deutschland'
```

## The instanceof operator

The instanceof operator is used to test whether a given constructor exists as a constructor property of any of the prototypes in an object's prototype chain.

```js
var date = new Date;

date instanceof Date; //true

date instanceof Object; //true

date instanceof Array; //false

var country = Country('Germany');

country instanceof Country; //true
```

# This

This in the function body refers to the object to which the function belongs.

```js
var nyc = {
    nickname: 'the Big Apple',
    welcomeTo: function() {
        console.log('Welcome to ' + this.nickname);
    }
};

nyc.welcomeTo(); //logs 'Welcome to the Big Apple'

nyc['welcomeTo'](); //logs 'Welcome to the Big Apple'
```

This also works if the function is the property of the prototype.

```js
function City(nickname) {
    this.nickname = nickname;
}

City.prototype.welcomeTo = function() {
    console.log('Welcome to ' + this.nickname);
};

new City('the Big Apple').welcomeTo(); //logs 'Welcome to the Big Apple'
```

## Problem: nested functions don't have the correct context of `this`

```js
function City() {
  this.name = 'Berlin'
  this.info = function() {
     (function() {
       console.log(this.name) // undefined
     })()
  }
}

const c = new City()

c.info()
```

First solution: create a variable and assign the correct `this` to it

```js
function City() {
  this.name = 'Berlin'
  this.info = function() {
     var self = this
     (function() {
       console.log(self.name)
     })()
  }
}

const c = new City()

c.info()
```

Second solution: Just use an arrow function in the inner function 😜

```js
function City() {
  this.name = 'Berlin'
  this.info = function() {
     (() => {
       console.log(self.name)
     })()
  }
}

const c = new City()

c.info()
```

Third solution: Use the bind() method to bind the correct context of this to the function

```js
function City() {
  this.name = 'Berlin'
  this.info = function() {
     (function() {
       console.log(self.name)
     }.bind(this))()
  }
}

const c = new City()

c.info()
```

## Call and Apply

The call and apply methods, which all functions inherit from their prototype, allow you to call a function with a this that you specify. The first argument to both methods is the object you would like this to refer to in the function call. call takes any number of other arguments which will all be passed to the function. apply allows you to use an array containing all the arguments to pass.

```js
var batman = {
    name: 'Batman',
    sayHi: function(name1, name2) {
        console.log('Hello ' + name1 + ' and ' + name2 + '. My name is ' + this.name + '.');
    }
};

batman.sayHi('Janet', 'Joe'); //logs 'Hello Janet and Joe. My name is Batman.'

// The first parameter is now used as the object that 'this' refers to
batman.sayHi.call({ name: 'Hello Kitty' }, 'Brad', 'Angelina'); //logs 'Hello Brad and Angelina. My name is Hello Kitty.'

// same as call but the arguments are now in an array
batman.sayHi.apply({ name: 'Cher' }, [ 'Alan', 'Alexa' ]); //logs 'Hello Alan and Alexa. My name is Cher.'
```