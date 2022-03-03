---
title: "Main Concept"
folder: "React"
---

---
## State in React

The state is an instance of React Component Class can be defined as an object of a set of **observable** properties that control the behavior of the component.

The State of a component is an object that holds some information that may change over the lifetime of the component and is also used to control the behavior after each change.

**State** is updated by event handlers.

It can **<u>only be used in</u> _[[IT/ReactJS/Components/Class]]_**

---
## Props in React

Props (stands for properties) are sort of **global variables** or **objects**.
They are immutable i.e once set the props cannot be changed.

**Props** has no limitation when it comes to where it can be used.


---

# Difference of Props and State

-   Props are immutable i.e. once set the props cannot be changed, while State is an observable object that is to be used to hold data that may change over time and to control the behavior after each change.
-   States can only be used in Class Components while Props don’t have this limitation.
-   While Props are set by the parent component, State is generally updated by event handlers. For example, let us consider the toggle the theme of the GeeksforGeeks {IDE} page. It can be implemented using State where the probable values of the State can be either light or dark and upon selection, the IDE changes its color.


---

---
# React Elements are immutable

---