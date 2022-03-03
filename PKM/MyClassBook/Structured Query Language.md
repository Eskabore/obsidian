{{About|the database language|the IATA code|San Carlos Airport (California)}}
{{redirect|SEQUEL|the topic of the word|sequel|other uses|sequel (disambiguation)}}

# SQL

![[Pasted image 20201020165850.png]]
**[[SQL]]** is a [[domain-specific language]] used in programming and designed for managing data held in a [[relational database management system]] (RDBMS), or for stream processing in a [[relational data stream management system]] (RDSMS). It is particularly useful in handling [[Data model|structured data]], i.e. data incorporating relations among entities and variables.

SQL offers two main advantages over older read&ndash;write [[API]]s such as [[ISAM]] or [[VSAM]]. Firstly, it introduced the concept of accessing many records with one single command. Secondly, it eliminates the need to specify ''how'' to reach a record, e.g. with or without an [[Database index|index]].

Originally based upon [[relational algebra]] and [[tuple relational calculus]], SQL consists of many types of statements,<ref>[[SQL-92]], 4.22 SQL-statements, 4.22.1  Classes of SQL-statements "There are at least five ways of classifying SQL-statements:", 4.22.2, SQL statements classified by function "The following are the main classes of SQL-statements:"; [[SQL:2003]] 4.11 SQL-statements, and later revisions.</ref> which may be informally classed as [[sublanguage]]s, commonly: a [[data query language]] (DQL),{{efn|Formally, "SQL-data" statements ''excluding'' "SQL-data change" statements; this is primarily the [[Select (SQL)|Select]] statement.}} a [[data definition language]] (DDL),{{efn|Formally, "SQL-schema" statements.}} a [[data control language]] (DCL), and a [[data manipulation language]] (DML).{{efn|Formally, "SQL-data change" statements}}<ref>{{cite book
|title=Structured Query Language By Example - Volume I: Data Query Language
|first=Mark
|last=Chatham
|year=2012
|isbn=978-1-29119951-2
|page=[https://books.google.com/books?id=64MBBAAAQBAJ&pg=PA8 8]
}}</ref> The scope of SQL includes data query, data manipulation (insert, update and delete), data definition ([[database schema|schema]] creation and modification), and data access control. Although SQL is essentially a [[Declarative programming|declarative language]] ([[4GL]]), it also includes [[Procedural programming|procedural]] elements.

SQL was one of the first commercial languages to utilize [[Edgar F. Codd]]’s [[relational model]]. The model was described in his influential 1970 paper, "A Relational Model of Data for Large Shared Data Banks".<ref name="codd-relational-model" />  Despite not entirely adhering to [[Codd's 12 rules|the relational model as described by Codd]], it became the most widely used database language.<ref name="SQL-Fundamentals" /><ref name="IBM-sql" />

SQL became a [[Technical standard|standard]] of the [[American National Standards Institute]] (ANSI) in 1986, and of the [[International Organization for Standardization]] (ISO) in 1987.<ref name="ISO 9075:1987" /> Since then the standard has been revised to include a larger set of features. Despite the existence of standards, most SQL code requires at least some changes before being ported to different database systems.
![[Pasted image 20201020170108.png]]

==History==

SQL was initially developed at [[IBM]] by [[Donald D. Chamberlin]] and [[Raymond F. Boyce]] after learning about the relational model from [[Edgar F. Codd]]<ref name="Early History"/> in the early 1970s.<ref name="chamberlin-boyce-sequel" /> This version, initially called ''SEQUEL'' (''Structured English Query Language''), was designed to manipulate and retrieve data stored in [[IBM]]'s original quasi-relational database management system, [[IBM System R|System R]], which a group at [[IBM Almaden Research Center|IBM San Jose Research Laboratory]] had developed during the 1970s.<ref name="chamberlin-boyce-sequel" />

Chamberlin and Boyce's first attempt at a relational database language was Square, but it was difficult to use due to subscript notation. After moving to the San Jose Research Laboratory in 1973, they began work on SEQUEL.<ref name="Early History"/> The acronym SEQUEL was later changed to SQL because "SEQUEL" was a [[trademark]] of the [[United Kingdom|UK-based]] [[Hawker Siddeley]] Dynamics Engineering Limited company.<ref name="oppel-databases" />

After testing SQL at customer test sites to determine the usefulness and practicality of the system, IBM began developing commercial products based on their System R prototype including [[IBM System/38|System/38]], [[IBM SQL/DS|SQL/DS]], and [[IBM DB2|DB2]], which were commercially available in 1979, 1981, and 1983, respectively.<ref name="IBM-history" />

In the late 1970s, Relational Software, Inc. (now [[Oracle Corporation]]) saw the potential of the concepts described by Codd, Chamberlin, and Boyce, and developed their own SQL-based [[Relational database|RDBMS]] with aspirations of selling it to the [[United States Navy|U.S. Navy]], [[Central Intelligence Agency]], and other [[Federal government of the United States|U.S. government]] agencies. In June 1979, Relational Software, Inc. introduced the first commercially available implementation of SQL, [[Oracle Database|Oracle]] V2 (Version2) for [[VAX]] computers.

By 1986, [[ANSI]] and [[ISO]] standard groups officially adopted the standard "Database Language SQL" language definition. New versions of the standard were published in 1989, 1992, 1996, 1999, 2003, 2006, 2008, 2011<ref name="Early History">{{cite journal|last1=Chamberlin|first1=Donald|title=Early History of SQL|journal=IEEE Annals of the History of Computing|date=2012|volume=34|issue=4|pages=78–82|doi=10.1109/MAHC.2012.61}}</ref> and, most recently, 2016.{{citation needed|date=May 2020}}

==Syntax==
{{Main|SQL syntax}}

![[Pasted image 20201020170215.png]]

|

The SQL language is subdivided into several language elements, including:

* ''Clauses'', which are constituent components of statements and queries. (In some cases, these are optional.)<ref name="ANSI/ISO/IEC" />
* ''Expressions'', which can produce either [[scalar (computing)|scalar]] values, or [[table (database)|tables]] consisting of [[column (database)|columns]] and [[row (database)|rows]] of data
* ''Predicates'', which specify conditions that can be evaluated to SQL [[ternary logic|three-valued logic (3VL)]] (true/false/unknown) or [[Boolean logic|Boolean]] [[truth value]]s and are used to limit the effects of statements and queries, or to change program flow.
* ''Queries'', which retrieve the data based on specific criteria. This is an important element of ''SQL''.
* ''Statements'', which may have a persistent effect on schemata and data, or may control [[Database transaction|transactions]], program flow, connections, sessions, or diagnostics.
** SQL statements also include the [[semicolon]] (";") statement terminator. Though not required on every platform, it is defined as a standard part of the SQL grammar.
* ''[[Whitespace (computer science)|Insignificant whitespace]]'' is generally ignored in SQL statements and queries, making it easier to format SQL code for readability.

==Procedural extensions==

SQL is designed for a specific purpose: to query [[data]] contained in a [[relational database]]. SQL is a [[Set (computer science)|set]]-based, [[declarative programming language]], not an [[imperative programming language]] like [[C (programming language)|C]] or [[BASIC]]. However, extensions to Standard SQL add [[procedural programming language]] functionality, such as control-of-flow constructs. These include:

![[Pasted image 20201020170338.png]]

In addition to the standard SQL/PSM extensions and proprietary SQL extensions, procedural and [[object-oriented programming language|object-oriented]] programmability is available on many SQL platforms via DBMS integration with other languages. The SQL standard defines [[SQL/JRT]] extensions (SQL Routines and Types for the Java Programming Language) to support [[Java (programming language)|Java]] code in SQL databases. [[Microsoft SQL Server 2005]] uses the [[SQLCLR]] (SQL Server Common Language Runtime) to host managed [[Microsoft .NET|.NET]] assemblies in the database, while prior versions of SQL Server were restricted to unmanaged extended stored procedures primarily written in C. [[PostgreSQL]] lets users write functions in a wide variety of languages—including [[Perl]], [[Python (programming language)|Python]], [[Tcl]], [[JavaScript]] (PL/V8) and C.<ref name="PostgreSQL server programming" />

==Interoperability and standardization==
===Overview===
SQL implementations are incompatible between vendors and do not necessarily completely follow standards. In particular date and time syntax, string concatenation, <code>NULL</code>s, and comparison [[case sensitivity]] vary from vendor to vendor. Particular exceptions are [[PostgreSQL]]<ref name="About PostgreSQL" /> and [[Mimer SQL]]<ref name="Mimer SQL, Built on Standards" /> which strive for standards compliance, though PostgreSQL does not adhere to the standard in how folding of unquoted names is done. The folding of unquoted names to lower case in PostgreSQL is incompatible with the SQL standard,<ref>{{cite web|url=https://www.postgresql.org/docs/current/static/sql-syntax-lexical.html#SQL-SYNTAX-IDENTIFIERS|title=4.1. Lexical Structure|date=2018|website=PostgreSQL documentation}}</ref> which says that unquoted names should be folded to upper case.<ref>{{cite web|url=http://www.contrib.andrew.cmu.edu/~shadow/sql/sql1992.txt|title=(Second Informal Review Draft) ISO/IEC 9075:1992, Database Language SQL, Section 5.2, syntax rule 11|date=30 July 1992}}</ref> Thus, <code>Foo</code> should be equivalent to <code>FOO</code> not <code>foo</code> according to the standard.

Popular implementations of SQL commonly omit support for basic features of Standard SQL, such as the <code>DATE</code> or <code>TIME</code> data types.  The most obvious such examples, and incidentally the most popular commercial and proprietary SQL DBMSs, are Oracle (whose <code>DATE</code> behaves as <code>DATETIME</code>,<ref name="Ora DATE" /><ref name="Ora DATETIME" /> and lacks a <code>TIME</code> type)<ref name="Ora TIME" /> and MS SQL Server (before the 2008 version). As a result, SQL code can rarely be ported between database systems without modifications.
===Reasons for incompatibility===
There are several reasons for this lack of portability between database systems:

* The complexity and size of the SQL standard means that most implementors do not support the entire standard.
* The standard does not specify database behavior in several important areas (e.g. [[index (database)|indexes]], file storage...), leaving implementations to decide how to behave.
* The SQL standard precisely specifies the syntax that a conforming database system must implement. However, the standard's specification of the semantics of language constructs is less well-defined, leading to ambiguity.
* Many database vendors have large existing customer bases; where the newer version of the SQL standard conflicts with the prior behavior of the vendor's database, the vendor may be unwilling to break [[backward compatibility]].
* There is little commercial incentive for vendors to make it easier for users to change database suppliers (see [[vendor lock-in]]).
* Users evaluating database software tend to place other factors such as performance higher in their priorities than standards conformance.
===Standardization history===
SQL was adopted as a standard by the [[American National Standards Institute]] (ANSI) in 1986 as SQL-86<ref name="X3H2" /> and the [[International Organization for Standardization]] (ISO) in 1987.<ref name="ISO 9075:1987" /> It is maintained by [[ISO/IEC JTC 1/SC 32|''ISO/IEC JTC 1, Information technology, Subcommittee SC 32, Data management and interchange'']].

Until 1996, the [[National Institute of Standards and Technology]] (NIST) data management standards program certified SQL DBMS compliance with the SQL standard. Vendors now self-certify the compliance of their products.<ref name="Doll" />

The original standard declared that the official pronunciation for "SQL" was an [[initialism]]: {{IPAc-en|ˌ|ɛ|s|ˌ|k|juː|ˈ|ɛ|l}} ("ess cue el").<ref name="SQL-Fundamentals" /> Regardless, many English-speaking database professionals (including [[Donald Chamberlin]] himself<ref name="Gillespie" />) use the [[acronym]]-like pronunciation of {{IPAc-en|ˈ|s|iː|k|w|əl}} ("sequel"),<ref name="Melton" /> mirroring the language's pre-release development name, "SEQUEL".<ref name=chamberlin-boyce-sequel /><ref name=oppel-databases /><ref name="Gillespie" /><ref name=chamberlin-boyce-sequel /><br> The SQL standard has gone through a number of revisions:

![[Pasted image 20201020170454.png]]
===Current standard===
The standard is commonly denoted by the pattern: ''ISO/IEC 9075-n:yyyy Part n: title'', or, as a shortcut, ''ISO/IEC 9075''.

''ISO/IEC 9075'' is complemented by ''ISO/IEC 13249: SQL Multimedia and Application Packages'' (SQL/MM), which defines SQL based interfaces and packages to widely spread applications like video, audio and [[Georeference|spatial data]].
Interested parties may purchase SQL standards documents from ISO,<ref name="ISO/IEC 9075-2:2016" /> IEC or ANSI. A draft of SQL:2008 is freely available as a [[ZIP (file format)|zip]] archive.<ref name="Whitemarsh" />
====Anatomy of SQL Standard====
The SQL standard is divided into ten parts. There are gaps in the numbering due to the withdrawal of outdated parts.
<div class="references-small" style="font-size:90%;">
* ISO/IEC 9075-1:2016 Part 1: ''Framework'' (SQL/Framework). It provides logical concepts.<ref name="ISO/IEC" />
* ISO/IEC 9075-2:2016 Part 2: ''Foundation'' (SQL/Foundation). It contains the most central elements of the language and consists of both ''mandatory and optional'' features.
* ISO/IEC 9075-3:2016 Part 3: ''Call-Level Interface'' ([[SQL/CLI]]). It defines interfacing components (structures, procedures, variable bindings) that can be used to execute SQL statements from applications written in Ada, C respectively C++, COBOL, Fortran, MUMPS, Pascal or PL/I. (For Java see part 10.) SQL/CLI is defined in such a way that SQL statements and SQL/CLI procedure calls are treated as separate from the calling application's source code. [[Open Database Connectivity]] is a well-known superset of SQL/CLI. This part of the standard consists solely of ''mandatory'' features.
* ISO/IEC 9075-4:2016 Part 4: ''Persistent stored modules'' ([[SQL/PSM]]). It standardizes procedural extensions for SQL, including flow of control, condition handling, statement condition signals and resignals, cursors and local variables, and assignment of expressions to variables and parameters. In addition, SQL/PSM formalizes declaration and maintenance of persistent database language routines (e.g., "stored procedures"). This part of the standard consists solely of ''optional'' features.
* ISO/IEC 9075-9:2016 Part 9: ''Management of External Data'' ([[SQL/MED]]). It provides extensions to SQL that define foreign-data wrappers and datalink types to allow SQL to manage external data. External data is data that is accessible to, but not managed by, an SQL-based DBMS. This part of the standard consists solely of ''optional'' features.
* ISO/IEC 9075-10:2016 Part 10: ''Object language bindings'' ([[SQL/OLB]]). It defines the syntax and semantics of [[SQLJ]], which is SQL embedded in Java (see also part 3). The standard also describes mechanisms to ensure binary portability of SQLJ applications, and specifies various Java packages and their contained classes. This part of the standard consists solely of ''optional'' features. Unlike SQL/OLB [[JDBC]] defines an [[API]] and is not part of the SQL standard.{{citation needed|date=February 2013}}
* ISO/IEC 9075-11:2016 Part 11: ''Information and definition schemas'' ([[SQL/Schemata]]). It defines the Information Schema and Definition Schema, providing a common set of tools to make SQL databases and objects self-describing. These tools include the SQL object identifier, structure and integrity constraints, security and authorization specifications, features and packages of ISO/IEC 9075, support of features provided by SQL-based DBMS implementations, SQL-based DBMS implementation information and sizing items, and the values supported by the DBMS implementations.<ref name="ISO/IEC 9075-11:2008" /> This part of the standard contains both ''mandatory and optional'' features.
* ISO/IEC 9075-13:2016 Part 13: ''SQL Routines and types using the Java TM programming language'' ([[SQL/JRT]]). It specifies the ability to invoke static Java methods as routines from within SQL applications ('Java-in-the-database'). It also calls for the ability to use Java classes as SQL structured user-defined types. This part of the standard consists solely of ''optional'' features.
* ISO/IEC 9075-14:2016 Part 14: ''XML-Related Specifications'' ([[SQL/XML]]). It specifies SQL-based extensions for using XML in conjunction with SQL. The ''XML'' data type is introduced, as well as several routines, functions, and XML-to-SQL data type mappings to support manipulation and storage of XML in an SQL database.<ref name="SQLXML2006" /> This part of the standard consists solely of ''optional'' features.{{Citation needed|date=July 2012}}
*ISO/IEC 9075-15:2019 Part 15: ''Multi-dimensional arrays'' (SQL/MDA). It specifies a multidimensional array type (MDarray) for SQL, along with operations on MDarrays, MDarray slices, MDarray cells, and related features. This part of the standard consists solely of ''optional'' features.
</div>

====Extensions to the ISO/IEC Standard====
ISO/IEC 9075 is complemented by ISO/IEC 13249 ''SQL Multimedia and Application Packages''. This closely related but separate standard is developed by the same committee. It defines interfaces and packages based on SQL. The aim is a unified access to typical database applications like text, pictures, data mining or [[Georeference|spatial data]].
{{Div col}}
<div class="references-small" style="font-size:90%;">
* ISO/IEC 13249-1:2016 Part 1: ''Framework''
* ISO/IEC 13249-2:2003 Part 2: ''Full-Text''
* ISO/IEC 13249-3:2016 Part 3: ''Spatial''
* ISO/IEC 13249-5:2003 Part 5: ''Still image''
* ISO/IEC 13249-6:2006 Part 6: ''Data mining''
* ISO/IEC 13249-7:2013 Part 7: ''History''
* ISO/IEC 13249-8:xxxx Part 8: ''Metadata Registry Access''  [https://www.iso.org/standard/73181.html MRA] (work in progress)
</div>
{{Div col end}}
ISO/IEC 9075 is also accompanied by a series of Technical Reports, published as ISO/IEC TR 19075 in 8 parts. These Technical Reports explain the justification for and usage of some features of SQL, giving examples where appropriate. The Technical Reports are non-normative; if there is any discrepancy from 9075, the text in 9075 holds. Currently available 19075 Technical Reports are:
{{Div col}}
<div class="references-small" style="font-size:90%;">
* ISO/IEC TR 19075-1:2011 Part 1: XQuery Regular Expression Support in SQL
* ISO/IEC TR 19075-2:2015 Part 2: SQL Support for Time-Related Information
* ISO/IEC TR 19075-3:2015 Part 3: SQL Embedded in Programs using the Java programming language
* ISO/IEC TR 19075-4:2015 Part 4: SQL with Routines and types using the Java programming language
* ISO/IEC TR 19075-5:2016 Part 5: Row Pattern Recognition in SQL
* ISO/IEC TR 19075-6:2017 Part 6: SQL support for JavaScript Object Notation (JSON)
* ISO/IEC TR 19075-7:2017 Part 7: Polymorphic table functions in SQL
* ISO/IEC TR 19075-8:2019 Part 8: Multi-Dimensional Arrays (SQL/MDA)
</div>
{{Div col end}}

==Alternatives==
A distinction should be made between alternatives to SQL as a language, and alternatives to the relational model itself.  Below are proposed relational alternatives to the SQL language.  See [[navigational database]] and [[NoSQL]] for alternatives to the relational model.
{{Div col}}
* [[.QL]]: object-oriented Datalog
* [[4th Dimension (Software)|4D Query Language]] (4D QL)
* [[Datalog]]: critics suggest that [[Datalog]] has two advantages over SQL: it has cleaner semantics, which facilitates program understanding and maintenance, and it is more expressive, in particular for recursive queries.<ref name="PROLE" />
* [[HTSQL]]: URL based query method
* [[IBM Business System 12]] (IBM BS12): one of the first fully relational database management systems, introduced in 1982
* [[ISBL]]
* [[Java Object Oriented Querying|jOOQ]]: SQL implemented in Java as an [[Domain-specific language|internal domain-specific language]]
* [[Java Persistence Query Language]] (JPQL): The query language used by the Java Persistence API and [[Hibernate (Java)|Hibernate]] persistence library
* [[JavaScript]]: [[MongoDB]] implements its query language in a JavaScript API.
* [[Language Integrated Query|LINQ]]: Runs SQL statements written like language constructs to query collections directly from inside [[.NET Framework|.Net]] code.
* [[Object Query Language]]
* QBE ([[Query By Example]]) created by Moshè Zloof, IBM 1977
* [[QUEL query languages|Quel]] introduced in 1974 by the U.C. Berkeley Ingres project.
* [[Tutorial D]]
* [[XQuery]]
{{Div col end}}

==Distributed SQL processing==
[[DRDA|Distributed Relational Database Architecture]] (DRDA) was designed by a work group within IBM in the period 1988 to 1994. DRDA enables network connected relational databases to cooperate to fulfill SQL requests.<ref>{{cite journal|last1=Reinsch, R.|title=Distributed database for SAA|journal=IBM Systems Journal|date=1988|volume=27|issue=3|pages=362–389|doi=10.1147/sj.273.0362}}</ref><ref>{{cite book|title=Distributed Relational Database Architecture Reference|date=1990|publisher=IBM Corp. SC26-4651-0}}</ref>

An interactive user or program can issue SQL statements to a local RDB and receive tables of data and status indicators in reply from remote RDBs. SQL statements can also be compiled and stored in remote RDBs as packages and then invoked by package name. This is important for the efficient operation of application programs that issue complex, high-frequency queries. It is especially important when the tables to be accessed are located in remote systems.

The messages, protocols, and structural components of DRDA are defined by the [[Distributed Data Management Architecture]].

==Criticisms==
===Design===

SQL deviates in several ways from its theoretical foundation, the [[relational model]] and its [[tuple relational calculus|tuple calculus]].  In that model, a table is a [[set (mathematics)|set]] of tuples, while in SQL, tables and query results are [[list (computing)|list]]s of rows: the same row may occur multiple times, and the order of rows can be employed in queries (e.g. in the LIMIT clause).

Critics argue that SQL should be replaced with a language that returns strictly to the original foundation: for example, see ''[[The Third Manifesto]]''. However, no known proof exists that such uniqueness cannot be added to SQL itself,<ref>{{Cite web|title=Khan Academy {{!}} Free Online Courses, Lessons & Practice|url=https://www.khanacademy.org/|website=Khan Academy|language=en|access-date=2020-05-29}}</ref> or at least a variation of SQL. In other words, it's quite possible that SQL can be "fixed" or at least improved in this regard such that the industry may not have to switch to a completely different query language to obtain uniqueness. Debate on this remains open.

===Other criticisms===
Chamberlin discusses four historical criticisms of SQL in a 2012 paper:<ref name="Early History" />

====Orthogonality and completeness====
Early specifications did not support major features, such as primary keys. Result sets could not be named, and sub-queries had not been defined. These were added in 1992.<ref name="Early History" />

====Null====
The concept of [[Null_(SQL)|Null]] is the subject of some [[Null_(SQL)#Criticisms|debates]]. The Null marker indicates that there is no value, even no 0 for an integer column or a string of length 0 for a text column. The concept of Nulls enforces the [[Null_(SQL)#Comparisons_with_NULL_and_the_three-valued_logic_(3VL)|3-valued-logic in SQL]], which is a concrete implementation of the general [[Three-valued_logic|3-valued logic]].

====Duplicates====
Another popular criticism is that it allows duplicate rows, making integration with languages such as [[Python (programming language)|Python]], whose data types might make it difficult to accurately represent the data,<ref name="Early History" /> difficult in terms of parsing and by the absence of modularity.<ref name="sqlsucks">{{cite web|last1=Schauder|first1=Jen|title=Why SQL Sucks|url=http://blog.schauderhaft.de/2010/02/15/why-sql-sucks/|website=Schauderhaft|accessdate=3 February 2018}}</ref>

This can be avoided declaring a unique constraint with one or more fields that identifies uniquely a row in the table. That constraint could also become the primary key of the table.

====Impedance mismatch====
In a similar sense to [[Object-relational impedance mismatch]], there is a mismatch between the declarative SQL language and the procedural languages that SQL is typically embedded in.

==Data Integrity Categories==

Main data integrity categories of each RDBMS.
===Entity integrity===
Establishes that within the table the primary key has a unique value for each row, checking the uniqueness of the value of the primary key avoiding that there are duplicated rows in a table.
===Domain integrity===
Restricts the type, format, and value range that applies to valid entries for a column within a table
===Referential integrity===
Makes rows in a table that are being used by other records impossible to delete
===User-defined integrity===
Other specific rules not included above apply

==SQL data types==
The SQL standard defines three kinds of data types:
:* predefined data types
:* constructed types
:* user-defined types.
=== Predefined data types ===
{{Div col}}
* Character Types
:* Character (CHAR)
:* Character Varying (VARCHAR)
:* Character Large Object (CLOB)
* Binary Types
:* Binary (BINARY)
:* Binary Varying (VARBINARY)
:* Binary Large Object (BLOB)
* Numeric Types
:* Exact Numeric Types (NUMERIC, DECIMAL, SMALLINT, INTEGER, BIGINT)
:* Approximate Numeric Types (FLOAT, REAL, DOUBLE PRECISION)
* Datetime Types (DATE, TIME, TIMESTAMP)
* Interval Type (INTERVAL)
* Boolean
* XML
* JSON
{{Div col end}}
=== Constructed types ===
''Constructed types'' are one of ARRAY, MULTISET, REF(erence), or ROW. <br>''User-defined types'' are comparable to classes in object-oriented language with their own constructors, observers, mutators, methods, inheritance, overloading, overwriting, interfaces, and so on.

==See also==

{{Wikipedia books|SQL}}
* [[Relational database]]
* [[Object database]]
* [[Object-relational database]]
* [[List of relational database management systems]]
* [[Comparison of relational database management systems]]
* [[Comparison of object-relational database management systems]]
* [[D (data language specification)]]
* [[D4 (programming language)]]
* [[Query by Example]]
* [[SQL syntax]]
* [[PL/SQL|Oracle PL/SQL]]
* [[Transact-SQL|Microsoft Transact-SQL (T-SQL)]]
* [[Online transaction processing|Online transaction processing (OLTP)]]
* [[Online analytical processing|Online analytical processing (OLAP)]]
* [[Data warehouse]]
* [[Relational data stream management system]]
* [[NoSQL]]
* [[MUMPS]]
* [[Hierarchical model]]
* [[Star schema]]
* [[Snowflake schema]]

==Notes==
{{notelist}}

==References==
{{Reflist|30em|refs=
<ref name="ars">{{cite web | last = Paul | first = Ryan | title = A guided tour of the Microsoft Command Shell | url = https://arstechnica.com/business/news/2005/10/msh.ars/4 | website = Ars Technica | accessdate = 10 April 2011 }}</ref>
<ref name="iana">{{cite web | url = http://www.iana.org/assignments/media-types/application/sql | title = Media Type registration for application/sql | publisher = [[Internet Assigned Numbers Authority]] | date = 10 April 2013 | accessdate = 10 April 2013 }}</ref>
<ref name="application/sql">{{cite web | url = http://tools.ietf.org/html/rfc6922 | title = The application/sql Media Type, RFC 6922 | page = 3 | publisher = [[Internet Engineering Task Force]] | date = April 2013 | accessdate = 10 April 2013 }}</ref>
<ref name="learningSQL">{{ cite book | last = Beaulieu | first = Alan | title = Learning SQL | editor = Mary E Treseler | publisher = O'Reilly | location = Sebastopol, CA, USA | date = April 2009 | edition = 2nd | isbn = 978-0-596-52083-0 }}</ref>
<ref name="Britannica">{{cite web | author = | title = SQL | url = http://www.britannica.com/EBchecked/topic/569684/SQL|website=Britannica.com | accessdate = 2013-04-02 }}</ref>
<ref name="oed-US">{{cite web | author =  | title = SQL | url = http://oxforddictionaries.com/definition/american_english/SQL|website=Oxforddictionaries.com|accessdate=2017-01-16 }}
</ref>
<ref name="MS-SQL-def">{{cite web | author =| title = Structured Query Language (SQL) | url = http://msdn.microsoft.com/en-gb/library/windows/desktop/ms714670(v=vs.85).aspx|website=Msdn.microsoft.com|accessdate=2017-01-16 }}</ref>
<ref name="codd-relational-model">{{ cite journal | last = Codd | first = Edgar F. | title = A Relational Model of Data for Large Shared Data Banks | journal = Communications of the ACM | volume = 13 | issue = 6 | pages = 377–87 | date = June 1970 | doi = 10.1145/362384.362685 | citeseerx = 10.1.1.88.646 }}</ref>
<ref name="SQL-Fundamentals">{{cite web | last = Chapple | first = Mike | title = SQL Fundamentals | work = Databases | publisher = About.com | url = http://databases.about.com/od/sql/a/sqlfundamentals.htm | accessdate = 2009-01-28 }}</ref>
<ref name="IBM-sql">{{cite web | title = Structured Query Language (SQL) | publisher = International Business Machines | url = http://publib.boulder.ibm.com/infocenter/db2luw/v9/index.jsp?topic=com.ibm.db2.udb.admin.doc/doc/c0004100.htm | date = October 27, 2006 | accessdate = 2007-06-10 }}</ref>
<ref name="ISO 9075:1987">{{cite web | url = https://www.iso.org/standard/16661.html | title = ISO 9075:1987: Information technology&nbsp;– Database languages&nbsp;– SQL&nbsp;– Part 1: Framework (SQL/Framework) | date = 1987-06-01}}</ref>
<ref name="ISO/IEC">{{cite web | url = https://www.iso.org/standard/63555.html | title = ISO/IEC 9075-1:2016: Information technology&nbsp;– Database languages&nbsp;– SQL&nbsp;– Part 1: Framework (SQL/Framework) }}</ref>
<ref name="chamberlin-boyce-sequel">{{ cite journal | last1 = Chamberlin | first1 = Donald D | last2 = Boyce | first2 = Raymond F | title = SEQUEL: A Structured English Query Language | journal = Proceedings of the 1974 ACM SIGFIDET Workshop on Data Description, Access and Control | pages = 249–64 | publisher = Association for Computing Machinery | year = 1974 | url = http://www.almaden.ibm.com/cs/people/chamberlin/sequel-1974.pdf | accessdate = 2007-06-09 | archive-url=https://web.archive.org/web/20070926212100/http://www.almaden.ibm.com/cs/people/chamberlin/sequel-1974.pdf |archive-date=2007-09-26 |url-status=dead }}</ref>
<ref name="oppel-databases">{{ cite book | last = Oppel | first = Andy | title = Databases Demystified | publisher = McGraw-Hill Osborne Media | date = February 27, 2004 | location = [[San Francisco, CA]] | pages = 90–1 | url = http://www.mhprofessional.com/product.php?cat=112&isbn=0071469605 | isbn = 978-0-07-146960-9 }}</ref>
<ref name="IBM-history">{{cite web | title = History of IBM, 1978 | work = IBM Archives | publisher = IBM | url = http://www-03.ibm.com/ibm/history/history/year_1978.html | accessdate = 2007-06-09 }}</ref>
<ref name="ANSI/ISO/IEC">ANSI/ISO/IEC International Standard (IS). Database Language SQL—Part 2: Foundation (SQL/Foundation). 1999.</ref>
<ref name="PostgreSQL server programming">{{cite web | last = PostgreSQL contributors | title = PostgreSQL server programming | work = PostgreSQL 9.1 official documentation | publisher = postgresql.org | year = 2011 | url = http://www.postgresql.org/docs/9.1/static/server-programming.html | accessdate = 2012-03-09 }}</ref>
<ref name="PROLE">{{cite web|url=http://lbd.udc.es/jornadas2011/actas/PROLE/PROLE/S5/13_article.pdf |title=Outer Joins in a Deductive Database System |author=Fernando Saenz-Perez |website=Lbd.udc.es |accessdate=2017-01-16}}</ref>
<ref name="About PostgreSQL">{{cite web | last = PostgreSQL contributors | title = About PostgreSQL | work = PostgreSQL 9.1 official website | publisher = PostgreSQL Global Development Group | year = 2012 | url = http://www.postgresql.org/about/ | quote = PostgreSQL prides itself in standards compliance. Its SQL implementation strongly conforms to the ANSI-SQL:2008 standard | accessdate = March 9, 2012 }}</ref>
<ref name="Mimer SQL, Built on Standards">{{cite web | title = Mimer SQL, Built on Standards | work = Mimer SQL official website | publisher = Mimer Information Technology | year = 2009 | url = http://developer.mimer.com/features/feature_6.htm}}</ref>
<ref name="Ora DATE">{{ cite book | first1 = Diana | last1 = Lorentz | first2 = Mary Beth | last2 = Roeser | first3 = Sundeep | last3 = Abraham | first4 = Angela | last4 = Amor | first5 = Geeta | last5 = Arora | first6 = Vikas | last6 = Arora | first7 = Lance | last7 = Ashdown | first8 = Hermann | last8 = Baer | first9 = Shrikanth | last9 = Bellamkonda | series = Oracle Database Documentation Library | publisher = Oracle USA, Inc | place = Redwood City, CA | title = Oracle Database SQL Language Reference 11g Release 2 (11.2) | chapter = Basic Elements of Oracle SQL: Data Types | origyear = 1996 | date = October 2010 | accessdate = December 29, 2010 | chapter-url = http://download.oracle.com/docs/cd/E11882_01/server.112/e17118/sql_elements001.htm#sthref154 | quote = For each <code>DATE</code> value, Oracle stores the following information: century, year, month, date, hour, minute, and second }}</ref>
<ref name="Ora DATETIME">{{ cite book | first1 = Diana | last1 = Lorentz | first2 = Mary Beth | last2 = Roeser | first3 = Sundeep | last3 = Abraham | first4 = Angela | last4 = Amor | first5 = Geeta | last5 = Arora | first6 = Vikas | last6 = Arora | first7 = Lance | last7 = Ashdown | first8 = Hermann | last8 = Baer | first9 = Shrikanth | last9 = Bellamkonda | series = Oracle Database Documentation Library | publisher = Oracle USA, Inc | place = Redwood City, CA | title = Oracle Database SQL Language Reference 11g Release 2 (11.2) | chapter = Basic Elements of Oracle SQL: Data Types | origyear = 1996 | date = October 2010 | accessdate = December 29, 2010 | chapter-url = http://download.oracle.com/docs/cd/E11882_01/server.112/e17118/sql_elements001.htm#sthref154 | quote = The datetime data types are <code>DATE</code>... }}</ref>
<ref name="Ora TIME">{{ cite book | first1 = Diana | last1 = Lorentz | first2 = Mary Beth | last2 = Roeser | first3 = Sundeep | last3 = Abraham | first4 = Angela | last4 = Amor | first5 = Geeta | last5 = Arora | first6 = Vikas | last6 = Arora | first7 = Lance | last7 = Ashdown | first8 = Hermann | last8 = Baer | first9 = Shrikanth | last9 = Bellamkonda | series = Oracle Database Documentation Library | publisher = Oracle USA, Inc | place = Redwood City, CA | title = Oracle Database SQL Language Reference 11g Release 2 (11.2) | chapter = Basic Elements of Oracle SQL: Data Types | origyear = 1996 | date = October 2010 | accessdate = December 29, 2010 | chapter-url = http://download.oracle.com/docs/cd/E11882_01/server.112/e17118/sql_elements001.htm#i54335 | quote = Do not define columns with the following SQL/DS and DB2 data types, because they have no corresponding Oracle data type:... <code>TIME</code> }}</ref>
<ref name="X3H2">{{ cite book | chapter-url = http://special.lib.umn.edu/findaid/xml/cbi00168.xml | publisher = American National Standards Institute | title = X3H2 Records, 1978–95 | chapter = Finding Aid }}</ref>
<ref name="Doll">{{cite web | last = Doll | first = Shelley | title = Is SQL a Standard Anymore? | work = TechRepublic's Builder.com | publisher = TechRepublic | date = June 19, 2002 | url = http://articles.techrepublic.com.com/5100-10878_11-1046268.html | accessdate = 2016-04-12 | archiveurl = https://web.archive.org/web/20120705163024/http://www.techrepublic.com/article/is-sql-a-standard-anymore/1046268 | archivedate = 2012-07-05 }}</ref>
<ref name="Gillespie">{{cite web | last = Gillespie | first = Patrick | url = http://patorjk.com/blog/2012/01/26/pronouncing-sql-s-q-l-or-sequel/ | title = Pronouncing SQL: S-Q-L or Sequel? | accessdate = 12 February 2012 }}</ref>
<ref name="Melton">{{cite book | title = Understanding the New SQL: A Complete Guide | last = Melton | first = Jim | author2 = Alan R Simon | year = 1993 | publisher = Morgan Kaufmann | isbn = 978-1-55860-245-8 | page = [https://archive.org/details/understandingnew00melt/page/536 536] | chapter = 1.2. What is SQL? | quote = SQL (correctly pronounced "ess cue ell," instead of the somewhat common "sequel")... | chapter-url-access = registration | chapter-url = https://archive.org/details/understandingnew00melt | url = https://archive.org/details/understandingnew00melt/page/536 }}</ref>
<ref name="SQLXML2006">{{ cite book | title = SQL/XML:2006 - Evaluierung der Standardkonformität ausgewählter Datenbanksysteme | last = Wagner | first = Michael | year = 2010 | publisher = Diplomica Verlag | isbn = 978-3-8366-9609-8 | page = 100 | chapter = | quote = }}</ref>
<ref name="iablog.sybase.com-paulley">{{ cite web |date=July 2008 |title=SQL:2008 now an approved ISO international standard |publisher=Sybase |url=http://iablog.sybase.com/paulley/2008/07/sql2008-now-an-approved-iso-international-standard/ |url-status=dead |archive-url=https://web.archive.org/web/20110628130925/http://iablog.sybase.com/paulley/2008/07/sql2008-now-an-approved-iso-international-standard/ |archive-date=2011-06-28 |df= }}</ref>
<ref name="ISO/IEC 9075-2:2016">{{cite web | url = https://www.iso.org/standard/63556.html | title = ISO/IEC 9075-2:2016: Information technology -- Database languages -- SQL -- Part 2: Foundation (SQL/Foundation) | date = December 2016 }}</ref>

<ref name="Whitemarsh">{{ citation | url = http://www.wiscorp.com/sql200n.zip | format = Zip | title = SQL:2008 draft | publisher = Whitemarsh Information Systems Corporation }}</ref>

<ref name="ISO/IEC 9075-11:2008">{{ cite ISO standard | csnumber = 38645 | title = ISO/IEC 9075-11:2008: Information and Definition Schemas (SQL/Schemata) | page = 1 | year = 2008 }}</ref>

<ref name="features_2011">{{ cite web | title = What's new in SQL:2011 | url = https://sigmodrecord.org/publications/sigmodRecord/1203/pdfs/10.industry.zemke.pdf | author = Fred Zemke |publisher=Oracle Corporation | year = 2012 }}</ref>

<ref name="feature_temporal">{{ cite journal | title = Temporal features in SQL:2011 | url = http://cs.ulb.ac.be/public/_media/teaching/infoh415/tempfeaturessql2011.pdf | author = Krishna Kulkarni, Jan-Eike Michels |journal=SIGMOD Record | date = September 2012 |volume=41 |number=3 }}</ref>
}}

==Sources==
{{Refbegin}}
* {{cite journal|last = Codd|first = Edgar F|date = June 1970|title = A Relational Model of Data for Large Shared Data Banks|url = http://www.acm.org/classics/nov95/toc.html|journal = Communications of the ACM|volume = 13|issue = 6|pages = 377–87|doi = 10.1145/362384.362685|url-status = dead|archive-url = https://web.archive.org/web/20070612235326/http://www.acm.org/classics/nov95/toc.html|archive-date = 2007-06-12|df = }}
* [[c2:SqlFlaws|Discussion on alleged SQL flaws]] (C2 wiki)
* [[C. J. Date]] with [[Hugh Darwen]]: ''A Guide to the SQL standard : a users guide to the standard database language SQL, 4th ed.'', Addison Wesley, USA 1997, {{ISBN|978-0-201-96426-4}}
{{Refend}}

===SQL standards documents===

====ITTF publicly available standards and technical reports====

The [[ISO]]/[[International Electrotechnical Commission|IEC]] [[Information Technology Task Force]] publishes [http://standards.iso.org/ittf/PubliclyAvailableStandards/index.html publicly available standards] including SQL. Technical Corrigenda (corrections) and Technical Reports (discussion documents) are published there.

[http://standards.iso.org/ittf/PubliclyAvailableStandards/c053681_ISO_IEC_9075-1_2011.zip SQL -- Part 1: Framework (SQL/Framework)]

====Draft documents====

Formal SQL standards are available from [[ISO]] and [[ANSI]] for a fee. For informative use, as opposed to strict standards compliance, late drafts often suffice.

* [http://www.wiscorp.com/sql20nn.zip SQL:2011 draft]
* [http://www.contrib.andrew.cmu.edu/~shadow/sql/sql1992.txt SQL-92 draft]

==External links==
{{Sister project links
|commons=Category:Structured Query Language
|v=Introduction to SQL
|b=Structured Query Language
|n=no|s=no|q=no}}
* [http://www.mcjones.org/System_R/SQL_Reunion_95/sqlr95.html ''1995 SQL Reunion: People, Projects, and Politics'', by Paul McJones (ed.)]: transcript of a reunion meeting devoted to the personal history of relational databases and SQL.
* [http://special.lib.umn.edu/findaid/xml/cbi00168.xml American National Standards Institute. X3H2 Records, 1978–1995] [[Charles Babbage Institute]] Collection documents the H2 committee's development of the NDL and SQL standards.
* [http://purl.umn.edu/107215 Oral history interview with Donald D. Chamberlin] [[Charles Babbage Institute]] In this oral history Chamberlin recounts his early life, his education at [[Harvey Mudd College]] and [[Stanford University]], and his work on relational database technology. Chamberlin was a member of the System R research team and, with [[Raymond F. Boyce]], developed the SQL database language. Chamberlin also briefly discusses his more recent research on XML query languages.
* [http://troels.arvin.dk/db/rdbms/ Comparison of Different SQL Implementations] This comparison of various SQL implementations is intended to serve as a guide to those interested in porting SQL code between various RDBMS products, and includes comparisons between SQL:2008, PostgreSQL, DB2, MS SQL Server, MySQL, Oracle, and Informix.
* [https://web.archive.org/web/20140706215458/http://www.sqlstream.com/stream-processing-with-sql/ Event stream processing with SQL] - An introduction to real-time processing of streaming data with continuous SQL queries
* [https://github.com/ronsavage/SQL BNF Grammar for ISO/IEC 9075:2003, part 2 SQL/Framework]

{{SQL}}
{{Databases}}
{{Query languages}}
{{IBM}}
{{ISO standards}}

{{Authority control}}
{{Portal bar|Computer programming}}
[[Category:SQL| ]]
[[Category:Articles with example SQL code]]
[[Category:Data modeling languages]]
[[Category:Declarative programming languages]]
[[Category:Programming languages with an ISO standard]]
[[Category:Query languages]]
[[Category:Relational database management systems]]
[[Category:Data-centric programming languages]]
[[Category:Programming languages created in 1974]]
