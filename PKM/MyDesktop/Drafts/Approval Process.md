# Project

Trailhead [page](https://trailhead.salesforce.com/en/content/learn/projects/build-a-discount-approval-process/prepare-your-org)

## Definition
An approval process is an automated process implemented to approve records in Salesforce. It specifies the steps necessary for approval, and allows a step to apply to all records or just records that have certain attributes.
   An automated process is also specifies who does the approving at each step, and the actions to take when a record is approved, rejected, or recalled.

### Introduction
For this project, you create an automated approval process for AW Computing’s new VP of North American Sales, Allison Wheeler. She’s requested an automated system for processing discount requests from her reps using these parameters:
- If a discount is requested for 15% or less, it’s automatically approved.
- If a discount is requested for more than 15%, it must be approved by a manager in the sales department—for U.S. reps, that's Courtney Brown.
- If a discount is requested for more than 40%, it must also be approved by Allison.

## Add a New User
> Prior to setting up process automation, first set up _Allison Wheeler_ with a user record so you can assign tasks to her later.

1. From Setup, enter **Users** in the Quick Find box, then select **Users**.

![[Pasted image 20220706130914.png]]

2. Click **New User**. Complete the new user record with these details

**Field** | **Value**
--- | ---
First Name | Allison
Last Name | Wheeler
Alias | (this field auto0populates)
Email | (fill in your own email address)
Username | Your email auto-populates to this field. Replace it with a new one
Nickname | awheel
Title | Vice President North American Sales
Company | AW Computing
Department | Sales
User License | Salesforce Platform
Role | VP, North American Sales

3. Uncheck **Generate new password and notify user immediately**.
4. Click **Save**.

## Create a Role
> Allison is adding a Sales Manager who will serve as the official discount approver.
--> add that role to the hierarch, reporting to her.
1. From Setup, enter **Roles** in the Quick Find box, then click **Roles**.
2. Click **Set Up Roles**.
3. Click **Expand All**.
4. Below VP, North American Sales, click **Add Role**, and then complete the new role details:
**Field** | **Value**
--- | ---
Label | Manager
Role Name | \[this field auto-completes]
Role Name as displayed on reports | Manager
5. Click **Save**.
> **_Allison_** has hired **_Courtney Brown_** to ==fill the manager role==. Add Courtney as a user, with the newly created role of manager, so you can assign tasks to her later.

1. From Setup, enter **Users** in the Quick Find box, then select **Users**.
2. Click** New User**. Complete the new user record with these details:
**Field** | **Value**
--- | ---
First Name | Courtney
Last Name | Brown
Alias | \[this field auto-populates]
Email | \[fill in your own email address]
Username | Your email auto-populates to this field. Replace it with a new one
Nickname | cbrow
Title | Manager
Company | AW Computing
Department | Sales
User License | Salesforce Platform
Role | Manager

3. Uncheck **Generate new password and notify user immediately**.
4. Click **Save**.

> Make Courtney my Manger, since I'm reporting to her.
1. From Setup, enter User in the Quick Find box, then select **Users**.
2. Click **Edit** next to your name.
3. Under **Approver Settings**, click the lookup icon ![[Pasted image 20220706133636.png]] to the **Manager** field and search for **Courtney Brown**, then click on her name.
4. Click **Save**.

## Add Custom Fields
> You can add custom fields for each of the tabs and objects your organization uses, **with a limit of 800 fields**.
> ==A custom field name and label must be unique for that object to avoid merge and display issues. For example, if you create a field label called Email and a standard field labeled Email already exists, the merge field may be unable to distinguish between them. Adding a character or a qualifier to the custom field name makes it unique. For example, Email2 or Email Leads.==

I. Create the Discount Percentage field:
  1. From Setup, click the Object Manager tab.
  2. Click Opportunity, then click Fields & Relationships.
  3. At the top of the Fields & Relationships section, click New.
  4. Select the Number radio button, and click Next.
  5. Complete the new field details:
  **Field** | **Value**
  --- | ---
  Field Label | Discount Percentage
Length | 2
Decimal Places | 2
Field Name | \[this field auto-populates]

6. Click Next, then complete Step 3.
In the Read-Only column header, select the checkbox.
In the Read-Only column, deselect the Standard User and System Administrator checkboxes.
7. Click Next, then click Save & New.

> While still in the Fields & Relationships page for Opportunity, create an Approval Status field:

  1. Select the Picklist radio button, and click Next.
  2. Complete the new field details in Step 2

Field	Value
Field Label
Approval Status
Values
Select: Enter values, with each value separated by a new line.