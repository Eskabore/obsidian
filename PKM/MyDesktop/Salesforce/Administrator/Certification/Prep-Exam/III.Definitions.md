#### Permission Sets
**Permission Sets** are collections of settings and permissions. Profiles allow users to perform some tasks, but permission sets allow additional tasks (tasks not enabled by profiles). For example, you can add permissions to create and customize list views, activate contracts, or any number of other permissions. 

#### Permissions Set Group
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
 

#### Profile
Profiles provide default settings for each user, such as default record type, IP range, and so on. Salesforce recommends using the **_Minimum Access - Salesforce_** profile as a best practice for assignment to users. _Each user has only one profile_. 