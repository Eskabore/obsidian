# List Views: Quick Look
## Learning Objectives

- Explain how to create a list view.
- Describe what you can do with a list view.


## What's in a List View?
Salesforce groups your data by object types, such as Contacts or Cases, which appear as navigational tabs. An object tab contains a data table and a toolbar of action buttons. We call this screen a list view, and it contains a ton of valuable information and tools that help you manage your business and interact with customers.
![[Pasted image 20220705171041.png]]
As you import data and create records, _rows_ appear on your list views.
We give you a few default list view options, like ==All items== and ==Recently Viewed items==, which you can scroll and search.

But the real power of list views comes with _customization_. You can create specialized list views to support your most common tasks, such as ==New Leads== or ==Escalated Cases==.
When you customize your own list views for different object tabs, you can make them **private** or **share** them with the other users in your org.

## Customize a List View
On any object tab, click the ![[Pasted image 20220705171337.png]] icon to open the List View Controls menu. 

 ==To create a list view:==
 **New** > Give the list view a name > Decide whether to make it available to other users or to keep it private.
> Once a **list view** is created, the menu gives me more options such as **Rename** and **Sharing Settings**.

![[Pasted image 20220705171735.png]]

==To customize which columns appear in my list view:==
--> **Select Fields to Display**
> Keep in mind that **sharing rules** apply to list views, so a user without access to specific records or fields won’t see those records or fields, even if the list view is **public**. 

==To narrow my list view:==
--> **Edit List Filters** or the ![[Pasted image 20220705172154.png |25 x 25]] icon, and add my criteria to the filter pane.
   ==> **Add Filter Logic** to enter complex relationships.

## Use List Views for Common Tasks
Each tab can support multiple list views, so you can create several list views to use for _different tasks_.
> If you expect to use the same view regularly, click the ![[Pasted image 20220705173039.png|25 x 25]] icon to set it as the default view on your tab. Pinning a list view affects your workspace only.

![[Pasted image 20220705173100.png]]

After you organize and filter your list view, you can take actions on records.
To **_edit_**, **_clone_**, or **_delete_** an individual record, click the ![[Pasted image 20220705173318.png|25 x 25]] **Show Actions**  menu on a row.

Some object tabs offer bulk actions on list views. For example, on the Contacts and Leads tabs, you can select multiple records and then click **Send List Email** to add individuals as recipients of a personalized email.

![[Pasted image 20220705173411.png]]

> **Note:** The default view shows up to 50 records. Scroll to see more. When selecting records for bulk actions, keep these details in mind.
>  - To apply a bulk action to every record in a list, including records that don't appear in the current view, click the bulk action button without selecting any records.
    - To apply a bulk action to all of the records on the current view, check every box by selecting the checkbox in the table header, and then click the bulk action button.
    - To apply a bulk action to specific records, use the checkboxes on specific rows, and then click the bulk action button.