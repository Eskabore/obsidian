---
folder: YAML
title: tags
tags: tags
---

## TAGS

In YAML, **untagged nodes** are specified with a specific type of the application. The examples of tags specification generally use **seq, map** and **str** types for _**YAML tag repository**_. 
The tags are represented as examples which are mentioned as below −

YAML represents type information of native data structure with a simple identifier, called a  **_tag_. _Global** 
**_tags_** are URIs and hence globally unique across all applications. 
The “**`tag:`**” URI scheme is recommended for all global YAML tags. 
In contrast, **_local tags_** are specific to a single application. Local tags start with _“**`!`**”_, are not URIs and are not expected to be globally unique. YAML provides a [“**`TAG`**” directive](https://yaml.org/spec/1.2/spec.html#directive/TAG/) to make tag notation less verbose; it also offers easy migration from local to global tags. To ensure this, local tags are restricted to the URI character set and use URI character [escaping](https://yaml.org/spec/1.2/spec.html#% escaping in URI//).

Integer tags
------------

These tags include integer values in them. They are also called as numeric tags.
```canonical: 12345
decimal: +12,345
sexagecimal: 3:25:45
octal: 014
hexadecimal: 0xC
```

Floating point numbers
----------------------

These tags include decimal and exponential values. They are also called as exponential tags.
```canonical: 1.23015e+3
exponential: 12.3015e+02
sexagecimal: 20:30.15
fixed: 1,230.15
negative infinity: -.inf
not a number: .NaN
```

Miscellaneous Tags
------------------

It includes a variety of integer, floating and string values embedded in them. Hence it is called miscellaneous tags.
```null: ~
true: y
false: n
string: '12345'
```