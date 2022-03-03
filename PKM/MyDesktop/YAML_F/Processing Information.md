---
# Practice sheet
title: YAML
name: Processing
---


Processing YAML Information
---------------------------

YAML is ** both a text format and a method** for [presenting](https://yaml.org/spec/1.2/spec.html#present//) any
[native data structure](https://yaml.org/spec/1.2/spec.html#native%20data%20structure//) in this format. Therefore, this specification defines two concepts: a **class of data objects** called YAML [representations](https://yaml.org/spec/1.2/spec.html#representation//), and a **syntax** for [presenting] YAML representations as a series of characters, called a YAML [stream](https://yaml.org/spec/1.2/spec.html#stream//). 
A **YAML _processor_** is a tool for converting information between these complementary views. It is assumed that a YAML processor does its work on behalf of another module, called an ** _application_**. This chapter describes the information structures a YAML processor must provide to or obtain from the application.

YAML information is used in two ways: for machine processing, and for human consumption. The challenge of reconciling these two perspectives is best done in three distinct translation stages: [representation], [serialization], and [presentation]. 
- **Representation** addresses how YAML views native data structures to achieve portability between programming environments. 
- **Serialization** concerns itself with turning a YAML representation into a serial form, that is, a form with sequential access constraints. 
- **Presentation** deals with the formatting of a YAML serialization as a series of characters in a human-friendly manner.

![[YAML90_processing.png]]

A YAML processor need not expose the [serialization] or [representation] stages. 
It may translate directly between [native data structures] and a character [stream] ([dump] and [load] in the **diagram above**). 
However, such a direct translation _should take place so that the [native data structures] are [constructed]_ only from information available in the [representation]. In particular, [mapping key order], [comments], and [tag handles] should not be referenced during [composition].