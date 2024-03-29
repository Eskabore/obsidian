# Object-relational-database
Tags: #data #database #query 
&nbsp&nbsp&nbsp&nbsp&nbsp;  An **object–relational database** (**ORD**), or **object–relational database management system** (**ORDBMS**), 
is a **database management system** (**DBMS**) similar to a relational database, but with an object-oriented database model: **objects**, **classes** and **inheritance** are directly supported in database schemas and in the [[query language]]. In addition, just as with pure relational systems, it supports extension of the data model with custom data types and methods.
Example of an [[object-oriented database model]]. 

An object–relational database can be said to provide a middle ground between relational databases and object-oriented databases. In object–relational databases, the approach is essentially that of relational databases: the data resides in the database and is manipulated collectively with queries in a query language; at the other ![[Pasted image 20201020125620.png]]extreme are OODBMSes in which the database is essentially a persistent object store for software written in an object-oriented programming language, with a programming API for storing and retrieving objects, and little or no specific support for querying.

## Contents

   1 [[Overiew]]
   2 History
   3 Comparison to RDBMS
   4 See also
   5 References

### [[Overview#]]

The basic need of object–relational database arises from the fact that both <u>Relational and Object database have their individual advantages and drawbacks</u>. The isomorphism of the relational database system with a mathematical relation allows it to exploit many useful techniques and theorems from set theory. But these types of databases are not useful when the matter comes to data complexity[citation needed] and mismatch[citation needed] between application and the DBMS. An object oriented database model allows containers like sets and lists, arbitrary user-defined datatypes as well as nested objects. This brings commonality between the application type systems and database type systems which removes any issue of impedance mismatch. But object databases, unlike relational do not provide any mathematical base for their deep analysis.[2][3]

The basic goal for the object–relational database is to bridge the gap between relational databases and the object-oriented modeling techniques used in programming languages such as Java, C++, Visual Basic .NET or C#. However, a more popular alternative for achieving such a bridge is to use a standard relational database systems with some form of **object–relational mapping** (**ORM**) software. Whereas traditional RDBMS or SQL-DBMS products focused on the efficient management of data drawn from a limited set of data-types (defined by the relevant language standards), an object–relational DBMS allows software developers to integrate their own types and the methods that apply to them into the DBMS.

The ORDBMS (like ODBMS or OODBMS) is integrated with an object-oriented programming language. The characteristic properties of ORDBMS are 1) complex data, 2) type inheritance, and 3) object behavior. Complex data creation in most SQL ORDBMSs is based on preliminary schema definition via the user-defined type (UDT). Hierarchy within structured complex data offers an additional property, type inheritance. That is, a structured type can have subtypes that reuse all of its attributes and contain additional attributes specific to the subtype. Another advantage, the object behavior, is related with access to the program objects. Such program objects must be storable and transportable for database processing, therefore they usually are named as persistent objects. Inside a database, all the relations with a persistent program object are relations with its object identifier (OID). All of these points can be addressed in a proper relational system, although the SQL standard and its implementations impose arbitrary restrictions and additional complexity[4][page needed]

In object-oriented programming (OOP), object behavior is described through the methods (object functions). The methods denoted by one name are distinguished by the type of their parameters and type of objects for which they attached (method signature). The OOP languages call this the polymorphism principle, which briefly is defined as "one interface, many implementations". Other OOP principles, inheritance and encapsulation, are related both to methods and attributes. Method inheritance is included in type inheritance. Encapsulation in OOP is a visibility degree declared, for example, through the public, private and protected access modifiers.

### History

Object–relational database management systems grew out of research that occurred in the early 1990s. That research extended existing relational database concepts by adding object concepts. The researchers aimed to retain a declarative query-language based on predicate calculus as a central component of the architecture. Probably the most notable research project, Postgres (UC Berkeley), spawned two products tracing their lineage to that research: Illustra and PostgreSQL.

