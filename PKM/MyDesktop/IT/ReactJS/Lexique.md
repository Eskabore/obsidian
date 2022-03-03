---
key: "valeur"
title: "lexique"
---
# Lexique
---

## React.Fragment
The `React.Fragment` component lets you return multiple elements in a `render()` method without creating an additional DOM element:

```React
render() {
  return (
    <React.Fragment>
      Some text.
      <h2>A heading</h2>
    </React.Fragment>
  );
}q
```
***I can also use it with the shorthand `<></>` syntax.***

**Fragments** look like empty JSX tags. ==They let you group a list of children without adding extra nodes to the DOM:==

```React
render() {
  return (
    <>
      <ChildA />
      <ChildB />
      <ChildC />
    </>
  );
```

#### What Are Fragments?
A common pattern is for a component to return a list of children. Take this example HTML:
```React
Some text.
<h2>A heading</h2>
More text.
<h2>Another heading</h2>
Even more text.
```
Prior to version 16, the only way to achieve this in React was by wrapping the children in an extra element, usually a `div` or `span`:
```React
render() {
  return (
    // Extraneous div element :(
    <div>
      Some text.
      <h2>A heading</h2>
      More text.
      <h2>Another heading</h2>
      Even more text.
    </div>
  );
}
```

To address this limitation, React 16.0 added support for [returning an array of elements from a component’s `render` method](https://reactjs.org/blog/2017/09/26/react-v16.0.html#new-render-return-types-fragments-and-strings). Instead of wrapping the children in a DOM element, you can put them into an array:
```React
render() {
  return (
    // Extraneous div element :(
    <div>
      Some text.
      <h2>A heading</h2>
      More text.
      <h2>Another heading</h2>
      Even more text.
    </div>
  );
}
```
> *However, this has some confusing differences from normal JSX:*
 >   -   Children in an array must be separated by commas.
  >  -   Children in an array must have a key to prevent React’s [[key warning]].
   > -   Strings must be wrapped in quotes.

To provide a more consistent authoring experience for fragments, React now provides a first-class `Fragment` component that <u>can be used in place of arrays</u>.
You can use `<Fragment />` the same way you’d use any other element, without changing the way you write JSX. No commas, no keys, no quotes.

*The Fragment component is available on the main React object:*
```html
const Fragment = React.Fragment;

<Fragment>
  <ChildA />
  <ChildB />
  <ChildC />
</Fragment>

// This also works
<React.Fragment>
  <ChildA />
  <ChildB />
  <ChildC />
</React.Fragment>
```

#### JSX Fragment Syntax
In React, the following "**desugars**" to a `<React.Fragment/>` element. 
<u>**NB**</u>: Non-React frameworks that use JSX may compile to something different.

## Diff Algorithm

In **computing**, the utility **diff** is a [data comparison](https://en.wiqkipedia.org/wiki/Data_comparison "Data comparison") tool that computes and displays the differences between the contents of files. Unlike [edit distance](https://en.wikipedia.org/wiki/Edit_distance "Edit distance") notions used for other purposes, diff is line-oriented rather than character-oriented, but it is like [Levenshtein distance](https://en.wikipedia.org/wiki/Levenshtein_distance "Levenshtein distance") in that it tries to determine the smallest set of deletions and insertions to create one file from the other. The utility displays the changes in one of several standard formats, such that both humans or computers can parse the changes, and use them for [patching](https://en.wikipedia.org/wiki/Patch_(Unix) "Patch (Unix)").

Typically, _diff_ is used to show the changes between two versions of the same file. Modern implementations also support [binary files](https://en.wikipedia.org/wiki/Binary_file "Binary file").[\[1\]](https://en.wikipedia.org/wiki/Diff#cite_note-1) The output is called a "diff", or a [patch](https://en.wikipedia.org/wiki/Patch_(computing) "Patch (computing)"), since the output can be applied with the [Unix](https://en.wikipedia.org/wiki/Unix "Unix") program [patch](https://en.wikipedia.org/wiki/Patch_(Unix) "Patch (Unix)"). The output of similar file comparison utilities are also called a "diff"; like the use of the word "[grep](https://en.wikipedia.org/wiki/Grep "Grep")" for describing the act of searching, the word _diff_ became a generic term for calculating data difference and the results thereof.

## cloneElement( )_
tags: #React 
```javascript
React.cloneElement(
  element,
  [props],
  [...children]
)
```
Clone and return a new React element using `element` as the starting point. The resulting element will have the original element’s props with the new props merged in shallowly. New children will replace existing children. `key` and `ref` from the original element will be preserved.

## Refactoring
**Refactoring** or **Code Refactoring** is defined as systematic process of improving existing computer code, without adding new functionality or changing external behavior of the code. 

## Functional programming
In computer science, **functional programming** is a [[programming paradigm]] where programs are constructed by **applying** and **[[function composition|composing functions]]**. It is a declarative programming paradigm in which function definitions are trees of expressions that each return a value, rather than a sequence of **imperative statements** which change the state of the program.

## Language primitive
In #computing, language primitives are the simplest elements available in a programming language.
    - A primitive is the smallest ***unit of processing*** available to a programmer of a given machine.
    - (**_Source ECMAScript_**:) A primitive value is a member of one of the following built-in types: **Undefined**, **Null**, **Boolean**, **Number**, **BigInt**, **String**, and **Symbol**
    
## Side effect
In CS, an operation, function or expression is said to have a side effect if it modifies some state variable value(s) outside its local environment.

## slice( )
The **slice( ) method** [^1] extracts parts of a string and returns the extracted parts in a new string.

Use the **start** and **end** parameters to specify the part of the string you want to extract.

The first character has the position 0, the second has position 1, and so on.

**Tip:** Use a negative number to select from the end of the string.

> Syntax : _string_.slice(_start_, _end_)







[^1]: [W3School/string.slice( )](https://www.w3schools.com/jsref/jsref_slice_string.asp)