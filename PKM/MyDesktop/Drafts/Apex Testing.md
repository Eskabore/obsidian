# Test Apex Triggers

## Learn Objectives
After completing this unit, you'll be able to:
- Write a test for a trigger that fires on a single record operation.
- Execute all test methods in a class.

## Test Apex Triggers
> **Before deploying a trigger, write unit tests to perform the actions that fire the trigger and verify expected results.**

_Let’s test a trigger that we worked with earlier in the Writing Apex Triggers unit._

If an account record has related opportunities, the `AccountDeletion` trigger prevents the record’s deletion.

### Prerequisites
1. If you haven’t yet added the AccountDeletion trigger, follow these steps.
a. In the Developer Console, click **File | New | Apex Trigger**.
b. Enter AccountDeletion for the trigger name, and then select **Account** for the sObject. Click **Submit**.
c. Replace the default code with the following.
```java
trigger AccountDeletion on Account (before delete) {
    // Prevent the deletion of accounts if they have related opportunities.
    for (Account a : [SELECT Id FROM Account
                     WHERE Id IN (SELECT AccountId FROM Opportunity) AND
                     Id IN :Trigger.old]) {
        Trigger.oldMap.get(a.Id).addError(
            'Cannot delete account with related opportunities.');
    }
}
```

## Adding and Running a Unit Test
First, let’s start by adding a test method. ==This test method verifies what the trigger is designed to do (the positive case): preventing an account from being deleted== if it has related opportunities.
1. In the Developer Console, click **File | New | Apex Class**.
2. Enter `TestAccountDeletion` for the class name, and then click OK.
3. Replace the default class body with the following.
```java
@isTest
private class TestAccountDeletion {
    @isTest static void TestDeleteAccountWithOneOpportunity() {
        // Test data setup
        // Create an account with an opportunity, and then try to delete it
        Account acct = new Account(Name='Test Account');
        insert acct;
        Opportunity opp = new Opportunity(Name=acct.Name + ' Opportunity',
                                       StageName='Prospecting',
                                       CloseDate=System.today().addMonths(1),
                                       AccountId=acct.Id);
        insert opp;
        // Perform test
        Test.startTest();
        Database.DeleteResult result = Database.delete(acct, false);
        Test.stopTest();
        // Verify 
        // In this case the deletion should have been stopped by the trigger,
        // so verify that we got back an error.
        System.assert(!result.isSuccess());
        System.assert(result.getErrors().size() > 0);
        System.assertEquals('Cannot delete account with related opportunities.',
                             result.getErrors()[0].getMessage());
    }
}
```

>The test method first sets up a test account with an opportunity. Next, it deletes the test account, which fires the AccountDeletion trigger. The test method verifies that the trigger prevented the deletion of the test account by checking the return value of the Database.delete() call. The return value is a Database.DeleteResult object that contains information about the delete operation. The test method verifies that the deletion was not successful and verifies the error message obtained.

1. To run this test, click **Test | New Run**.
2. Under **Test Classes**, click **TestAccountDeletion**.
3. To add all the methods in the `TestAccountDeletion` class to the test run, click **Add Selected**.
4. Click Run.Find the test result in the Tests tab under the latest run.

## !!! ==A test should always be a private class !==