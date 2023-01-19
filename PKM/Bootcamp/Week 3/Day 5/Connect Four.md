# Connect Four

Let's make our own version of Connect Four, the vertical checkers game.

<iframe width="560" height="315" src="https://www.youtube.com/embed/WU1K4X_LOxY" title="Connect Four" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

In this game players take turns dropping their pieces into one of seven columns that have six rows of slots. The first player to get their pieces into four slots that are vertically, horizontally, or diagonally contiguous wins the game.

![[Connect_Four.gif]]

Your game can look and work however you like but it must follow these basic rules.

1.  The board has six rows and seven columns
    
2.  Two players take turns selecting a column to drop their checker into
    
3.  When a player wins, a message appears to announce the victory
    
4.  After a player wins, it should be possible to reset the game and play again
    
5.  The gameplay should involve at least one animation (for example, the checkers could fall into their slot rather than just appear instantaneously)

## Bonus features

Here are several ideas to make the game more interesting if you have the time

1.  After a player wins, visually indicate which four pieces on the board satisfied the victory condition
    
2.  Allow players to drag their pieces across the screen and drop them into their desired column using their mouse (or finger on touch screens)
    
3.  Allow players to play using only their keyboard
    
4.  Allow players at the beginning of the game to increase the number of columns on the board and the number of connected pieces that are required to win
    
5.  Allow a single player to play against the computer

![[Pasted image 20230119161131.png]]

![[Pasted image 20230119161144.png]]

#### Added by **Jan** on October 14, 2022

### This is html structure for the board - this is just a visual representation of the data structure that holds all the information about the current state of the game

```html
    <div id="board">
      <div class="column">
        <div class="slot row0">
          <div class="hole"></div>
        </div>
        <div class="slot row1">
          <div class="hole"></div>
        </div>
        <div class="slot row2">
          <div class="hole"></div>
        </div>
        <div class="slot row3">
          <div class="hole"></div>
        </div>
        <div class="slot row4">
          <div class="hole"></div>
        </div>
        <div class="slot row5">
          <div class="hole"></div>
        </div>
      </div>
      <!-- We need 6 of these columns -->
    </div>
```

### CSS

```css
body {
    background-color: palevioletred;
}

#board {
    display: flex;
}

/* this css for .slot and .hole supports the sliding animation */
.slot {
    width: 100px;
    height: 100px;
    overflow: hidden;
}

.hole {
    width: 80px;
    height: 80px;
    border: 50px solid darkslategray;
    border-radius: 50%;
    position: relative;
    left: -40px;
    top: -40px;
}

/*  this css for .slot and .hole does NOT support sliding animation */
/* .slot {
    width: 100px;
    height: 100px;
    background-color: magenta;
}

.hole {
    width: 80px;
    height: 80px;
    background-color: white;
    border-radius: 50%;
    position: relative;
    left: 10px;
    top: 10px;
} */

.player1 .hole {
    background-color: royalblue;
}

.player2 .hole {
    background-color: seagreen;
}
```

### The array that represents the board - this is the current state of the game. This is also the spot that we later check if we have a connect four

```js
// x and y represent tiles of player 1 and player 2
const board = [
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, 0, 0, 0],
  [0, 0, 0, "x", 0, "y"],
];
```

### rendering a tile on the board at a specific position

```js
console.log($(".column").eq(0).children().eq(1).addClass("player1"));
```

### We want to turn this into a function that is able to get row and column as parameters and updates that hole on the board

```js
function renderTile(row, column) {
  $(".column").eq(0).children().eq(0).addClass("player1");
}
```

### Placing a tile on the board

-   we need an event listener for every column
-   we need to udpate the board array
-   we need to call renderBoard

#### Adding the event listener on every column

```js
$(".column").click(function (e) {
  console.log('clicked column');
  // we need to know which column we clicked
  console.log($(".column").index(this));
});
```

#### We need to know which column we clicked. Google: "which child is the clicked element jquery"

💡 Then find out about the `index` method

### Now that we know the column we need to update the array that represents the board

### What should the function get as a parameter? The column

```js
function addTileToBoard(column) {
  // column is the index that we need to check in every one of the inner arrays
  // we also need to know which players turn it is 
}
```