{{short description|Database class for storage and retrieval of modeled data}}
{{Redirect|Structured storage|the Microsoft technology also known as structured storage|COM Structured Storage}}
A '''NoSQL''' (originally referring to "non-[[Structured Query Language#SQL|SQL]]" or "non-relational")<ref>http://nosql-database.org/ "NoSQL DEFINITION: Next Generation Databases mostly addressing some of the points : being non-relational, distributed, open-source and horizontally scalable".</ref> [[database]] provides a mechanism for [[Computer data storage|storage]] and [[data retrieval|retrieval]] of data that is modeled in means other than the tabular relations used in [[relational database]]s. Such databases have existed since the late 1960s, but the name "NoSQL" was only coined in the early 21st century,{{r|leavitt}} triggered by the needs of [[Web 2.0]] companies.<ref>{{cite conference |title=History Repeats Itself: Sensible and NonsenSQL Aspects of the NoSQL Hoopla |first=C. |last=Mohan |conference=Proc. 16th Int'l Conf. on Extending Database Technology |year=2013 |url=http://openproceedings.eu/2013/conf/edbt/Mohan13.pdf}}</ref><ref>{{cite web |author= |url=https://www.wired.com/2012/01/amazon-dynamodb/ |title=Amazon Goes Back to the Future With 'NoSQL' Database |publisher=WIRED |date=2012-01-19 |accessdate=2017-03-06}}</ref> NoSQL databases are increasingly used in [[big data]] and [[real-time web]] applications.<ref>{{cite web |url= http://db-engines.com/en/blog_post/23 |title= RDBMS dominate the database market, but NoSQL systems are catching up |publisher= DB-Engines.com |date= 21 Nov 2013 |accessdate= 24 Nov 2013 }}</ref>  NoSQL systems are also sometimes called "Not only SQL" to emphasize that they may support [[SQL]]-like query languages or sit alongside SQL databases in [[polyglot persistence|polyglot-persistent]] architectures.<ref>{{cite web |url=http://searchdatamanagement.techtarget.com/definition/NoSQL-Not-Only-SQL |title=NoSQL (Not Only SQL) |quote=NoSQL database, also called Not Only SQL}}</ref><ref>{{cite web | url = http://martinfowler.com/bliki/NosqlDefinition.html | title = NosqlDefinition | first = Martin | last = Fowler | authorlink = Martin Fowler (software engineer) | quote = many advocates of NoSQL say that it does not mean a "no" to SQL, rather it means Not Only SQL }}</ref>

