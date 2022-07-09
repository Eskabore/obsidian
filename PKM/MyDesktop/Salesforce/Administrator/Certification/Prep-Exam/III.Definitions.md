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
