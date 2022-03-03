# ULM Activity Diagram
----
**Activity diagrams** are graphical  representations of [[workflow]]s of stepwise activities and actions with support for choice, iteration and concurrency. 

   In the [[Unified Modeling Language]], activity diagrams are intended to model both computational and organizational processes (i.e., workflows), as well as the data flows intersecting with the related activities. Although activity diagrams primarily show the overall flow of control, they can also include elements showing the flow of data between activities through one or more data stores.{{fact|date=January 2018}}

==Construction==
Activity diagrams are constructed from a limited number of shapes, connected with arrows. The most important shape types:
* ''ellipses'' represent ''actions'';
* ''diamonds'' represent ''decisions'';
* ''bars'' represent the start (''split'') or end (''join'') of concurrent activities;
* a ''black circle'' represents the start (''initial node'') of the workflow;
* an ''encircled black circle'' represents the end (''final node'').
Arrows run from the start towards the end and represent the order in which activities happen.

Activity diagrams can be regarded as a form of a structured [[flowchart]] combined with a traditional data flow diagram. Typical flowchart techniques lack constructs for expressing concurrency. However, the **join** and **split** symbols in activity diagrams only resolve this for simple cases; the meaning of the model is not clear when they are arbitrarily combined with decisions or loops.{{fact|date=January 2018}}

While in UML 1.x, activity diagrams were a specialized form of state diagrams,<ref>[[Dumas, Marlon]], and [[Arthur H.M. Ter Hofstede]]. "UML activity diagrams as a workflow specification language." ≪ UML≫ 2001—The Unified Modeling Language. Modeling Languages, Concepts, and Tools. Springer Berlin Heidelberg, 2001. 76-90.</ref> in UML 2.x, the activity diagrams were reformalized to be based on [[Petri net]]-like semantics, increasing the scope of situations that can be modeled using activity diagrams.<ref>Störrle, Harald, and J. H. Hausmann. "semantics of uml 2.0 activities." Proceedings of the IEEE Symposium on Visual Languages and Human-Centric Computing. 2004.

UML activity diagrams in version 2.x can be used in various domains, e.g. in design of embedded systems. It is possible to verify such a specification using model checking technique.

==See also==
* [[Business Process Modeling Notation]]
* [[Control flow graph]]
* [[Data flow diagram]]
* [[DRAKON|Drakon-chart]]
* [[Event-driven process chain]]
* [[List of UML tools]]
* [[Pseudocode]]
* [[State diagram]]

== References ==
{{reflist|1}}

==Bibliography==

== External links ==
[[commons category|Activity diagrams]]
[link1](http://conradbock.org/bockonline.html|UML2.0) Articles on UML 2 Activities and Actions ?
[link2](https://www.ibm.com/developerworks/rational/library/2802.html) Activity diagrams: What they are and how to use them ?

