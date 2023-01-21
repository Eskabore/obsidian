#salesforce #organizer #checklist #plan 

## To Effectively Solve a Problem
--> First, I **DEFINE** the problem.
--> Then, I use **DISCIPLINE**to truly understand its complexity.
--> Next, I **DEDICATE** time to find possible solutions.
--> And I **TEST** the solution.


## What to monitor:

- Daily
- Weekly
- Monthly

## Daily
### API Requests
Each Salesforce org comes with a rolling API request limit allowed over a 24-hour period. Monitoring your API levels ensures you have time to react if thresholds are in danger of being reached. Hitting this limit will force a “cooling off period” that will stop Salesforce from communicating with all installed integrations until the end of the 24-hour period. 

### Managed Packages
Checking that each managed package is still connected to Salesforce is a great way to catch a small problem before it becomes a larger issue. A number of factors can break the connection between Salesforce and a managed package (e.g. resetting a password) and noticing this early can get ahead of a potentially larger problem down the road. As an example, marketing automatic failing to sync with Salesforce causing fresh leads to go stale.

### Metadata Changes
Checking that each managed package is still connected to Salesforce is a great way to catch a small problem before it becomes a larger issue. A number of factors can break the connection between Salesforce and a managed package (e.g. resetting a password) and noticing this early can get ahead of a potentially larger problem down the road. As an example, marketing automatic failing to sync with Salesforce causing fresh leads to go stale.

### Metadata Changes
Metadata changes should be monitored daily to ensure no malicious, unexpected, or flawed code has been pushed to production. Scan your Audit Log to monitor these changes and stay atop everything that is happening within your org; especially changes occurring by other team members siloed off in different departments/or locations. 

## Weekly

### User Permissions
With a wealth of personal and corporate data available inside of Salesforce, a regular scan of assigned user permissions will ensure users can only see what they are supposed to. This manual process can be extremely time-consuming depending on the number of Salesforce users your organization has.

#### Narrow Down Admin Access
Ask myself if a user can:
- Manage other users
- Delete records
- Reset User Passwords/unlock users
- Login as any user
- Create and assign new **permission sets** ?

#### 2. MFA and SSO

Enforce Multi-Factor Authentication (**MFA**) not just for every User of Salesforce, but for **every user of every system that connects to** Salesforce.

#### 3. Prevent Users from Exporting Data
##### Restrict Employees From Exporting Salesforce Data
An important part of securing your Salesforce org is *making sure my Sales Cloud data is protected*.

##### Exporting Salesforce Data 
==There is no way to completely block Users from exporting data from Salesforce without **_blocking their access to that data_**==.
The best practice is to add friction to employees attempting to export data. The more onerous the process, the more I minimize the chances a User will steal data.

###### Add friction to stop Users from exporting data by disabling:
1) Printable View
2) Report Export Permission

**1/ How to Disable Print Screen**
If “Print Screen” is enabled, Users can print a List View of a **==1,000 records at a time==**.
This is a quick way to export data from Salesforce. Also, there is no record of this type of activity in the
**[[Audit Trail]]**, so an Admin can’t flag that a User has done this.
> By disabling “Print Screen”, Users will be forced to screenshot each individual screen one at a time if trying to export data. It’s not a perfect solution, but it does add a considerable amount of effort on the User’s end.
> ==To disable "Print Screen": **SETUP** > **User Interface**, Uncheck **_“Enable Printable list views"_**==

**2/ How to Disable Export Report**
A very powerful Salesforce feature is the ability to *export reports, as a CSV*, directly from your org. While this feature can be tremendously valuable, it can also be dangerous if the wrong Users have access to it.

> For a more secure instance, **==the Admin(s) should configure who can export data as a Permission Set==**, **not** on the **Profile level**. As an Admin, *it is important to know exactly which Users have this permission available to them so it can be quickly removed, if necessary*.
> ==To disable "Export Reports": **SETUP** > **General User Permissions**, Uncheck **_"Export Reports"_**==
> **NB:** This cannot be changed under *Standard User Profile*. The Admin has to clone the Standards User and edit that custom profile.

### Data Exports
When data exports occur in Salesforce, you should know about it to ensure the action was taken from someone authorized to extract the data. Scanning your Audit Trail through the Data Export tool will ensure that exports didn’t occur that you were not aware of.

### Newly Installed Apps
With the rise of OAuth, it is easier than ever for employees to sync an application with Salesforce. Monitoring the platforms that have access to Salesforce, especially those enabled by end users, ensures only the ones that should have access to Salesforce do.

## Monthly
### User license limits
Monitoring available Salesforce licenses can be a critical monthly check for companies that are growing rapidly and/or who have a lengthy procurement process. Being mindful of the available licenses allows your organization to determine when the process of purchasing more licenses should begin to avoid new hires starting without having Salesforce licenses available to assign them.

### Data & File storage limits
Similar to API calls, each Salesforce org has Data Storage and File Storage limits. Monitoring these levels allows your organization to take proactive steps, such as deleting or archiving older files no longer needed, to stay within storage limits.

### Outstanding critical updates
Understand outstanding critical updates ahead of time so your organization can properly plan to have these updates made before an urgent deployment comes up.