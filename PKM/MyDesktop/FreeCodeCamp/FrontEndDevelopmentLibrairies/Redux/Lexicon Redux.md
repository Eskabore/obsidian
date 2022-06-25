**==Reducer==**:
A reducer is purely a function that takes a state and an action and then return new state.

**==N.B.==**
-> `state` is _read-only_
-> `reducer` function must _always_ return a new copy of `state` and `never` modify state directly.
  -> `reducer` **does not** enforce _state immutability_. I am responsible for enforcing it in the code of my reducer functions.
