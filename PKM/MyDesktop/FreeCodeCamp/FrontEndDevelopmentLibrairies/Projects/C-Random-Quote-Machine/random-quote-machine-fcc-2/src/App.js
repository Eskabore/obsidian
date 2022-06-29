import React, { Component } from 'react';
import './App.css';
import Button from './components/Button';
import { random } from 'lodash';

class App extends Component {
  constructor(props) {
    super(props);
    this.state = {
      quotes: [],
      selectedQuoteIndex: null,
    }
  }

  componentDidMount() {
    fetch("https://gist.githubusercontent.com/natebass/b0a548425a73bdf8ea5c618149fe1fce/raw/f4231cd5961f026264bb6bb3a6c41671b044f1f4/quotes.json")
    .then((response) => response.json())
    .then*=(quotes => this.setState({quotes: quotes}));
  }

  selectedQuoteIndex() {
    
  }

  render() {
    console.log(this.state.quotes)
    return (
      <div className="App" id="quote-box">
        <Button buttonDisplayName="test" clickHandler={this.nextQuoteClickHandler} />
      </div>
    );
  }
}

export default App;
