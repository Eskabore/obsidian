#salesforce #admin #challenge #lightning 


# How I Solved This: Highlight Key Fields on [[Lightning App Builder|Lightning Record Pages]]
Link to [webpage](https://admin.salesforce.com/blog/2020/how-i-solved-this-highlight-key-fields-on-lightning-record-pages)

Link to [Playground](https://brave-wolf-opg027-dev-ed.lightning.force.com/lightning/page/home)

# How I Solved This: Highlight Key Fields on Lightning Record Pages
Link to [webpage](https://admin.salesforce.com/blog/2020/how-i-solved-this-highlight-key-fields-on-lightning-record-pages)

### Key Business Problem
I want my users to quickly see key information on a record without having to scroll down or click through endless screens of fields.

### How I solved it

I created an Action on the Object that shows critical information that I want my users to pay close attention to and added it to the Lightning Record Page. Let’s see how this looks for my “Harry Potter” student contact where I’d like to highlight school performance:

![[LRP1-1024x457.png]] 

Here is the same technique used on a volunteer contact record where I put the volunteer release information in a custom tab: 

![[LRP2-1024x788.png]]

In the image below, I am conditionally displaying fields for a volunteer in Pennsylvania, which has different clearance requirements than other states. If I changed his volunteer region, those fields would not display.


![[LRP3.png]]

### How did I build it?

1. ==Create an Update Records Action on the object you want to highlight key fields on==



Go the **Object Manager,** find your desired object, and choose **Buttons, Links, and Actions > New Action**.

![[LRP4.png]]

_Action Type_: Update a Record

_Label_: Give your action a name

_Name_: Give your action an API name

_Description_: It’s always good to give a description to help those who come after you.

You’ll now be on the screen for your new action. Click “Edit Layout.”

This is where you’re going to put the fields you want to show. You can start by removing the fields that were automatically added by Salesforce, including the ones that appear required with the *. You probably won’t need these because of how we’re using this action. Then add the fields you’d like to display.

![[LRP5.png]]

1. Place the Related Record Component on your Lightning Record Page

Go into the Lightning Record Page for your object and click Edit Page to start the Lightning App Builder. You’re going to add a Related Record component to the page.

![[LRP6.png]]

Drag that component onto the canvas wherever you’d like it. Now choose the settings for this component. You can give a Header Label to it if you’d like, which will serve as a title for your field section. Most important is that in the Update Action selector, you’re going to choose the action you just created.

![[LRP7.png]]

Save and activate your Lightning Record Page!

![[LRP8-1024x457.png]]

### Business results

Now my users can see their important information at a glance with a minimum of scrolling, and in separate tabs if required. 

### How I solved it
