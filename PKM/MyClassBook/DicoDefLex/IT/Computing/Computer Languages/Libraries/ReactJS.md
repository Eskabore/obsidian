Tags: #library #react #reactjs #javascript #en #fr #anglais #francais

## FR
<u> ReactJS </u> est une bibliothèque **JavaScript** libre développée par Facebook depuis 2013. Le but principal de cette bibliothèque est de faciliter la création d'application web monopage, via la création de composants dépendant d'un état et générant une page (ou portion) HTML à chaque changement d'état.

React est une bibliothèque qui ne gère que l'interface de l'application, considéré comme la vue dans le modèle [[MVC#|MVC]]. Elle peut ainsi être utilisée avec une autre bibliothèque ou un framework MVC comme **AngularJS**. La bibliothèque se démarque de ses concurrents par sa flexibilité et ses performances, en travaillant avec un DOM virtuel et en ne mettant à jour le rendu dans le navigateur qu'en cas de nécessité. 

## EN 

### Basic Usage

--> The following is a rudimentary example of React usage in HTML with JSX and JavaScript.

``` html
<div id="myReactApp"></div>

<script type="text/babel">

  function Greeter(props) {

    return <h1>{props.greeting}</h1>
  }

  var App = <Greeter greeting="Hello World!" />;

  ReactDOM.render(App, document.getElementById('myReactApp'));

</script> 

```

>   <center>Description</center>
>   *  The <code>Greeter</code> function is a React component that accepts a property <code>greeting</code>.<br>
>   *  The variable <code>App</code> is an instance of the <code>Greeter</code> component where the <code>greeting</code> property is set to <code>'Hello World!'</code>.<br>
>    *  The <code>ReactDOM.render</code> method then renders our Greeter component inside the Document Object Mode<DOM> element with id <code>myReactApp</code>.

--> When displayed in a web browser the result will be
    
```html 
<div id="myReactApp">
  <h1>Hello World!</h1>
</div>
```

---

#### Notable features
##### <u>Components</u>
React code is made of <font color=green>entities</font> called **components**. <br>Components can be rendered to a particular element in the [[Document Object Model|DOM]] using the React DOM library. When rendering a component, one can pass in values that are known as ["props"](https://reactjs.org/docs/components-and-props.html#props-are-read-only).

```javascript
ReactDOM.render(<Greeter greeting="Hello World!" />, document.getElementById('myReactApp'));
```

The two primary ways of declaring components in React is via functional components and class-based components.

  ###### <u>Functional components</u>
Functional components are declared with a function that then returns some JSX.

```javascript
const Greeting = (props) => <div>Hello, {props.name}!</div>;
```

###### <u>Class-based components</u>
Class-based components are declared using [[ECMAScript|ES6]] classes.

```js
class ParentComponent extends React.Component {
  state = { color: 'green' };
  render() {
    return (
      <ChildComponent color={this.state.color} />
    );
  }
}
```

#### Virtual DOM
Another notable feature is the use of a virtual [[Document Object Model]], or virtual DOM. React creates an [[In-memory processing|in-memory]] data-structure cache, computes the resulting differences, and then updates the browser's displayed [DOM](https://reactjs.org/docs/refs-and-the-dom.html) efficiently. <br>This process is called '''**reconciliation**'''. <br> ==> <u>This allows the programmer to write code as if the entire page is rendered on each change</u>, while the React libraries only render subcomponents that actually change. This selective rendering provides a major performance boost. It saves the effort of recalculating the **CSS** style, layout for the page and rendering for the entire page.

### Lifecycle methods 
Lifecycle methods use a form of [[hooking]] that allows execution of code at set points during a component's lifetime.

* <code>shouldComponentUpdate</code> allows the developer to prevent unnecessary re-rendering of a component by returning false if a render is not required.
* <code>componentDidMount</code> is called once the component has "mounted" (the component has been created in the user interface, often by associating it with a [[Document Object Model|DOM]] node). This is commonly used to trigger data loading from a remote source via an [[API]].
*<code>componentWillUnmount</code> is called immediately before the component is torn down or "unmounted". This is commonly used to clear resource demanding dependencies to the component that will not simply be removed with the unmounting of the component (e.g., removing any <code>setInterval()</code> instances that are related to the component, or an "[[Event (computing)|eventListener]]" set on the "document" because of the presence of the component)
* <code>render</code> is the most important lifecycle method and the only required one in any component. It is usually called every time the component's state is updated, which should be reflected in the user interface.

### JSX
**JSX**, or **JavaScript [[XML]]**, is an extension to the JavaScript language. <br>Similar in appearance to HTML, JSX provides a way to structure component rendering using syntax familiar to many developers. <br> _**React components are typically written using JSX**_, although they do not have to be (components may also be written in pure JavaScript). JSX is similar to another extension syntax created by Facebook for [[PHP]] called [[XHP]].

An example of JSX code:
```jsx
class App extends React.Component {
  render() {
    return (
      <div>
        <p>Header</p>
        <p>Content</p>
        <p>Footer</p>
      </div>
    );
  }
}
```

#### Nested elements
Multiple elements on the same level need to be wrapped in a single container element or returned as an array.

#### Attributes
JSX provides a range of element attributes designed to mirror those provided by HTML. Custom attributes can also be passed to the component. All attributes will be received by the component as props.

#### JavaScript expressions
JavaScript [[Expression (computer science)|expressions]] (but not [[Statement (computer science)|statements]]) can be used inside JSX with curly brackets <code>{}</code>:
    
```jsx
  <h1>{10+1}</h1>
```

The example above will render 
    
``` html
  <h1>11</h1>
```

#### Conditional statements
**If–else statements** cannot be used inside JSX but conditional expressions can be used instead.
The example below will render <code>{ i === 1 ? 'true' : 'false' }</code> as the string <code>'true'</code> because <code>i</code> is equal to 1.
    
```js 
class App extends React.Component {
  render() {
    const i = 1;
    return (
      <div>
        <h1>{ i === 1 ? 'true' : 'false' }</h1>
      </div>
    );
  }
}
```
The above will render:
    
```html
<div>
  <h1>true</h1>
</div>
```
   
Functions and JSX can be used in conditionals:
```js
class App extends React.Component {
  render() {
    const sections = [1, 2, 3];
    return (
      <div>
        {sections.length > 0 && sections.map(n => (
            /* 'key' is used by react to keep track of list items and their changes */
            /* Each 'key' must be unique */
            <div key={"section-" + n}>Section {n}</div>
        ))}
      </div>
    );
  }
}
```
The above will render:
```html
<div>
  <div>Section 1</div>
  <div>Section 2</div>
  <div>Section 3</div>
</div>
```

Code written in JSX requires conversion with a tool such as [[Babel (compiler)|Babel]] before it can be understood by web browsers.<ref>{{Cite book|url=https://books.google.com/books?id=Tg9QDwAAQBAJ|title=React for Real: Front-End Code, Untangled|last=Fischer|first=Ludovico|date=2017-09-06|publisher=Pragmatic Bookshelf|isbn=9781680504484|language=en}}</ref> This processing is generally performed during a [[software build]] process before the application is [[Software deployment|deployed]].

===Architecture beyond HTML===
The basic architecture of React applies beyond rendering HTML in the browser. For example, Facebook has dynamic charts that render to <code><nowiki><canvas></nowiki></code> tags,<ref>{{cite web|url=https://facebook.github.io/react/blog/2013/06/05/why-react.html|title=Why did we build React? – React Blog|publisher=}}</ref> and Netflix and [[PayPal]] use universal loading to render identical HTML on both the server and client.<ref name=paypal-isomorphic-reactjs>{{cite web|title=PayPal Isomorphic React|url=https://medium.com/paypal-engineering/isomorphic-react-apps-with-react-engine-17dae662379c | archive-url=https://web.archive.org/web/20190208124143/https://www.paypal-engineering.com/2015/04/27/isomorphic-react-apps-with-react-engine/ | archive-date=2019-02-08 | url-status=live }}</ref><ref name=netflix-isomorphic-reactjs>{{cite web|title=Netflix Isomorphic React|url=http://techblog.netflix.com/2015/01/netflix-likes-react.html}}</ref>

***React hooks***
    
Hooks are functions that let developers "hook into" React state and lifecycle features from function components. They make code readable and easily understandable. Hooks don’t work inside classes — they let you use React without classes.

React provides a few built-in Hooks like <code>useState</code>,<code>useContext</code>, <code>useReducer</code> and <code>useEffect</code> to name a few. 
    They are all stated in the Hooks API Reference.<code>useState</code> and <code>useEffect</code>, which are the most used, are for controlling states and side effects respectively in React Components.

==== Rules of hooks ====
There are also rules of hooks<ref>{{Cite web|url=https://reactjs.org/docs/hooks-rules.html|title=Rules of Hooks – React|website=reactjs.org|language=en|access-date=2020-01-24}}</ref> which must be followed before they can be used.

# Hooks should only be called at the top level (not inside loops or if statements).
# Hooks should only be called from React function components, not normal functions or class components

==== Custom hooks ====
Building your own hooks<ref>{{Cite web|url=https://reactjs.org/docs/hooks-custom.html|title=Building Your Own Hooks – React|website=reactjs.org|language=en|access-date=2020-01-24}}</ref> which are called custom hooks lets you extract component logic into reusable functions. A custom Hook is a JavaScript function whose name starts with ”use” and that may call other Hooks. The rules of hooks also apply to them.
