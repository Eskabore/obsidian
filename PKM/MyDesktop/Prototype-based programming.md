- **Prototype-based programming** is a style of OOP in which behaviour reuse (known as [[inheritance]] is performed via a process of reusing existing objects that serve as prototypes.

- Prototype-based programming uses **generalized objects**, which can then be cloned and extended.

> EX: a "fruit" object would represent the properties and functionality of fruit in general. A "banana" object would be cloned from the "fruit" object and general properties specific to bananas would be appended. Each individual "banana" object would be cloned from the generic "banana" object. Compare to the [[Class-based programming|class-based]] paradigm, where a "fruit" _class_ would be extended by a "banana" _class_.

- In **prototype-based languages** there are no explicit classes.
--> _Objects inherit directly from other objects through a prototype property_.

- There are two methods of constructing new objects:
    -  _**ex nihilo**_ ("from nothing") object creation, or
    -   through _**cloning**_ an existing object.