Motivations for this approach include: simplicity of [[design]], simpler [[Horizontal scaling#Horizontal and vertical scaling|"horizontal" scaling]] to [[cluster computing|clusters of machines]] (which is a problem for relational databases),<ref name="leavitt">{{cite journal |first=Neal |last=Leavitt |title=Will NoSQL Databases Live Up to Their Promise? |journal=[[IEEE Computer]] |year=2010 |url=http://www.leavcom.com/pdf/NoSQL.pdf}}</ref> finer control over [[availability]] and limiting the [[object-relational impedance mismatch]].<ref>NoSQL Distilled: A Brief Guide to the Emerging World of Polyglot Persistence. Addison-Wesley Educational Publishers Inc, 2009, {{ISBN|978-0321826626}}.</ref> The data structures used by NoSQL databases (e.g. [[Key-value database|key–value pair]], [[Wide-column store|wide column]], [[Graph database|graph]], or [[Document-oriented database|document]]) are different from those used by default in relational databases, making some operations faster in NoSQL. The particular suitability of a given NoSQL database depends on the problem it must solve.  Sometimes the data structures used by NoSQL databases are also viewed as "more flexible" than relational database tables.<ref>{{cite web |last=Vogels |first=Werner |url=http://www.allthingsdistributed.com/2012/01/amazon-dynamodb.html |title=Amazon DynamoDB – a Fast and Scalable NoSQL Database Service Designed for Internet Scale Applications |publisher=All Things Distributed |date=2012-01-18 |accessdate=2017-03-06}}</ref>

Many NoSQL stores compromise consistency (in the sense of the [[CAP theorem]]) in favor of availability, partition tolerance, and speed. Barriers to the greater adoption of NoSQL stores include the use of low-level query languages (instead of SQL, for instance), lack of ability to perform ad-hoc [[join (SQL)|joins]] across tables, lack of standardized interfaces, and huge previous investments in existing relational databases.<ref>{{cite web
| url         = http://www.journalofcloudcomputing.com/content/pdf/2192-113X-2-22.pdf
| title       = Data management in cloud environments: NoSQL and NewSQL data stores
| first1 = K. | last1 = Grolinger | first2 = W. A. | last2 = Higashino | first3 = A. | last3 = Tiwari | first4 = M. A. M. | last4 = Capretz
| date = 2013
| publisher   = Aira, Springer
| accessdate  = 8 Jan 2014
}}</ref> Most NoSQL stores lack true [[ACID]] transactions, although a few databases have made them central to their designs.

Instead, most NoSQL databases offer a concept of "[[eventual consistency]]", in which database changes are propagated to all nodes "eventually" (typically within milliseconds), so queries for data might not return updated data immediately or might result in reading data that is not accurate, a problem known as stale reads.<ref>{{cite web |url=https://aphyr.com/posts/322-call-me-maybe-mongodb-stale-reads |title=Jepsen: MongoDB stale reads |website=Aphyr.com |date=2015-04-20 |accessdate=2017-03-06}}</ref>  Additionally, some NoSQL systems may exhibit lost writes and other forms of [[data loss]].<ref>{{cite web |author= |url=http://www.slideshare.net/MartinZapletal/zapletal-martinlargevolumedataanalytics |title=Large volume data analysis on the Typesafe Reactive Platform |website=Slideshare.net |date= |accessdate=2017-03-06}}</ref> Some NoSQL systems provide concepts such as [[write-ahead logging]] to avoid data loss.<ref>{{cite web |last=Fowler |first=Adam |url=http://www.dummies.com/how-to/content/10-nosql-misconceptions.html |title=10 NoSQL Misconceptions |website=Dummies.com |date= |accessdate=2017-03-06}}</ref> For [[distributed transaction processing]] across multiple databases, data consistency is an even bigger challenge that is difficult for both NoSQL and relational databases. Relational databases "do not allow referential integrity constraints to span databases".<ref>{{cite web |url=https://iggyfernandez.wordpress.com/2013/07/28/no-to-sql-and-no-to-nosql/ |title=No! to SQL and No! to NoSQL &#124; So Many Oracle Manuals, So Little Time |website=Iggyfernandez.wordpress.com |date= |accessdate=2017-03-06}}</ref> Few systems maintain both [[ACID]] transactions and [[X/Open XA]] standards for distributed transaction processing.<ref>{{cite web |url=http://databases.about.com/od/specificproducts/a/acid.htm |title=The ACID Model |last=Chapple |first=Mike |website=about.com}}</ref> Interactive relational databases share conformational relay analysis techniques as a common feature.<ref>{{cite book |last1=Fiore |first1=S. |title=Grid and cloud database management |date=2011 |publisher=Springer Science & Business Media |page=210}}</ref> Limitations within the interface environment are overcome using semantic virtualization protocols, such that NoSQL services are accessible to most operating systems.<ref>{{cite journal |last1=Lawrence |first1=Integration and virtualization of relational SQL and NoSQL systems including MySQL and MongoDB |title=Integration and virtualization of relational SQL and NoSQL systems including MySQL and MongoDB |journal=International Conference on Computational Science and Computational Intelligence 1 |date=2014}}</ref>

== History ==
The term ''NoSQL'' was used by Carlo Strozzi in 1998 to name his lightweight [[Strozzi NoSQL (RDBMS)|Strozzi NoSQL open-source relational database]] that did not expose the standard [[SQL|Structured Query Language]] (SQL) interface, but was still relational.<ref name=":0">{{cite web
| url         = http://publications.lib.chalmers.se/records/fulltext/123839.pdf
| title       = Investigating storage solutions for large data: A comparison of well performing and scalable data storage solutions for real time extraction and batch insertion of data
| first       = Adam
| last        = Lith
| first2 = Jakob | last2 = Mattson
| date        = 2010
| publisher   = Department of Computer Science and Engineering, Chalmers University of Technology
| location    = Göteborg
| page        = 70
| accessdate  = 12 May 2011
| quote       = Carlo Strozzi first used the term NoSQL in 1998 as a name for his open source relational database that did not offer a SQL interface[...]
}}</ref>  His NoSQL RDBMS is distinct from the around-2009 general concept of NoSQL databases.  Strozzi suggests that, because the current NoSQL movement "departs from the relational model altogether, it should therefore have been called more appropriately 'NoREL'",<ref>{{cite web |url=http://www.strozzi.it/cgi-bin/CSA/tw7/I/en_US/nosql/Home%20Page |title=NoSQL Relational Database Management System: Home Page |publisher=Strozzi.it |date=2 October 2007 |accessdate=29 March 2010}}</ref> referring to "not relational".

Johan Oskarsson, then a developer at [[Last.fm]], reintroduced the term ''NoSQL'' in early 2009 when he organized an event to discuss "open-source [[distributed database|distributed, non-relational databases]]".<ref>{{cite web |url= http://blog.sym-link.com/2009/05/12/nosql_2009.html |title= NoSQL 2009 |publisher= Blog.sym-link.com |date= 12 May 2009 |accessdate= 29 March 2010 |archive-url= https://web.archive.org/web/20110716174012/http://blog.sym-link.com/2009/05/12/nosql_2009.html |archive-date= 16 July 2011 |url-status= dead }}</ref> The name attempted to label the emergence of an increasing number of non-relational, distributed data stores, including open source clones of Google's [[Bigtable]]/[[MapReduce]] and Amazon's [[Amazon DynamoDB|DynamoDB]].

== Types and examples ==
There are various ways to classify NoSQL databases, with different categories and subcategories, some of which overlap. What follows is a basic classification by data model, with examples:
* [[Wide-column store|Wide column]]: [[Accumulo]], [[Apache Cassandra|Cassandra]], [[Scylla (database)|Scylla]], [[HBase]].
* [[Document-oriented database|Document]]: [[Apache CouchDB]], [[ArangoDB]], [[BaseX]], [[Clusterpoint]], [[Couchbase]], [[Cosmos DB]], [[EXist|eXist-db]], [[Lotus Notes|IBM Domino]], [[MarkLogic]], [[MongoDB]], [[OrientDB]], [[Qizx]], [[RethinkDB]]
* [[Key–value store|Key–value]]: [[Aerospike (database)|Aerospike]], [[Apache Ignite]], [[ArangoDB]], [[Berkeley DB]], [[Couchbase]], [[Dynamo (storage system)|Dynamo]], [[FoundationDB]], [[InfinityDB]], [[MemcacheDB]], [[MUMPS]], [[Oracle NoSQL Database]], [[OrientDB]], [[Redis]], [[Riak]], [[SciDB]], SDBM/Flat File [[DBM (computing)|dbm]], [[Apache ZooKeeper|ZooKeeper]]
* [[Graph database|Graph]]: [[AllegroGraph]], [[ArangoDB]], [[InfiniteGraph]], [[Apache Giraph]], [[MarkLogic]], [[Neo4J]], [[OrientDB]], [[Virtuoso Universal Server|Virtuoso]]

A more detailed classification is the following, based on one from Stephen Yen:<ref>{{cite web |url=https://dl.dropboxusercontent.com/u/2075876/nosql-steve-yen.pdf |format=PDF |title=NoSQL is a Horseless Carriage |last=Yen |first=Stephen |publisher=NorthScale |accessdate=2014-06-26}}{{dead link|date=August 2017}}</ref><ref>{{cite web |url=http://www.christof-strauch.de/nosqldbs.pdf |title=NoSQL Databases |last1=Strauch |first1=Christof |pages=23–24 |accessdate=2017-08-27}}</ref>

![[Pasted image 20201020171409.png]]

[[Correlation database]]s are model-independent, and instead of row-based or column-based storage, use value-based storage.

=== Key–value store ===
{{main|Key–value database}}
Key–value (KV) stores use the [[associative array]] (also called a map or dictionary) as their fundamental data model. In this model, data is represented as a collection of key–value pairs, such that each possible key appears at most once in the collection.<ref>{{cite web
| accessdate =1 January 2012
| publisher = Stackexchange
| location = http://dba.stackexchange.com/questions/607/what-is-a-key-value-store-database
| title = Key Value stores and the NoSQL movement
| author = Sandy
| date = 14 January 2011
| url = http://dba.stackexchange.com/a/619
| quote = Key–value stores allow the application developer to store schema-less data. This data usually consists of a string that represents the key, and the actual data that is considered the value in the "key–value" relationship. The data itself is usually some kind of primitive of the programming language (a string, an integer, or an array) or an object that is being marshaled by the programming language's bindings to the key-value store. This structure replaces the need for a fixed data model and allows proper formatting.}}</ref><ref>{{cite web
| accessdate =1 January 2012
| publisher = Marc Seeger
| location = http://blog.marc-seeger.de/2009/09/21/key-value-stores-a-practical-overview/
| title = Key-Value Stores: a practical overview
| first = Marc | last = Seeger
| date = 21 September 2009
| url = http://blog.marc-seeger.de/assets/papers/Ultra_Large_Sites_SS09-Seeger_Key_Value_Stores.pdf
| quote = Key–value stores provide a high-performance alternative to relational database systems with respect to storing and accessing data. This paper provides a short overview of some of the currently available key–value stores and their interface to the Ruby programming language.}}</ref>

The key–value model is one of the simplest non-trivial data models, and richer data models are often implemented as an extension of it. The key–value model can be extended to a discretely ordered model that maintains keys in [[Lexicographical order|lexicographic order]]. This extension is computationally powerful, in that it can efficiently retrieve selective key ''ranges''.<ref>{{cite web
| accessdate =8 May 2014
| publisher = Ilya Katsov
| title = NoSQL Data Modeling Techniques 
| first = Ilya | last = Katsov
| date = 1 March 2012
| url = http://highlyscalable.wordpress.com/2012/03/01/nosql-data-modeling-techniques/}}</ref>

Key–value stores can use [[consistency model]]s ranging from [[eventual consistency]] to [[serializability]]. Some databases support ordering of keys. There are various hardware implementations, and some users store data in memory (RAM), while others on [[solid-state drive]]s (SSD) or [[hard disk drive|rotating disks]] (aka hard disk drive (HDD)).

=== Document store ===
{{main|Document-oriented database|XML database}}
The central concept of a document store is  that of a "document". While the details of this definition differ among document-oriented databases, they all assume that documents encapsulate and encode data (or information) in some standard formats or encodings. Encodings in use include XML, [[YAML]], and [[JSON]] and binary forms like [[BSON]]. Documents are addressed in the database via a unique ''key'' that represents that document. Another defining characteristic of a document-oriented database is an API or query language to retrieve documents based on their contents.

Different implementations offer different ways of organizing and/or grouping documents:
* Collections
* Tags
* Non-visible metadata
* Directory hierarchies

Compared to relational databases, collections could be considered analogous to tables and documents analogous to records. But they are different: every record in a table has the same sequence of fields, while documents in a collection may have fields that are completely different.

=== Graph ===
{{main|Graph database}}

Graph databases are designed for data whose relations are well represented as a [[graph (discrete mathematics)|graph]] consisting of elements connected by a finite number of relations. Examples of data include social relations, public transport links, road maps, network topologies, etc.

; Graph databases and their query language
![[Pasted image 20201020171315.png]]

=== Object database ===
{{main|Object database}}
* [[db4o]]
* [[Gemstone (database)|GemStone/S]]
* [[InterSystems Caché]]
* [[JADE (programming language)|JADE]]
* [[ObjectDatabase++]]
* [[ObjectDB]]
* [[Objectivity/DB]]
* [[ObjectStore]]
* [[Odaba|ODABA]]
* [[Perst]]
* [[Realm (database)|Realm]]
* [[Virtuoso Universal Server|OpenLink Virtuoso]]
* [[Versant Object Database]]
* [[ZODB]]

=== Tabular ===
* [[Apache Accumulo]]
* [[Bigtable]]
* [[HBase|Apache Hbase]]
* [[Hypertable]]
* [[Mnesia]]
* [[Virtuoso Universal Server|OpenLink Virtuoso]]

=== Tuple store ===
* [[Apache River]]
* [[GigaSpaces]]
* [[Tarantool]]
* [[TIBCO Software|TIBCO]] ActiveSpaces
* [[Virtuoso Universal Server|OpenLink Virtuoso]]

=== Triple/quad store (RDF) database ===
{{main|Triplestore|Named graph}}
* [[AllegroGraph]]
* [[Jena (framework)|Apache JENA]] (It is a framework, not a database)
* [[MarkLogic]]
* [[Ontotext|Ontotext-OWLIM]]
* [[Oracle NoSQL Database|Oracle NoSQL database]]
* [[Profium|Profium Sense]]
* [[Virtuoso Universal Server]]

=== Hosted ===
* [[Amazon DynamoDB]]
* [[Amazon DocumentDB]]
* [[Amazon SimpleDB]]
* [[Clusterpoint|Clusterpoint database]]
* [[Cloudant|Cloudant Data Layer (CouchDB)]]
* Datastore on [[Appengine|Google Appengine]]
* [[Freebase (database)|Freebase]]
* [[Microsoft Azure#Storage services|Microsoft Azure Storage services]]
* [[Virtuoso Universal Server|OpenLink Virtuoso]]

=== Multivalue databases ===
* D3 [[Pick database]]
* [[Extensible Storage Engine]] (ESE/NT)
* [[InfinityDB]]
* [[InterSystems Caché]]
* jBASE [[Pick database]]
* mvBase [[Rocket Software]]
* mvEnterprise [[Rocket Software]]
* [[Northgate Information Solutions]] Reality, the original Pick/MV Database
* [[OpenQM]]
* Revelation Software's [[OpenInsight]] (Windows) and Advanced Revelation (DOS)
* UniData [[Rocket U2]]
* UniVerse [[Rocket U2]]

=== Multimodel database ===

* [[Apache Ignite]]<ref>https://apacheignite.readme.io/docs Ignite Documentation</ref><ref>https://www.infoworld.com/article/3135070/data-center/fire-up-big-data-processing-with-apache-ignite.html fire-up-big-data-processing-with-apache-ignite</ref>
* [[ArangoDB]]
* [[Couchbase]]
* [[FoundationDB]]
* [[MarkLogic]]
* [[OrientDB]]
* [[Cosmos DB]]
* [[Oracle Database]]

== Performance ==

Ben Scofield rated different categories of NoSQL databases as follows:<ref>{{cite web|url=http://www.slideshare.net/bscofield/nosql-codemash-2010|title=NoSQL - Death to Relational Databases(?)|last=Scofield|first=Ben |date=2010-01-14|accessdate=2014-06-26}}</ref>

{| style="text-align: left;" class="wikitable sortable"
|-
! Data model !! Performance !! Scalability !! Flexibility !! Complexity !! Functionality
|-
| Key–value store ||  high || high || high || none || variable (none)
|-
| Column-oriented store || high || high || moderate || low || minimal
|-
| Document-oriented store || high || variable (high) || high || low || variable (low)
|-
| Graph database || variable || variable || high || high || [[graph theory]]
|-
| Relational database || variable || variable || low || moderate || [[relational algebra]]
|}

Performance and scalability comparisons are sometimes done with the [[YCSB]] benchmark.

== Handling relational data ==
Since most NoSQL databases lack ability for joins in queries, the [[database schema]] generally needs to be designed differently. There are three main techniques for handling relational data in a NoSQL database. (See table Join and ACID Support for NoSQL databases that support joins.)

=== Multiple queries ===
Instead of retrieving all the data with one query, it is common to do several queries to get the desired data. NoSQL queries are often faster than traditional SQL queries so the cost of  additional queries may be acceptable. If an excessive number of queries would be necessary, one of the other two approaches is more appropriate.

=== Caching, replication and non-normalized data ===
Instead of only storing foreign keys, it is common to store actual foreign values along with the model's data. For example, each blog comment might include the username in addition to a user id, thus providing easy access to the username without requiring another lookup. When a username changes however, this will now need to be changed in many places in the database. Thus this approach works better when reads are much more common than writes.<ref name="DataModeling-Couchbase.com_November_11_2019c">
{{cite web |url=https://resources.couchbase.com/c/relational-no-sql-wp?x=3-FqHm |title=Moving From Relational to NoSQL: How to Get Started |newspaper=Couchbase.com |accessdate=November 11, 2019}}
</ref>

=== Nesting data ===
With document databases like MongoDB it is common to put more data in a smaller number of collections. For example, in a blogging application, one might choose to store comments within the blog post document so that with a single retrieval one gets all the comments. Thus in this approach a single document contains all the data you need for a specific task.

== ACID and join support ==

A database is marked as supporting [[ACID]] properties (Atomicity, Consistency, Isolation, Durability) or [[Join (SQL)|join]] operations if the documentation for the database makes that claim. The degree to which the capability is fully supported in a manner similar to most SQL databases is sufficiently characterized through simple dialogue. 
![[Pasted image 20201020164947.png]] 
<u>Footnotes</u>: 
- MarkLogic[^1]
- MongoDB[^2]
- OrientDB[^3]

[^1]: Joins do not necessarily apply to document databases, but MarkLogic can do joins using semantics.
[^2]: MongoDB does not support joining from a sharded collection.[31]
[^3]: OrientDB can resolve 1:1 joins using links by storing direct links to foreign records.[32]

==See also==
<!-- please do not list specific implementations here -->
* [[CAP theorem]]
* [[Comparison of object database management systems]]
* [[Comparison of structured storage software]]
* [[Correlation database]]
* [[C++]]
*[[Database scalability]]
* [[Distributed cache]]
* [[Faceted search]]
* [[MultiValue]] database
* [[Multi-model database]]
* [[Triplestore]]
* [[Schema-agnostic databases]]

==References==
{{Reflist|30em}}

==Further reading==
*{{cite book
 | first1 = Pramod | last1 = Sadalage | first2 = Martin | last2 = Fowler | authorlink2 = Martin Fowler (software engineer)
 | date = 2012
 | title = NoSQL Distilled: A Brief Guide to the Emerging World of Polyglot Persistence
 | publisher = Addison-Wesley
 | isbn = 978-0-321-82662-6
}}
*{{cite book
 | first1 = Dan | last1 = McCreary | first2 = Ann | last2 =Kelly
 | date = 2013
 | title = Making Sense of NoSQL: A guide for managers and the rest of us
 | isbn = 9781617291074
}}
*{{cite book
 | first1 = Lena | last1 = Wiese 
 | date = 2015
 | title =  Advanced Data Management for SQL, NoSQL, Cloud and Distributed Databases 
 | publisher = DeGruyter/Oldenbourg
 | isbn = 978-3-11-044140-6
}}
* {{cite web| first = Christof | last = Strauch | date = 2012|title=NoSQL Databases|url=http://www.christof-strauch.de/nosqldbs.pdf}}
* {{cite journal| last1 = Moniruzzaman | first1 = A. B. | last2 = Hossain | first2 = S. A. | date = 2013|title=NoSQL Database: New Era of Databases for Big data Analytics - Classification, Characteristics and Comparison|arxiv=1307.0191|bibcode=2013arXiv1307.0191M}}
* {{cite journal| first = Kai | last = Orend | date = 2013|title=Analysis and Classification of NoSQL Databases and Evaluation of their Ability to Replace an Object-relational Persistence Layer|citeseerx = 10.1.1.184.483 }}
* {{cite web| first1 = Ganesh | last1 = Krishnan | first2 = Sarang | last2 = Kulkarni | first3 = Dharmesh Kirit | last3 = Dadbhawala | title=Method and system for versioned sharing, consolidating and reporting information|url=https://www.google.com/patents/US7383272?pg=PA1&dq=ganesh+krishnan&hl=en&sa=X}}

== External links ==
* {{cite web|url=http://www.christof-strauch.de/nosqldbs.pdf|title=NoSQL whitepaper| first = Christoph | last = Strauch|publisher=Hochschule der Medien|location = Stuttgart}}
* {{cite web|url=http://nosql-database.org/|title=NoSQL database List| first = Stefan | last = Edlich}}
* {{cite web|year=2010|url=http://www.infoq.com/articles/graph-nosql-neo4j|title=Graph Databases, NOSQL and Neo4j| first = Peter | last = Neubauer}}
* {{cite web|year=2012|url=http://www.networkworld.com/article/2160905/tech-primers/a-vendor-independent-comparison-of-nosql-databases--cassandra--hbase--mongodb--riak.html|title=A vendor-independent comparison of NoSQL databases: Cassandra, HBase, MongoDB, Riak| first = Sergey | last = Bushik|publisher=NetworkWorld}}
* {{cite web|year=2014|url=http://www.odbms.org/category/downloads/nosql-data-stores/nosql-data-stores-articles/|title=NoSQL Data Stores – Articles, Papers, Presentations|first = Roberto V. | last = Zicari|website=odbms.org}}
{{Use dmy dates|date=February 2012}}
{{Databases}}

[[Category:NoSQL| ]]
[[Category:Data management]]
[[Category:Distributed data stores]]
[[Category:Structured storage]]
[[Category:Database articles by importance]]
[[Category:Data analysis]]
