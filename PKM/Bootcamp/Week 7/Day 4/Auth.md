# Auth

_Authentication_ is the process of confirming that users are who they claim to be.

_Authorization_ is concerned with permissions, with which users are allowed to take which actions.

The two terms are often mixed up because they begin with the same four letters and one is a necessary condition for the other - you can't say whether or not a user is allowed to do something that requires special permission if you do not know who that user is.

Typically authentication is based on passwords. When users register they provide a password which they must enter correctly in subsequent sessions in order to gain access. Use of two-factor authentication is growing, but usually one of the two factors is a password. So it is important to know how passwords work.

## Hashing passwords

You have probably noticed that when you click a "Forgot password" link you will usually enter into a process to reset your password to something new. Why don't they just tell you what your current password is? They don't tell you because, if they're doing it right, they don't know what your password is either. They don't know it because they didn't store in their database the plain text password that you typed into the registration form. Instead they used that text as input to [hash algorithm](https://crackstation.net/hashing-security.htm#normalhashing) and stored the result. When you log in again they use the text you entered into the password field of the log in form as input to the same hash algorithm and compare the result to the hashed password in the database.

Why don't they store the plain text password in the database? Because it is impossible to eliminate the risk that an unauthorized person will gain access to that database. By hashing passwords you minimize the damage that a hack or a leak can cause.

To make it harder to crack the hashes, a random string should be added to the password before hashing it. This random string is called a [salt](https://crackstation.net/hashing-security.htm#salt).

## bcrypt

As is explained in [this old blog post](https://codahale.com/how-to-safely-store-a-password/), bcrypt is an algorithm that is well suited to the purpose of hashing passwords. You can also get a good explanation of why bcrypt is good for hashing passwords in this video:
<iframe width="560" height="315" src="https://www.youtube.com/embed/O6cmuiTBZVs" title="Bcrypt & Password Security - An Introduction" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>
The [bcryptjs module](https://github.com/dcodeIO/bcrypt.js) is also quite easy to use. It provides methods for generating a salt, hashing with a salt, and comparing a hash to a plain text password.

```js
const bcrypt = require("bcryptjs");

exports.hash = password => {
    return bcrypt.genSalt().then(salt => {
        return bcrypt.hash(password, salt);
    });
};

exports.compare = bcrypt.compare;
```

The `compare` method will give you back a boolean if no error occurs. If the boolean is `true`, the password matches the hash. If it is `false`, the password is wrong.

## Exercises

You can now add log in and registration to your [[Petition - Part 3|petition project]].