# Classes - JavaScript
tags: #JavaScript #class 

#### **<u>Class</u>**
In OPP **Class** is an extensible (program-code-)template for:
* creating objects, 
* providing initial values for state (member variable) and 
* **implementations of behavior** (member functions or methods).
> They *encapsulate data* with code to work on that data.

#### Class declarations
To **"declare"** a class, we use the `class` keyword with the name of the class ("Rectangle" here).
```js
class Rectangle {
  constructor(height, width) {
    this.height = height;
    this.width = width;
  }
}
```

#### Class expression
It is another way to define a class. Class expressions can be *named* or *unnamed*.
**NB:** The name given to a named class expression is local to the class's body, although, it can be retrieved through the the class's `name` property.
```js
let Rectangle = class {
  constructor(height, width) {
    this.height = height;
    this.width = width;
  }
};
console.log(Rectangle.name);



let Rectangle = class Rectangle2 {
  constructor(height, width) {
    this.height = height;
    this.width = width;
  }
};
console.log(Rectangle.name);

```

#### Class body & method
The **body of a class** is the part that is in curly brackets '{ }'. 
This is where we define **class members**, such as ***methods*** or ***constructor***.
> Methods cannot be constructors! They will throw a [`TypeError`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/TypeError) if you try to instantiate them.

#### Class-based programming
In [[Class-based programming|class-based programming]], objects are created from [classes](https://www.wikiwand.com/en/Class_(computer_programming) "Class (computer programming)") by [subroutines](https://www.wikiwand.com/en/Subroutine) called [constructors](https://www.wikiwand.com/en/Constructor_(object-oriented_programming) "Constructor (object-oriented programming)"), and destroyed by [destructors](https://www.wikiwand.com/en/Destructor_(computer_programming)). An object is an instance of a class, and may be called a **class instance** or **class object**; instantiation is then also known as construction. Not all classes can be instantiated – [abstract classes](https://www.wikiwand.com/en/Abstract_class "Abstract class") cannot be instantiated, while classes that can be instantiated are called [concrete classes](https://www.wikiwand.com/en/Concrete_class). <br>In [prototype-based programming](https://www.wikiwand.com/en/Prototype-based_programming), instantiation is instead done by copying (cloning) a prototype instance.

##### Constructor
The **constructor** method is a special method for creating and initializing an object created with a class. <u>There can only be one</u> special method with the name **"constructor"** in a class.
    --> A constructor can use the `super` keyword to call the constructor of the ***super class***.
    
##### Prototype methods

##### Generator methods

##### Static methods and properties
