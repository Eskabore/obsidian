#### Description lists

[Shortcut](https://en.wikipedia.org/wiki/Wikipedia:Shortcut "Wikipedia:Shortcut")

-   [H:DL](https://en.wikipedia.org/w/index.php?title=H:DL&redirect=no)

To list terms and definitions, start a new line with a semicolon (;) followed by the term. Then, type a colon (:) followed by a definition. The format can also be used for other purposes, such as make and models of vehicles, etc.

_Description lists_ (formerly _definition lists_, and a.k.a. _association lists_) consist of group names corresponding to values. Group names (terms) are in bold. Values (definitions) are indented. Each group _must_ include one or more definitions. For a single or first value, the `:` can be placed on the same line after `;` – but subsequent values must be placed on separate lines.

Do not use a semicolon (;) simply to bold a line without defining a value using a colon (:). This usage renders invalid [HTML5](https://en.wikipedia.org/wiki/HTML5 "HTML5") and creates issues with [screen readers](https://en.wikipedia.org/wiki/Screen_reader "Screen reader").

### Retaining newlines and spaces

[Shortcut](https://en.wikipedia.org/wiki/Wikipedia:Shortcut "Wikipedia:Shortcut")

-   [H:POEM](https://en.wikipedia.org/w/index.php?title=H:POEM&redirect=no)

The MediaWiki software suppresses single newlines and converts lines starting with a space to preformatted text in a dashed box. HTML suppresses multiple spaces. It is often desirable to retain these elements for poems, lyrics, mottoes, oaths and the like. The [Poem](https://www.mediawiki.org/wiki/Extension:Poem "mw:Extension:Poem") extension adds HTML-like `<poem>...</poem>` tags to maintain newlines and spaces. These tags may be used inside other tags such as `<blockquote>...</blockquote>`; the template `{{[poemquote](https://en.wikipedia.org/wiki/Template:Poemquote "Template:Poemquote")}}` provides a convenient shorthand. [CSS styles](https://en.wikipedia.org/wiki/H:CSS "H:CSS") may be applied to this tag, e.g.: `<poem style="margin-left: 2em;">`.

Markup

Renders as

<poem>
In Xanadu did Kubla Khan
  A stately pleasure-dome decree:
Where Alph, the sacred river, ran
  Through caverns measureless to man
Down to a sunless sea.

So twice five miles of fertile ground
  With walls and towers were girdled round:
And there were gardens bright with sinuous rills,
  Where blossomed many an incense-bearing tree;
And here were forests ancient as the hills,
  Enfolding sunny spots of greenery.
</poem>

In Xanadu did Kubla Khan  
  A stately pleasure-dome decree:  
Where Alph, the sacred river, ran  
  Through caverns measureless to man  
Down to a sunless sea.  
  
So twice five miles of fertile ground  
  With walls and towers were girdled round:  
And there were gardens bright with sinuous rills,  
  Where blossomed many an incense-bearing tree;  
And here were forests ancient as the hills,  
  Enfolding sunny spots of greenery.


Index locking
=============

From Wikipedia, the free encyclopedia

[Jump to navigation](https://en.wikipedia.org/wiki/Index_locking#mw-head)[Jump to search](https://en.wikipedia.org/wiki/Index_locking#searchInput)

In [databases](https://en.wikipedia.org/wiki/Database "Database") an _[index](https://en.wikipedia.org/wiki/Index_(database) "Index (database)")_ is a data structure, part of the database, used by a database system to efficiently navigate access to _user data_. Index data are system data distinct from user data, and consist primarily of [pointers](https://en.wikipedia.org/wiki/Pointer_(computer_programming) "Pointer (computer programming)"). Changes in a database (by insert, delete, or modify operations), may require indexes to be updated to maintain accurate user data accesses.[\[1\]](https://en.wikipedia.org/wiki/Index_locking#cite_note-Weikum01-1) **Index locking** is a technique used to maintain index integrity. A portion of an index is locked during a database transaction when this portion is being accessed by the transaction as a result of attempt to access related user data. Additionally, special database system transactions (not user-invoked transactions) may be invoked to maintain and modify an index, as part of a system's self-maintenance activities. When a portion of an index is locked by a transaction, other transactions may be blocked from accessing this index portion (blocked from modifying, and even from reading it, depending on lock type and needed operation). Index Locking Protocol guarantees that [phantom read phenomenon](https://en.wikipedia.org/wiki/Isolation_(database_systems)#Phantom_reads "Isolation (database systems)") won't occur. Index locking protocol states:

-   Every relation must have at least one index.
-   A transaction can access tuples only after finding them through one or more indices on the relation
-   A transaction Ti that performs a lookup must lock all the index leaf nodes that it accesses, in S-mode, even if the leaf node does not contain any tuple satisfying the index lookup (e.g. for a range query, no tuple in a leaf is in the range)
-   A transaction Ti that inserts, updates or deletes a tuple ti in a relation r must update all indices to r and it must obtain exclusive locks on all index leaf nodes affected by the insert/update/delete
-   The rules of the [two-phase locking](https://en.wikipedia.org/wiki/Two-phase_locking "Two-phase locking") protocol must be observed.\

# Index (publishing)
An **index** ( plural: usually **indexes**, more rarely **indices**; see below) is a list of words or phrases ('headings') and associated pointers ('locators') to where useful material relating to that heading can be found in a document or collection of documents. Examples are an index in the [back matter](https://en.wikipedia.org/wiki/Back_matter "Back matter") of a [book](https://en.wikipedia.org/wiki/Book "Book") and an index that serves as a [library catalog](https://en.wikipedia.org/wiki/Library_catalog "Library catalog").

In a traditional back-of-the-book index, the headings will include names of people, places, events, and concepts selected by the **indexer** as being relevant and of interest to a possible reader of the book. The indexer may be the author, the editor, or a professional indexer working as a third party. The pointers are typically page numbers, paragraph numbers or section numbers.

In a [library catalog](https://en.wikipedia.org/wiki/Library_catalog "Library catalog") the words are authors, titles, subject headings, etc., and the pointers are call numbers. Internet [search engines](https://en.wikipedia.org/wiki/Web_search_engine) (such as [Google](https://en.wikipedia.org/wiki/Google "Google")) and full-text searching help provide access to information but are not as selective as an index, as they provide non-relevant links, and may miss relevant information if it is not phrased in exactly the way they expect.[\[1\]](https://en.wikipedia.org/wiki/Index_(publishing)#cite_note-1)

Perhaps the most advanced investigation of problems related to book indexes is made in the development of [topic maps](https://en.wikipedia.org/wiki/Topic_maps "Topic maps"), which started as a way of representing the knowledge structures inherent in traditional back-of-the-book indexes. The [concept](https://en.wikipedia.org/wiki/Concept "Concept") embodied by book indexes lent its name to [database indexes](https://en.wikipedia.org/wiki/Database_index "Database index"), which similarly provide an abridged way to look up information in a larger collection, albeit one for computer use rather than human use.