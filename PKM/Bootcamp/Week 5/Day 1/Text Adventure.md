# Adventures with Node.js

Let's make a text-based adventure game!
![[adventure.gif]]

For your adventure, you can come up with any number of decisions and riddles. Set the scene and make it as big and difficult as you like!

In general, your game should work as follows:

1.  When started, it should greet the player and ask them if they want to start.
2.  When the player confirms, it should start asking the player questions, displaying the available options if appropriate.
3.  It should react appropriately to the user's input. Your game shouldn't crash when the user input is something unexpected!
4.  Once the game is complete, the program should end.

_Bonus_: Let your users pick the color of the questions by passing an argument when they start the game.
```js
const story = {
    q: "Welcome to The Land Of Wizards! Would you like to play?",
    answers: {
        yes: {
            q: "You are alone in a dark forest and facing a fork in the road. Which direction do you turn?",
            answers: {
                left: {
                    q: "There's a scary wizard! He asks you a tough question. What's 1+1?",
                    answers: {
                        "2": "congratulations!"
                    }
                },
                right: "This was not the right choice. Goodbye!"
            }
        },
        no: "Alright then. Enjoy your day!"
    }
};
```

## Helpful node modules

Node provides the [readline](https://nodejs.org/api/readline.html) module which lets you read from and write to command line. It is used like so

```js
const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Do you enjoy learning Node.js?", function(answer) {
    if (answer === "yes") {
        console.log("great!");
    }
    rl.close();
});
```

A second, fun, module is [chalk](https://www.npmjs.com/package/chalk). You can use it to color your output!

To install chalk:

```bash
npm install chalk@4.0.0
```

To use chalk in your module:

```js
const chalk = require('chalk');

console.log(chalk.blue('Hello world!'));
```

#### Added by **Yair** on October 24, 2022
![[Pasted image 20230119164540.png]]

## Get user's input on the command line, and print with colour!

```js
const readline = require('readline');
const chalk = require('chalk');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

rl.question("What's your name?\n> ", function (answer) {
    console.log(`Hello there, ${chalk.red(answer)}!`);

    rl.close();
});
```

## Get an array of an object's properties

```js
const shortAnswers = {
    yes: 'positive',
    no: 'negative',
};

console.log(Object.keys(shortAnswers)); // ['yes', 'no']
```

## game.js

```js
const readline = require('readline');
const chalk = require('chalk');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

const question = 'Which way do you want to turn?';
const answers = {
    left: {
        question: 'What now?',
        answers: {
            'go home': '....',
            'turn back': '...',
        },
    },
    right: {
        question:
            'You meet a giant spider. It asks for directions. Do you help it?',
        answers: {
            yes: 'It bites you. You escape. But no more adventures for you today',
            no: {},
        },
    },
};

function askQuestion(question, answers) {
    const answersArray = ....
    const prompt = `${question} [${answers[0]} OR ${answers[1]}]`;
    rl.question(prompt, (answer) => {
        console.log(`Your answer is: ${answer}`);
        // 1. check if the answer is valid (one of the possible answers)
        //    if it is NOT valid -- repeat the question
        //    (ask the question with answers as before)
        // askQuestion(question, answers);
        // 2. Check if the story has ended
        //    a. Get the data for the user's answer, eg. answers['left']
        //    b. If it's an object (with a .q), then we're in business!
        //       Grab the new question + answers and... ask the user!
        //    c. If the data is NOT an object with a .q (eg. a string),
        //       Print that string
        //       Close the readline interface. Nothing more to do.
    });
}

askQuestion(question, answers);
```