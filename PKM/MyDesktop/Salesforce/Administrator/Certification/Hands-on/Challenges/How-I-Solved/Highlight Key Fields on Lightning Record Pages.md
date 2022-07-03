#salesforce #admin #challenge #lightning 

# How I Solved This: Highlight Key Fields on Lightning Record Pages
Link to [webpage](https://admin.salesforce.com/blog/2020/how-i-solved-this-highlight-key-fields-on-lightning-record-pages)

Link to [Playground](https://brave-wolf-opg027-dev-ed.lightning.force.com/lightning/page/home)

### Key Business Problem
I want my users to quickly see key information on a record without having to scroll down or click through endless screens of fields.

### How I solved it

I created an Action on the Object that shows critical information that I want my users to pay close attention to and added it to the Lightning Record Page. Let’s see how this looks for my “Harry Potter” student contact where I’d like to highlight school performance:

![[LRP1-1024x457.png]] 

### How did I build it?

1. Create an Update Records Action on the object you want to highlight key fields on. 