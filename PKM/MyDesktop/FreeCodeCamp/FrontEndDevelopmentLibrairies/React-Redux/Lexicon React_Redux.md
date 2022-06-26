**==React==** is a **view library** that you provide with data, then it renders the view in an efficient, predictable way.
**==Redux==** is a **state management framework** that you can use to simplify the management of your application's state.

Typically, in a **React Redux app**, you create a single Redux store that manages the state of your entire app.
==>Your React components subscribe to only the pieces of data in the store that are relevant to their role.
     Then, you dispatch actions directly from React components, which then trigger store updates.

**React-Redux** provides a small API with two (2) key features:
-  Provider: is a wrapper component from React-Redux that wraps my React-app.
    This wrapper then allows me to access the Redux `store` and `dispatch` functions throughout my component tree.
    It (`Provider`) takes two (2) props, the Redux store & the child components of my app.
- 'connect'

`mapStateToProps

`mapDispatchToProps`

### Extract Local State into Redux
```javaScript
/*
Hints
Hint 1

You need to change the following sections:

    default state declarations: remove messages
    submitMessage: use props
    render: the unordered list should use props instead of this.state.messages

Hint 2

Replace this.state.messages with this.props.messages.
Hint 3

The submitMessage function still needs to set the state of the input.
*/

// Redux:
const ADD = 'ADD';

const addMessage = (message) => {
  return {
    type: ADD,
    message: message
  }
};

const messageReducer = (state = [], action) => {
  switch (action.type) {
    case ADD:
      return [
        ...state,
        action.message
      ];
    default:
      return state;
  }
};

const store = Redux.createStore(messageReducer);

// React:
const Provider = ReactRedux.Provider;
const connect = ReactRedux.connect;

// Change code below this line
class Presentational extends React.Component {
  constructor(props) {
    super(props);
    
    // Remove property 'messages' from Presentational's local state
    this.state = {
      input: ''
    }
    this.handleChange = this.handleChange.bind(this);
    this.submitMessage = this.submitMessage.bind(this);
  }
  handleChange(event) {
    this.setState({
      input: event.target.value
    });
  }
  submitMessage() {
  
    // Call 'submitNewMessage', which has been mapped to Presentational's props, with a new message;
    // meanwhile, remove the 'messages' property from the object returned by this.setState().
    this.props.submitNewMessage(this.state.input);
    this.setState({
      input: ''
    });
  }
  render() {
    return (
      <div>
        <h2>Type in a new Message:</h2>
        <input
          value={this.state.input}
          onChange={this.handleChange}/><br/>
        <button onClick={this.submitMessage}>Submit</button>
        <ul>
           {/* The messages state is mapped to Presentational's props; therefore, when rendering,
               you should access the messages state through props, instead of Presentational's
               local state. */}
          {this.props.messages.map( (message, idx) => {
              return (
                 <li key={idx}>{message}</li>
              )
            })
          }
        </ul>
      </div>
    );
  }
};
// Change code above this line

const mapStateToProps = (state) => {
  return {messages: state}
};

const mapDispatchToProps = (dispatch) => {
  return {
    submitNewMessage: (message) => {
      dispatch(addMessage(message))
    }
  }
};

const Container = connect(mapStateToProps, mapDispatchToProps)(Presentational);

class AppWrapper extends React.Component {
  render() {
    return (
      <Provider store={store}>
        <Container/>
      </Provider>
    );
  }
};
```