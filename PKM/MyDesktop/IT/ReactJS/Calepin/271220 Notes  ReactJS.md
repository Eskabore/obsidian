
Sat, 27th Dec

# ReactJS 

**Reminder**: 
* Mermaid renders state diagrams 

---


#### I. **React.Component** subclasses:

We use  _**components**_ to tell React what we want to see on the screen. When our data changes, React will efficiently update and re-render our components.[^1]
```React
class ShoppingList extends React.Component {
  render() {
    return (
      <div className="shopping-list">
        <h1>Shopping List for {this.props.name}</h1>
        <ul>
          <li>Instagram</li>
          <li>WhatsApp</li>
          <li>Oculus</li>
        </ul>
      </div>
    );
  }
}

// Example usage: <ShoppingList name="Mark" />

```

<u>rAnalyse</u>:
Above, ShoppingList is a **React component class** or **React component type**.

- A component takes in parameters called `props` (properties), and returns a hierarchy of views to display via the `render` method.
> - The **render** method *returns* a description of what we want to see.
 > - React takes the description and displays the result.
> - In particular, `render` returns a **React element**, which is a lightweight description of what to render. ==The `<div />` syntax is transformed at build time to `React.createElement('div')`.==

The `<div />` syntax is transformed at build time to `React.createElement('div')`

```
return React.createElement('div', {className: 'shopping-list'},
  React.createElement('h1', /* ... h1 children ... */),
  React.createElement('ul', /* ... ul children ... */)
);
```

Functions/ attributes to KIM:
- createElement( )[^2]
- ReactDOM.render( ) controls the content of the container node I pass in.


[^2]: Create and return a new React element of the given type. The type argument can be either a tag name string (such as `'div'` or `'span'`), a React component type (a class or a function), or a [React fragment](https://reactjs.org/docs/react-api.html#reactfragment) type.


### React Without JSX


<u>**JSX is not a requirement**</u> for using React. Using React without JSX is especially convenient when you don’t want to set up compilation in your build environment.

Each JSX element is just syntactic sugar for calling `React.createElement(component, props, ...children)`
--> *So, anything I can do with JSX, can also be done with just plain JavaScript !!*

```
class Hello extends React.Component {
  render() {
    return <div>Hello {this.props.toWhat}</div>;
  }
}

ReactDOM.render(
  <Hello toWhat="World" />,
  document.getElementById('root')
);
```

can be compiled to this code that does not use JSX:

```
class Hello extends React.Component {
  render() {
    return React.createElement('div', null, `Hello ${this.props.toWhat}`);
  }
}

ReactDOM.render(
  React.createElement(Hello, {toWhat: 'World'}, null),
  document.getElementById('root')
);
```

### render( )

The `render()` method is the only required method in a class component.

When called, it should examine `this.props` and `this.state` and return one of the following types:

-   **React elements.** Typically created via [JSX](https://reactjs.org/docs/introducing-jsx.html). For example, `<div />` and `<MyComponent />` are React elements that instruct React to render a DOM node, or another user-defined component, respectively.
-   **Arrays and fragments.** Let you return multiple elements from render. See the documentation on [fragments](https://reactjs.org/docs/fragments.html) for more details.
-   **Portals**. Let you render children into a different DOM subtree. See the documentation on [portals](https://reactjs.org/docs/portals.html) for more details.
-   **String and numbers.** These are rendered as text nodes in the DOM.
-   **Booleans or `null`**. Render nothing. (Mostly exists to support `return test && <Child />` pattern, where `test` is boolean.)


[^1]: See note ["MVC"](obsidian://open?vault=P_CarnetPers&file=DicoDefLex%2FIT%2FArchitecture%2FSoftware%20Architecture%2FMVC)


### Hoisting

Hoisting was thought up as a general way of thinking about how execution contexts (specifically the creation and execution phases) work in JavaScript.
Conceptually, for example, a strict definition of hoisting suggests that variable and function declarations are physically moved to the top of your code, but this is not in fact what happens. Instead, the variable and function declarations are put into memory during the _compile_ phase, but stay exactly where you typed them in your code.

#### constructor( )
The constructor for a React component is <u>***called before it is mounted***</u>. 
When implementing the constructor for a `React.Component` subclass, you should call `super(props)` before any other statement. Otherwise, `this.props` will be undefined in the constructor, which can lead to bugs.
> Typically, in **React constructors** are only used for two purposes:
> -   Initializing [local state](https://reactjs.org/docs/state-and-lifecycle.html) by assigning an object to `this.state`.
> -   Binding [event handler](https://reactjs.org/docs/handling-events.html) methods to an instance.

## Memo 
- When you call `setState` in a component, React automatically updates the child components inside of it too.
- Another difference is that **I cannot return `false` to prevent default behavior in React**. You must call `preventDefault` explicitly.

#### ==What’s the Benefit of a State Management Framework?==

Now we know when to decide between global and local state. But why would we still use a state management framework in 2020? What’s the benefit above using React Hooks?

Here’s a list of benefits:

-   Globally defined, which means only one instance of the data
-   Only fetching remote data once
-   Extensive dev tools
-   Provides a standardised way of working for software engineers


[]