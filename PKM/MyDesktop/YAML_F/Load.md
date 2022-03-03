---
title: YAML
name: Load
---

## Load

Loading native data structures from a character stream is done using the following 3 stages: 

- Parsing the Presentation Stream 

 Parsing is the inverse process of presentation, it takes a stream of characters and produces a series of events. Parsing discards all the details introduced in the presentation process, reporting only the serialization events. _**Parsing can fail due to ill-formed input**_. 
 
 - Composing the Representation Graph 
 
 Composing takes a series of serialization events and produces a representation graph. Composing discards all the details introduced in the serialization process, producing only **the representation graph**. Composing can fail due to any of several reasons, detailed below.
 
 - Constructing Native Data Structures 
 
 The final input process is constructing native data structures from the YAML representation. Construction must be based only on the information available in the representation, and not on additional serialization or presentation details such as _comments, directives, mapping key order, node styles, scalar content format, indentation levels_ etc. 
 **Construction can fail due to the unavailability of the required native data types.**