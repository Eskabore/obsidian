### Permission Sets
**Permission Sets** are collections of settings and permissions. Profiles allow users to perform some tasks, but permission sets allow additional tasks (tasks not enabled by profiles). For example, you can add permissions to create and customize list views, activate contracts, or any number of other permissions. 

### Permissions Set Group
**Permission Set Groups** bundle permission sets together. Users assigned to a permission set group receive the combined permissions of all the permission sets in the group. Permission set groups correspond to the job functions of users.
Trailhead: [Create a Permission Set Group](https://trailhead.salesforce.com/content/learn/modules/permission-set-groups/create-a-permission-set-group)

TIP: 
- If you find that you must create a new permission set to include in your permission set group, consider how you can use it outside of the group, too. Look at other job functions to see if users need to perform some of the same tasks. You might want to include permission sets in other permission set groups. Use the flexibility of permission sets strategically by modeling your permission sets on the tasks that your users perform.
- If the job function for a permission set group changes, you can update the permission set group. That’s the great thing about permission set groups: they’re easy to adjust. For example, let’s say that you find out people who perform the sales processing job function must also have edit ability on the Opportunities object. Just add a new permission set to the permission set group or add a new permission to an existing permission set in the permission set group. 
- **AppExchange Tool**: [Permission Helper](https://appexchange.salesforce.com/appxListingDetail?listingId=a0N3A00000FeF99UAF) - by Salesforce Labs
  - Free  
  The Permission Helper contains tools to simplify your permissions processes:
  * Profile to Permission Set Converter
  * Permission Analyzer
  * Permission Report
  * Manage Permission Set Groups
 

### Profile
Profiles provide default settings for each user, such as default record type, IP range, and so on. Salesforce recommends using the **_Minimum Access - Salesforce_** profile as a best practice for assignment to users. _Each user has only one profile_.

### Formula Fields
Link to Obsidian [[Formula Fields|page]]

### Roll-Up Summary  Fields
**Roll-up summary fields** calculate values from a set of related records, such as those in a related list.
ou can perform different types of calculations with roll-up summary fields. You can count the number of detail records related to a master record, or calculate the sum, minimum value, or maximum value of a field in the detail records.
> Ex :
>   - A custom account field that calculates the total of all related pending opportunities.
>   - A custom order field that sums the unit prices of products that contain a description you specify.

You define a roll-up summary field on the object that is on the master side of a master-detail relationship. For example, you can create a roll-up summary field on the Account object, summarizing related opportunities:

![[887465109a8c39ed443cbaf62138e071_rollup-1.webp]]
There are a few different types of summaries you can use.
Type  |	Description
--- | ---
COUNT | Totals the number of related records.
SUM | Totals the values in the field you select in the Field to Aggregate option. Only number, currency, and percent fields are available.
MIN | Displays the lowest value of the field you select in the Field to Aggregate option for all directly related records. Only number, currency, percent, date, and date/time fields are available.
MAX | Displays the highest value of the field you select in the Field to Aggregate option for all directly related records. Only number, currency, percent, date, and date/time fields are available.


#### Creating the Summary Field

1. From Setup, open Object Manager and click Account.
2. On the left sidebar, click Fields & Relationships.
3. Click New.
4. Choose the Roll-Up Summary field type, and click Next.
5. For Field Label, enter Sum of Opportunities and click Next.
6. The Summarized Object is the detail object that you want to summarize. Choose Opportunities.
7. Choose the SUM summary type and choose Amount as the Field to Aggregate.
8. Click Next, Next, and Save.



### Master-Detail Relationships
**Master-detail relationships** closely link objects together so that the **_master record_** ==controls specific behaviors== of the **_detail_** and **_subdetail record_**.

### sObject
An **sObject** is an **_Apex data type_** that corresponds to a Salesforce object (**sObject**) in an org. sObjects are complex data types that hold multiple values in one variable. They hold a single record of data from a Salesforce object, such as an Account, a Contact, or an Opportunity. Remember from Apex Basics for Admins that variables are like containers. Most variables hold one piece of information. sObjects are containers that hold other containers. The containers within the sObject container may be of different data types, such as string, date, integer or Boolean. 
![[Pasted image 20220707044150.png]]

### Controller
A controller is basically a collection of code that defines your app’s behavior when “things happen,” whereby “things” we mean user input, timer and other events, data updates, and so on. If you look up “Model-View-Controller” on any number of developer sites, you’ll get various definitions. For our purposes, for Lightning Components, a controller is a resource in a component bundle that holds the action handlers for that component. And action handlers are just JavaScript functions with a particular function signature.

### Pardot
Lead (or demand) generation: The act of creating interest in your products or services through marketing efforts.

Visitor: An anonymous person who visits your website and is now tracked in Pardot. 

Conversion: Once a visitor gives you their contact information, such as an email address, by submitting a Pardot landing page or form, they are converted to a prospect.

Prospect: An anonymous visitor that has converted and is now identified. A record of the prospect will exist in Pardot, similar to a lead record in Sales Cloud or other CRMs.

Lead nurturing: Sending targeted messages at specific intervals based on a prospect's actions and whether or not they’ve met certain qualifying criteria. 

Lead qualification: You probably have thousands (or even hundreds of thousands) of people interacting with your organization. Your sales teams can’t contact each of them, so as marketers it’s your job to help send them the best prospects. This process of finding the gold needles in the haystack of prospects is called lead qualification. You decide the threshold for when a prospect is ready to be assigned to a salesperson for them to follow up.

### Level Of Effort (LOE)

**Level of effort (LOE) is a project management term that refers to a specific type of project activity called support activities.** Support activities do not yield deliverables, but rather fuel tasks that do. Therefore, the level of effort is how much work these tasks will take to complete.
This work can take many forms, such as ==_updating project documents, maintaining equipment, submitting expenses, etc==._
> The unifying characteristic of **this work is that it must be done regularly to support a greater task**.

**EX**:
- Managing Stakeholders
- Updating Reports
- Communicating with Customers
  #### Why Is Calculating the Level of Effort Important?
  Effort is a resource like anything else. When we think about resources, our minds go to tangible things like money and materials, but it is just as important to consider effort.
  As you can imagine, achieving some deliverables will require more work than others. This means they have a higher level of effort, but it doesn’t necessarily mean they need to be more difficult. In fact, when we know the LOE for deliverables, you can anticipate how much work tasks will require and be better prepared. Resource scheduling tools help with this process.
  #### When Should LOE Be Calculated?
  The level of effort should be calculated during the planning phase of a project when tasks are being created. Tasks with a higher level of effort require more work to be completed. Generally, this work takes place at regular intervals throughout the task or project, so it’s important to understand how much total effort it will require.
Establishing the level of effort during the planning phase helps spread workload evenly and allows for a more accurate schedule. If certain team members are assigned to too many high LOE tasks in their workflow, it may be time to redistribute tasks.
#### What Is Effort Estimation?
In order to know a task’s LOE, you must practice something called effort estimation. Effort estimation is the process through which we approximate how much time, energy or money deliverables will demand so that we can rank this on a scale.
Effort estimation is one the core components of project estimation, along with resource estimation and cost estimation. These estimations are the foundation of sound project planning. The more accurate your estimations are, the more accurate your overall project plan will be, and the fewer variances you will need to deal with.

### WSDL
To access the Lightning Platform Web service, you need a Web Service Description Language (WSDL) file.
The WSDL file defines the Web service that is available to you. Your development platform uses this WSDL to generate an API to access the Lightning Platform Web service it defines. You can either obtain the WSDL file from your organization’s Salesforce administrator or you can generate it yourself if you have access to the WSDL download page in the Salesforce user interface. You can navigate to the most recent WSDL for your organization from Setup by entering API in the Quick Find box, then selecting API.

### Change Sets
Use change sets to send customizations from one Salesforce org to another. For example, you can create and test a new object in a sandbox org, then send it to your production org using a change set. Change sets can contain only modifications you can make through the Setup menu. For example, you can’t use a change set to upload a list of contact records. Change sets contain information about the org. They don’t contain data, such as records.

 User Permissions Needed | \
:------|------:
To edit deployment connections: | Deploy Change Sets AND Modify Metadata Through Metadata API Functions
To use outbound change sets: | Create and Upload Change Sets
To use inbound change sets: | Deploy Change Sets AND Modify Metadata Through Metadata API Functions

- Unlike global quick actions, object-specific quick actions support Lightning web components. To create a Lightning web component quick action, the 'Lightning Web Component' action type is selected.
- The 'Lightning Component' option is selected when creating a quick action using an Aura component. The 'Flow' option is selected in order to launch a flow using a quick action. A "Custom Component" is not a valid Action Type option.
![[Pasted image 20220810184538.png|1000]]

- The 'Default Locale' setting determines the format of dates, times, numbers, names, addresses, and phone numbers in Salesforce. The default currency for single currency orgs is set using the 'Currency Locale' field, a separate field to the 'Default Locale'.
![[Pasted image 20220810184859.png]]
![[Pasted image 20220810184914.png|1000]]

- Personal data is **==any data regarding a person that can be used to identify an individual person==**, including _location data_ and _online identifiers_. 
  ==Sensitive data== is a <u>subcategory of personal data</u> and _==encompasses race, ethnic origin, genetic data, religious and political views, sexual orientation==_, and more. 
  Salesforce has several objects that can contain personal data, which include but are not limited to: **Leads, Contacts, Accounts, Opportunities, and Custom Objects**. Additional protection needs to be provided to sensitive data as unauthorized access could lead to damage, harm and loss. 

- A list view can be shared with a public group of users by selecting 'Sharing Settings' from the 'List View Controls' menu in Lightning Experience. It can be used to quickly share a particular list view with users. Exporting a list view or creating a report is not an efficient solution for this use case. Also, a sharing button is not used to share a list view.

- A Salesforce Administrator could modify the access to a tab for a profile but not for an individual user. There is no auto-hide feature for rarely used tabs. Each app can have a different set of tabs. Users can be assigned to different apps. In Lightning Experience, the App Launcher can be utilized to switch between apps.
  > Users can add, remove, rename, and reorder tabs that are displayed by default by personalizing the navigation bar of an app in Lightning Experience. Default tabs that are specified by the Salesforce Administrator cannot be removed or renamed.

- If both inline editing and enhanced lists are enabled, records can be directly edited in a list.
    > If the user has the '**Mass Edits from Lists**' permission, the value for a common field in up to 200 selected records can be updated.  If 'Enhanced Profile User Interface' is enabled, then this setting can be found under 'System Permissions'. The permission matters in the Salesforce Classic UI, but it has no impact in Lightning Experience. Whether or not the permission is available for a user in Lightning Experience, the user can edit multiple records at a time in a list view, provided they all refer to a single record type.
![[Pasted image 20220810192201.png|1000]]

- A lookup filter limits search results, restricting the valid values and lookup dialog results for lookup, master-detail, and hierarchical relationship fields. Use lookup filters to improve data quality by enforcing data consistency.



- List Email????
- Salesforce Baseline Standard


## [[Focus on Force - Workflow and Process Automation (Objectives 2,3)]]