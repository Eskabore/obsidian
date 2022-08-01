# Start Console


### Edit language:

**Change your personal language in Salesforce**

1. Click:
  - In Salesforce Classic: Setup | Personal Setup | My Personal Information | Edit
  - In Salesforce Classic (Improved Setup): Your name | My Settings | Personal | Language & Time Zone
  - In Lightning Experience: Your Avatar | Settings | Language & Time Zone
2. Select your preferred language from the Language dropdown.
3. You may also want to modify your Locale setting to control the formatting of numbers, dates, and phone numbers.
4. Click Save.

### Chrome / Mozilla Firefox Error:  We can't display this page because your browser block
#### ==Description:==
After a recent update to the DuckDuckGo Privacy Essentials Chrome browser extension, Lightning Experience users are reporting encountering the following errors when navigating various pages and records in their Salesforce org:
- We can't display this page because your browser blocks cross-domain cookies
- We can't display this page because your browser blocks cross-domain cookies, but you can view this page in Salesforce Classic. Click here to open this page in Salesforce Classic.

#### ==Resolution:==
In order to resolve these errors users will either need to disable the extension, or turn off the Site Privacy Protection setting in the extension for their Salesforce org URL.

### Users
- Deactivating a user, also deactivate his license and makes it available to use for another user.

