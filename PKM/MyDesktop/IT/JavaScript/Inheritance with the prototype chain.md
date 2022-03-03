# Inheritance with the prototype chain

## inheriting properties 

**JavaScript objects** are "*dynamic bags*" of properties (_referees to as **own  properties**_).
   > JavaScript objects have a link to a prototype object.
   >  ==> When trying to access a property of the object, the property will not only be sought on the object but on the prototype of the object, **then** the prototype of the prototype and so on..., until either a property with a matching name is found or the end of the prototype chain is reached. 