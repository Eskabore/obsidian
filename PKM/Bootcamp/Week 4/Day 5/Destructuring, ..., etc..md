ES6 provides lots of great new syntax that makes many things we do all the time - assigning values from objects and arrays to variables, setting properties on objects, concatenating arrays, reading arguments passed to functions - much less laborious.

# Arrays

Extracting values out of objects and arrays and putting them in variables is made much easier by the new [destructuring assignment](https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment) syntax. Say, for example, you want to put first and second values contained in an array into two variables. Without destructuring, you would have to do this:

```js
const arr = [10, 20, 30];

const a = arr[0];
const b = arr[1];

a + b; // 30
```

With destructuring, you can now do this:

```js
const arr = [10, 20, 30];

const [a, b] = arr;

a + b; // 30;
```

If you want the first and third items in the array, you can do this:

```js
const arr = [10, 20, 30];

const [a,, c] = arr;

a + c; // 40
```

Now let's say you wanted to assign the first item in an array to a variable and assign to another variable an array that contains all of the other items. There is new syntax that makes this easy;

```js
const arr = [10, 20, 30];

const [a, ...etc] = arr;

a; // 10
etc; // [20, 30]
```

You can also use `...` to insert all of the items in an array into another array you are creating.

```js
const arr = [10, 20, 30];

const otherArr = [0, ...arr, 40];

otherArr; // [0, 10, 20, 30, 40]
```

# Objects

You can do destructuring with objects as well.

```js
const leo = {
    name: 'Leonardo DiCaprio',
    age: 43,
    oscars: 1
};

const { name, age } = leo;

const { oscars: numOscars } = leo;

console.log(`${name} is ${age} years old and has received ${numOscars} academy award(s).`);
```

This is great, but we often want to go the other way. That is, we often start out with variables and want to assign properties to objects with the same names and values as those variables. The old school way to do this was not fun:

```js
const name = "Leonardo DiCaprio";
const oscars = 1;
const age = 43;

const leo = {
    name: name,
    oscars: oscars,
    age: age
};
```

Now you can do this:

```js
const name = "Leonardo DiCaprio";
const oscars = 1;
const age = 43;

const leo = {
    name,
    oscars,
    age
};
```

You can also now add functions to object literals with more concise syntax.

```js
const leo = {
    name: 'Leonardo DiCaprio',
    hello() {
        console.log(`Hello, my name is ${this.name}`);
    }
};

leo.hello();
```

Creating objects with dynamically determined property names has always been annoying because it's a two step process. First you have to create the object and then you have to add the property or properties.

```js
function createObjWithProp(name, value) {
    var obj = {};
    obj[name] = value;
    return obj;
}

const obj = createObjWithProp('hello', 'kitty');

console.log(obj); // logs "{ hello: 'kitty' }"
```

But no more. Now you can use the square bracket syntax in the property names in object literals.

```js
function createObjWithProp(name, value) {
    return {
        [name]: value
    };
}

const obj = createObjWithProp('hello', 'kitty');

console.log(obj); // logs "{ hello: 'kitty' }"
```

ES 2018 adds support for using `...` with objects. For example, if you want to use destructuring assignment to put the value of one property of an object in a variable and assign to a different variable an object with all the other properties, you can do this:

```js
const leo = {
    name: 'Leonardo DiCaprio',
    age: 43,
    oscars: 1
}

const { name, ...etc } = leo;

console.log(name); // logs "Leonardo DiCaprio"

console.log(etc); // logs "{ age: 43, oscars: 1 }"
```

It is particularly convenient to use `...` in its capacity as the spread operator to copy properties from one object to another.

```js
const leo = {
    name: 'Leonardo DiCaprio',
    age: 43,
    oscars: 1
}

const pcruz = { ...leo, name: 'Penélope Cruz' };

console.log(pcruz); // logs "{ name: 'Penélope Cruz', age: 43, oscars: 1 }"
```

# Function arguments

You can use destructuring tricks with objects and arrays passed to functions.

```js
const body = {
    firstName: 'disco',
    lastName: 'duck',
    email: 'discoduck@example.com',
    password: 'letmein'
};

const logName = function({ firstName, lastName }) {
    console.log(lastName + ', ' + firstName);
};

logName(body); // logs "duck, disco"
```

