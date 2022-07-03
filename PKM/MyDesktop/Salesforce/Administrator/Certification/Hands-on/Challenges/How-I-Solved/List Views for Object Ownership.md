#salesforce #admin #challenge #listViews

# How I Solved This: List Views for Object Ownership
Link to [webpage](https://admin.salesforce.com/blog/2020/how-i-solved-this-list-views-for-object-ownership)

### Key Business Problem:

I want to create a List View to show a user only the Custom Object records for which they are responsible, but they may not be the owner of the record. The “My Record” functionality is based solely on ownership of the record, so how can we create useful List Views for each user without the “My…” capability?

### Background:
For Southeast Dreamin’ (SED), we manage all of our session submissions and logistics in a Salesforce org. When someone submits a session, the form creates a Custom Object Session__c record and one or more Speaker__c records. Sessions can have one or more speakers attached to them.

![[HIST1.png]]

The Session Manager (Session__c.Session_Manager__c, a lookup to the User object) is responsible for getting the headshots and bios for the website as well as being a point of contact for any questions or concerns a speaker might have. There are three Session Managers for SED this year. This means lots of list views to help us keep track of who has submitted their stuff and who we need to follow up with. 

Sure, we could each have our own list view with a filter by Session_Manager__c = me, but that’s duplicative and silly. You might be asking, “Why don’t we just use Session__c.Owner?” Well, not to get too far into the weeds, but we’re not using Session Owner for sharing reasons, among others.

### How I Solved It

I created a custom formula field that evaluated to “true” if the Session Manager was the same as the current user, and then built List Views from that field.

Here’s how I did it:  

1.  I created a **custom formula field** called “My Sessions” that is of type checkbox. Here’s my formula:  

IF(Session_Manager__r.Username = $User.Username, TRUE, FALSE)

![[HIST2.png]]

2. I created a new custom List View called “My Sessions” (not to be confused with the default List View) that only shows Sessions where my formula field returns a TRUE value. 

When a user logs in and goes to the new “My Sessions” list view, they see only records for which they are the Session Manager because the view filter criteria look like this:

![[HIST3.png]]