**==Reducer==**:
A reducer is purely a function that takes a state and an action and then return new state.
**Primitive values (JavaScript)**
**==N.B.==**
-> **`state`** is _read-only_
-> **`reducer`** function must _always_ return a new copy of `state` and *never* modify state directly.
  -> `reducer` **does not** enforce _state immutability_. I am responsible for enforcing it in the code of my reducer functions.
> **State Immutability**
> -> **Never Mutate State**


**==`const`==** means it connot change through re-assignment and cannot be re-declared.

---
### Hint
#hint #nb #array #JavaScript 

Hint 1

const means: it cannot change through re-assignment, and it cannot be re-declared.
Since objects and arrays are mutable, you can add to it by index (array[3] = 3), by property (object.name=“sam”), by extending (with various array methods)
Hint 2

.push() and .splice() directly modify the array
Hint 3

.concat() doesn’t modify array but just returns a new array
Hint 4

.slice() doesn’t modify array but just returns a new array
Hint 5

spread operator […array] doesn’t modify array but just returns a new array

---

**==Root - Reducer==**
==`root reducer`==

**==Redux Thunk middleware==**


**==SWITCH==**

-> Don't forget to write a `default` case in your switch statement that returns the current `state`. This is important because ==once your app has multiple reducers, they are all run any time an action dispatch is made==, even when the action isn't related to that reducer. In such a case, you want to make sure that you return the current `state`.

## Basic Examples

```javaScript
import { createStore } from 'redux'

/**
 * This is a reducer - a function that takes a current state value and an
 * action object describing "what happened", and returns a new state value.
 * A reducer's function signature is: (state, action) => newState
 *
 * The Redux state should contain only plain JS objects, arrays, and primitives.
 * The root state value is usually an object. It's important that you should
 * not mutate the state object, but return a new object if the state changes.
 *
 * You can use any conditional logic you want in a reducer. In this example,
 * we use a switch statement, but it's not required.
 */
function counterReducer(state = { value: 0 }, action) {
  switch (action.type) {
    case 'counter/incremented':
      return { value: state.value + 1 }
    case 'counter/decremented':
      return { value: state.value - 1 }
    default:
      return state
  }
}

// Create a Redux store holding the state of your app.
// Its API is { subscribe, dispatch, getState }.
let store = createStore(counterReducer)

// You can use subscribe() to update the UI in response to state changes.
// Normally you'd use a view binding library (e.g. React Redux) rather than subscribe() directly.
// There may be additional use cases where it's helpful to subscribe as well.

store.subscribe(() => console.log(store.getState()))

// The only way to mutate the internal state is to dispatch an action.
// The actions can be serialized, logged or stored and later replayed.
store.dispatch({ type: 'counter/incremented' })
// {value: 1}
store.dispatch({ type: 'counter/incremented' })
// {value: 2}
store.dispatch({ type: 'counter/decremented' })
// {value: 1}
```

#### Remove an item from an Array

```javaScript
const immutableReducer = (state = [0, 1, 2, 3, 4, 5], action) => {
  switch (action.type) {
    case "REMOVE_ITEM":
      // don't mutate state here or the tests will fail
      return [
        ...state.slice(0, action.index),
        ...state.slice(action.index + 1, state.length)
      ];
    // or return state.slice(0, action.index).concat(state.slice(action.index + 1, state.length));
    default:
      return state;
  }
};

const removeItem = index => {
  return {
    type: "REMOVE_ITEM",
    index
  };
};

Code Explanation

    array.slice(fromIndex, untilIndex) returns a new array
    1st slice from the first item’s index (0 inclusive) until indexToRemove(action.index exclusive)
    2nd slice from item right after indexToRemove (action.index + 1 inclusive) until length (last item’s index + 1 exclusive)
    since slice returns a new array, combine both parts with […array1, …array2] spread operator
    or combine them with .concat()

```

> **==`Object.assign()`==** utility:
 takes a target object and source objects and maps properties from the source objects to the target object. Any matching properties are overwritten by properties in the source objects. This behavior is commonly used to make shallow copies of objects by passing an empty object as the first argument followed by the object(s) you want to copy. 