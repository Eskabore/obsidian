---
 person_table:
      - &person001
        fname:  homer
        lname:  simpson
        role:   dad
        age:    33

      - &person002
        fname:  marge
        lname:  simpson
        role:   mom
        age:    34     
        
---

# Journal de Croisiere ReactJS
tags: #React #exo #lexicon #code #programming



Date: 27/12/20
----

GP  :
- Passed a prop from a parent component to a child component
- Adapted f( ):

```Javascript
<button className="square" onClick={function() {
        alert('click'); }}>
            {this.props.value}
</button>
```

```Javascript
<button className="square" onClick={ ( ) => 
    alert('click')}>
                    {this.props.value}
</button>
```


>!! WARNING !!
>  - Writing `onClick={alert('click')}` is a common mistake. It would fire the alert every time the component re-renders.

  - Add a constructor to the class to initialize the state (this.state)
  - Classes in JavaScript
  - Term: "Hoisted"
  - Change the `render` method to display current state's value
  -  React Dev Tool (Part from tuto)
  -  "Fork" on CodePen
  -  this.props.state && this.SetState={{ valeur=X }}
  
  
 Date: 01/01/21
 ---
 
## Lifting State Up
    
>!! **To collect data from multiple children, or to have two child components communicate with each other, I should declare the shared state in their parent component instead.** 
***--->The parent component can pass the state back down to the children by using props; this keeps the child components in sync with each other and with the parent component.***


***Lifting*** state into a parent component is common when React components are <u>***refactored***</u>

\-Final Result : Tic Tac Toe Game
``` javascript
class Square extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      value: null,
    };
  }

  render() {
    return (
      <button
        className="square"
        onClick={() => this.setState({value: 'X'})}
      >
        {this.state.value}
      </button>
    );
  }
}

class Board extends React.Component {
  renderSquare(i) {
    return <Square />;
  }

  render() {
    const status = 'Next player: X';

    return (
      <div>
        <div className="status">{status}</div>
        <div className="board-row">
          {this.renderSquare(0)}
          {this.renderSquare(1)}
          {this.renderSquare(2)}
        </div>
        <div className="board-row">
          {this.renderSquare(3)}
          {this.renderSquare(4)}
          {this.renderSquare(5)}
        </div>
        <div className="board-row">
          {this.renderSquare(6)}
          {this.renderSquare(7)}
          {this.renderSquare(8)}
        </div>
      </div>
    );
  }
}

class Game extends React.Component {
  render() {
    return (
      <div className="game">
        <div className="game-board">
          <Board />
        </div>
        <div className="game-info">
          <div>{/* status */}</div>
          <ol>{/* TODO */}</ol>
        </div>
      </div>
    );
  }
}

// ========================================

ReactDOM.render(
  <Game />,
  document.getElementById('root')
);

    