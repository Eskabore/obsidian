#### instanceof
The **`instanceof` operator** tests to see if the `prototype` property of a constructor appears in the prototype chain of an object.
==> The return value is a boolean value.
```js
function Car(make, model, year) {
  this.make = make;
  this.model = model;
  this.year = year;
}
const auto = new Car('Honda', 'Accord', 1998);

console.log(auto instanceof Car);
// expected output: true

console.log(auto instanceof Object);
// expected output: true
```

##### Syntax
`object instanceof constructor`

##### Parameters
*object*: The object to test.
*constructor*: Function to test signal

##### Description
The `instanceof` operator tests the presence of `constructor.prototype` in `object`'s [[Inheritance with the prototype chain|prototype chain]].
```js
// defining constructors
function C() {}
function D() {}

let o = new C()

// true, because: Object.getPrototypeOf(o) === C.prototype
o instanceof C

// false, because D.prototype is nowhere in o's prototype chain
o instanceof D

o instanceof Object           // true, because:
C.prototype instanceof Object // true

C.prototype = {}
let o2 = new C()

o2 instanceof C  // true

// false, because C.prototype is nowhere in
// o's prototype chain anymore
o instanceof C

D.prototype = new C()  // add C to [[Prototype]] linkage of D
let o3 = new D()
o3 instanceof D        // true
o3 instanceof C        // true since C.prototype is now in o3's prototype chain
```
