**==Reducer==**:
A reducer is purely a function that takes a state and an action and then return new state.

**==N.B.==**
-> **`state`** is _read-only_
-> **`reducer`** function must _always_ return a new copy of `state` and *never* modify state directly.
  -> `reducer` **does not** enforce _state immutability_. I am responsible for enforcing it in the code of my reducer functions.

**==`root reducer`==**

**==SWITCH==**

-> Don't forget to write a `default` case in your switch statement that returns the current `state`. This is important because ==once your app has multiple reducers, they are all run any time an action dispatch is made==, even when the action isn't related to that reducer. In such a case, you want to make sure that you return the current `state`.