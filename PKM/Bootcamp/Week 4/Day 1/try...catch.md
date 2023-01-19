# `try...catch`

`try...catch` structures are used to handle exceptions. If you are writing code that may throw an exception due to circumstances beyond your control, you should put it in a `try` block and follow it with a `catch` block in which you handle the exception.

```js
try {
    doSomethingThatMayThrowAnException();
} catch (e) {
    logException(e);
}
```

The `catch` block is like a function in that it is passed a parameter that is inaccessible outside of it. That parameter will usually contain information about the error.

```js
try {
    asdfasfasf;
} catch (e) {
    console.log(e); //logs 'ReferenceError: asdfasfasf is not defined'
}
console.log(typeof e); //logs 'undefined'
```

However, if an exception is thrown manually it is possible that it will contain no useful information since it is possible to `throw` anything.

```js
try {
    throw null;
} catch (e) {
    console.log(e); //logs 'null'
}
```

## `finally`

You can also use a `finally` block with `try` or `try...catch`. Code inside a `finally` block will run whether or not an exception is thrown.

```js
try {
    doSomethingThatMayThrowAnException();
} catch (e) {
    handleTheException(e);
} finally {
    cleanUp();
}
```

Here's an interesting thing about `finally`: a `return` statement in a `finally` block will supersede a `return` in the `try` block.

```js
var fn = function() {
    try {
        return 5;
    } finally {
        return 10;
    }
};

fn(); //10
```

Wow!

## Exercises

1.  Make a JSON validator website. It should have a `<textarea>` where users can input their JSON. After clicking a button a message should appear, telling users if the JSON is valid or not.
    
2.  Write a function called `translateNumberToGerman` that tries to get a number between 1 and 10 by calling another function called `askForNumber`. Here is the `askForNumber` function you should use:
    
    ```js
     function askForNumber() {
         var num = prompt('Please enter a number between 1 and 10');
         if (num >= 1 && num <= 10 && num == parseInt(num)) {
             return num;
         }
         throw new Error('Bad number');
     }
    ```
    
    If `askForNumber` returns a number between 1 and 10, `translateNumberToGerman` should return the German translation of that number as a string.
    
    If `askForNumber` does not return a number between 1 and 10 and instead throws an exception, `translateNumberToGerman` should log the error message to the console and restart the whole process. The user should keep being prompted to input a number between 1 and 10 until she does so.
    

#### Added by **Klaus** on October 17, 2022

## 1

-   **use jquery if you want to…**
-   listen for an event for your button that when you click you check the value that was written into the text area, you grab that text and check if its JSON. you need to use one of the built-in JSON methods.

## 2

-   The process is started by calling `translateNumberToGerman`. It is `translateNumberToGerman` that calls `askForNumber`.
-   `askForNumber` should call `prompt` and, depending on what `prompt` returns, either return a number or throw an exception.
-   If `askForNumber` **returns a number**, `translateNumberToGerman` should return a string (a German translation of the number).
-   If `askForNumber` **throws an exception**, `translateNumberToGerman` should catch and handle that exception and restart the process.

(I recommend that you create an array of the different translations in strings and store that in a variable.)