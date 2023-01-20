# Visualforce Basics
Trailhead [page](https://trailhead.salesforce.com/en/content/learn/modules/visualforce_fundamentals/visualforce_intro?trail_id=force_com_dev_beginner)

## Learning Objectives
- Describe what Visualforce is and what it’s used for.
- List three or more places where Visualforce can be used.

## Introduction to Visualforce
Visualforce is a web development framework that enables developers to build sophisticated, custom user interfaces for mobile and desktop apps that can be hosted on the Lightning Platform. You can use Visualforce to build apps that align with the styling of Lightning Experience, as well as your own completely custom interface.
Visualforce enables developers to extend Salesforce’s built-in features, replace them with new functionality, and build completely new apps. Use powerful built-in standard controller features, **==or write your own custom business logic in Apex==**. You can build functionality for your own organization, or create apps for sale in the AppExchange.

Visualforce app development is familiar to anyone who has built web apps. Developers create Visualforce pages by composing components, HTML, and optional styling elements. Visualforce can integrate with any standard web technology or JavaScript framework to allow for a more animated and rich user interface.
>  **_Each page is accessible by a unique URL. When someone accesses a page the server performs any data processing required by the page, renders the page into HTML, and returns the results to the browser for display._**
![[Pasted image 20220707045309.png]]

## An Example Visualforce Page
```html
<apex:page standardController="Contact" >
    <apex:form >
        <apex:pageBlock title="Edit Contact">
            <apex:pageBlockSection columns="1">
                <apex:inputField value="{!Contact.FirstName}"/>
                <apex:inputField value="{!Contact.LastName}"/>
                <apex:inputField value="{!Contact.Email}"/>
                <apex:inputField value="{!Contact.Birthdate}"/>
            </apex:pageBlockSection>
            <apex:pageBlockButtons >
                <apex:commandButton action="{!save}" value="Save"/>
            </apex:pageBlockButtons>
        </apex:pageBlock>
    </apex:form>
</apex:page>
```

**This page displays a contact data entry form.**
![[Pasted image 20220707045643.png]]
In just over a dozen lines of markup, this page does a lot.
  - It connects to the Visualforce standard controller, a part of the Visualforce framework that provides automatic data access and modification, standard actions, and more.
  - When accessed without a record ID, the page displays a blank data entry form. When you click Save, a new record is created from the form data.
  - When accessed with a record ID, the page looks up the data for that contact record and displays it in an editable form. When you click Save, your changes for the contact are saved back to the database.
  - Each input field is smart about how it presents its value.
    - The email field knows what a valid email address looks like, and displays an error if an invalid email is entered.
    - The date field displays a date widget when you click into the field to make entering a date easier.
  - The Save button calls the save action method, one of the standard actions provided by the standard controller.

## Where You Can Use Visualforce

Salesforce provides a range of ways that you can use Visualforce within your organization. You can extend Salesforce’s built-in features, replace them with new functionality, and build completely new apps.
The following are some of the ways you can add Visualforce to your organization. Remember that these screenshots are showing examples and don't reflect the custom pages and apps in your org.

## Open a Visualforce Page from the App Launcher

Your Visualforce apps and custom tabs are all available from the App Launcher. To open the App Launcher, click ![[Pasted image 20220707050223.png|25x25]] in the navigation bar. To see all of your apps and items, select **View All**.
![[Pasted image 20220707050254.png]]

> Click a custom app (1) to activate it. Items in the app display in the navigation bar, including any Visualforce tabs you’ve added to the app. 
> ==Note that you need to add your Visualforce pages to tabs for them to be accessible in the App Launcher. Visualforce tabs that aren’t in apps can be found in All Items (2)==.

## Add a Visualforce Page to the Navigation Bar

As described in the preceding example, you can add Visualforce tabs to an app and they display as items in the app’s navigation bar.
![[Pasted image 20220707050417.png]]

## Display a Visualforce Page within a Standard Page Layout

Extend your page layouts by embedding Visualforce pages on them to display completely custom content on a standard page. The behavior here is identical to Salesforce Classic, except you need to view the record’s Details to see the page layout.
![[Pasted image 20220707050505.png]]

## Add a Visualforce Page as a Component in the Lightning App Builder
When you create a custom app page in the Lightning App Builder, you can add a Visualforce page to the page by using the Visualforce component.

![[Pasted image 20220707050558.png]]

> ==**You must enable "Available for Lightning Experience, Lightning Communities, and the mobile app" for a Visualforce page to make it available in the Lightning App Builder.**==

## Launch a Visualforce Page as a Quick Action
![[Pasted image 20220707050736.png]]
> Although **_their placement in the Lightning Experience user interface is quite different from Salesforce Classic, the process of adding quick actions is much the same_**. Add them to the appropriate publisher area on the object’s page layout.
![[Pasted image 20220707050832.png]]

## Display a Visualforce Page by Overriding Standard Buttons or Links
You can override the actions available on an object with a Visualforce page.
==When the user clicks a **button** or **link** that has been overridden, your page displays instead of the standard page.== Setting this up is pretty much identical to Salesforce Classic. Indeed, you’ll have a hard time telling that you’re in Lightning Experience when defining an action override!
![[Pasted image 20220707051308.png]]

## Display a Visualforce Page Using Custom Buttons or Links
_You can create new actions for your objects_, in the form of **buttons and links**, by _defining them on an object_. ==JavaScript buttons and links aren’t supported in Lightning Experience, but **Visualforce and URL items are**==. The process of defining Visualforce buttons and links is identical to that in Salesforce Classic, so we won’t bother to show it here.