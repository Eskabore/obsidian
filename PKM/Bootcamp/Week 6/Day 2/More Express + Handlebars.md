# More Express + Handlebars

## Partials

Partials are templates that can be called by other templates. They are useful for content that you use repeatedly throughout your site.

By default, express-handlebars considers any .handlebars file placed in a subdirectory of views named "partials" to be a partial that can be called by another template, including other partials.

If you had a file named "button.handlebars" in views/partials, you'd be able to call it in any template with `{{> button}}`.

```handlebars
<div>
    Here is a button! {{> button}}
</div>
<div>
    Here is another button! {{> button}}
</div>
```

Partials are automatically passed the current context object that is in play when the partial is called. Additionally, you can pass ad hoc arguments to partials. For example, imagine that button.handlebars looked like this:

```handlebars
<button>
    {{#if icon}}
        <img src="icon.gif" alt="icon">
    {{/if}}
    click me!
</button>
```

If you called this partial with `{{> button}}` then no `<img>` element would be displayed. If, however, you called it with `{{> button icon=true}}`, then an `<img>` element would be rendered inside the `<button>` element.

## Helpers

Handlebars strives to be as logic-less as possible in order to keep templates simple. It intentionally makes it hard to do any logic inside a template beyond simple loops and conditionals. Usually the best work around for this is to do your logic before you call your template and pass to the template objects or arrays that are already in the desired shape. Occasionally you will want to define a [helper](http://handlebarsjs.com/#helpers) function that you can call from your template to produce the output you want.

The express-handlebars package allows you to [define helpers](https://github.com/ericf/express-handlebars#helpers) that can be used by every template or to pass helpers to specific templates at the time they are rendered. For example, if you wanted to pass to a template a helper that converts a string to upper case you could do this:

```js
res.render('content', {
    message: 'welcome',
    helpers: {
        toUpperCase(text) {
            return text.toUpperCase();
        }
    }
});
```

Then in your template you could call the template like this:

```handlebars
<h3>{{toUpperCase message}}</h3>
```

This would cause the following to be rendered:

```html
<h3>WELCOME</h3>
```

## Exercise

Create a description page for each of the projects in your portfolio. This page should use the same layout as your welcome page but a new template will be needed for the content specific to this page, which includes:

1.  The title of the project
    
2.  A large-sized screenshot of the project
    
3.  A description of the project
    
4.  A link to the project
    
5.  A list of links to all of your project description pages
![[Pasted image 20230119231332.png]]

Only one route will be required for all of your description pages. The url should be something like `/project/:project` or `/project/:project/description`. The route should expect the `project` param in the url to be the name of a project directory. To confirm that the param in the url is valid, you can use the very same array of objects you passed to your welcome template. If `req.params.project` does not match the directory belonging to any of the objects in the array, you should send a 404. If you do find a match, you should render the new description page template, passing to it all of the information it needs. The array of objects containing info about your projects will have to be included in this data. It will be needed by the template in order to generate the list of links to all of your description pages.

An important requirement is that you use the exact same markup for the list of links to description pages that you use for the list of projects on the welcome page and that this markup be written only once. That is, you will have to

1.  Take the code that loops through the array of objects in your welcome template, and move it out to a new partial
    
2.  Change the links generated in the loop to link to your description pages, rather than to the projects themselves
    
3.  Use the new partial in both the welcome page template and the new description page template
    
4.  Arrange for the project list that appears on both the welcome and description pages to look different depending on the context in which it appears: On the welcome page, you should show the project screenshots. On the description page, there should be no screenshots. You can accomplish this by passing arguments to your partial, or it can be done entirely in CSS.
    

To be able to show project descriptions, you will have to modify your json file containing the array of objects representing each project. Add a new property containing the project description, to each project object in the json file. For example, the object representing your Kitty Carousel project would have to be altered to look like this:

```js
{
    "title": "Kitty Carousel",
    "directory": "kitty_carousel",
    "description": "I am quite proud of this project and I had a really great time working on it."
}
```

You can make the links to the projects themselves open in a new tab by setting the `target` attribute of the `<a>` element to `"_blank"`.

## Bonus Exercise

In the list of links to description pages, visually indicate which description page the user is currently on by styling the corresponding link differently (e.g., give it a background color, italicize it, etc.).