```js
const arr = [10, 20, 30];

const add = function([ a, b ]) {
    return a + b;
};

add(arr); // 30
```

Additionally, you can now write functions that accept a variable number of arguments and have some number of them automatically collected into an array.

```js
function add(a, b, ...etc) {
    let sum = a + b;
    for (let i = 0; i < etc.length; i++) {
        sum += etc[i];
    }
    return sum;
}

add(1, 2); // 3
add(1, 2, 3); // 6
add(1, 2, 3, 4, 5, 6); // 21
```

It is now much easier to create a function with optional arguments with default values. In the old days, you had to test for the existence of the argument and assign a default value to it if necessary.

```js
function add(a, b) {
    if (typeof b == 'undefined') {
        b = 0;
    }
    return a + b;
}

add(5); // 5
```

Now you can define default values for parameters in the arguments list.

```js
function add(a, b=0) {
    return a + b;
}

add(5); // 5
```

Note that the default parameters you specify are used whenever the argument passed in is undefined, even if you pass the value explicitly.

```js
function add(a, b=0) {
    return a + b;
}

add(5, undefined); // 5
```

## Exercises

1.  Write a function that takes an array as an argument and returns a new array containing all of the items that are in the array that was passed in but in reverse order. This function should
    
    -   leave the original array unchanged
        
    -   contain no loops of any kind. That includes `for`, `for...in`, `for...of`, `while`, and `do...while`
        
    -   not call `slice` or any other method on the original array
        
    -   not call `push` or `concat` on any array in any way
        
2.  Write a function that takes two arrays as arguments and returns a new array containing all of the items in the two arrays passed to it. This function should
    
    -   leave the original arrays unchanged
        
    -   contain no loops of any kind. That includes `for`, `for...in`, `for...of`, `while`, or `do...while`
        
    -   not call `slice` or any other method on the two arrays passed to it
        
    -   not call `push` or `concat` on any array in any way
        
