# Petition

The idea behind this project is to create an online petition that visitors can sign to make their voice heard on an issue of your choosing.

![[Pasted image 20230119235701.png]]
The petition can be about something ridiculous, as in the example presented above, or a matter of great seriousness. Since we are going to be working on this project for considerable amount of time, it would be best if you chose a topic that interests you. Keep in mind that we will be presenting our petitions in class as well as publishing them on the web, so you should not choose a topic that would offend or alienate your colleagues or others you may want to impress with your work.

## Requirements for Part 1

When users first arrive at your site they should be directed to a page that explains the issue and presents a form to sign. The form should have four elements: two text fields for first and last name, a hidden field for the signature, and a submit button. There should also be a `<canvas>` element on which users can draw their signature.

![[johnhancock.gif]]

You will have to write client-side Javascript to allow users to draw on the canvas and to then set the value of the hidden form field to what they have drawn. You can get the image data to put in the hidden field by calling the [`toDataURL`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLCanvasElement/toDataURL) method of the canvas.

When users submit the form, a `POST` request should be made to your server and the submitted data should be inserted into a database table named `signatures`. This table needs to have columns for id (the primary key), first name, last name, and signature. It is probably also a good idea to have a timestamp column to record when the signature took place. Note that the data url from the canvas can be quite large so the [`VARCHAR`](https://www.postgresql.org/docs/current/datatype-character.html) data type without any length limitation (or equivalently the [`TEXT`](https://www.postgresql.org/docs/current/datatype-character.html) data type) should be used for it.

First name, last name, and signature should all be required fields. If a user does not submit all three, or if an error happens for another reason, the page should be displayed again with an error message.

![[Pasted image 20230120000201.png]]
Once the data is saved, a cookie should be set to remember this fact. Users should then be redirected to another page that expresses gratitude for their support.

![[Pasted image 20230120000216.png]]
On subsequent visits to the site, people who have signed the petition should be redirected to this page. They should not be given the opportunity to sign the petition again if they have the cookie indicating that they have already signed.

This page should have a link to another page that lists all of the people who have signed the petition thus far.

![[Pasted image 20230120000239.png]]
## Project Set-up

A repo for this project has already been created. You should clone it.

-   If you are authenticating to gitHub with an ssh key, use this command
    
    ```bash
    git clone git@github.com:spicedacademy/okra-petition.git
    ```
    
-   If you are authenticating to gitHub via an access token, use this command
    
    ```bash
    git clone https://github.com/spicedacademy/okra-petition.git
    ```
    

After cloning, `cd` into the directory and create a branch of your own.

```bash
git checkout -b your_branch_name origin/master
```

When you want to push commits, push them to your branch and not to master.

```bash
git push origin your_branch_name
```

The repo contains a `package.json` that lists all of the dependencies the project is expected to require. To install them, `cd` into the directory and type the following.

```bash
npm install
```

#### Added by **Jan** on November 8, 2022

### Project Structure

-   db.js
-   server.js
-   views folder containing all handlebars files
-   public folder with all the public assetts that are sent to the browser

#### db.js

```js
const spicedPg = require("spiced-pg");

const user = "postgres";
const password = "postgres";
const database = "geography";
// this establishes the connection to the db
// it get's a connection string as an argument
const db = spicedPg(`postgres:${user}:${password}@localhost:5432/${database}`);

function getCities() {
  return db
    .query("SELECT * FROM cities")
    .then((result) => console.log(result.rows));
}

function getCityByName(name) {
  return db
    .query("SELECT * FROM cities WHERE name = $1", [name])
    .then((result) => result.rows[0]);
}

function createCity({ name, state, country }) {
  return db
    .query(
      `INSERT INTO cities (name, state, country)
    VALUES ($1, $2, $3)
    RETURNING *`,
      [name, state, country]
    )
    .then((result) => result.rows[0]);
}

module.exports = {
  createCity,
  getCities,
  getCityByName,
};
```

#### index.js

```js
const { createCity, getCities, getCityByName } = require("./db");

// createCity({
//   name: "Berlin",
//   state: "Berlin",
//   country: "Germany",
// }).then((result) => console.log(result));

// getCities()
//   .then((cities) => console.log(cities))
//   .catch((err) => console.log(err));

getCityByName("Berlin").then((city) => console.log(city));
```

#### Added by **Klaus** on November 8, 2022

### Pages

-   Today you will make 3 different pages
    -   `petition`, `thanks`, `signers`
    -   Each one of these will have their own `.handlebars` templates which lives in the `views` directory

`petition` page

-   Needed:
    -   Two text input fields for the user’s first and last name
    -   A rectangle canvas element for signing
    -   A button for submitting these values
-   Canvas:
    -   The code for this will live in your `script.js` file
        -   n.b. this will only run on one page and doesn’t need to be loaded for every page
    -   You are going to need to attach some event listeners for this
    -   When the mouse is down, you should begin listening for the possibility the mouse is moving. Once moving a line should follow the mouse coordinates. When the mouse is up the line should stop
    -   Consider scenarios like what if the user’s mouse leaves the canvas area?
-   Submit:
    -   When the user submits these values there is the chance an error could take place
    -   In this scenario, re-render the same page with an error message displayed
    -   If NO error takes place and all is well, set a cookie indicating that the user has signed and redirect to the `thanks` page
        -   On subsequent visits, if this cookie is detected, users will be redirected straight to the `thanks` page as there is no need to sign again
-   You _could_ render this page on a visit to the `/petition` route. You could also render this from the `/` route for now, this is something you will need to consider and decide yourself. You could also redirect the user from `/` to `/petition` and vice versa...

`thanks` page

-   Needed:
    -   A thank you message of your liking
    -   A link taking the user to a page listing all those who have signed already
    -   You will need a value to render this correctly, you will need the current number of signers
        -   Search POSTGRES COUNT

`signers` page

-   Needed:
    -   a list of names of everyone who has signed so far

`canvas`

-   When the user submits the form on the petition page, we need to _capture_ the value of the `canvas`
    -   This can be done be call a method of canvas called `toDataUrl`
    -   `canvas.toDataURL()`
-   Once you have that value, we can set it as the value of a hidden input field in the form being submitted `<input type="hidden" name="signature">`
-   It is not necessary to use jQuery for this part of the project. Though if you feel an overwhelming affinity for jQuery you may use it.
    -   Setting a value on a hidden input field without `jQuery` can be achieved with something like
    -   `document.querySelector('[type="hidden"]').value = 'Ed Sheeran';`
-   There are different moments where this value can be set, like as you are drawing; as the user mouses up; as the user clicks the submit button. The pros an cons of each are for you to consider.

`form`

-   In the petition page you will be submitting 3 values to the server
    -   first, last, signature
    -   Server side you will receive this values according to what the `name` attribute was on the input field
-   If any fields are left blank, render an error
    -   It is worth giving consideration to some kind of form validation
    -   To submit a post request, all form fields will need to be wrapped in a `form` tag
    -   It will need to have `method="POST"`

## Server Side

Server routes

-   `petition` page: `GET /` or `GET /petition`
-   `petition` form submit: `POST /` or `POST /petition`
    -   Form values are accessible via `req.body` on the server
-   `thanks` page: `GET /thanks`
-   `signers` page: `GET /signers`

Middleware

-   `express.static` for serving static files in the `public` directory
-   `express.urlencoded` for parsing your form `POST` request
-   `cookie-parser` for parsing and adding cookies

`petition.sql`

```sql
DROP TABLE IF EXISTS signatures;

CREATE TABLE signatures (
     id SERIAL PRIMARY KEY,
     first VARCHAR NOT NULL CHECK (first != ''),
     last VARCHAR NOT NULL CHECK (last != ''),
     signature VARCHAR NOT NULL CHECK (signature != '')
);
```

DB setup

-   `createdb petition`
-   `psql -d petition -f database/petition.sql`
-   REMEMBER: update `spicedPg` to connect to the correct DB