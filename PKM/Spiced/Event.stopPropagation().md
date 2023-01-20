# [Event.stopPropagation()](https://developer.mozilla.org/en-US/docs/Web/API/Event/stopPropagation#:~:text=The%20stopPropagation()%20method%20of,on%20links%20are%20still%20processed.)

The **`stopPropagation()`** method of the [`Event`](https://developer.mozilla.org/en-US/docs/Web/API/Event) interface prevents further propagation of the current event in the capturing and bubbling phases. It does not, however, prevent any default behaviors from occurring; for instance, clicks on links are still processed. If you want to stop those behaviors, see the [`preventDefault()`](https://developer.mozilla.org/en-US/docs/Web/API/Event/preventDefault "preventDefault()") method. It also does not prevent immediate propagation to other event-handlers. If you want to stop those, see [`stopImmediatePropagation()`](https://developer.mozilla.org/en-US/docs/Web/API/Event/stopImmediatePropagation "stopImmediatePropagation()").

##### [Syntax](https://developer.mozilla.org/en-US/docs/Web/API/Event/stopPropagation#syntax "Permalink to Syntax")

```js
event.stopPropagation()
```