3.  Rewrite the following function to use destructuring assignment for the three variables it creates:
    
    ```js
     function logInfo(city) {
         const name = city.name;
         const country = city.country;
         const numPeople = city.population;
    
         console.log(
             `${name} is in ${country} and has ${numPeople} inhabitants in it.`
         );
     }
    ```
    
    This is how you would call it:
    
    ```js
     logInfo({ name: "Marseille", country: "France", population: 861635 });
    ```
    
    The three highlighted lines should be replaced with a single line (and you shouldn't change anything else).
    
4.  Pretend that it is 2002 and rewrite the following hipster Javascript so it will work in Internet Explorer 5 and Netscape 4.
    
    ```js
     let getNameAndCountry = ({name, country}) => [name, country];
    
     let getRelocatedCity = (city1, city2={country: 'Germany'}) => {
         let [, country] = getNameAndCountry(city2);
         return {
             ...city1,
             country
         };
     };
    ```
    

#### Added by **Yair** on October 21, 2022

# Classes

## Old way

```js
// Old way
function Rectangle(width, length) {
    this.width = width;
    this.length = length;
}

Rectangle.prototype.getArea = function () {
    return this.width * this.length;
}

const sam = new Rectangle(2, 3);
console.log("Sam's surface area is: ", sam.getArea());
```

## New way

```js
class Rectangle {
    constructor(width, length) {
        this.width = width;
        this.length = length;
    }

    getArea() {
        return this.width * this.length;
    }
}

const sam = new Rectangle(2, 3);
console.log("Sam's surface area is: ", sam.getArea());

// getArea();

class Square extends Rectangle {
    constructor(side) {
        super(side, side);
    }

    // we can OVERRIDE the methods defined in the parent class!
    getArea() {
        // this would be possible, but silly :)
        // return 9;
        console.log("[DEBUG]: Calling square getArea()");
        // `super` is a reference to the parent class
        return super.getArea();
    }

    // a function that is unrelated to a SPECIFIC INSTANCE
    // of the Square class, but still should be attached
    // to the class for convenience/utility.
    static isItASquare(object) {
        return object instanceof Square
    }
}

const sally = new Square(5);
console.log("Sally's surface area is: ", sally.getArea());

console.log(Square.isItASquare(sally));

// similarly, another static function:
Array.isArray(myQuestionableArray)
```

## Getters & setters

```js
class Person {
    set fullName(fullName) {
        const names = fullName.split(' ');
        this.firstName = names[0];
        this.lastName = names[1];
    }

    get fullName() {
        return `👋 ${this.lastName}, ${this.firstName}`;
    }
}

const suzy = new Person();
suzy.fullName = 'Suzy Smith';
console.log(suzy);
console.log(suzy.firstName);
console.log(suzy.lastName);
console.log(suzy.fullName);
```

# Destructuring

## Arrays

### Old way

```js
const arr = [10, 20, 30];
const first = arr[0];
const second = arr[1];

console.log(first + second);
```

### New way

```js
const arr = [10, 20, 30];
const [red, green] = arr;
console.log(red + green);
// original array is untouched
console.log('arr', arr);
```

### Skip some

```js
const [a, , c] = arr;
console.log(a + c);
console.log(myArray);
```

## Objects

### Old way

```js
const marieCurie = {
    born: 'Warsaw, Poland',
    career: 'scientist',
    famousFor: 'research on radioactivity',
    awards: ['Nobel Prize in Physics', 'Nobel Prize in Chemistry' ]
};

const born = marieCurie.born;
const career = marieCurie.career;
const famousFor = marieCurie.famousFor;

console.log(`Marie Curie, born in ${born}, was a ${career} famous for ${famousFor}`);
```

### New way

```js
const { born, career, famousFor: fame } = marieCurie;
const { awards } = marieCurie;

console.log(`Marie Curie, born in ${born}, was a ${career} famous for ${fame}`);
```

# Rest

## Rest with an array

```js
const fruits = ['apple', 'banana', 'kiwi', 'melon', 'peach', 'avocado'];

const [first, second, ...others] = fruits;
console.log('first', first);
console.log('second', second);
console.log('others', others);
```

## Rest with an object

```js
const marieCurie = {
    born: 'Warsaw, Poland',
    career: 'scientist',
    famousFor: 'research on radioactivity',
    nobelPrizes: ['Nobel Prize in Physics', 'Nobel Prize in Chemistry' ]
};

const { born, ...etc } = marieCurie;
console.log(born);
console.log(etc);
```

# Spread

## With an array

```js
function highlightMonths(month1, month2, month3, month4, month5) {
    // highlight the specific months in the calendar
}

const first = 'January';
const second = 'March';
const other = ['July', 'October', 'December'];

highlightMonths(first, second, ...other);
```

## With an object

```
const user = {
    firstName: 'Sally',
    lastName: 'Jones',
    email: 'sally@sally.com',
    emailVerified: false
};

const updatedUser = { ...user, emailVerified: true };

console.log(updatedUser);
console.log(user); // unchanged
```

# Enhanced object literals

```js
const name = 'Rusty';
const age = 4;
const breed = 'Mongrel';
const color = 'brown';

const dog = {
    name,
    age,
    breed,
    color,
    // can define a function in this shorter form here also!
    // (only inside an object literal definition...)
    bark() {
        console.log("Woof!");
    }
};
```

# Function parameters

## Old way

```js
function welcomeGuest(guest) {
    console.log("Welcome, " + guest.firstName + " " + guest.lastName + "!");
}

var petunia = {
    firstName: 'Petunia',
    lastName: 'Pink'
};
welcomeGuest(petunia);
```

## New way

```js
function welcomeGuest({ firstName, lastName }) {
    console.log("Welcome, " + firstName + " " + lastName + "!");
}

var petunia = {
    firstName: 'Petunia',
    lastName: 'Pink'
};
welcomeGuest(petunia);
```

## Rest operator for function parameters

```js
function add(a, b, ...etc) {
    let sum = a + b;
    console.log("Too tired to calculate the other " + etc.length + " items!");
    return sum;
}

console.log(add(9, 1));
console.log(add(9, 1, 77, 21, 0, 3));
```

## Default values for a function parameter

### Old way

```js
function sayHello(name) {
    if (!name) {
        name = 'Guest';
    }
    console.log("Hi there, " + name);
}

sayHello('Sally');
sayHello();
```

### New way

```js
function sayHello(name = 'Guest') {
    if (!name) {
        name = 'Guest';
    }
    console.log("Hi there, " + name);
}

sayHello('Sally');
sayHello();
```