---
alias: vuejs
---
# Vue.js

[Vue.js](https://v3.vuejs.org/) is a Javascript framework for constructing website UIs. It resembles Angular in many respects and also has certain conceptual similarities to React.

This module exports a `createApp` function that you call to initialize your app. When you do, you pass it an object with configuration information. The process of writing a Vue app is mainly adding properties and methods to the object you pass to `createApp`.

```js
import * as Vue from './js/vue.js';

Vue.createApp({});
```

`createApp` returns an object with a `mount` method. You pass this method a selector to tell Vue what element your UI will appear in.

```js
Vue.createApp({}).mount('#main');
```

Vue will find the element that matches the selector and treat the contents of the element as a template. This template will be automatically rendered.

```HTML
<!doctype html>
<html>
<head>
    <meta charset="utf-8">
    <title>My Vue.js App</title>
</head>
<body>
    <div id="main">
        <p>{{ 'Hello World!' }}
        <p>2 + 2 = {{ 2 + 2 }}
    </div>
    <script src="/js/app.js" type="module" crossorigin="use-credentials"></script>
</body>
</html>
```

Given this HTML, and assuming the call to `createApp` above is placed in app.js, the visible result would be:

![[Pasted image 20230120221255.png]]


The expressions contained in `{{` and `}}` are automatically evaluated and rendered. There is no need to manually compile a template, call it, and insert the result into the DOM. That's all done for you.

You can specify data you want to render in your UI by adding a `data` function to the object you pass to `createApp`. This function should return an object and all the properties of this object will be available for use in your HTML.

```html
<div id="main">
    <h1>{{ heading }}</h1>
</div>
```

```js
Vue.createApp({
    data() {
        return {
            heading: 'My Vue App'
        };
    }
}).mount('#main');
```

![[Pasted image 20230120221315.png]]

The fields you specify in the object returned by the `data` method will be copied to your Vue app. Of course, a Vue app is just a Javascript object and you could add properties to it directly in the normal way. However, if you add them via the object returned by the `data` function of the object you pass to `createApp`, they will be _reactive_ properties. If their values change during the lifetime of your app, the UI will automatically update to reflect the change. For this reason, all properties you use in your HTML should be in the object returned by the `data` function. If you don't have a value for the property at the time you are calling `createApp`, you should use a placeholder value such as an empty string or `null`.

The double curly brace syntax works for text nodes, but if you want to use data fields in HTML attributes you must do something a little different.

```html
<div id="main">
    <h1 v-bind:class="headingClassName">{{ heading }}</h1>
</div>
```

```js
Vue.createApp({
    data() {
        return {
            heading: 'My Vue App',
            headingClassName: 'heading'
        };
    }
}).mount('#main');
```

`v-bind` is what is called a _directive_, a special attribute that begins with `v-` and has a Javascript expression as its value. There are many [directives](https://v3.vuejs.org/api/directives.html#directives) that Vue understands (it is also possible to create your own). For example, `v-if` can be used to render content conditionally and `v-for` can be used to render lists of items.

```HTML
<div id="main">
    <ul v-if="cities.length > 0">
        <li v-for="city in cities">{{city.name}}, {{city.country}}
    </ul>
</div>
```

```js
Vue.createApp({
    data() {
        return {
            cities: [
                {
                    name: 'Berlin',
                    country: 'Germany'
                },
                {
                    name: 'Hamburg',
                    country: 'Germany'
                }
            ]
        };
    }
}).mount('#main');
```

![[Pasted image 20230120221336.png]]

The `v-model` directive is used on form fields to achieve two-way data binding. The form field will display the value of the property that is specified. When the user updates the value of the form field, the value of the property will be updated automatically.

```html
<div id="main">
    <h1>Hello, <span>{{greetee || 'World'}}!</h1>
    <input type="text" v-model="greetee">
</div>
```

```js
Vue.createApp({
    data() {
        return {
            greetee: ''
        };
    }
}).mount('#main');
```

![[model.gif]]

The `v-on` directive is used to add event handlers to elements. You can add to your `Vue` app methods to be called in event handlers (or elsewhere) by adding a `methods` property to the object you pass to the constructor.

```HTML
<div id="main">
    <span v-on:mouseover="emphasize" v-on:mouseout="deemphasize">
        Hello, World!
    </span>
</div>
```

```js
Vue.createApp({
    methods: {
        emphasize: function(e) {
            e.target.style.textDecoration = 'underline';
            this.count = this.count ? this.count + 1 : 1;
        },
        deemphasize: function(e) {
            e.target.style.textDecoration = '';
            this.logCount();
        },
        logCount: function() {
            console.log(this.count);
        }
    }
}).mount('#main');
```

### Lifecycle

`Vue` apps go through several phases in their lifetime. They are created, they render content in the DOM, they update that content when appropriate, and finally, they are destroyed. Vue allows you to detect when these moments are occurring and to take appropriate actions when they do. It does this through [lifecycle hooks](https://v3.vuejs.org/guide/composition-api-lifecycle-hooks.html#lifecycle-hooks) - methods you can add to your Vue app that will automatically get called when the lifecycle event occurs. For example, if you want to do something when your `Vue` app is created, you would add a `created` property to the object you pass to `Vue`, and set it to a function that does what you want.

The `mounted` lifecycle hook runs when Vue has rendered for the first time. It is convenient to use this lifecycle hook to make HTTP requests for data you want to display.

```html
<div id="main">
    <h1>{{ heading }}</h1>
</div>
```

```js
Vue.createApp({
    data() {
        return {
            heading: ''
        };
    },
    mounted() {
        fetch('/heading').then(
            response => response.json()
        ).then(
            data => {
                this.heading = data.heading;
            }
        );
    }
}).mount('#main');
```