# Start Console


### Edit language:

**Change your personal language in Salesforce**

1. Click:
  - In Salesforce Classic: Setup | Personal Setup | My Personal Information | Edit
  - In Salesforce Classic (Improved Setup): Your name | My Settings | Personal | Language & Time Zone
  - In Lightning Experience: Your Avatar | Settings | Language & Time Zone
2. Select your preferred language from the Language dropdown.
3. You may also want to modify your Locale setting to control the formatting of numbers, dates, and phone numbers.
4. Click Save.

### Chrome / Mozilla Firefox Error:  We can't display this page because your browser block
#### ==Description:==
After a recent update to the DuckDuckGo Privacy Essentials Chrome browser extension, Lightning Experience users are reporting encountering the following errors when navigating various pages and records in their Salesforce org:
- We can't display this page because your browser blocks cross-domain cookies
- We can't display this page because your browser blocks cross-domain cookies, but you can view this page in Salesforce Classic. Click here to open this page in Salesforce Classic.

#### ==Resolution:==
In order to resolve these errors users will either need to disable the extension, or turn off the Site Privacy Protection setting in the extension for their Salesforce org URL.

### Secure User's Identity:
Trailhead - [page](https://trailhead.salesforce.com/content/learn/modules/identity_login/identity_login_2fa?trailmix_creator_id=mpetroro&trailmix_slug=configuration-and-setup)

**Step 1:** Verify that the session security level is set for **==multi-factor authentication==**
First, let’s make sure that the right security level is associated with the multi-factor authentication login method.  In most production orgs, this setting is already in place. But if it’s not, it’s important to do this step before you set up an MFA requirement for any admin users. **_Otherwise, you could prevent yourself or other admins from logging in_**.
1. From Setup, enter Session Settings in the Quick Find box, then select Session Settings.
2. Under Session Security Levels, make sure that Multi-Factor Authentication is in the High Assurance category.

**Step 2:** Create a user
1. From Setup, enter Users in the Quick Find box, then select Users.
2. Click New User.
3. For the first name and last name, enter Sia and Thripio, respectively.
4. Enter your email address in the Email field. This setting is to get user notifications for Sia.
5. Create a username for Sia and enter it in the Username field. It must be in email address format, but it doesn’t have to be a working email address. Make sure the email address is unique in your Trailhead Playground. You’ll enter this username to log in as Sia later on, so we suggest making it short and easy to remember. Need ideas? Try using Sia's first initial, last name, and the current date, like this: SThripio.12202020@trailhead.com.
6. Edit or accept the nickname value.
7. For User License, select Salesforce Platform.
8. For Profile, select Standard Platform User. While you’re here, deselect the options to receive Salesforce CRM content alerts. No need to clutter your inbox with unnecessary email from Salesforce.
9. Make sure that Generate new password and notify user immediately is selected—it’s way down at the bottom of the page. Salesforce emails you about Sia’s new user because you entered your email address in the Email field.
10. Click Save. Salesforce emails you a link to verify the user and set Sia’s password.
    Note: If you get an error that the username exists, create a user with a different name.
11. Log in as Sia, and reset the password.

**Step 3:** Create a permission set for multi-factor authentication

Enable MFA for users by assigning the Multi-Factor Authentication for User Interface Logins user permission. You can do this step by editing profiles or by creating a permission set that you assign to specific users.

A permission set is a collection of settings and permissions that gives users access to various Salesforce features. Let’s create a permission set with the MFA permission.

1. If you’re logged in as Sia, log out. Log in again as the system administrator of your Trailhead Playground.
2. From Setup, enter Permission in the Quick Find box, then select Permission Sets.
3. Click New.
4. Label the permission set “MFA Authorization for User Logins”.
5. Click Save.
6. Under System, click System Permissions.
7. Click Edit.
8. Select Multi-Factor Authentication for User Interface Logins.
9. Click Save, then click Save again to confirm permission changes.

**Step 4:** Assign the permission set to Sia’s user

For now, we’ll assign the permission set just to Sia. Later, when you’re ready to roll out MFA more broadly, you can assign the same permission set to other users.

If you’re not on the detail page for your new permission set, navigate back there.

1. On the detail page of the new permission set, click Manage Assignments.
2. Click Add Assignments. On the list of users, select the checkbox next to Sia’s user. (If you wanted, you could assign up to 1,000 users at a time.)
3. Click Assign.
