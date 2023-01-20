# Relate many-to-many dimensions

Let's consider the first many-to-many scenario type with an example. The classic scenario relates two entities: bank customers and bank accounts. Consider that customers can have multiple accounts, and accounts can have multiple customers. When an account has multiple customers, they're commonly called joint account holders.

Modeling these entities is straight forward. One dimension-type table stores accounts, and another dimension-type table stores customers. As is characteristic of dimension-type tables, there's an ID column in each table. To model the relationship between the two tables, a third table is required. This table is commonly referred to as a bridging table. In this example, it's purpose is to store one row for each customer-account association. Interestingly, when this table only contains ID columns, it's called a [[factless fact table]].

Here's a simplistic model diagram of the three tables.

![[bank-account-customer-model-example.png]]

The first table is named **Account**, and it contains two columns: **AccountID** and **Account**. The second table is named **AccountCustomer**, and it contains two columns: **AccountID** and **CustomerID**. The third table is named **Customer**, and it contains two columns: **CustomerID** and **Customer**. Relationships don't exist between any of the tables.

Two one-to-many relationships are added to relate the tables. Here's an updated model diagram of the related tables. A ==**fact-type**== table named **Transaction** has been added. It records account transactions. The bridging table and all **ID** columns have been hidden.

![[bank-account-customer-model-related-tables-1.png]]

To help describe how the relationship filter propagation works, the model diagram has been modified to reveal the table rows.

![[bank-account-customer-model-related-tables-2.png]]

The row details for the four tables are described in the following bulleted list:
- The Account table has two rows:
    - AccountID 1 is for Account-01
    - AccountID 2 is for Account-02
- The Customer table has two rows:
    - CustomerID 91 is for Customer-91
    - CustomerID 92 is for Customer-92
- The AccountCustomer table has three rows:
    - AccountID 1 is associated with CustomerID 91
    - AccountID 1 is associated with CustomerID 92
    - AccountID 2 is associated with CustomerID 92
- The Transaction table has three rows:
    - Date January 1 2019, AccountID 1, Amount 100
    - Date February 2 2019, AccountID 2, Amount 200
    - Date March 3 2019, AccountID 1, Amount -25

