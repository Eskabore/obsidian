# Petition - Part 3

Let's add log in and registration to this thing.

![[Pasted image 20230120000844.png]]
![[Pasted image 20230120000854.png]]
You will need to add a `users` table to your database. The table should have columns for id (the primary key), first name, last name, email address, and the hashed password. You may also want to add a timestamp column to record the time at which the user was created.

You should also change the `signatures` table so that it has a column for the user id. You need to be able to map signatures to users and users to signatures.

Both the registration and log in forms can have several errors so you have to be able to reload them with error information displayed.

First name, last name, email address, and password should all be required fields. Email addresses must be unique. This should be enforced by a [constraint](https://www.postgresql.org/docs/14/sql-createtable.html) on the column.

After a user registers or logs in, you should give `req.session` a property for the user's id. You can check for the presence of this property to determine if the user is logged in and pass the value of the property to queries in order to find out anything you want to know about the user. You may also wish to add properties to `req.session` for other data that you will use frequently, such as the user's first or last name.

Logged out users should be automatically redirected to the registration page.

Since users must be logged in to sign the petition, there is no need to ask them for their names on that form. Remove those inputs and use the first name and last name that is already stored.

#### Added by **Jan** on November 10, 2022

## Cryptography and Hashing

#### Symmetric Cryptography

##### Caesar Cipher
![[Pasted image 20230120000930.png]]
Problem: **Alice and Bob have to exchange the key**

#### Asymmetric Cryptography - Public Key Cryptography
![[Pasted image 20230120000944.png]]

#### Hashing

```
<any digital input> -> '$2b$10$b/0PX8UUYwzY20sxfJYzu.IAWTqCHcbh1EHJdr0keknqk1fKhOVHC'
```
-   deterministic
-   fixed length
-   small change in input results in a completely different hash
-   **cannot be decrypted back to it's original input**

![[Pasted image 20230120001018.png]]

#### Hashing example

```js
const bcrypt = require("bcrypt");

const password = "123456";

const salt = bcrypt.genSaltSync();
console.log(salt.length);

const hash = bcrypt.hashSync(password, salt);

console.log(hash);

const userInput = "123456";

// we can use bcrypt.compare to check if the user input is the correct password
if (bcrypt.compareSync(userInput, hash) {
    console.log("the password is correct");
}
```

#### Without salts using a rainbow table is really easy:

Germanys most popular passwords:

-   123456 -> $2b$10$LVgHf6yVAQ196ZbKAQnjnu.GHZpkxbw6rFLRmZZpME2uETjxd74Ey
-   passwort -> $2b$10$PUCVaQi/vQaDr266WvQuQ.F99GYBuJAxerwEYBgn2cT1zphqMdQT2
-   12345 -> $2b$10$Xqtp7.a5jdUumqTAPRNyMe.9HojiLdRhlVGoo61m7zppVvImXMIl.
-   hallo
-   123456789
-   qwert
-   schatz
-   basteln
-   berlin
-   12345678

#### Database tables:

```sql
DROP TABLE IF EXISTS signatures;
DROP TABLE IF EXISTS users;

CREATE TABLE signatures (
    id SERIAL PRIMARY KEY,
    -- first_name VARCHAR(255) NOT NULL,
    -- last_name VARCHAR(255) NOT NULL,
    signature text NOT NULL,
    user_id INT NOT NULL
);

CREATE TABLE users (
    id SERIAL PRIMARY KEY,
    first_name VARCHAR(255) NOT NULL,
    last_name VARCHAR(255) NOT NULL,
    email VARCHAR(255) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```