In the mid-1990s, early commercial products appeared. These included Illustra[5] (Illustra Information Systems, acquired by Informix Software, which was in turn acquired by IBM), Omniscience (Omniscience Corporation, acquired by Oracle Corporation and became the original Oracle Lite), and UniSQL (UniSQL, Inc., acquired by KCOMS). Ukrainian developer Ruslan Zasukhin, founder of Paradigma Software, Inc., developed and shipped the first version of Valentina database in the mid-1990s as a C++ SDK. By the next decade, PostgreSQL had become a commercially viable database, and is the basis for several current products that maintain its ORDBMS features.

Computer scientists came to refer to these products as "object–relational database management systems" or ORDBMSs.[6]

Many of the ideas of early object–relational database efforts have largely become incorporated into SQL:1999 via structured types. In fact, any product that adheres to the object-oriented aspects of SQL:1999 could be described as an object–relational database management product. For example, IBM's DB2, Oracle database, and Microsoft SQL Server, make claims to support this technology and do so with varying degrees of success.

### Comparison to RDBMS

An RDBMS might commonly involve SQL statements such as these:

   CREATE TABLE Customers  (
       Id          CHAR(12)    NOT NULL PRIMARY KEY,
       Surname     VARCHAR(32) NOT NULL,
       FirstName   VARCHAR(32) NOT NULL,
       DOB         DATE        NOT NULL   # DOB: Date of Birth
    );
    SELECT InitCap(Surname) || ', ' || InitCap(FirstName)
      FROM Customers
     WHERE Month(DOB) = Month(getdate())
       AND Day(DOB) = Day(getdate())

Most current SQL databases allow the crafting of custom functions, which would allow the query to appear as:
```SQL
    SELECT Formal(Id)
      FROM Customers
     WHERE Birthday(DOB) = Today()
```
In an object–relational database, one might see something like this, with user-defined data-types and expressions such as BirthDay():
```SQL
    CREATE TABLE Customers (
      Id           Cust_Id     NOT NULL  PRIMARY KEY,
      Name         PersonName  NOT NULL,
      DOB          DATE        NOT NULL
    );
    SELECT Formal( C.Id )
      FROM Customers C
     WHERE BirthDay ( C.DOB ) = TODAY;
```
The object–relational model can offer another advantage in that the database can make use of the relationships between data to easily collect related records. In an address book application, an additional table would be added to the ones above to hold zero or more addresses for each customer. Using a traditional RDBMS, collecting information for both the user and their address requires a "join":
```SQL
     SELECT InitCap(C.Surname) || ', ' || InitCap(C.FirstName), A.city
       FROM Customers C join Addresses A ON A.Cust_Id=C.Id -- the join
      WHERE A.city="New York"
```
The same query in an object–relational database appears more simply:
```SQL
    SELECT Formal( C.Name )
      FROM Customers C
     WHERE C.address.city="New York" -- the linkage is 'understood' by the ORDB
```
### See also
    
   Document-oriented database
    SQL
    Comparison of object–relational database management systems
    Structured Type
    Object database
    Object–relational mapping
    Relational model
    LINQ
    ADO.NET Entity Framework
    
  ###  References

Data Integration Glossary (PDF), US: Department of Transportation, August 2001, archived from the original (PDF) on 2016-09-24, retrieved 2014-03-08
Frank Stajano (1995), A Gentle Introduction to Relational and Object Oriented Databases (PDF)
Naman Sogani (2015), Technical Paper Review (PDF), archived from the original (PDF) on 2016-03-04, retrieved 2015-10-05
Date, Christopher ‘Chris’ J; Darwen, Hugh, The Third Manifesto
Stonebraker,. Michael with Moore, Dorothy. Object–Relational DBMSs: The Next Great Wave. Morgan Kaufmann Publishers, 1996. ISBN 1-55860-397-2.
There was, at the time, a dispute whether the term was coined by Michael Stonebraker of Illustra or Won Kim of UniSQL.