### Custom Fields
> A **custom field** name and label **==must be unique for that object to avoid merge and display issues==**. For example, if you create a field label called Email and a standard field labeled Email already exists, the merge field may be unable to distinguish between them. Adding a character or a qualifier to the custom field name makes it unique. For example, Email2 or Email Leads.
### Secure User's Identity:
Trailhead - [page](https://trailhead.salesforce.com/content/learn/modules/identity_login/identity_login_2fa?trailmix_creator_id=mpetroro&trailmix_slug=configuration-and-setup)

**Step 1:** Verify that the session security level is set for **==multi-factor authentication==**
First, let’s make sure that the right security level is associated with the multi-factor authentication login method.  In most production orgs, this setting is already in place. But if it’s not, it’s important to do this step before you set up an MFA requirement for any admin users. **_Otherwise, you could prevent yourself or other admins from logging in_**.
1. From Setup, enter Session Settings in the Quick Find box, then select Session Settings.
2. Under Session Security Levels, make sure that Multi-Factor Authentication is in the High Assurance category.

**Step 2:** Create a user
1. From Setup, enter Users in the Quick Find box, then select Users.
2. Click New User.
3. For the first name and last name, enter Sia and Thripio, respectively.
4. Enter your email address in the Email field. This setting is to get user notifications for Sia.
5. Create a username for Sia and enter it in the Username field. It must be in email address format, but it doesn’t have to be a working email address. Make sure the email address is unique in your Trailhead Playground. You’ll enter this username to log in as Sia later on, so we suggest making it short and easy to remember. Need ideas? Try using Sia's first initial, last name, and the current date, like this: SThripio.12202020@trailhead.com.
6. Edit or accept the nickname value.
7. For User License, select Salesforce Platform.
8. For Profile, select Standard Platform User. While you’re here, deselect the options to receive Salesforce CRM content alerts. No need to clutter your inbox with unnecessary email from Salesforce.
9. Make sure that Generate new password and notify user immediately is selected—it’s way down at the bottom of the page. Salesforce emails you about Sia’s new user because you entered your email address in the Email field.
10. Click Save. Salesforce emails you a link to verify the user and set Sia’s password.
    Note: If you get an error that the username exists, create a user with a different name.
11. Log in as Sia, and reset the password.

**Step 3:** Create a permission set for multi-factor authentication

Enable MFA for users by assigning the Multi-Factor Authentication for User Interface Logins user permission. You can do this step by editing profiles or by creating a permission set that you assign to specific users.

A permission set is a collection of settings and permissions that gives users access to various Salesforce features. Let’s create a permission set with the MFA permission.

1. If you’re logged in as Sia, log out. Log in again as the system administrator of your Trailhead Playground.
2. From Setup, enter Permission in the Quick Find box, then select Permission Sets.
3. Click New.
4. Label the permission set “MFA Authorization for User Logins”.
5. Click Save.
6. Under System, click System Permissions.
7. Click Edit.
8. Select Multi-Factor Authentication for User Interface Logins.
9. Click Save, then click Save again to confirm permission changes.

**Step 4:** Assign the permission set to Sia’s user

For now, we’ll assign the permission set just to Sia. Later, when you’re ready to roll out MFA more broadly, you can assign the same permission set to other users.

If you’re not on the detail page for your new permission set, navigate back there.

1. On the detail page of the new permission set, click Manage Assignments.
2. Click Add Assignments. On the list of users, select the checkbox next to Sia’s user. (If you wanted, you could assign up to 1,000 users at a time.)
3. Click Assign.


### How can I learn and develop my problem-solving skills?

There are five different areas of problem solving to develop in order to be the best Salesforce Admin:

- **Research:** Focus on really understanding the technical requirements of your users, the system configuration, and the process.
- **Analysis:** Take time to understand the day-to-day issues of your users, and always be ready to work with your team to analyze the problem and offer spontaneous solutions.
- **Decision making:** Be proactive in giving possible solutions to the problem. Don’t forget that sometimes the solutions are simpler than we initially think.
- **Communication:** Aim to be thoughtful and work as a team, always keeping users informed of any problem that you resolve—and be happy to help.
- **Creativity:** Stay positive as you resolve problems and ask many questions. These questions may lead you down paths to solutions that you may not have thought of at first.

#### Problem-Solving skills
- Problem solving **_involves_** ==**identifying an issue,**== ==**determining why it’s happening**==, ==**coming up with possible solutions**==, ==**implementing the best one**==, and ==**evaluating its effectiveness**==.
- Since this skill is important to most employers, be sure to list it front and center on your resume and cover letter, and come prepared to talk about it in interviews.


### Identify and Document a Business Problem
- Understand how to solve a business problem.
- Create user stories.
- Create supporting documentation for your solution.

#### How to Solve a Business Problem
For each company you target, follow these steps:
- Do some research on their website to understand their business.
- Put yourself in the shoes of their customers. Evaluate their web experience and imagine how an interaction with that company might go. What problems might customers face? Complete the [Innovation Customer Discovery](https://trailhead.salesforce.com/content/learn/modules/innovation_customer_discovery?trail_id=innovation_salesforce_way) module to learn more.
- Next, put yourself in the shoes of a decision-maker at that company. Imagine the types of decisions they make and the data they need to make informed decisions.
- Examine their products and services. Consider their manufacturing process or support process. How could you make it more efficient?

#### Document the Business Case
To demonstrate that you have what it takes to solve real-world business problems, you must understand how to write user stories, a business case, and a project plan to get buy-in from executive, finance, and development stakeholders.

**Typical Project Documents**
Document | Description
--- | ---
User Stories | Document the user roles impacted by the problem and explain how the solution benefits users.
Business Case | To give stakeholders the information they need to approve and fund the project, describe the problem, propose a solution (with timeline), and provide a cost-benefit analysis.
Project Plan |  Define milestones, tasks, work items, and deliverables.

##### Create User Stories
User stories are often expressed in a simple sentence, structured like this:
“As a [role], I want (or need) to [job task], so that I can [benefit].”

So for the recruiter app, user stories could be:
- As an applicant, I want to hear quickly whether I’ve been accepted or rejected, so that I can prepare for the interview or move on.
- As a recruiter, I want to quickly make decisions about an applicant and select candidates to move forward, so that I can focus on the best candidates for the role.
> From these two statements, it’s clear that some automation is needed. Both users want to spend their time more effectively without worrying about manual processes or waiting for a response.

==Researching the companies that might benefit from your solution, and exploring some typical roles within the company, can help you make your solution relatable.==

**Break the user stories into tasks.**
As you think about who you're helping and how you’re solving a business problem, it’s helpful to break your user story into specific tasks. To decline an applicant, some tasks could be:
1. Create a custom field for Decline or Continue on an applicant record.
2. Create a mail template for Decline.
3. Create an automatic workflow to send an email when Decline is selected.

**Test that your solution meets the user stories’ goals.**
> A vital part of creating use cases is documenting test cases. A tester uses test cases to validate that the solution works as intended and to identify issues to be addressed.

Let’s keep thinking about the recruiting app. The hiring manager wants an easy way to tag applicants that she wants to interview or reject. A test case to support that goal could be:
1. Select an applicant and choose Decline.
2. Check that an automatic email is sent.
3. Select an applicant and choose Continue.
4. Check that the Decline email is not sent.
==**_Be sure that you define a test case for each user story._**==

After you define your user stories, you can more easily:
==> describe the problem you’re solving, 
==> how you’ll solve it,
==> for whom.
These are key components of a business case.

##### Create a Business Case
A business case can be a document or presentation slides. It portrays the benefits of the project and explains why stakeholders should invest in the project. A business case focuses on the product you are planning to deliver and should answer these questions.

Who | What | How | When | Why
--- | --- | --- | --- | ---
Who will the solution impact? | What is the goal of the project? | How will the solution impact the business? | When will the project take place? | Why is the project needed?

The key is not to go overboard on the technology or your knowledge of the product. Stakeholders want to focus on the overall purpose of the project and what return on investment the project will provide. What is the benefit to the customer? How will business improve? To learn more, review the Build Your Business Case and Roadmap unit in the [Innovation Solution](https://trailhead.salesforce.com/content/learn/modules/innovation_solution) module.

A business case should contain these sections:

1. Executive Summary (What? Why? How?)
State what the project is, why it’s needed, and how it will impact the business.
2. Current Process
  - Show the current process flow in a diagram. Be creative here. Imagine a manual process with manual steps or highlight inefficient processes.
3. Proposed New Process
  - Show the proposed process flow in a diagram. Describe in detail how the new process will improve efficiency and what will be automated.
4. Recommendations (Why? Who?)
  - Explain why you are proposing this product and describe its benefits. Remember to keep it nontechnical and to highlight who will be impacted by the change.
5. Timeline (When?)
- Estimate the timeline at a high level, either written out or in a Gantt chart. This section details when the work will take place. This doesn’t take the place of your project plan, but gives an overview of the timeline.
6. Financial Impact
- Outline the budget for this project. Provide a breakdown of costs by department, and estimate how much money and time the new process will save.

On the job, you would also **create a project plan** to **_guide the project_**, **_manage resources_**, and **_monitor constraints_**.

 [Project Management Plan Lite](https://trailhead.salesforce.com/content/learn/modules/project-management-plan-lite)


### [[Approval Process|Build a Discount Approval Process]]
### [[Update Reminders]]
### [[Junction Objects]]
### [[Self-Relationship]]

## Build Platform Apps in Lightning Experience
#### !! [Create Custom Recruiting Fields](https://trailhead.salesforce.com/content/learn/projects/build-a-data-model-for-a-recruiting-app/create-custom-recruiting-fields)
### Customize the User Interface for a Recruiting App
##### [Create tabs, quick actions, record types, and customized page layouts on an existing app for a more streamlined user experience](https://trailhead.salesforce.com/de/content/learn/projects/customize-the-ui-for-a-recruiting-app/create-tab-review-object)
##### [[Object-specific Quick Action|Create an Object-Specific Quick Action]]
#### Create a Custom Candidate Record Page
##### Add a Lightning Component
##### Create a Custom Candidate Compact Layout
##### Create Record Types on the Position Object
#### Customize the Position Page Layout
##### Create Fields on the Position Object
##### Work with Page Layouts
NB:  
- Difficulty met: Field usage should not be activated with no specified data, Otherwise, picklist could become unselctable.
#### Enable Chatter on the Review Object
##### Enable Chatter Feed Tracking
### Improve Data Quality for a recruiting App
#### [[Create Cross-Object Formulas]]
- Set formulas and validation rules in an existing Recruiting app so users keep their data consistent.
- Create roll-up summary fields to calculate the information users enter in the app.
#### [[Validation Rules|Create Validation Rules]]
#####  Create Custom Objects
Ling’s mismatched state and zip code issue requires a little work before setting up the validation rule.
First, you create custom objects for zip code and state, and add fields to each of them.
##### Also:
- **Append tab to users’ existing personal customizations**
- Custom Tabs
#### Create Formula and Roll-Up Summary Fields
- A rollup summary is kind of the reverse of a cross-object formula.
> Instead of getting data from a parent (or grandparent) object, it gets data from records on a child object and stores that data—results are recalculated and stored whenever any record on the detail record is saved.

Formula fields take input from other fields, values, functions, and operators to produce results. They can reference standard fields, custom fields, and other formula fields. Formula results are not stored—the formula expression is stored as metadata. But the result of that expression is calculated on the fly whenever a user views a record or runs a report containing the formula field.
##### Create a Formula
##### !!Create a formula field to show a ==green, yellow, or red light== on a job application record, depending on the Average Review Score.!!
- Review indicator
### Keep Data Secure in a Recruiting App
#### Create Custom Profiles
- Update field-level security and create permission sets in an HR recruiting app so that sensitive data can be viewed only by those who need it.
- Further restrict data access in the app by changing sharing settings.
- The first step is creating an HR Recruiter profile and setting up the required data access according to Ling’s specifications.
- **It’s best practice to not assign standard profiles to users. Instead, even if you’re not making any changes, clone the Standard Profiles and assign the clones to users**.
-> ==That way, if a user needs permissions or access to a custom object in the future, the cloned profiles can be updated easily==.
#### Restrict Data Access with Field-Level Security, Permission Sets, and Sharing Settings
##### Create Permission Sets
#### Modify Field-Level Security
All standard objects have a predefined set of fields to capture common business information. While they can’t be deleted, field-level security can make them invisible. Field-level security controls which fields a profile or permission set can view and edit, overrides any less-restrictive field access, and controls settings in page layouts and search layouts.

##### Create Sharing Settings
In order to access a record, users must have the appropriate object permission on their profile or a permission set. By changing sharing settings from the organization-wide defaults, you set the default level of access users have to records they do not own in each object. 

### Splash Page
### [[Chatter]]