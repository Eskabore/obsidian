# Create Test Data for Apex Tests
Trailhead [page](https://trailhead.salesforce.com/content/learn/modules/apex_testing/apex_testing_data?trail_id=force_com_dev_beginner)

## Learning Objectives
After completing this unit, you'll be able to:
- Create a test utility class.
- Use a test utility method to set up test data for various test cases.
- Execute all test methods in a class.

## Create Test Data for Apex Tests
> Use test utility classes to add reusable methods for test data setup.

## Adding a Test Utility Class
> Let’s refactor the previous test method by replacing test data creation with a call to a utility class method. First, you need to create the test utility class.

The TestDataFactory class is a special type of class—it is a public class that is annotated with isTest and can be accessed only from a running test. Test utility classes contain methods that can be called by test methods to perform useful tasks, such as setting up test data.
**Test utility classes are excluded from the org’s code size limit**.

To add TestDataFactory class:
1. In the Developer Console, click File | New | Apex Class, and enter TestDataFactory for the class name, and then click OK.
2. Replace the default class body with the following
```java
@isTest
public class TestDataFactory {
    public static List<Account> createAccountsWithOpps(Integer numAccts, Integer numOppsPerAcct) {
        List<Account> accts = new List<Account>();
        for(Integer i=0;i<numAccts;i++) {
            Account a = new Account(Name='TestAccount' + i);
            accts.add(a);
        }
        insert accts;
        List<Opportunity> opps = new List<Opportunity>();
        for (Integer j=0;j<numAccts;j++) {
            Account acct = accts[j];
            // For each account just inserted, add opportunities
            for (Integer k=0;k<numOppsPerAcct;k++) {
                opps.add(new Opportunity(Name=acct.Name + ' Opportunity ' + k,
                                       StageName='Prospecting',
                                       CloseDate=System.today().addMonths(1),
                                       AccountId=acct.Id));
            }
        }
        // Insert all opportunities for all accounts.
        insert opps;
        return accts;
    }
}
```
> This test utility class contains one static method, `createAccountsWithOpps()`, which accepts the number of accounts (held in the **`numAccts`** parameter) and the number of related opportunities to create for each account (held in the **`numOppsPerAcct`** parameter).
>   i. The first loop in the method creates the specified number of accounts and stores them in the ==`accts` **list** variable==. After the first loop, the` insert()` DML statement is called to create all accounts in the list in the database.
>   ii. The second loop creates the opportunities. Because each group of opportunities are linked to one account, the outer loop iterates through accounts and contains a nested loop that creates related opportunities for the current account.
>   iii. The next time the nested loop is run, opportunities are added to the same list using the add() method. Opportunities are linked to their parent accounts using the `AccountId` field. The total number of all opportunities that are created is the product of the number of opportunities with the number of accounts (**`numOppsPerAcct*numAccts`**). Next, the `insert()` DML statement is efficiently called outside the loop to create all opportunities in the collection for all accounts in one call only.
>   ---> **_Finally, this method returns a list of the new accounts_**.

>**Note**:
Even though this method doesn’t return the related opportunities, you can get those records by writing a SOQL query that makes use of the existing relationship between Account and Opportunity, such as the query used in the trigger in [Testing Apex Triggers](https://trailhead.salesforce.com/en/content/learn/modules/apex_testing/apex_testing_triggers?trail_id=force_com_dev_beginner#Tdxn4tBK-heading2).