In CS, **function composition** is an act or mechanism to combine simple functions to build more complicated ones.
*Ex:*  In JavaScript, we can define it as a function which takes 2 functions 'f' and 'g', and produces a function:
```js
function o(f, g) {
    return function(x) {
        return f(g(x));
    }
}

// Alternatively, using the rest operator and lambda expressions in ES2015
const compose \= (...fs) \=> (x) \=> fs.reduceRight((acc, f) \=> f(acc), x)
```