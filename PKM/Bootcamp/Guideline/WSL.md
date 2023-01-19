---
alias: postgres_wsl
tags: sql, postgres, bash
---

Open Bash and enter the following commands:

1.  #### `sudo apt-get update`
    
    This command updates your packages list.
2.  #### `sudo apt install postgresql`
    
    This command installs Postgres.
3.  #### `sudo service postgresql start`
    
    This command starts Postgres. Remember it since you will have to enter it again (for example, after you restart your computer).
4.  #### `sudo su postgres`
    
    This command logs you in as the user named postgres which was created during installation.
5.  #### `psql`
    
    This command runs the Postgres command line interface. If you receive an error because there is no database named postgres, type `createdb postgres` and try again.
6.  #### `\password`
    
    Enter "postgres" for the new password and then confirm.
7.  #### `\q`
    
    This command quits the Postgres command line interface.
8.  #### `createuser -s funkychicken`
    
    Replace "funkychicken" with your own Ubuntu username. The effect of this command will be to create a Postgres user with the same name as you.
9.  #### `exit`
    
    This command makes you stop being the user named postgres. You will go back to being yourself but now there is a Postgres user with your username.
10.  #### `createdb funkychicken`
    
    Replace "funkychicken" with your own Ubuntu username. This creates a database with the same name as you. After you do this, you should be able to type `psql` and launch the command-line interface for the database with the same name as you.