# Incremental Search

Incremental search has become standard on sites across the web.

![[search.gif]]

Let's make an incremental search field that allows users to find one of the countries that exist on earth. A [list of countries](https://spiced.space/okra/incremental_search/countries.json) has been prepared for you.

-   Every time the user types a visible character, if the current value of the input field is at the beginning of the names of any countries in the list, those country names should be displayed (limit it to four countries displayed at a time).
    
-   If the current value of the input is not at the beginning of any of the country names, the string "No results" should be displayed in gray
    
-   If a list of results is displayed and the user clicks outside of it and outside of the input field, the result list should disappear.
    
-   Result lists should reappear when the user gives the input field focus
    
-   If the user mouses over a result in the result list, that result should light up (give it a background color and different text color)
    
-   If a result list is displayed and the user hits an up or down arrow key, the appropriate result should light up
    
-   If the user clicks a result or hits the enter key while a result is lit up, the full country name of the appropriate result should appear in the input field and the result list should disappear!
    

_Do not use the HTML `<select>` or `<datalist>` tags to solve this challenge!_

#### Added by **Jan** on October 13, 2022

## HTML structure

```html
<!DOCTYPE html>
<html>
  <title>Incremental Search</title>
  <!-- <link rel="stylesheet" href="styles.css" /> -->
  <div id="search">
    <input type="text" value="" />
    <div id="results"></div>
  </div>
  <script src="https://code.jquery.com/jquery-3.3.1.min.js"></script>
  <script src="script.js"></script>
</html>
```

## First steps

-   trigger an event when the value in the input field changes
-   get the value of the input field
-   use it to filter the array
-   put together a string of divs containing the filtered countries
-   render the list of divs into #results
-   if the result array is empty display "No Results"
-   when you click outside of the input field hide the list
-   clicking back into the field shows the list