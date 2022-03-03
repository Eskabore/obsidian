#### key–value database

or 

#### key–value store
is a data storage [[paradigm]] designed for storing, retrieving, and managing associative arrays, and a data structure more commonly known today as a dictionary or hash table. Dictionaries contain a collection of objects, or records, which in turn have many different fields within them, each containing data. These records are stored and retrieved using a key that uniquely identifies the record, and is used to find the data within the database.
A table showing different formatted data values associated with different keys

**Key–value databases** work in a very different fashion from the better known **[[Relational database#|relational database]]** (RDB). RDBs predefine the data structure in the database as a series of tables containing fields with well defined [[Data type#|data types]]. Exposing the data types to the database program allows it to apply a number of optimizations. In contrast, key–value systems treat the data as a single opaque collection, which may have different fields for every record. This offers considerable flexibility and more closely follows modern concepts like object-oriented programming. Because optional values are not represented by placeholders or input parameters, as in most RDBs, key–value databases often use far less memory to store the same database, which can lead to large performance gains in certain workloads.[citation needed]

Performance, a lack of standardization and other issues limited key–value systems to niche uses for many years, but the rapid move to cloud computing after 2010 has led to a renaissance as part of the broader NoSQL movement. Some graph databases[which?] are also key–value databases internally, adding the concept of the relationships (pointers) between records as a first class data type. ![[e44wnoh8.bmp]]

### Types and notable examples

Key–value databases can use consistency models ranging from eventual consistency to serializability. Some support ordering of keys.

Some maintain data in memory (**RAM**), while others employ solid-state drives or rotating disks.

Every entity (record) is a set of key–value pairs. A key has multiple components, specified as an ordered list. The major key identifies the record and consists of the leading components of the key. The subsequent components are called minor keys. This organization is similar to a directory path specification in a file system (e.g., /Major/minor1/minor2/). The “value” part of the key–value pair is simply an uninterpreted string of bytes of arbitrary length.[1]

![[bkaltd8y.bmp]]
The Unix system provides dbm (database manager), which is a 1979 library originally written by Ken Thompson. It is also ported to Microsoft Windows, provided through programming languages such as Perl for Win32. The dbm manages associative arrays of arbitrary data by use of a single key (a primary key). Modern implementations include Berkeley DB, sdbm, and GNU dbm. Although dbm precedes the concept of a NoSQL and is rarely mentioned in modern discourse, it is used by many pieces of software. 
![[Pasted image 20201023143109.png]]

### See also

* Big data
* Data analysis
* Distributed data store
* Document-oriented database
* Multi-model database
* Tuple space