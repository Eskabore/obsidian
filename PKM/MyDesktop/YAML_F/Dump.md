---
title: YAML
name: Dump
---

## Dump

**_Dumping_** native data structures to a **character stream**, is done using the following three stages:

- Representing Native Data Structure

YAML _represents_ any _native data structure_ using three [node kinds](https://yaml.org/spec/1.2/spec.html#kind//): [sequence](https://yaml.org/spec/1.2/spec.html#sequence//) - an ordered series of entries; [mapping](https://yaml.org/spec/1.2/spec.html#mapping//) - an unordered association of [unique](https://yaml.org/spec/1.2/spec.html#equality//) [keys](https://yaml.org/spec/1.2/spec.html#key//) to [values](https://yaml.org/spec/1.2/spec.html#value//); and [scalar](https://yaml.org/spec/1.2/spec.html#scalar//) - any datum with opaque structure presentable as a series of Unicode characters. Combined, these primitives generate directed graph structures. These primitives were chosen because they are both powerful and familiar: the [sequence](https://yaml.org/spec/1.2/spec.html#sequence//) corresponds to a Perl array and a Python list, the [mapping](https://yaml.org/spec/1.2/spec.html#mapping//) corresponds to a Perl hash table and a Python dictionary. The [scalar](https://yaml.org/spec/1.2/spec.html#scalar//) represents strings, integers, dates, and other atomic data types.

- Serializing the Representation Graph

For sequential access mediums, such as an event callback API, a YAML [representation](https://yaml.org/spec/1.2/spec.html#representation//) must be _serialized_ to an ordered tree. Since in a YAML [representation](https://yaml.org/spec/1.2/spec.html#representation//), [mapping keys](https://yaml.org/spec/1.2/spec.html#key//) are unordered and [nodes](https://yaml.org/spec/1.2/spec.html#node//) may be referenced more than once (have more than one incoming “arrow”), the serialization process is required to impose an [ordering](https://yaml.org/spec/1.2/spec.html#key/order/) on the [mapping keys](https://yaml.org/spec/1.2/spec.html#key//) and to replace the second and subsequent references to a given [node](https://yaml.org/spec/1.2/spec.html#node//) with place holders called [aliases](https://yaml.org/spec/1.2/spec.html#alias//). YAML does not specify how these _serialization details_ are chosen. It is up to the YAML [processor](https://yaml.org/spec/1.2/spec.html#processor//) to come up with human-friendly [key order](https://yaml.org/spec/1.2/spec.html#key/order/) and [anchor](https://yaml.org/spec/1.2/spec.html#anchor//) names, possibly with the help of the [application](https://yaml.org/spec/1.2/spec.html#application//). The result of this process, a YAML [serialization tree](https://yaml.org/spec/1.2/spec.html#serialization//), can then be traversed to produce a series of event calls for one-pass processing of YAML data.

- Presenting the Serialization Tree

The final output process is _presenting_ the YAML [serializations](https://yaml.org/spec/1.2/spec.html#serialization//) as a character [stream](https://yaml.org/spec/1.2/spec.html#stream//) in a human-friendly manner. To maximize human readability, YAML offers a rich set of stylistic options which go far beyond the minimal functional needs of simple data storage. Therefore the YAML [processor](https://yaml.org/spec/1.2/spec.html#processor//) is required to introduce various _presentation details_ when creating the [stream](https://yaml.org/spec/1.2/spec.html#stream//), such as the choice of [node styles](https://yaml.org/spec/1.2/spec.html#style//), how to [format scalar content](https://yaml.org/spec/1.2/spec.html#scalar/content format/), the amount of [indentation](https://yaml.org/spec/1.2/spec.html#space/indentation/), which [tag handles](https://yaml.org/spec/1.2/spec.html#tag/handle/) to use, the [node tags](https://yaml.org/spec/1.2/spec.html#tag//) to leave [unspecified](https://yaml.org/spec/1.2/spec.html#tag/non-specific/), the set of [directives](https://yaml.org/spec/1.2/spec.html#directive//) to provide and possibly even what [comments](https://yaml.org/spec/1.2/spec.html#comment//) to add. While some of this can be done with the help of the [application](https://yaml.org/spec/1.2/spec.html#application//), in general this process should be guided by the preferences of the user.

> [!Warning] 

