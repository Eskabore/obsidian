---
object: "attribute"
title: YAML
name: Transclusion
---

# Transclusion
tags: #YAML #template #transclusion 



is generally the inclusion of the content of a document into another document by reference.

- The parent article should have general summary information, and child articles should expand in more detail on subtopics summarized in the parent article. The child article in turn can also serve as a parent article for its own sections and subsections on the topic, and so on, until a topic is _very_ thoroughly covered. The idea is to summarize and distribute information across related articles in a way that can serve readers who want varying amounts of details. Breakout methods should anticipate the various levels of detail that typical readers will look for.

- The idea is to summarize and distribute information across related articles in a way that can serve readers who want varying amounts of details. Breakout methods should anticipate the various levels of detail that typical readers will look for.


- While normal transclusion is primarily intended to transclude large portions of small templates, labeled section transclusion is intended for small portions of large pages.

### Substitution

[Substitution](https://en.wikipedia.org/wiki/Help:Substitution "Help:Substitution") has a similar double curly-bracket syntax, and its action is similar to transclusion. When you preview a page with substitution wikitext in it, its action is identical to transclusion. But when you save a page with substitution wikitext in it, it differs in that it substitutes that wikitext with the actual wikitext of the template.

For example when `{{subst:Like}}` is saved, it would substitute that wikitext with the actual wikitext from the [Template:Like](https://en.wikipedia.org/wiki/Template:Like "Template:Like"). In practice, the main difference that this makes is that if an update happened to the wikitext of the Template:Like, it would not update any pages where `{{subst:Like}}` had already been saved.

### Magic words

[Magic words](https://en.wikipedia.org/wiki/Help:Magic_words "Help:Magic words") are not examples of transclusion. But some have a similar double curly-bracket syntax and action to transclusion. For example, `{{FULLPAGENAME}}` renders the [Fullpagename](https://en.wikipedia.org/wiki/Wikipedia:Page_name "Wikipedia:Page name") of any Wikipedia page. Like templates, some magic words can also take parameters, which are separated using a colon (:); for example `{{FULLPAGENAME:value}}`.

Templates do exist for some magic words, for example [Template:FULLPAGENAME](https://en.wikipedia.org/wiki/Template:FULLPAGENAME "Template:FULLPAGENAME"); but these just invoke the related magic word if passing parameters using a vertical bar (|); for example like `{{FULLPAGENAME|value}}`. But magic words parameters are best passed directly by using a colon, for example like `{{FULLPAGENAME:value}}`, which bypasses any templates.

### Transclusion modifiers

As discussed above, with the example `{{subst:Like}}`, the `subst:` code alters the transclusion to substitution. This is a _transclusion modifier_, a type of specialist magic word for altering transclusion in some manner. Another example is `{{:Notability}}`, where the `:` (colon character) forces transclusion to the main namespace. There are additional transclusion modifiers such as `safesubst:`, `int:`, `msg:`, `msgnw:`, and `raw:`. For more details on their usage see [mw:Help:Magic words#Transclusion modifiers](https://www.mediawiki.org/wiki/Help:Magic_words#Transclusion_modifiers "mw:Help:Magic words"). Also see the modified commands `#section:`, `#section-x:` and `#section-h:` used for [labeled section transclusion](https://en.wikipedia.org/wiki/Help:Labeled_section_transclusion "Help:Labeled section transclusion").


Partial transclusion
--------------------

By using "noinclude", "onlyinclude" and "includeonly" markup, it is possible to transclude part of a page rather than all of it. Such partial transclusions can also be achieved by transcluding from other pages such as subpages. It is often desirable not to transclude some information, such as template documentation and categories.

### Transclusion markup

-   **noinclude** - The markup `<noinclude>...</noinclude>` means that the text between the tags _will not be transcluded onto another page and will appear only on the page itself_. This is useful for template documentation and categories.
-   **includeonly** - The markup `<includeonly>...</includeonly>` means that the text between the tags _will only be used when the page is transcluded onto another page, and will not appear on the page itself_. This can be useful, for example, for adding categories to pages transcluding a template, without adding the template itself to these categories.
-   **onlyinclude** - The markup `<onlyinclude>...</onlyinclude>` indicates that _only text surrounded by "onlyinclude" markup should be transcluded onto another page, but will appear on the page itself_ if not accompanied by "includeonly" tags as well. This is the most subtle of the partial transclusion tags because it often overrules the others. If there is at least one pair of "onlyinclude" tags on a page, then whenever this page is transcluded, it is _only_ the material within the "onlyinclude" tags which gets transcluded. There can be several such sections, and within each such section, some material might be further excluded by "noinclude" tags, and might also be surrounded by "includeonly" tags so that it does not appear on the original page itself. But material outside the "onlyinclude" tags will be ignored when the page is transcluded onto another page. This can be useful, for example, to repeat a small part of one page on a second one: just surround the small part by onlyinclude tags, and transclude it onto the second page. Note that unlike `<noinclude>` and `<includeonly>`, `<onlyinclude>` will take precedence over enclosing `<nowiki>` tags. In other words, ``<nowiki>`<onlyinclude>My content</onlyinclude>`</nowiki>`` produces only "My content" when transcluded.


**Allen recommends reflection from six levels, called "Horizons of Focus":[\[1\]](https://en.wikipedia.org/wiki/Getting_Things_Done#cite_note-Allen2015-1):215–219

-   Horizon 5: Life
-   Horizon 4: Long-term visions
-   Horizon 3: 1-2 year goals
-   Horizon 2: Areas of focus and accountability
-   Horizon 1: Current projects
-   Ground: Current actions**

