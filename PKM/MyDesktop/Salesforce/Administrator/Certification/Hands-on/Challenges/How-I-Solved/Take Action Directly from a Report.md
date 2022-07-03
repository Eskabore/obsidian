#salesforce #admin #challenge #report

# How I Solved This: Take Action Directly from a Report

Link to [webpage](https://admin.salesforce.com/blog/2020/how-i-solved-this-take-action-directly-from-a-report)

### Key business problem
I want my users to take action on a list of records returned in a report, and not a list view. It’s easy to edit records in a list view, but to make changes to what’s in the report takes more effort—to open each record into a new tab or window and edit it. That’s time-consuming and tedious for users.

### Background 
Meet [Spark](https://sparkprogram.org/), a career exploration and self-discovery program for middle school students. In the spring semester, Spark pairs up 7th graders with mentors at leading companies (including Salesforce!) for a weekly visit to their workplace, during which they collaborate on a learning project.

Each week, students fill out a short check-in about how their project is going and how they are getting along with their mentor. The check-in goes into Salesforce so that Spark staff can monitor program quality and student engagement. As you might imagine, 11- and 12-year-olds don’t always think that everything is sunshine and roses. (Middle school can be a rough time.) Spark program staff want to take the students’ concerns seriously. So any check-in that gets low ratings shows up on the Poor Checkins report on the Program Dashboard, and this is where we want our users to take immediate action. They need to contact the student who indicated things aren’t well and assess what’s going on. Managers also keep an eye on that report to ensure that front-line staff look into each issue. 

So, we have a report of records indicating an issue and we need to mark those that have been dealt with. And for efficiency’s sake, we want to do this right from the report—no opening other windows or navigating to another location in Salesforce.

### How I Solved It
I created a one-click link **_in the report_** that updates a single field with a new value.

![[Pasted image 20220704013304.png]]

1. Define the action you want users to take

We defined a very simple way to indicate when that check-in has been acted upon: a date field on the check-in record for when it was “dealt with.” And with such a simple field to fill, staff deserve a one-click way to mark that they’ve dealt with each check-in. Staff could open up each check-in record to fill in that date field. But that’s way too many clicks and takes a lot of time. They could mark them in-line on a list view, except that they’re coming to this report directly from a dashboard. So they need to mark that record “dealt with” right in the report, with one click.

![[Pasted image 20220704013436.png]]

That’s what the “Dealt With?” column does! 

How does that happen? The answer is an Auto-Launched Flow and a simple URL field.

2. Create a simple flow

![[Pasted image 20220704015034.png]]
All this flow does is receive the Id of a record and then update a field on that record to today’s date:

![[Pasted image 20220704015059.png]]

3. Create a formula field 
There’s just one more thing you need: a way to launch the flow right from the report. For that, we build a special formula field that launches the flow.

![[Pasted image 20220704015142.png]]

==Here is the formula:==

HYPERLINK(‘/flow/Survey_Mark_Dealt_With?varExitTicketId=’& Id, ‘Mark Dealt With’)

This is a formula field that returns Text as the data type. And look at the formula, which I’ll break down:

It’s a HYPERLINK function, so it’s going to create a hyperlink or URL.
It includes the API name of my flow (Survey_Mark_Dealt_With).
It indicates the name of a flow variable that it’s going to define (varExitTicketId).
It indicates that it’s going to put the Id of this record into that flow variable (=&Id).
And it indicates the text it’s going to display in the field (‘Mark Dealt With’).
That’s it. It’s like you’ve added a button that can show up on the report, but it’s a link instead!