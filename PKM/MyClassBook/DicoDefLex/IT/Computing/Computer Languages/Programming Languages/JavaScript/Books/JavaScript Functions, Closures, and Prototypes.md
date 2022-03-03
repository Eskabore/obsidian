
# [[JavaScript Functions, Closures, and Prototypes#Contents|Table of Contents]]
1. [[JavaScript Functions, Closures, and Prototypes#1 Preface|Preface]]. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .1
2. [[JavaScript Functions, Closures, and Prototypes#1 1 Book overview|1.1 Book overview]]. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  1
3. [[JavaScript Functions, Closures, and Prototypes#1.2 How to read this book|1.2 How to read this book]]. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  1
4.  [[JavaScript Functions, Closures, and Prototypes#1 3 Requirements|1.3   Requirements]]. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  2
5. Using Chrome DevTools. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  2
6. Installing Node. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  4
7. 2. Introduction. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .6
8. 3. Functions. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .7
9. 3.1   Creating Functions. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  7
10. 3.2   Function Inputs and Outputs. . . . . . . . . . . . . . . . . . . . . . . . . . . . .  7
11.          The `argumentsObject`. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  9
12. 3.3   Executing a Function. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  9
13. Function.prototype.call. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  10
14. Function.prototype.apply. . . . . . . . . . . . . . . . . . . . . . . . . . . . .  10
15. Calling Function withnew. . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  10
16. Context Objectthis. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  11
17. Call withnew. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  11
18. Usingcallorapply. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  12
19. Implicit Binding. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  12
20. 3.4   Functions as objects. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  14
21. 4. Closures. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .15
22. 5. Prototypes. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .17
23. 5.1   Linking Objects. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  18
24. 5.2   Prototype Objects Inside JavaScript. . . . . . . . . . . . . . . . . . . . . . . . .  20
25. 5.3   Inheritance. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .  23
26. 5.4   Functional Mixins Over Classical Inheritance. . . . . . . . . . . . . . . . . . . .  25
27. 6. Interview Questions. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .30

----------

## 1.Preface

There is no doubt that JavaScript has grown to become one of the most important programminglanguages today. Yet, surprisingly enough, there are many who consider methodical learning ofJavaScript unnecessary. This is very surprising, even so now in 2016 that JavaScript has improveddramatically since 1995 when it was first released. This trend seems to be prevalent in many venues,but it doesn’t have to be that way. One of the goals of this book is to point you in the right directionby focusing on the three very important concepts in JavaScript, namely functions, closures, andprototypes. Hopefully, by the end of the book you will feel comfortable with these concepts andfind yourself enabled to to go ahead and use them effectively in your own programs. In addition,there is a bonus chapter listing interview questions that are often asked in many interviews for anyJavaScript or front-end related position. You can use that chapter to evaluate yourself and revisit thechapters or sections as necessary.

## 1.1 Book overview

In _Chapter 1_ we will explore all the fundamental concepts related to functions, including functionobjects, function declarations and expressions, thethiskeyword and more.

In _Chapter 2_ we will learn what closures are, why they are useful, and how you can use them inyour programs.

In _Chapter 3_ we will look at probably the most important concept in JavaScript, that is the **prototypes**.
We will learn what they are, why they make JavaScript so different than class-oriented languages,and how you can use them to simplify the design of your programs.

## 1.2 How to read this book

Every chapter of the book opens with a list of bullet points of important concepts. Each bullet pointis then explored in detail through the chapter. You may find the book very dry in nature, so maywant to take breaks while reading. Although you may want to read chapters out of order, or justskim through the chapters, please don’t. Please take your time, study each chapter slowly, and takebreaks frequently if you find yourself unmotivated. The book is designed this way to serve as areference so that you can refer to any time in the future. Also, keep in mind that the book is alwaysup-to-date with the latest spec of the language, which is currently ES2015. I genuinely hope you getsomething out of the book, and please submit an issue if you don’t understand something, or if youfind a spelling error or a mistake in the code. The book is written in Markdown and is hosted ingithub: https://github.com/aminmeyghani/js-fn-bookHappy coding :)1

-------------

Preface2

## 1.3 Requirements

In order to follow along with the book, you need the following:

   • Google Chrome
   • Node > 5
   • A text editor (Sublime Text is recommended, but not necessary)

Below, you can find useful information about Chrome DevTools and installing Node. Since we willbe using them throughout the book, please take the time to make sure that you have all of them setup.

### Using Chrome DevTools

You can run JavaScript code in Chrome DevTools. You can either use the console or the snippets tab to create snippets of JavaScript code. In order to use the console, open Chrome, right click on the page, and choose inspect. Once you do that, the DevTools opens up. Once the DevTools is open, click on the Console tab to open the Console. Once the Console tab opens, you can run JavaScript codeone line at a time. The screenshot below demonstrates how to find the Console tab:

![[Pasted image 20201012220210.png|Using the Console]]


-----------------

Preface 3

In addition to the Console, you can use the snippets tab to create snippets of code and execute them.In order to create a new snippet, click on the Snippet tab, and then right click in the empty area to create a new snippet. The screenshot below shows you how to create a new snippet:


![[Pasted image 20201012220612.png|Creating a new snippet]]


After you created a snippet, you can write some code and execute it by either clicking on therun button on the right hand side of the DevTools, or using the `command + enter` shortcut. The screenshot belows demonstrates how to run the snippet:



![[Pasted image 20201012221756.png|Executing a snippet]]


---------


Preface4

### Installing Node

Node is a JavaScript run-time that you can use to execute JavaScript scripts. The easiest way to install and manage Node is with nvm^[https://github.com/creationix/nvm]. You can use the following to install NVM:

<code>
curl -o- https://raw.githubusercontent.com/creationix/nvm/v0.31.0/install.sh | bash
</code>

After that, make a new terminal and make sure that nvmis installed with `nvm --version`. If you don’t get any output, try adding the following to your ~/.$bash_profile$ file:

```
1exportNVM_DIR=~/.nvm
2source$(brew --prefix nvm)/nvm.sh
```

After NVM is installed, you can use it to install any Node version that you need. For example, to install the latest version 5, run:

[¹]: https://github.com/creationix/nvm

------------


Preface5

1  `nvm install 5`

That’s it! Now, if you want to set this version as your machine default, run the following:

1  `nvmaliasdefault 5`

Now that you have Node installed, you can execute Node scripts. For example, make a file on yourdesktop called `script.js`:

1 `touch ~/Desktop/script.js`

Then add the following to the file:

1 `console.log('hello world');`

Then execute the script with node $~/Desktop/script.js$ and you should see the output in the terminal. That’s it.

TODO
<br><br><br><br><br><br><br><br><br><br>

---------

## 2. Introduction

==**Functions**, **closures**, and **prototypes** are essential in learning JavaScript.==

6

## 3. Functions

Functions are **_callable_** objects.
It is very important to note that in <u>JavaScript functions are objects</u>. It might be misleading because when you use the $typeof$ operator on a function, you get $function$ as the output. <br>
This is one of the instances where JavaScript lies to you. The output of $typeof function() {}$ should be $object$ because **functions are objects in JavaScript**. ><br>
That makes functions very powerful, because you can think of them as callable objects. <br>
> You can use a function as an object, a piece of reusable code, or a function that creates objects.

### 3.1 Creating Functions

There are two main ways of defining functions:

   > •function declaration
   >  •function expression 
    
If a statement starts with the $function$ keyword, then you have a **function declaration**:
$function myFn() {}$ 

But if you assign a function to a variable, you have a **function expression**:
$const fnRef = function myFn() {};$

_Note that you need a semi colon at the end of a function expression, but there are no semi colonsat the end of function declarations._ 

### 3.2 Function Inputs and Outputs

You can pass values into and return values from a function. For example, you can make a functionthat takes two numbers and $returns$ the result of adding them:

```js
function add(a, b) {
  return a + b;
}
```

If you notice, the inputs to the function are placed inside the parenthesis separated by commas. <br>
Note that `a` and `b` represent the inputs to the function. If you don’t specify any return values foryour function, JavaScript will return $undefined$ by default:

7

Functions8

```js
 function fn() {
 const a = 1;
 // other stuff.
 // no return.
 }
 fn(); // `undefined` is returned.
 ```
 
 Note that arguments are always passed by value to functions. The value could be a primitive or areference value in the case of non-primitives. This means that if you assign the argument to anothervalue or thing, it will not affect the thing outside of the function:1constn=1;2functionchange(x) {3x=5;4}5console.log(n);// 1;6change(n);7console.log(n);// 1;It doesn’t matter what is passed in, the behavior is consistent, even if the input is a non-primitive(an object):1constn={value:1};2functionchange(x) {3x={};4}5console.log(n);// {value: 1};6change(n);7console.log(n);// {value: 1};However, if you decide to change the property of the object that the reference is pointing to, theobject will be mutated:1constn={value:1};2functionmutate(x) {3x.value=22;4}5console.log(n);// {value: 1}6mutate(n);7console.log(n);// {value: 22}Asyoucansee,argumentspassedtofunctionsarealwayscopied.Inthecaseofprimitives,theactualvalues are copied, and the case of non-primitives, the reference is copied and becomes available inthe function and assigning the argument to another thing does not change the original value.
