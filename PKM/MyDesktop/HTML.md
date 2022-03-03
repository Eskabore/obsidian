# HTML personal cheat-sheet

## HTML Formatting Elements

Formatting elements were designed to display special types of text:

-   `<b>` - Bold text
-   `<strong>` - Important text
-   `<i>` - Italic text
-   `<em>` - Emphasized text
-   `<mark>` - Marked text
-   `<small>` - Smaller text
-   `<del>` - Deleted text
-   `<ins>` - Inserted text
-   `<sub>` - Subscript text
-   `<sup>` - Superscript text## HTML Text Alignment

## Center Text

```html
<div class="center" style="width: auto; margin-left: auto; margin-right: auto;">Centered text</div>
```


### Align text to right

You can align content in a separate container:

Markup

Renders as

```
<div style="text-align: right; direction: ltr; margin-left: 1em;">Text on the right</div>
```

## Text Alignment

The CSS `text-align` property defines the horizontal text alignment for an HTML element:

### Example
```html
<h1 style="text-align:center;">Centered Heading<h1>  
<p style="text-align:center;">Centered paragraph.<p>
```

## HTML Horizontal Rules

The `<hr>` tag defines a thematic break in an HTML page, and is most often displayed as a horizontal rule.

The `<hr>` element is used to separate content (or define a change) in an HTML page:

```html
<h1\>This is heading 1</h1\>  
<p\>This is some text.</p\>  
<hr\>  
<h2\>This is heading 2</h2\>  
<p\>This is some other text.</p\>  
<hr\>
```

## The HTML `<pre>` Element

The HTML `<pre>` element defines preformatted text.

The text inside a `<pre>` element is displayed in a fixed-width font (usually Courier), and it preserves both spaces and line breaks:

### Example

```html
<pre\>  
  My Bonnie lies over the ocean.  
  
  My Bonnie lies over the sea.  
  
  My Bonnie lies over the ocean.  
  
  Oh, bring back my Bonnie to me.  
</pre\>
```

## Text Size

The CSS `font-size` property defines the text size for an HTML element:

### Example

```html
<h1 style\="font-size:300%;"\>This is a heading</h1\>  
<p style\="font-size:160%;"\>This is a paragraph.</p\>
```

## The `<input>` Element

The HTML `<input>` element is the most used form element.

An `<input>` element can be displayed in many ways, depending on the `type` attribute.

Here are some examples:

Type

Description

`<input type="text">`
<input type="text">

Displays a single-line text input field

`<input type="radio">`
<input type="radio">

Displays a radio button (for selecting one of many choices)

`<input type="checkbox">`
<input type="checkbox">

Displays a checkbox (for selecting zero or more of many choices)

`<input type="submit">`
<input type="submit">

Displays a submit button (for submitting the form)

`<input type="button">`
<input type="button">

Displays a clickable button

### Definition and Usage

The `<input>` tag specifies an input field where the user can enter data.

The `<input>` element is the most important form element.

The `<input>` element can be displayed in several ways, depending on the type attribute.

The different input types are as follows:

-   `<input type="button">`
-   `<input type="checkbox">`
-   `<input type="color">`
-   `<input type="date">`
-   `<input type="datetime-local">`
-   `<input type="email">`
-   `<input type="file">`
-   `<input type="hidden">`
-   `<input type="image">`
-   `<input type="month">`
-   `<input type="number">`
-   `<input type="password">`
-   `<input type="radio">`
-   `<input type="range">`
-   `<input type="reset">`
-   `<input type="search">`
-   `<input type="submit">`
-   `<input type="tel">`
-   `<input type="text">` (default value)
-   `<input type="time">`
-   `<input type="url">`
-   `<input type="week">`