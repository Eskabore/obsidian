# How to Deploy your App with Render

1.  Before you start, make sure you know which repository you want to deploy.
2.  If this is a repository that belongs to **Spiced**, you will need to **fork** it. This gives you your own copy of the repository, which you can use to deploy.

## Create an account on Render.

**Step 1:** go to Sign in
![[Pasted image 20230120002611.png]]


**Step 2:** Sign in using your GitHub account
![[Pasted image 20230120002641.png]]


**Step 3:** Enter you GitHub username and password
![[Pasted image 20230120002653.png]]


**Step 4:** Click “Authorise Render”
![[Pasted image 20230120002709.png]]


**Step 5:** Enter you email to complete this sign-up
![[Pasted image 20230120214131.png]]


**Step 6:** Confirm your email
![[Pasted image 20230120214145.png]]


You must go to your email account and confirm the email you just received from Render. If you haven’t received it, check your spam folder and wait a few moments

**You** n**ow have a Render account** 🥳

When you re-enter your Render account, you should see your **dashboard** page. It will look like this:
![[Pasted image 20230120214203.png]]


## Select a project to deploy.

**Step 1:** Click “New Web Service”
![[Pasted image 20230120214229.png]]


**Step 2:** Choose one of your repositories to use for the new Web Service. If you haven’t yet configured your GitHub account inside Render, click on ‘Configure account’.
![[Pasted image 20230120214249.png]]


**Step 3:** Install Render: click on your GitHub account from the list (in case you might see other GitHub organisations you are a member of)
![[Pasted image 20230120214303.png]]


**Step 4:** Choose whether to give Render access to all your repositories, or just the repositories you select yourself
![[Pasted image 20230120214322.png]]


**Step 5:** Select the repository to deploy. For our example, we’ll choose the Petition repository
![[Pasted image 20230120214334.png]]


## Deployment Configuration

**Step 1:** **Name:** Type a name for your new web service. Since Render apps are all available globally, you will have to come up with a name that’s unique! **Branch:** be sure to choose your own branch! Don’t use ‘master’ or ‘main’ if your code is inside a branch with your own name
![[Pasted image 20230120214345.png]]


**Step 2:** Build Command: change to “npm install” or “npm i”

-   Be sure you have selected the **Free** plan! Otherwise you will have to enter payment details with a credit card
 ![[Pasted image 20230120214359.png]]

**Step 3:** Scroll to the end of the page, and click ‘Create Web Service’
![[Pasted image 20230120214422.png]]


**You’re done!** You will be redirected to a dashboard page for your newly created web service. You will see that Render has begun to **build** it. This may take a few minutes, but you don’t need to wait for it to finish to go on to the next steps
![[Pasted image 20230120214439.png]]


Now let’s configure the credentials.

## Credentials Configuration.

**Step 1:** Click “Environment”
![[Pasted image 20230120214459.png]]


**Step 2:** Click “Add Environment Variable”
![[Pasted image 20230120214509.png]]


**Step 3:** Add your environment variables here. Copy them from your `.env` file or your `secrets.json` file: the names under “Key” must be **exactly** as you have them in your application’s code!

To add another environment variable, click “Add Environment Variable”. Repeat as needed.

**NB**: you should **not** add your `DATABASE_URL` environment variable at this point! We will do this a little differently — read on to find out how

![[Pasted image 20230120214528.png]]
**Step 4:** Click “Save Changes”

## Create a Database for your Web Service

**Step 1:** Click “New”
![[Pasted image 20230120214602.png]]


**Step 2:** Select PostgreSQL
![[Pasted image 20230120214620.png]]


**Step 3:** Name: Type a name for your database. It should be similar to the name of your web service, to help you remember which web service it is for. **Region:** Change it to Europe -- if you are located in Europe, this should make your pages load faster
![[Pasted image 20230120214653.png]]


**Step 4:** Scroll down and click “Create Database”. Remember that as per Render's terms, your free database will expire in 90 days...
![[Pasted image 20230120214710.png]]


Your Database has been created!

Now we want to:

1.  Link your database to your Web Service
2.  Create the tables in your database

### Link your Database to your Web Service.

**Step 1:** Copy the **Internal Database URL** from your database’s info page
![[Pasted image 20230120214729.png]]


**Step 2:** Go to your Dashboard and select your Web Service ![Image description](5.1-DB ConnectionWebService.png)

**Step 3:** Click “Environment” and then “Add Environment Variables”
![[Pasted image 20230120214829.png]]


**Step 4:** Add a new environment variable of the database’s **internal URL**, which you just copied a few moments ago. The “Key” must be exactly as you have used it in your code: `DATABASE_URL`. When you’re done, click “Save Changes”.
![[Pasted image 20230120215323.png]]


### Create the Tables in your Database.

**Step 1:** Go back to your database’s dashboard page. To do this, click ‘Dashboard’, and then your database
![[Pasted image 20230120215337.png]]


**Step 2:** Copy the link “PSQL Command” under External Connection ![Image description](6.1-DBExternalConnection-create tables.png)

**Step 3:** Open a your terminal on your computer. Paste the link you just copied, and press Enter. You should find yourself in a `psql` prompt, ready to interact with your Render database.
![[Pasted image 20230120215356.png]]


**Step 4:** From your app’s code, copy the SQL which creates your database tables and paste it here. Then press Enter.

To be sure that the tables were successfully created, type the command `\dt`. All your tables should be displayed.
![[Pasted image 20230120215417.png]]


# Your Website is now Deployed! 🎊

### One more step 🚶🏽‍♂️ - we need to **restart** the web service, since it probably crashed on the first deployment, as the database wasn’t present.