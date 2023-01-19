# SQL

Relational databases organize data into _tables_, which look a lot like spreadsheets. Each row in a table is a record, an individual data item. The columns are the fields or attributes belonging to each item. Each row has a _primary key_, most often a single column, that allows it to be related to data in other tables.

SQL (Structured Query Language) is a language that enables creating, editing, and querying relational databases. A good beginner's guide to SQL is available at [http://www.sohamkamani.com/blog/2016/07/07/a-beginners-guide-to-sql/](http://www.sohamkamani.com/blog/2016/07/07/a-beginners-guide-to-sql/)

There are many SQL databases. We will be using [PostgreSQL](https://www.postgresql.org/).

## Installation

For Mac users, it is recommended that you go to download Postgres from [the PostgreSql website](https://www.postgresql.org/download/), choosing the [Postgres.app](http://postgresapp.com/) option. It is much easier than the other options.

-   Once downloaded, **Open Postgres** and click **Initialize**.
-   Head back to the [Postgres.app](http://postgresapp.com/) website, and click on the **Introduction** tab.
-   Copy the multi-line command on Step 3 and paste this command in your terminal and hit **Enter**. This will update your `PATH` environment variable.
-   Close your terminal and re-open it.
-   You should now be able to type `psql` to launch the program.

On Windows installation is easy if you are using [[WSL|WSL]]. If you are not using WSL, installation on Windows is [[Postgres Windows|a little more complicated]].

## Creating a database

After successful installation you can create a new database with the `createdb` command.

```bash
createdb geography
```

After creating a database, you can open `psql`, the Postgres command line, to start working with it.

```bash
psql -d geography
```

You can also write your commands in a file and use `psql` to run them.

```bash
psql -d geography -f setup.sql
```

## Creating a table

To create a table you use a `CREATE TABLE` statement, specifying the column names you would like to use as well as the [data types](https://www.postgresql.org/docs/14/datatype.html) they may contain.

```sql
CREATE TABLE cities (
    id SERIAL primary key,
    name VARCHAR(255) NOT NULL,
    state VARCHAR(255),
    country VARCHAR
);
```

The `SERIAL` type is really an integer but one that will increment with each row that is added, guaranteeing that each row has a unique primary key.

The `VARCHAR` is for text of a length that is not predetermined. The parenthetical number 255 in the example above specifies the maximum length to allow.

`NOT NULL` indicates that the name field is required.

It is possible to change a table after it has been created, but this can be problematic if there is already a lot of data in the table.

```sql
ALTER TABLE cities ADD COLUMN population INTEGER;
```

You can also remove columns.

```sql
ALTER TABLE cities DROP COLUMN state;
```

## Creating, reading, updating, and deleting data

To add rows to a table you use an `INSERT` statement, specifying the name of the table and the names of the columns you are inserting data into as well as the values for each column.

```sql
INSERT INTO cities (name, country, population) VALUES ('Berlin', 'Germany', 3610156);
INSERT INTO cities (name, country, population) VALUES ('Hamburg', 'Germany', 1774242);
INSERT INTO cities (name, country, population) VALUES ('Munch', 'Germany', 1450381);
INSERT INTO cities (name, country, population) VALUES ('Tokyo', 'Japan', 13617445);
INSERT INTO cities (name, country, population) VALUES ('Sydney', 'Australia', 4921000);
```

To update a row or rows, you use an `UPDATE` statement.

```sql
UPDATE cities SET name = 'Munich' WHERE name = 'Munch';
```

The `WHERE` clause performs a query to find the row or rows to update.

To delete a row or rows, you use `DELETE`.

```sql
DELETE FROM cities WHERE country <> 'Germany';
```

(The `<>` in the example above means 'not equal'.)

`SELECT` statements perform queries.

```sql
SELECT * FROM cities;

 id |  name   | country | population
----+---------+---------+------------
  1 | Berlin  | Germany |    3610156
  2 | Hamburg | Germany |    1774242
  3 | Munich  | Germany |    1450381
```

You can specify the fields you want to see in the result and have them appear with a different name that you specify with `AS`.

```sql
SELECT name AS town, population AS citizens FROM cities;

  town   | citizens
---------+----------
 Berlin  |  3610156
 Hamburg |  1774242
 Munich  |  1450381
```

You can use a `WHERE` clause to get a more specific set of results.

```sql
SELECT * FROM cities WHERE id < 2;

 id |  name  | country | population
----+--------+---------+------------
  1 | Berlin | Germany |    3610156
```

## Exercise

Create a table named `actors` and insert into it the following data:

<table>
<thead>
<tr>
<th>Name</th>
<th>Age</th>
<th>Number of Oscars</th>
</tr>
</thead>
<tbody><tr>
<td>Leonardo DiCaprio</td>
<td>41</td>
<td>1</td>
</tr>
<tr>
<td>Jennifer Lawrence</td>
<td>25</td>
<td>1</td>
</tr>
<tr>
<td>Samuel L. Jackson</td>
<td>67</td>
<td>0</td>
</tr>
<tr>
<td>Meryl Streep</td>
<td>66</td>
<td>3</td>
</tr>
<tr>
<td>John Cho</td>
<td>43</td>
<td>0</td>
</tr>
</tbody></table>

Write queries that answer the following questions:

-   Which actors have more than one oscar?
    
-   Which actors are older than 30 years old?

#### Added by **Sven** on November 8, 2022

# SQL

## Useful sources

-   [internal PostgreSQL commands](https://gist.github.com/Kartones/dd3ff5ec5ea238d4c546)
-   [general SQL statements](https://www.postgresqltutorial.com/wp-content/uploads/2018/03/PostgreSQL-Cheat-Sheet.pdf)
    
    ## Examples
    
    ### Create a new database
    
    #### **IMPORTANT!** execute in your ordinary shell **NOT** inside the postgres cli
    
    `createdb <database_name>`
    
    ```bash
    createdb geography
    ```