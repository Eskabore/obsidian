# Factless fact tables
A factless fact table doesn't include any measure columns. It contains only dimension keys.

A factless fact table could store observations defined by dimension keys. For example, at a particular date and time, a particular customer logged into your web site. You could define a measure to count the rows of the factless fact table to perform analysis of when and how many customers have logged in.

A more compelling use of a factless fact table is to store relationships between dimensions, and it's the Power BI model design approach we recommend defining [[many-to-many relationship|many-to-many dimension relationships]]. In a many-to-many dimension relationship design, the factless fact table is referred to as a **_bridging table_**.

For example, consider that salespeople can be assigned to _==one or more==_ sales regions. The bridging table would be designed as a factless fact table consisting of two columns: salesperson key and region key. Duplicate values can be stored in both columns.

![[factless-fact.png]]