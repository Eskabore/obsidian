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
    this.assigneNewQuoteIndex = this.assigneNewQuoteIndex.bind(this);
    this.selectQuoteIndex = this.selectQuoteIndex.bind(this);
  }

  componentDidMount() {
    fetch("https://gist.githubusercontent.com/natebass/b0a548425a73bdf8ea5c618149fe1fce/raw/f4231cd5961f026264bb6bb3a6c41671b044f1f4/quotes.json")
    .then(response => response.json())
    .then(quotes => this.setState({ quotes }, this.assignNewQuoteIndex));
  }

  get selectedQuote() {
    if (!this.state.quotes.length || !Number.isInteger(this.state.selectedQuoteIndex)) {
      return undefined;
    }
    return this.state.quotes[this.state.selectedQuoteIndex];
  }

  selectQuoteIndex() {
    if (!this.state.quotes.length) {
      return undefined;
    }
    return random(0, this.state.quotes.length -1);
  }

  assigneNewQuoteIndex() {
    this.setState({ selectedQuoteIndex: this.selectQuoteIndex() });
  }

  render() {
    return (
      <div className="App" id="quote-box">
      { this.selectedQuote ? `"${this.selectedQuote.quote}" - ${this.selectedQuote.author}` : ''}
        <Button buttonDisplayName="test" clickHandler={this.assigneNewQuoteIndex} />
      </div>
    );
  }
}

export default App;
