{{short description|Digital database whose organization is based on the relational model of data}}

A '''relational database''' is a digital [[database]] based on the [[relational model]] of data, as proposed by [[E. F. Codd]] in 1970.<ref name=codd/>
A software system used to maintain relational databases is a [[relational database management system]] (RDBMS). Many relational database systems have an option of using the [[SQL]] (Structured Query Language) for querying and maintaining the database.<ref>{{cite web |url=http://www.agiledata.org/essays/relationalDatabases.html |title=Relational Databases 101: Looking at the Whole Picture |first=Scott |last=Ambler}}{{better source|date=June 2018}}</ref>

==History==
The term "relational database" was invented by [[Edgar F. Codd|E. F. Codd]] at [[IBM]] in 1970. Codd introduced the term in his research paper "A Relational Model of Data for Large Shared Data Banks".<ref>{{Cite web|url=http://www.seas.upenn.edu/~zives/03f/cis550/codd.pdf|title="A Relational Model of Data for Large Shared Data Banks"}}</ref>
In this paper and later papers, he defined what he meant by "relational". One well-known definition of what constitutes a relational database system is composed of [[Codd's 12 rules]]. However, no commercial implementations of the relational model conform to all of Codd's rules,<ref>{{cite book |last1=Date |first1=Chris |title=Database in depth : relational theory for practitioners |publisher=O'Reilly |isbn=0-596-10012-4}}</ref> so the term has gradually come to describe a broader class of database systems, which at a minimum:

# Present the data to the user as [[relation (database)|relation]]s (a presentation in tabular form, i.e. as a ''collection'' of [[table (database)|table]]s with each table consisting of a set of rows and columns);
# Provide relational operators to manipulate the data in tabular form.

In 1974, IBM began developing [[IBM System R|System R]], a research project to develop a prototype RDBMS.<ref>
{{cite book
|title=Funding a Revolution: Government Support for Computing Research
|publisher=National Academies Press
|isbn=0309062780 
|date=8 Jan 1999
|url={{google books |plainurl=y |id=wvCbAgAAQBAJ}}
}}</ref><ref>{{cite book
|title=Fundamentals of Relational Database Management Systems
|publisher=Springer
|date=13 Feb 2008
|isbn=3540483977
|first1=S. |last1=Sumathi |first2=S. |last2=Esakkirajan
|quote=The product was called SQL/DS (Structured Query Language/Data Store) and ran under the DOS/VSE operating system environment}}</ref>
The first system sold as an RDBMS was [[Multics Relational Data Store]] (June 1976).{{cn|reason=Due to significance of nature of claim specific unambiguous cite is required at this point|date=August 2020}} [[Oracle Database|Oracle]] was released in 1979 by Relational Software, now [[Oracle Corporation]].<ref>{{cite journal |date=May 2007 |title=Oracle Timeline |magazine=Profit Magazine |volume=12 |issue=2 |page=26 |publisher=Oracle |format=PDF |accessdate=2013-05-16 |url=http://www.oracle.com/us/corporate/profit/p27anniv-timeline-151918.pdf}}</ref> [[Ingres (database)|Ingres]] and [[IBM BS12]] followed. Other examples of an RDBMS include [[IBM DB2|DB2]], [[Adaptive Server Enterprise|SAP Sybase ASE]], and [[IBM Informix|Informix]]. In 1984, the first RDBMS for Macintosh began being developed, code-named Silver Surfer, it was later released in 1987 as [[4th Dimension (Software)|4th Dimension]] and known today as 4D.<ref>{{Cite web|url=http://articles.chicagotribune.com/1987-06-28/business/8702170525_1_silver-surfer-software-developers-macintosh-products|title=New Database Software Program Moves Macintosh Into The Big Leagues|website=tribunedigital-chicagotribune|access-date=2016-03-17}}</ref>

The first systems that were relatively faithful implementations of the relational model were from:

* University of Michigan – [[MICRO Relational Database Management System|Micro DBMS]] (1969){{citation needed|date=May 2020|reason=The sourced article does not specifically mention the date 1969}} 
* Massachusetts Institute of Technology (1971)<ref>SIGFIDET '74 Proceedings of the 1974 ACM SIGFIDET (now SIGMOD) workshop on Data description, access and control</ref>
* IBM UK Scientific Centre at Peterlee – [[IBM IS1|IS1]] (1970–72) and its successor, [[PRTV]] (1973–79)
	
The most common definition of an RDBMS is a product that presents a view of data as a collection of rows and columns, even if it is not based strictly upon [[Relational model|relational theory]]. By this definition, RDBMS products typically implement some but not all of Codd's 12 rules.

A second school of thought argues that if a database does not implement all of Codd's rules (or the current understanding on the relational model, as expressed by [[Christopher J. Date]], [[Hugh Darwen]] and others), it is not relational. This view, shared by many theorists and other strict adherents to Codd's principles, would disqualify most DBMSs as not relational. For clarification, they often refer to some RDBMSs as ''truly-relational database management systems'' (TRDBMS), naming others ''pseudo-relational database management systems'' (PRDBMS). <!-- It can also be said as the raw database management system.-->

As of 2009, most commercial relational DBMSs employ [[SQL]] as their [[query language]].<ref>{{cite journal | title= SRQL: Sorted Relational Query Language| last=Ramakrishnan |first=Raghu| last2=Donjerkovic| first2=Donko| last3= Ranganathan |first3=Arvind | last4=Beyer |first4=Kevin S.| last5= Krishnaprasad | first5=Muralidhar | journal = e Proceedings of SSDBM| year= 1998| url=http://pages.cs.wisc.edu/~beyer/papers/srql_ssdbm98.pdf}}</ref>

Alternative query languages have been proposed and implemented, notably the pre-1996 implementation of [[QUEL query languages|Ingres QUEL]].

==Relational model==
{{Main|Relational model}}
This model organizes data into one or more [[table (database)|tables]] (or "relations") of [[Column (database)|columns]] and [[row (database)|rows]], with a unique key identifying each row. Rows are also called [[Record (computer science)|records]] or [[tuple]]s.<ref>{{cite web|url=https://docs.oracle.com/javase/tutorial/jdbc/overview/database.html|title=A Relational Database Overview|website=oracle.com}}</ref> Columns are also called attributes. Generally, each table/relation represents one "entity type" (such as customer or product). The rows represent instances of that type of entity (such as "Lee" or "chair") and the columns representing values attributed to that instance (such as address or price).

==Keys==
Each row in a table has its own unique key. Rows in a table can be linked to rows in other tables by adding a column for the unique key of the linked row (such columns are known as [[foreign key]]s). Codd showed that data relationships of arbitrary complexity can be represented by a simple set of concepts.{{Citation needed|date=November 2017}}

Part of this processing involves consistently being able to select or modify one and only one row in a table. Therefore, most physical implementations have a unique [[primary key]] (PK) for each row in a table. When a new row is written to the table, a new unique value for the primary key is generated; this is the key that the system uses primarily for accessing the table. System performance is optimized for PKs. Other, more [[natural key]]s may also be identified and defined as [[alternate key]]s (AK). Often several columns are needed to form an AK (this is one reason why a single integer column is usually made the PK). Both PKs and AKs have the ability to uniquely identify a row within a table. Additional technology may be applied to ensure a unique ID across the world, a [[globally unique identifier]], when there are broader system requirements.

The primary keys within a database are used to define the relationships among the tables. When a PK migrates to another table, it becomes a foreign key in the other table. When each cell can contain only one value and the PK migrates into a regular entity table, this design pattern can represent either a [[One-to-one (data model)|one-to-one]] or [[One-to-many (data model)|one-to-many]] relationship. Most relational database designs resolve [[Many-to-many (data model)|many-to-many]] relationships by creating an additional table that contains the PKs from both of the other entity tables{{snd}} the relationship becomes an entity; the resolution table is then named appropriately and the two FKs are combined to form a PK. The migration of PKs to other tables is the second major reason why system-assigned integers are used normally as PKs; there is usually neither efficiency nor clarity in migrating a bunch of other types of columns.

===Relationships===
Relationships are a logical connection between different tables, established on the basis of interaction among these tables.

==Transactions==
In order for a database management system (DBMS) to operate efficiently and accurately, it must use [[ACID transactions]].<ref>{{
cite web
|url=http://www.microsoft.com/presspass/features/1998/11-23gray.mspx
|title=Gray to be Honored With A. M. Turing Award This Spring
|date=1998-11-23
|accessdate=2009-01-16
|publisher= Microsoft PressPass | archiveurl = https://web.archive.org/web/20090206084720/http://www.microsoft.com/presspass/features/1998/11-23gray.mspx| archivedate= 6 February 2009 | url-status= live}}</ref><ref>{{cite conference | first = Jim | last = Gray | authorlink = Jim Gray (computer scientist) | title = The Transaction Concept: Virtues and Limitations | booktitle = Proceedings of the 7th International Conference on Very Large Databases | pages = 144–154 | publisher = [[Tandem Computers]] | date = September 1981 | location = Cupertino, CA| url = http://research.microsoft.com/~gray/papers/theTransactionConcept.pdf |format=PDF| accessdate = 2006-11-09 }}</ref><ref>Gray, Jim, and Reuter, Andreas, ''Distributed Transaction Processing: Concepts and Techniques''. [[Morgan Kaufmann]], 1993. {{ISBN|1-55860-190-2}}.</ref>

==Stored procedures==
Most{{dubious|date=January 2017}} of the programming within a RDBMS is accomplished using [[stored procedure]]s (SPs). Often procedures can be used to greatly reduce the amount of information transferred within and outside of a system. For increased security, the system design may grant access to only the stored procedures and not directly to the tables. Fundamental stored procedures contain the logic needed to insert new and update existing data. More complex procedures may be written to implement additional rules and logic related to processing or selecting the data.

==Terminology==
[[Image:Relational database terms.svg|350px|thumb|right|Relational database terminology]]
The relational database was first defined in June 1970 by [[Edgar F. Codd|Edgar Codd]], of IBM's [[IBM Almaden Research Center|San Jose Research Laboratory]].<ref name=codd>{{cite journal|last=Codd|first=E. F.|authorlink=Edgar F. Codd|year=1970|title=A Relational Model of Data for Large Shared Data Banks|journal=[[Communications of the ACM]]|volume=13|issue=6|pages=377–387|doi=10.1145/362384.362685}}</ref> Codd's view of what qualifies as an RDBMS is summarized in [[Codd's 12 rules]]. A relational database has become the predominant type of database.  Other models besides the ''relational model'' include the [[hierarchical database model]] and the [[network model]].

The table below summarizes some of the most important relational database terms and the corresponding [[SQL]] term:

{| class="wikitable"
|-
! SQL term
! Relational database term
! Description
|-
| [[Row (database)|'''''Row''''']]
| '''''[[Tuple]]''''' or [[Record (computer science)|'''''record''''']]
| A data set representing a single item
|-
| [[Column (database)|'''''Column''''']]
| '''''Attribute''''' or '''''field'''''
| A labeled element of a tuple, e.g. "Address" or "Date of birth"
|- 
| [[Table (database)|'''''Table''''']]
| [[Relation (database)|'''''Relation''''']] or [[relvar|'''''Base relvar''''']]
| A set of tuples sharing the same attributes; a set of columns and rows
|-
| [[View (SQL)|'''''View''''']] or '''''[[result set]]'''''
| '''''Derived relvar'''''
| Any set of tuples; a data report from the RDBMS in response to a [[query language|query]]
|}

==Relations or tables==
{{Main|Relation (database)|Table (database)}}
A ''[[relation (database)|relation]]'' is defined as a set of [[tuple]]s that have the same [[Attribute (computing)|attributes]]. A tuple usually represents an object and information about that object. Objects are typically physical objects or concepts. A relation is usually described as a [[Table (database)|table]], which is organized into [[Row (database)|rows]] and [[Column (database)|columns]]. All the data referenced by an attribute are in the same [[data domain|domain]] and conform to the same constraints.

The relational model specifies that the tuples of a relation have no specific order and that the tuples, in turn, impose no order on the attributes. Applications access data by specifying queries, which use operations such as ''select'' to identify tuples, ''project'' to identify attributes, and ''join'' to combine relations. Relations can be modified using the ''insert'', ''delete'', and ''update'' operators. New tuples can supply explicit values or be derived from a query. Similarly, queries identify tuples for updating or deleting.

Tuples by definition are unique. If the tuple contains a [[candidate key|candidate]] or primary key then obviously it is unique; however, a primary key need not be defined for a row or record to be a tuple. The definition of a tuple requires that it be unique, but does not require a primary key to be defined. Because a tuple is unique, its attributes by definition constitute a [[superkey]].

==Base and derived relations==<!-- This section is linked from Relational database. -->
{{Main|Relvar|View (database)}}
In a relational database, all data are stored and accessed via [[relation (database)|relations]]. Relations that store data are called "base relations", and in implementations are called "tables". Other relations do not store data, but are computed by applying relational operations to other relations. These relations are sometimes called "derived relations". In implementations these are called "[[View (database)|views]]" or "queries". Derived relations are convenient in that they act as a single relation, even though they may grab information from several relations. Also, derived relations can be used as an [[abstraction layer]].

===Domain===
{{Main|Data domain}}
A domain describes the set of possible values for a given attribute, and can be considered a constraint on the value of the attribute. Mathematically, attaching a domain to an attribute means that any value for the attribute must be an element of the specified set. The character string ''"ABC"'', for instance, is not in the integer domain, but the integer value ''123'' is. Another example of domain describes the possible values for the field "CoinFace" as ("Heads","Tails"). So, the field "CoinFace" will not accept input values like (0,1) or (H,T).

==Constraints==
Constraints make it possible to further restrict the domain of an attribute. For instance, a constraint can restrict a given integer attribute to values between 1 and 10. Constraints provide one method of implementing [[business rules]] in the database and support subsequent data use within the application layer. SQL implements constraint functionality in the form of [[check constraint]]s.
Constraints restrict the data that can be stored in [[relation (database)|relations]]. These are usually defined using expressions that result in a <!-- do not change the capitalization of this link without first consulting, and replying to the talk page. Any such edits will be reverted. -->[[Boolean data type|boolean]] value, indicating whether or not the data satisfies the constraint. Constraints can apply to single attributes, to a tuple (restricting combinations of attributes) or to an entire relation.
Since every attribute has an associated domain, there are constraints ('''domain constraints'''). The two principal rules for the relational model are known as '''entity integrity''' and '''referential integrity'''.

Referential integrity is based on the simple concept of relational vector based analytic algorithms, commonly employed in cloud platforms. This enables multiple interface processing within the referential database, with the additional feature of adding an additional security layer over the dynamically defined virtual environment.<ref>{{cite book |last1=Wiese |first1=Lena |title=Advanced data management: for SQL, noSQL, cloud and distributed databases |date=2015 |publisher=Walter de Gruyter GmbH & Co KG |page=192}}</ref>

===Primary key===
{{Main|Unique key|Primary key}}
Each [[Relation (database)|relation]]/table has a primary key, this being a consequence of a relation being a [[Set (mathematics)|set]].{{Sfnp|Date|1984|p=268}}  A primary key uniquely specifies a tuple within a table.  While natural attributes (attributes used to describe the data being entered) are sometimes good primary keys, [[surrogate key]]s are often used instead. A surrogate key is an artificial attribute assigned to an object which uniquely identifies it (for instance, in a table of information about students at a school they might all be assigned a student ID in order to differentiate them). The surrogate key has no intrinsic (inherent) meaning, but rather is useful through its ability to uniquely identify a tuple.
Another common occurrence, especially in regard to N:M cardinality is the [[Compound key|composite key]]. A composite key is a key made up of two or more attributes within a table that (together) uniquely identify a record.{{citation needed|date=February 2020}}

===Foreign key===
{{Main|Foreign key}}
A foreign key is a field in a relational table that matches the primary key column of another table. It relates the two keys. Foreign keys need not have unique values in the referencing relation.  A foreign key can be used to [[cross-reference]] tables, and it effectively uses the values of attributes in the referenced relation to restrict the domain of one or more attributes in the referencing relation.  The concept is described formally as: "For all tuples in the referencing relation projected over the referencing attributes, there must exist a tuple in the referenced relation projected over those same attributes such that the values in each of the referencing attributes match the corresponding values in the referenced attributes."

===Stored procedures===
{{Main|Stored procedure}}
A stored procedure is executable code that is associated with, and generally stored in, the database. Stored procedures usually collect and customize common operations, like inserting a [[tuple]] into a [[relation (database)|relation]], gathering statistical information about usage patterns, or encapsulating complex [[business logic]] and calculations. Frequently they are used as an [[application programming interface]] (API) for security or simplicity. Implementations of stored procedures on SQL RDBMS's often allow developers to take advantage of [[Procedural programming|procedural]] extensions (often vendor-specific) to the standard [[Declarative programming|declarative]] SQL syntax.
Stored procedures are not part of the relational database model, but all commercial implementations include them.

===Index===
{{Main|Index (database)}}
An index is one way of providing quicker access to data. Indexes can be created on any combination of attributes on a [[relation (database)|relation]]. Queries that filter using those attributes can find matching tuples directly using the index (similar to [[Hash table]] lookup), without having to check each tuple in turn. This is analogous to using the [[Index (publishing)|index of a book]] to go directly to the page on which the information you are looking for is found, so that you do not have to read the entire book to find what you are looking for. Relational databases typically supply multiple indexing techniques, each of which is optimal for some combination of data distribution, relation size, and typical access pattern. Indices are usually implemented via [[B+ tree]]s, [[R-tree]]s, and [[Bitmap index|bitmaps]].
Indices are usually not considered part of the database, as they are considered an implementation detail, though indices are usually maintained by the same group that maintains the other parts of the database. The use of efficient indexes on both primary and foreign keys can dramatically improve query performance. This is because B-tree indexes result in query times proportional to log(n) where n is the number of rows in a table and hash indexes result in constant time queries (no size dependency as long as the relevant part of the index fits into memory).

==Relational operations==
{{Main|Relational algebra}}
Queries made against the relational database, and the derived [[relvars]] in the database are expressed in a [[relational calculus]] or a [[relational algebra]]. In his original relational algebra, Codd introduced eight relational operators in two groups of four operators each. The first four operators were based on the traditional mathematical [[Set theory|set operations]]:
* The [[Union (set theory)|union]] operator combines the tuples of two [[relation (database)|relations]] and removes all duplicate tuples from the result. The relational union operator is equivalent to the [[Union (SQL)|SQL UNION]] operator.
* The [[Intersection (set theory)|intersection]] operator produces the set of tuples that two relations share in common. Intersection is implemented in SQL in the form of the [[Intersect (SQL)|INTERSECT]] operator.
* The [[Complement (set theory)|difference]] operator acts on two relations and produces the set of tuples from the first relation that do not exist in the second relation. Difference is implemented in SQL in the form of the [[Except (SQL)|EXCEPT]] or MINUS operator.
* The [[cartesian product]] of two relations is a join that is not restricted by any criteria, resulting in every tuple of the first relation being matched with every tuple of the second relation. The cartesian product is implemented in SQL as the [[Cross join]] operator.
The remaining operators proposed by Codd involve special operations specific to relational databases:
* The selection, or restriction, operation retrieves tuples from a relation, limiting the results to only those that meet a specific criterion, i.e. a [[subset]] in terms of set theory. The SQL equivalent of selection is the [[Select (SQL)|SELECT]] query statement with a [[Where (SQL)|WHERE]] clause.
* The [[Projection (relational algebra)|projection operation]] extracts only the specified attributes from a tuple or set of tuples.
* The join operation defined for relational databases is often referred to as a natural join. In this type of join, two relations are connected by their common attributes. MySQL's approximation of a natural join is the [[Inner join]] operator. In SQL, an INNER JOIN prevents a cartesian product from occurring when there are two tables in a query. For each table added to a SQL Query, one additional INNER JOIN is added to prevent a cartesian product. Thus, for N tables in an SQL query, there must be N−1 INNER JOINS to prevent a cartesian product.
* The [[Relational algebra#Division|relational division]] operation is a slightly more complex operation and essentially involves using the tuples of one relation (the dividend) to partition a second relation (the divisor). The relational division operator is effectively the opposite of the cartesian product operator (hence the name).
Other operators have been introduced or proposed since Codd's introduction of the original eight including relational comparison operators and extensions that offer support for nesting and hierarchical data, among others.

==Normalization==
{{Main|Database normalization}}
Normalization was first proposed by Codd as an integral part of the relational model. It encompasses a set of procedures designed to eliminate non-simple domains (non-atomic values) and the redundancy (duplication) of data, which in turn prevents data manipulation anomalies and loss of data integrity.  The most common forms of normalization applied to databases are called the [[Database normalization#Normal forms|normal forms]].

==RDBMS==
[[File:RDBMS structure.png|thumbnail|right|The general structure of a relational database]]
{{See also|Database#Database management system}}
Connolly and Begg define Database Management System (DBMS) as a "software system that enables users to define, create, maintain and control access to the database".<ref name="Begg-p64">{{cite book|last1=Connolly|first1=Thomas M.|last2=Begg| first2=Carolyn E.|date=2014|title= Database Systems – A Practical Approach to Design Implementation and Management|edition=6th|isbn=978-1292061184|publisher=Pearson|page=64 }}</ref>  RDBMS is an extension of that acronym that is sometimes used when the underlying database is relational.

An alternative definition for a ''relational database management system'' is a database management system (DBMS) based on the [[relational model]]. Most databases in widespread use today are based on this  model.<ref>{{Cite book|url=https://www.amazon.com/Concepts-Database-Management-Philip-Pratt/dp/1285427106|title=Concepts of Database Management|last=Pratt|first=Philip J.|last2=Last|first2=Mary Z.|date=2014-09-08|publisher=Course Technology|isbn=9781285427102|edition=8|language=English|page=29}}</ref>

RDBMSs have been a common option for the storage of information in databases used for financial records, manufacturing and logistical information, personnel data, and other applications since the 1980s. Relational databases have often replaced legacy [[hierarchical database]]s and [[network database]]s, because RDBMS were easier to implement and administer. Nonetheless, relational databases received continued, unsuccessful challenges by [[object database]] management systems in the 1980s and 1990s, (which were introduced in an attempt to address the so-called [[object-relational impedance mismatch]] between relational databases and object-oriented application programs), as well as by [[XML database]] management systems in the 1990s.{{citation needed|date=March 2013}} However, due to the expanse of technologies, such as [[horizontal scaling]] of [[computer cluster]]s, [[NoSQL]] databases have recently become popular as an alternative to RDBMS databases.<ref>{{cite web|url=https://www.techrepublic.com/article/nosql-databases-eat-into-the-relational-database-market|access-date=2018-03-14|title=NoSQL databases eat into the relational database market}}</ref>

==Distributed relational databases==
[[DRDA|Distributed Relational Database Architecture]] (DRDA) was designed by a workgroup within IBM in the period 1988 to 1994. DRDA enables network connected relational databases to cooperate to fulfill SQL requests.<ref>{{cite journal|last1=Reinsch|first1=R.|title=Distributed database for SAA|journal=IBM Systems Journal|date=1988|volume=27|issue=3|pages=362–389|doi=10.1147/sj.273.0362}}</ref><ref>{{cite book|title=Distributed Relational Database Architecture Reference|date=1990|publisher=IBM Corp. SC26-4651-0}}</ref> 
The messages, protocols, and structural components of DRDA are defined by the [[Distributed Data Management Architecture]].

==Market share==
According to [[DB-Engines ranking|DB-Engines]], in September 2020, the most widely used systems were (ranked in this order):
* [[Oracle Corporation|Oracle]],
* [[MySQL]] ([[free software]]),
* [[Microsoft SQL Server]],
* [[PostgreSQL]] (free software),
* <!--in DB-Engines' other list listed after: [[MongoDB]] they themselves stating "All the power of a relational database, and more"-->
* [[IBM DB2]], <!--[[Redis]], [[Elasticsearch]], -->
* [[SQLite]] (free software),
* <!-- [[Cassandra]], -->
* [[Microsoft Access]],
* and [[MariaDB]] (free software),
* <!--score for MariaDB 91.61 + score for MySQL 1264.25  (that it forked from) = 1355.86 < than 1369.36 for Oracle, but just a tiny bit lower.-->
* [[Teradata]],
* and [[Apache Hive]] (free software; specialized for [[data warehouse]]s).<ref>{{cite web|url=http://db-engines.com/en/ranking/relational+dbms|title=DB-Engines Ranking of Relational DBMS|accessdate=2020-09-11}}</ref>

According to research company [[Gartner]], in 2011, the five leading [[proprietary software]] relational database vendors by revenue were [[Oracle Corporation|Oracle]] (48.8%), [[IBM]] (20.2%), [[Microsoft]] (17.0%), [[SAP AG|SAP]] including [[Sybase]] (4.6%), and [[Teradata]] (3.7%).<ref>{{cite web|url=http://itknowledgeexchange.techtarget.com/eye-on-oracle/oracle-the-clear-leader-in-24-billion-rdbms-market/|date=2012-04-12|accessdate=2013-03-01|title=Oracle the clear leader in $24 billion RDBMS market}}</ref>

==See also==
{{Wikibooks |Structured Query Language}}
* [[SQL]]
* [[Object database]] (OODBMS)
* [[Online analytical processing]] (OLAP) and [[ROLAP]] (Relational Online Analytical Processing)
* [[Data warehouse]]
* [[Star schema]]
* [[Snowflake schema]]
* [[List of relational database management systems]]
* [[Comparison of relational database management systems]]

==References==
{{Reflist|30em}}
{{Refbegin}}
* {{Cite book|last=Date|first=C. J.|date=1984|title=A Guide to DB2
     |publisher=[[Addison-Wesley]]|isbn=0201113171|edition=student|ol=OL2838595M|url=https://archive.org/details/guidetodb2users00date|oclc=256383726
     |authorlink=Christopher J. Date|ref=harv}}
{{Refend}}

{{Databases}}
{{Authority control}}

{{DEFAULTSORT:Relational Database}}
[[Category:Relational model| ]]
[[Category:Database theory]]
[[Category:Types of databases]]
[[Category:English inventions]]
[[Category:Computer-related introductions in 1969]]
[[Category:Relational database management systems| ]]

------------------

Le '''modèle relationnel''' est une manière de modéliser les relations existantes entre plusieurs informations, et de les ordonner entre elles. Cette modélisation qui repose sur des principes mathématiques mis en avant par [[Edgar Frank Codd|E.F. Codd]] est souvent  retranscrite physiquement (« [[wikt:implémenté|implémentée]] ») dans une [[base de données]].

== Brève description ==
On appelle « relation » un ensemble d'attributs qui caractérisent une proposition ou une combinaison de propositions comme "un employé a un matricule, il a un nom, il a un employeur". Dans cet exemple, les attributs de l'employé sont : son matricule, son nom et son employeur. Chaque combinaison de propositions ainsi formée est appelée [[tuple|uplet]] ou collection ordonnée d'objets. Par exemple l'ensemble ("1245", "Jean Dupond", "Compagnie des belles lettres") constitue un uplet de relation "employé". Les relations sont d'ordinaire représentées sous la forme de tables. Dans l'exemple précédent, la table serait libellée "employé". Usuellement, les praticiens accordent la même signification aux concepts de "relation" et de "table". De même, ils assimilent d'une part la "ligne dans la table" et l'uplet, et d'autre part le "libellé de colonne dans la table" et l'attribut. Par définition, chaque uplet d'une relation est unique. Il est identifié par un attribut (un identifiant unique appelé "clef primaire") ou une combinaison de plusieurs attributs qui forme la clef. L'ordre des uplets n'est pas significatif.

[[Edgar Frank Codd|Codd]] a défini une [[algèbre relationnelle]] et des opérateurs qui permettent de construire de nouvelles relations en combinant des relations préalablement définies. Les idées de Codd ont été implémentées -- plus ou moins fidèlement -- dans les systèmes de gestion des bases de données relationnelles ou [[SGBD|SGBDR]] telles que le projet expérimental [[IBM System R]], puis des produits commerciaux tels qu'[[Oracle (base de données)|Oracle]], [[DB2]] ou [[MySQL]], et dans le langage de manipulation des données [[Structured Query Language|SQL]].

Le modèle relationnel est aujourd’hui l'un des modèles les plus utilisés. « Les premiers systèmes de gestion de base de données ([[SGBD]] ou [[DBMS]] en anglais) bâtis sur ce modèle ont été SQL/DS et [[DB2]] de [[IBM]], d'où est né le langage de manipulation de bases relationnelles, SQL (Structured Query Language). »<ref name="ModeleRelationnel">[http://www.inrets.fr/ur/cir/bl/coursingres/oi_chap1.html#metaeditmethods Chapitre 1 le modèle relationnel], Inrets</ref> Le modèle relationnel est basé sur deux instruments puissants : l’[[algèbre relationnelle]] (c'est-à-dire le concept mathématique de relation en théorie des ensembles) et la notion de [[produit cartésien]]. Ce modèle définit une façon de représenter les données, les opérations qui peuvent être effectuées ainsi que les mécanismes pour préserver la [[consistance des données]]. E.F Codd a décrit les principes et la conception de modèle relationnel dans son livre « A relational model of data for large shared data banks ».

== Opérateurs relationnels ==

Selon E. F. Codd, une [[base de données]] définie selon le modèle relationnel est manipulée à l'aide d’un ensemble d’opérations formelles sur les relations. Les opérations relationnelles permettent par exemple de créer une nouvelle relation, qui est représentée dans ce modèle, par une table à deux dimensions<ref>Codd, E. F. A relational model of data for large shared data banks. New York : ACM, 1970 . {{ISSN|0001-0782}}.</ref>.

Le modèle relationnel définit 5 opérateurs de base qui sont l'union, la différence, la sélection (ou restriction), la projection et le produit cartésien. Ces opérateurs présentent l'avantage d'être fermés (ils agissent sur les relations et renvoient des relations qui peuvent de nouveau être combinées grâce aux opérateurs).

L'opérateur d'[[union]] permet de combiner deux relations (ou "tables") de même schéma (c'est-à-
dire deux relations comportant les mêmes attributs) et renvoie une relation de même schéma que les relations initiales et dont l'ensemble des n-uplets (c'est-à-dire uplets ou "lignes du tableau") est l'union ensembliste des n-uplets des relations qui ont été combinées (ensembliste signifie qu'il n'y a pas d'ordre dans la présentation des lignes du tableau et qu'il ne peut pas y avoir de doublons).

L'opérateur de [[différence]] est similaire (mais non symétrique) et retourne les n-uplets qui figurent dans la première relation mais pas dans la seconde.

L'opérateur de sélection (unaire) permet de retourner un sous-ensemble des n-uplets de la relation initiale. Ils doivent vérifier un critère construit sur la base d'une conjonction (et), d'une disjonction (ou), d'une négation de triplets (attribut, comparateur, valeur). Le comparateur peut être >, <, =, <>, ... La notion de valeur peut être soit une constante de type valeur numérique, chaîne de caractères, ... soit un attribut (mais alors la comparaison a lieu sur le même n-uplet). Il y a alors diminution du nombre de lignes mais le nombre de colonnes reste identique.

L'opérateur de projection (unaire) permet de réduire le nombre d'attributs retenus dans la sélection. Le nombre de colonnes est alors réduit. Cette opération peut entrainer une réduction du nombre de lignes (en cas d'absence d'un identifiant de ligne - clé). Dans l'exemple de la table "employé", une projection peut être effectuée en ne retenant que les attributs "nom" et "matricule", soit une table résultante réduite à deux colonnes.

L'opérateur de produit cartésien (binaire) permet de construire une relation dont le schéma est constitué des attributs (libellés des colonnes de la table) des deux relations. Les n-uplets fournis sont construits sur la base du produit cartésien (toutes les combinaisons possibles entre chaque ligne de la première relation et chacune des lignes de la deuxième relation)

À partir de ces 5 opérateurs de base peuvent être définis des opérateurs dérivés (n'apportent aucun pouvoir d'interrogation supplémentaire mais permettent de faciliter les manipulations).  L'opérateur d'intersection (binaire) fournit les n-uplets présents dans les deux relations, l'opérateur de jointure permet de construire des séries d'uplets comportant un identifiant commun à partir d'un produit cartésien, la division permettant d'exprimer plus facilement un quantificateur universel (une combinaison d'une différence entre relations obtenues en appliquant des produits cartésiens et des intersections).

Le langage support applicatif d'un Système de Gestion de Bases de Données reposant sur un modèle relationnel est le [[SQL]].

== Règles de gestion d'un système relationnel de base des données ==
{{article détaillé|12 règles de Codd}}
;Règle 1 : ''Unicité'' :
:Toute l'information dans la base de données est représentée d'une et une seule manière, à savoir par des valeurs dans des champs de colonnes de tables.
;Règle 2 : ''Garantie d'accès'' :
:Toutes les données doivent être accessibles sans ambiguïté. Cette règle est essentiellement un ajustement de la condition fondamentale pour des clefs primaires. Elle indique que chaque valeur scalaire individuelle dans la base de données doit être logiquement accessible en indiquant le nom de la table contenante, le nom de la colonne contenante et la valeur principale primaire de la rangée contenante.
;Règle 3 : ''Traitement des valeurs nulles'' :
:Le système de gestion de bases de données doit permettre à chaque champ de demeurer nul (ou vide). Spécifiquement, il doit soutenir une représentation "d'information manquante et d'information inapplicable" qui est systématique, distincte de toutes les valeurs régulières (par exemple, "distincte de zéro ou tous autres nombres," dans le cas des valeurs numériques), et ce indépendamment  du type de données. Cela implique également que de telles représentations doivent être gérées par le système de gestion de bases de données d'une manière systématique.
;Règle 4 : ''Catalogue lui-même relationnel'' :
:Le système doit supporter un catalogue en ligne, intégré, relationnel, accessible aux utilisateurs autorisés au moyen de leur langage d'interrogation régulier. Les utilisateurs doivent donc pouvoir accéder à la structure de la base de données (catalogue) employant le même langage d'interrogation qu'ils emploient pour accéder aux données de la base de données.
;Règle 5 : ''Sous-langage de données'' :
:Le système doit soutenir au moins un langage relationnel qui:
::# a une syntaxe linéaire
::# peut être employé interactivement et dans des programmes d'application,
::# supporte des opérations de  définition d'informations supplémentaires (incluant des définitions de vues),  de manipulation de données (mise à jour aussi bien que la récupération), de contraintes de sécurité et d'intégrité, et des opérations de gestion de transaction (commencer, valider et annuler une transaction).
;Règle 6 : ''Mise à jour des vues'' :
:Toutes les vues  pouvant théoriquement être mises à jour doivent pouvoir l'être par le système.
;Règle 7 : ''Insertion, mise à jour, et effacement de haut niveau'' :
:Le système doit supporter les opérations par lot d'insertion, de mise à jour et de suppression. Ceci signifie que des données peuvent être extraites d'une base de données relationnelle dans des ensembles constitués par des données issues de plusieurs uplets et/ou de multiples table. Cette règle explique que l'insertion, la mise à jour, et les opérations d'effacement devraient être supportées aussi bien pour des lots d'uplets issues de plusieurs tables que juste pour un uplet unique issu d'une table unique.
;Règle 8 : ''Indépendance physique'' :
:Les modifications au niveau physique (comment les données sont stockées, si dans les rangées ou les listes liées, etc.) ne nécessitent pas un changement d'une application basée sur les structures.
;Règle 9 : ''Indépendance logique'' :
:Les changements au niveau logique (tables, colonnes, rangées, etc) ne doivent pas exiger un changement dans l'application basée sur les structures. L'indépendance de données logiques est plus difficile à atteindre que l'indépendance de données physiques.
;Règle 10 : ''Indépendance d'intégrité'' :
:Des contraintes d'intégrité doivent être indiquées séparément des programmes d'application et être stockées dans le catalogue. Il doit être possible de changer de telles contraintes au fur et à mesure sans affecter inutilement les applications existantes.
;Règle 11 : ''Indépendance de distribution'' :
:La distribution des parties de la base de données à diverses localisations doit être invisible aux utilisateurs de la base de données. Les applications existantes doivent continuer à fonctionner avec succès :
::# quand une version distribuée du système de gestion de bases de données est d'abord présentée ; et
::# quand des données existantes sont redistribués dans le système.
;Règle 12 : ''Règle de non-subversion'' :
:Si le système fournit une interface avec langage de bas niveau, cette interface ne doit pas permettre de contourner le système (par exemple pour ajouter une contrainte relationnelle de sécurité ou d'intégrité) : ces contraintes doivent être exprimées dans le langage relationnel de haut niveau.

== Principe du modèle relationnel ==
L'idée centrale du modèle relationnel est de décrire un ensemble de données comme une collection de [[prédicat (logique mathématique)|prédicats]] sur un ensemble fini de variables sous-jacentes, décrivant les contraintes sur les valeurs et les combinaisons de valeurs possibles. Le contenu de l'ensemble de données qui en résulte à un instant t, le [[modèle conceptuel des données]], est transcriptible dans une base de données à travers un [[modèle physique des données]]. C'est un modèle fini (logique) de la base de données, à savoir un ensemble de relations, une par variable de relation, de telle sorte que tous les prédicats sont satisfaits. Une demande d'informations de la base de données (une requête de base de données) est également un prédicat. Un grand avantage des données construites à partir de ce modèle relationnel est que l’utilisateur peut, dans sa retranscription physique en base de données, y accéder sans savoir où sont physiquement les données ni comment elles sont stockées. C’est un grand avantage par rapport au [[modèle hiérarchique]] implémenté dans les [[Base de données hiérarchique|bases de données hiérarchique]] ou au [[Base de données réseau|modèle réseau]]<ref name="MCDauMDP">[http://wwwens.uqac.ca/~pdelisle/8trd104/Fichiers/Cours9MPD-Relationnel.ppt#metaeditmethods Cours 9 Passage du MCD au MPD Le modèle relationnel], Delisle, Pierre </ref>.

== La modélisation relationnelle et sa transcription en base de données ==

La modélisation relationnelle une fois achevée permet de matérialiser les relations sous forme de tables à deux dimensions. Chaque colonne possède un identificateur qui représente un domaine. On appelle uplet ou n-uplet un set des valeurs des attributs incoordonnés, c'est-à-dire la ligne de table. La relation peut donc être définie par le set de n-uplets.  « Chaque opération relationnelle sur une table génère une nouvelle relation et les opérateurs relationnels – ceux du langage SQL, permettent de décrire le résultat que l’on veut obtenir sans avoir à décrire la procédure nécessaire pour arriver au résultat : on dit que le langage relationnel est « non procédural »<ref name="ModeleRelationnel"/>.[[Fichier:relation.png|thumb|130px|relation.]]

Pour lier les relations entre elles on utilise la notion de [[clé primaire]] et de [[clé étrangère]]. La clé primaire d’une relation est un [[attribut]] ou un ensemble d'attributs qui permet de désigner d’une façon unique un uplet (par exemple l'attribut Référence Client permet d'identifier de façon unique les uplets de la relation Clients). La seule connaissance de la clé primaire permet d'identifier toute ligne dans une table. Par ailleurs, la clé étrangère est un identifiant qui fait référence à une clé unique dans une autre table<ref name="commentCaMarche">[http://www.commentcamarche.net/contents/relation/relintro.php3#metaeditmethods Le modele realationnel], Comment ca marche</ref>. Par exemple, dans la Relation Facture, l'attribut Client contient la référence client et donc permet de retrouver toutes les informations du client concerné dans la relation Clients. 

Au sens mathématique la relation est un sous-ensemble du [[produit cartésien]] de certains domaines. Un domaine est représenté comme un ensemble des valeurs : R = (A1 X A2 X A3).[[Fichier:table relationnel.png|thumb|360px|table_relationnel.]]
Cette relation R est représentée par une table de 3 colonnes (trois attributs) A1, A2, A3 dont chaque ligne est caractérisée par différente valeurs dans les domaines A1, A2, A3.Pour modéliser l’entité du monde réel « voiture » on prendra comme constituants la marque, la couleur, la plaque d’immatriculation et la date de création : voiture (marque, couleur, plaque-immatriculation, date-création). Les domaines correspondant aux identifiants de colonnes peuvent être déterminés par les ensembles de valeurs suivants :

'''marque''' : chaine de 1 à 50 caractères alphabétiques.

'''couleur''' : chaine de 1 à 30 caractères alphabétiques.

'''plaque-immatriculation''' : chaine de 1 à 10 caractères alphabétiques.

'''date-création''' : dates depuis le {{date-|1 janvier 1800}} jusqu’au présent.

== Terminologie structurelle <ref>{{Ouvrage|langue = Anglais|auteur1 = Chris J. Date|titre = Database in depth : relational theory for practitioners|lieu =|éditeur = O'Reilly|année = 2005|pages totales = 208|isbn = 0596100124|lire en ligne =|passage =}}</ref> ==
Les objets de base souvent référencés dans la modélisation relationnelle sont les domaines, les relations, les attributs, les degrés et les uplets. La figure suivante illustre bien ces concepts :
[[Fichier:Figure structure relationnelle.png|alt=Figure illustrant la terminologie structurelle|centre|frameless|679x679px|Terminologie structurelle]]

=== Domaine ===
Le domaine représente un ensemble fini de valeur possible pour un attribut donné auquel on définit aussi un ensemble d’opérateurs pouvant être appliqués aux valeurs du domaine. Il faut toutefois faire la distinction entre les domaines et leurs représentations physiques dans le système puisqu’un domaine peut être représenté dans un type de base qui possède des opérations qui ne sont pas représentatives du domaine.

Par exemple, dans la figure ci-dessus, on définit D4 comme l’ensemble des pays de la terre. Alors, puisque l’attribut Pays appartient à D4, les valeurs possibles pour l’attribut se limitent aux valeurs définies dans D4 (c.i. : l’ensemble des pays de la terre). Aussi, supposons que le domaine D4 ne définit qu’une seule opération, la mise en majuscule. Dans ce cas, même si le pays est physiquement représenté par une chaîne de caractères il ne sera pas possible d’y appliquer des opérations autres que la mise en majuscule.

=== Uplet ===
Grossièrement, un uplet est un enregistrement (une ligne) dans la base de données.

Plus formellement, un uplet est un élément [[:en:First_normal_form#Atomicity|atomique]] comportant un entête et un corps. L'entête est un ensemble des noms d’attributs et de leurs domaines et le corps est un ensemble de triplets <Nom du domaine, Nom d’attribut, Valeur>.

=== Attributs ===
Un attribut est simplement la valeur associée à un des triplets d’un uplet.

=== Clé candidate ===
Une [[clé candidate]] est un ensemble des données permettant d’indexer chaque ligne d’une table donnée de manière différenciée. Parmi les clés candidates, on en désigne une comme étant la [[clé primaire]] de la table.

=== Relation ===
Une relation (ou table) est un élément constitué d’un entête et d’un corps. L’entête est un ensemble des noms d’attributs et de leurs domaines et le corps est un ensemble de uplets ayant le même entête que la relation.

Attention à ne pas confondre avec le concept de relation entre les tables.

=== Degré ===
Le degré est le nombre d’attributs dans une relation.

== Cardinalité de relation ==

Le modèle relationnel prévoit trois types de relations entre tables : 1:1, 1:N et N:N. Les relations entre les tables sont définies dans la colonne partagée. Ce modèle ne soutient pas directement les relations N:N qui seront en fait traduites en deux relations 1:N.

=== Relation 1:1 ===
Dans deux tables A et B de relation 1:1, un uplet de la table A se rapporte seulement à un uplet de la table B.

Par exemple, un [[ministre]] est à la tête d'un ministère et un ministère ne comporte qu'un seul ministre : la table « Ministères » est en relation 1:1 avec la table « Ministres ».

=== Relation 1:N ===
Dans deux tables A et B de relation 1:N, un uplet de la table A peut se rapporter à plusieurs uplets de la table B, et un uplet de la table B seulement à une uplet de la table A.

Par exemple, un seul membre de la table « Internats » peut se rapporter à plusieurs membres de la table « Élèves ».

=== Relation N:N ===
Dans deux tables A et B de relation N:N, un uplet de la table A peut se rapporter à plusieurs uplets de la table B et un uplet de la table B peut se rapporter à plusieurs uplets de la table A. Une relation N:N peut donc être décomposées en deux relations 1:N.

Par exemple, dans une [[école secondaire]], une classe a plusieurs professeurs et un professeur est responsable de plusieurs classes : les tables « Classes » et « Professeurs » sont en relation N:N.

== Notes et références ==
{{Crédit d'auteurs|interne|Edgar Frank Codd}}
{{Références}}

== Voir aussi ==
{{Autres projets
|commons=Category:Relational models
|wiktionary=modèle relationnel
|wikiversity=Introduction aux systèmes de bases de données/Le modèle relationnel
}}

* [[Base de données relationnelle]]
* [[Forme normale (bases de données relationnelles)|Formes normales]]
* [[Structured Query Language|SQL]]
* [[Système de gestion de base de données]]
* [[Langage de requête]]
* [[Pick (système d'exploitation)]]
* [[Relation multivaleur]]
* [[Schéma conceptuel]]
* [[Table (base de données)]]

== Liens externes ==
* {{fr}} {{Lien web|url=http://laurent-audibert.developpez.com/Cours-BD/?page=bases-de-donnees-relationnelles#L3-1-3|auteur=Laurent Audibert|site=developpez.com|titre=Passage du modèle entités-associations au modèle relationnel}}
* {{en}} [http://db.grussell.org/section006.html Mapping ER Models into Relations]
* {{en}} [http://hsqldb.org HSQLDB sur SourceForge.net]

{{portail|bases de données}}

{{DEFAULTSORT:Modele relationnel}}
[[Catégorie:Base de données]]
[[Catégorie:Modélisation des données]]
