#### Learn Pardot Administration Basics
##### Learning Objectives
- Access and describe Pardot account settings.
- Set up users
- Configure single sign on with Salesforce.
- Set up custom prospect fields.
- Connect Twitter to Pardot

## Create a Pardot User
Leung is highly in demand at Cloudy Computing, so she’s juggling a lot of projects. She wants to add one of her teammates to Pardot as a user to help her manage this account. The Cloudy Computing marketing team has several content creators and Leung’s tapped one to help with Pardot. She decides to give them the Marketing role, one of Pardot’s default user roles. Every Pardot account comes with four user roles: **Administrator, Marketing User, Sales Manager, and Sales User**. 
Let’s look at how Leung can easily create a new Pardot user with the Marketing role. 

Navigate to Pardot Settings | User Management | Users.
Click + Add User.
Enter the user’s first and last name.
Enter the user’s email address. The email address must be unique across all Pardot accounts.
To send an activation link to the user, select Send Activation Email. This email prompts the user to choose a password and security question. The activation email expires after 48 hours.
Select the Marketing user role.
When finished, click Create User.

## The Recycle Bin
When you delete an asset, it’s moved to the recycle bin in your Pardot account. You can restore most assets from the recycle bin but let’s look at a few things to consider when using the recycle bin. Let’s take a look at those real quick before moving on.

- Items in the recycle bin don’t count toward usage limits.
- If you delete a campaign, the prospects associated with the campaign remain in the system tagged with the deleted campaign. Before deleting, Pardot warns you if elements associated with the campaign, such as lists, rules, and landing pages, are in use. You can then delete the assets or associate them with another campaign.
- Admins can permanently delete prospects in the recycle bin. Pardot no longer tracks prospects when they’re permanently deleted.
- A deleted prospect is restored when the Salesforce record it’s syncing with is undeleted. When you permanently delete a prospect in Pardot, you must delete associated leads and contacts in Salesforce.
- Tags are deleted permanently and don’t appear in the recycle bin.
- Content files are permanently deleted and cannot be undeleted, but they are listed in the recycle bin.
> ==When a prospect is deleted, the record is moved to the Pardot recycle bin. From the recycle bin, you can either permanently delete or restore the prospect. Certain activities that either you or the system initiates also restore a prospect.== If you feel you want to permanently delete a prospect in the recycle bin, you should consider a few things before doing that. 

- When a prospect is permanently deleted, the prospect is deleted from the recycle bin, and Pardot doesn’t retain any information about the prospect. There is no way to tell which prospects have been deleted, and data cannot be restored.
- Associated leads and contacts must be deleted from Salesforce before deleting the prospect in Pardot.
- Deleting prospects removes all associated engagement data and impacts all reporting.
- If the prospect is associated with a person account, all personally identifiable information is removed from the Pardot account record.
- Deleting a prospect doesn’t prevent the prospect from being created again. For example, a prospect can submit a form or be re-created manually.
- Admins can permanently delete prospects in the recycle bin. Pardot no longer tracks prospects when they’re permanently deleted.
> **It can take up to 24 hours for a deletion to complete. Pardot will email you once the process is finished.**

### Add Custom Fields
To create a custom field: 

1. Navigate to Pardot Settings | Object and Field Configuration | Prospect Fields.
2. Click + Add Custom Field.
3. Enter the RSVP into the Name field.
4. Leave the Custom Field ID as automatically generated.
5. Leave Sync Behavior as is. For a full list of field settings, see the Prospect Field Settings Reference.
6. To limit responses, change the field type to Radio Button.
7. Under Values, enter the following values for the field:
  - Yes, I’ll be there!
  - No, I can’t come.
8. When finished, click Create Custom Field to save your new field.
![[Pasted image 20220707133423.png]]

### Custom Redirects
Lastly, Pardot’s custom redirects allow you to track any link on your website or a third party site and allow access to files hosted outside of Pardot (for example, a link on a social media page, a banner ad on a third party site, etc.). Clicks on the link will show up as an activity on a prospect’s record. Completion actions can also be added to custom redirects to automate actions upon the clicks. You can also view a list of all prospects who clicked on a particular link. If you are using Google Analytics parameters, they can be integrated into the link during creation. 

### How Does Authentication Work with the Pardot API?
==OAuth is an open protocol that uses an authentication server to communicate with the API server and exchange tokens to authenticate users. ==

### Create a Connected App
1. Im Lead gibt es ein Custom Field: „Landingpage_URL__c“
Wenn eine Mail-Adresse eingetragen ist, wird über eine APEX-Klasse und ein Flow ein Link erstellt. Dieser Link geht im Moment immer auf dimabay.de
Der Link soll künftig abhängig von der Sprache „Language__c“ auf .de, .fr, .nl bzw. .com erstellt werden.
Der Token wir als MD5 aus Informationen des Leads erstellt (DmbLeadLandingpage.apcx) Auch die Sprache soll nun mit in den MD5 eingebracht werden.

1. dans le lead, il y a un champ Custom : "Landingpage_URL__c".
Quand l'utilisateur saisie les donnees clique sur "le boutton de soumission": 
       A. Il enclenche le trigger/ Apex-class "DmbLeadLandingpageAction" qui cree un lien et selectionnee un flow.
       ==Pour l'instant, ce lien va toujours vers dimabay.de.==
Vu que Le lien doit être créé à l'avenir en fonction de la langue "Language__c" vers .de, .fr, .nl ou .com:
       B. Je cree une variable qui modifie le '.de' en {{Recipient.Language}}
       
2. Le jeton est créé sous forme de MD5 à partir des informations du lead (DmbLeadLandingpage.apcx).
var crypto = require('crypto');
var name = 'braitsch';
var hash = crypto.createHash('md5').update(name).digest('hex');
console.log(hash); // 9b74c9897bac770ffc029102a200c5de

### Ne pas Oublier de Tester
2. Pardot API use Salesforce OAuth, meaning that MD5 token is from a connected app
Enable hml+??
1. Une fois que le Prospect rentre son adresse e-mail,  l' APEX - class : "DmbLandingPage__c" integree dans un Flow, cree un lien qui dirige vers dimabay.**de**
--> // _Le lien doit être créé à l'avenir en fonction de la langue "Language__c" vers .de, .fr, .nl ou .com._
A/ modifier dimabay.de(DmbLandingpage__c) pour dimabay.{{lang}}
=>  l' hyper lien dans "Language__c" doit etre modifie pour:
If Language__c = FR ==> dima

Ich habe gerade wieder versucht, mich einzuloggen (mehrmals). 
Es könnte sein, dass das "Profil" des Benutzers einen eingeschränkten "IP-Bereich" erstellt".
Das passiert bei