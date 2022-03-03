What is REST

REST is acronym for REpresentational State Transfer. It is architectural style for distributed hypermedia systems and was first presented by Roy Fielding in 2000 in his famous dissertation.

> EN: Like any other architectural style, REST also does have it’s own 6 guiding constraints which must be satisfied if an interface needs to be referred as RESTful. These principles are listed below.
Guiding Principles of REST

>  FR : Six contraintes architecturales définissent un système REST7,8. Ces contraintes restreignent la façon dont le serveur peut traiter et répondre aux requêtes du client afin que, en agissant dans ces contraintes, le système gagne des propriétés non fonctionnelles désirables, telles que la **performance, l'extensibilité, la simplicité, l'évolutivité, la visibilité, la portabilité et la fiabilité**. Un système qui viole une de ces contraintes ne peut pas être considéré comme adhérant à l'architecture REST. 

  - Client–server – By separating the user interface concerns from the data storage concerns, we improve the portability of the user interface across multiple platforms and improve scalability by simplifying the server components.

   - Stateless – Each request from client to server must contain all of the information necessary to understand the request, and cannot take advantage of any stored context on the server. Session state is therefore kept entirely on the client.
   - Cacheable – Cache constraints require that the data within a response to a request be implicitly or explicitly labeled as cacheable or non-cacheable. If a response is cacheable, then a client cache is given the right to reuse that response data for later, equivalent requests.
  -  Uniform interface – By applying the software engineering principle of generality to the component interface, the overall system architecture is simplified and the visibility of interactions is improved. In order to obtain a uniform interface, multiple architectural constraints are needed to guide the behavior of components. REST is defined by four interface constraints: identification of resources; manipulation of resources through representations; self-descriptive messages; and, hypermedia as the engine of application state.
   - Layered system – The layered system style allows an architecture to be composed of hierarchical layers by constraining component behavior such that each component cannot “see” beyond the immediate layer with which they are interacting.
  -  Code on demand (optional) – REST allows client functionality to be extended by downloading and executing code in the form of applets or scripts. This simplifies clients by reducing the number of features required to be pre-implemented.

## Resource

The key abstraction of information in REST is a resource. Any information that can be named can be a resource: a document or image, a temporal service, a collection of other resources, a non-virtual object (e.g. a person), and so on. REST uses a resource identifier to identify the particular resource involved in an interaction between components.

The state of the resource at any particular timestamp is known as resource representation. A representation consists of data, metadata describing the data and hypermedia links which can help the clients in transition to the next desired state.

The data format of a representation is known as a media type. The media type identifies a specification that defines how a representation is to be processed. A truly RESTful API looks like hypertext. Every addressable unit of information carries an address, either explicitly (e.g., link and id attributes) or implicitly (e.g., derived from the media type definition and representation structure).

According to Roy Fielding:

    Hypertext (or hypermedia) means the simultaneous presentation of information and controls such that the information becomes the affordance through which the user (or automaton) obtains choices and selects actions. Remember that hypertext does not need to be HTML (or XML or JSON) on a browser. Machines can follow links when they understand the data format and relationship types.

Further, resource representations shall be self-descriptive: the client does not need to know if a resource is employee or device. It should act on the basis of media-type associated with the resource. So in practice, you will end up creating lots of custom media-types – normally one media-type associated with one resource.

    Every media type defines a default processing model. For example, HTML defines a rendering process for hypertext and the browser behavior around each element. It has no relation to the resource methods GET/PUT/POST/DELETE/… other than the fact that some media type elements will define a process model that goes like “anchor elements with an href attribute create a hypertext link that, when selected, invokes a retrieval request (GET) on the URI corresponding to the CDATA-encoded href attribute.”

Resource Methods

Another important thing associated with REST is resource methods to be used to perform the desired transition. A large number of people wrongly relate resource methods to HTTP GET/PUT/POST/DELETE methods.

Roy Fielding has never mentioned any recommendation around which method to be used in which condition. All he emphasizes is that it should be uniform interface. If you decide HTTP POST will be used for updating a resource – rather than most people recommend HTTP PUT – it’s alright and application interface will be RESTful.

Ideally, everything that is needed to change the resource state shall be part of API response for that resource – including methods and in what state they will leave the representation.

    A REST API should be entered with no prior knowledge beyond the initial URI (bookmark) and set of standardized media types that are appropriate for the intended audience (i.e., expected to be understood by any client that might use the API). From that point on, all application state transitions must be driven by client selection of server-provided choices that are present in the received representations or implied by the user’s manipulation of those representations. The transitions may be determined (or limited by) the client’s knowledge of media types and resource communication mechanisms, both of which may be improved on-the-fly (e.g., code-on-demand).
    [Failure here implies that out-of-band information is driving interaction instead of hypertext.]

Another thing which will help you while building RESTful APIs is that query based API results should be represented by a list of links with summary information, not by arrays of original resource representations because the query is not a substitute for identification of resources.
REST and HTTP are not same !!

A lot of people prefer to compare HTTP with REST. REST and HTTP are not same.

   **REST != HTTP**

Though, because REST also intends to make the web (internet) more streamline and standard, he advocates using REST principles more strictly. And that’s from where people try to start comparing REST with web (HTTP). Roy fielding, in his dissertation, nowhere mentioned any implementation directive – including any protocol preference and HTTP. Till the time, you are honoring the 6 guiding principles of REST, you can call your interface RESTful.

In simplest words, in the REST architectural style, data and functionality are considered resources and are accessed using Uniform Resource Identifiers (URIs). The resources are acted upon by using a set of simple, well-defined operations. The clients and servers exchange representations of resources by using a standardized interface and protocol – typically HTTP.

Resources are decoupled from their representation so that their content can be accessed in a variety of formats, such as HTML, XML, plain text, PDF, JPEG, JSON, and others. Metadata about the resource is available and used, for example, to control caching, detect transmission errors, negotiate the appropriate representation format, and perform authentication or access control. And most importantly, every interaction with a resource is stateless.

All these principles help RESTful applications to be simple, lightweight, and fast.

----

'''REST''' ('''''{{lang|en|representational state transfer}}''''') est un style d'[[Architecture informatique|architecture logicielle]] définissant un ensemble de contraintes à utiliser pour créer des services web. Les services web conformes au style d'architecture REST, aussi appelés services web '''''RESTful''''', établissent une interopérabilité entre les ordinateurs sur [[Internet]]. Les services web REST permettent aux systèmes effectuant des requêtes de manipuler des ressources web via leurs représentations textuelles à travers un ensemble d'opérations uniformes et prédéfinies [[Protocole sans état|sans état]]. D'autres types de services web tels que les services web [[SOAP]] exposent leurs propres ensembles d'opérations arbitraires<ref>{{Lien web |langue=en |titre=Web Services Architecture |url=https://www.w3.org/TR/2004/NOTE-ws-arch-20040211/#relwwwrest |date=11 février 2004 |site=W3 |consulté le=6 mai 2018}}</ref>.

Les ressources web ont été définies pour la première fois sur le [[World Wide Web]] comme des documents ou des fichiers identifiés par leur [[Uniform Resource Locator|URL]]. Cependant, elles ont aujourd'hui une définition beaucoup plus générique et abstraite qui inclut toute chose ou entité pouvant être identifiée, nommée, adressée ou gérée d'une façon quelconque sur le web. Dans un service web REST, les requêtes effectuées sur l'[[Uniform Resource Identifier|URI]] d'une ressource produisent une réponse dont le corps est formaté en [[Hypertext Markup Language|HTML]], [[Extensible Markup Language|XML]], [[JavaScript Object Notation|JSON]] ou un autre format. La réponse peut confirmer que la ressource stockée a été altérée et elle peut fournir des liens [[hypertextes]] vers d'autres ressources ou collection de ressources liées. Lorsque le protocole [[Hypertext Transfer Protocol|HTTP]] est utilisé, comme c'est souvent le cas, les [[Hypertext Transfer Protocol#Méthodes|méthodes HTTP]] disponibles sont GET, HEAD, POST, PUT, PATCH, DELETE, CONNECT, OPTIONS et TRACE<ref>{{Lien web |langue=en |titre=Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content |url=https://tools.ietf.org/html/rfc7231#section-4 |date=14 juin |site=Internet Engineering Task Force (IETF) |consulté le=14 février 2019}}</ref>.

Avec l'utilisation d'un protocole sans état et d'opérations standards, les systèmes REST visent la réactivité, la fiabilité et l'extensibilité, par la réutilisation de composants pouvant être gérés et mis à jour sans affecter le système global, même pendant son fonctionnement.

Le terme ''{{lang|en|representational state transfer}}'' a été défini pour la première fois en 2000 par [[Roy Fielding]] dans le chapitre 5 de sa [[thèse de doctorat]]<ref name="fielding-2000-chap5">{{Ouvrage |langue=en |auteur1=Roy Thomas Fielding |titre=Architectural Styles and the Design of Network-based Software Architectures |sous-titre= |éditeur=université de Californie à Irvine |collection= |lieu=Irvine |année=2000 |volume= |tome= |pages totales=162 |numéro chapitre=5 |titre chapitre=Representational State Transfer (REST) |isbn= |lire en ligne=https://www.ics.uci.edu/~fielding/pubs/dissertation/fielding_dissertation.pdf}}</ref>{{,}}<ref>{{Lien web |langue=fr |titre=Thèse de Roy T. Fielding - Traduction du Chapitre 5 : REST |url=http://opikanoba.org/tr/fielding/rest/ |date=26 juillet 2006 |site=Opikanoba |consulté le=10 mai 2018}}</ref>{{,}}<ref>{{Lien web |langue=en |titre=Fielding discute de la définition du terme REST |url=https://groups.yahoo.com/neo/groups/rest-discuss/conversations/topics/6735 |date=7 novembre 2006 |site=Yahoo |consulté le=10 mai 2018}}</ref>. La thèse de Fielding a expliqué les principes de REST auparavant connus comme le « modèle objet de HTTP » depuis 1994 et qui ont été utilisés dans l'élaboration des standards HTTP 1.1 et URI. Le terme est censé évoquer comment une application web bien conçue se comporte : c'est un réseau de ressources (une machine à états virtuelle) au sein duquel l'utilisateur évolue en sélectionnant des identifiants de ressources telles que <nowiki>http://www.exemple.com/articles/21</nowiki> et des opérations sur les ressources telles que GET ou POST (des transitions d'état de l'application) transférant une représentation de la ressource suivante (le nouvel état de l'application) vers l'utilisateur pour être utilisée.

== Histoire ==
[[File:Roy Fielding at OSCON 2008.jpg|thumb|Roy Fielding à l'[[O'Reilly Open Source Convention|OSCON]] 2008.]]
[[Roy Fielding]] a défini REST en 2000 dans sa thèse de doctorat ''Architectural Styles and the Design of Network-based Software Architectures'' à l'[[université de Californie à Irvine]]<ref name="fielding-2000-chap5"/>. Il y a développé le style d'architecture REST en parallèle du protocole [[Hypertext Transfer Protocol|HTTP]] 1.1 de 1996 à 1999, basé sur le modèle existant de HTTP 1.0 de 1996<ref name="fielding-2006-discussion">{{Lien web |langue=en |titre=Discussion sur le développement de REST |url=http://tech.groups.yahoo.com/group/rest-discuss/message/6757 |date=7 novembre 2006 |site=Yahoo |consulté le=10 mai 2018 |archive-url=https://web.archive.org/web/20091111012314/http://tech.groups.yahoo.com/group/rest-discuss/message/6757 |archive-date=11 novembre 2009}}</ref>.

Lors d'un regard rétrospectif sur le développement de REST, Fielding a déclaré:

{{citation bilingue bloc |lang=en |Throughout the HTTP standardization process, I was called on to defend the design choices of the Web. That is an extremely difficult thing to do within a process that accepts proposals from anyone on a topic that was rapidly becoming the center of an entire industry. I had comments from well over 500 developers, many of whom were distinguished engineers with decades of experience, and I had to explain everything from the most abstract notions of Web interaction to the finest details of HTTP syntax. That process honed my model down to a core set of principles, properties, and constraints that are now called REST.|Au cours de la procédure de standardisation de HTTP, on m'a appelé pour défendre les choix d'architecture du Web. C'est une tâche extrêmement compliquée dans la mesure où la procédure accepte les propositions de n'importe qui sur un sujet qui était en train de devenir rapidement le centre d'une industrie entière. Je recevais les commentaires de plus de 500 développeurs, dont de nombreux étaient des ingénieurs renommés avec des décennies d'expérience, et je devais tout expliquer, des notions les plus abstraites des interactions du Web jusqu'aux détails les plus subtils de la syntaxe de HTTP. Cette procédure a réduit mon modèle à un ensemble fondamental de principes, propriétés et contraintes qui sont aujourd'hui appelés REST.|Roy Fielding|Discussion sur le développement de REST<ref name="fielding-2006-discussion"/>.}}

== Contraintes architecturales ==
Six contraintes architecturales définissent un système REST<ref name="erl-2012">{{Ouvrage |langue=en |auteur1=Thomas Erl |auteur2=Benjamin Carlyle |auteur3=Cesare Pautasso |auteur4=Raj Balasubramanian |titre=SOA with REST |sous-titre=Principles, Patterns & Constraints for Building Enterprise Solutions with REST |éditeur=Prentice Hall |collection= |lieu=Upper Saddle River, New Jersey |année=2012 |volume= |tome= |pages totales=624 |passage= |isbn=978-0-13-701251-0 |lire en ligne= |numéro chapitre=5.1}}</ref>{{,}}<ref name="richardson-2007">{{Ouvrage |langue=en |auteur1=Leonard Richardson |auteur2=Sam Ruby |titre=RESTful Web Services |éditeur=O'Reilly Media |collection= |lieu=Sebastopol, Californie |année=2007 |volume= |tome= |pages totales=446 |passage= |isbn=978-0-596-52926-0 |lire en ligne= }}</ref>. Ces contraintes restreignent la façon dont le serveur peut traiter et répondre aux requêtes du client afin que, en agissant dans ces contraintes, le système gagne des propriétés non fonctionnelles désirables, telles que la performance, l'extensibilité, la simplicité, l'évolutivité, la visibilité, la portabilité et la fiabilité<ref name="fielding-2000-chap5"/>. Un système qui viole une de ces contraintes ne peut pas être considéré comme adhérant à l'architecture REST.

=== Client–serveur ===
{{Voir|Client–serveur}}
Les responsabilités sont séparées entre le client et le serveur. Découpler l'interface utilisateur du stockage des données améliore la portabilité de l'interface utilisateur sur plusieurs plateformes. L'extensibilité du système se retrouve aussi améliorée par la simplification des composants serveurs. Mais peut-être encore plus essentiel pour le Web, la séparation permet aux composants d'évoluer indépendamment, supportant ainsi les multiples domaines organisationnels nécessaires à l'échelle d'Internet.

=== Sans état ===
{{Voir|Protocole sans état}}
La communication client–serveur s'effectue sans conservation de l'état de la [[Session (informatique)|session]] de communication sur le serveur entre deux requêtes successives. L'état de la session est conservé par le client et transmis à chaque nouvelle requête. Les requêtes du client contiennent donc toute l'information nécessaire pour que le serveur puisse y répondre. La visibilité des interactions entre les composants s'en retrouve améliorée puisque les requêtes sont complètes. La tolérance aux échecs est également plus grande. De plus, le fait de ne pas avoir à maintenir une connexion permanente entre le client et le serveur permet au serveur de répondre à d'autres requêtes venant d'autres clients sans saturer l'ensemble de ses ports de communication, ce qui améliore l'extensibilité du système.

Cependant une exception usuelle à ce mode sans état est la gestion de l'authentification du client, afin que celui-ci n'ait pas à renvoyer ces informations à chacune de ses requêtes.

=== Avec mise en cache ===
{{Voir|Cache web}}
Les clients et les serveurs intermédiaires peuvent mettre en cache les réponses. Les réponses doivent donc, implicitement ou explicitement, se définir comme pouvant être mise en cache ou non, afin d'empêcher les clients de récupérer des données obsolètes ou inappropriées en réponse à des requêtes ultérieures. Une mise en cache bien gérée élimine partiellement voire totalement certaines interactions client–serveur, améliorant davantage l'extensibilité et la performance du système.

=== En couches ===
{{Voir|Architecture en couches}}
Un client ne peut habituellement pas dire s'il est connecté directement au serveur final ou à un serveur intermédiaire. Les serveurs intermédiaires peuvent améliorer l'extensibilité du système en mettant en place une répartition de charge et un cache partagé. Ils peuvent aussi renforcer les politiques de sécurité.

=== Avec code à la demande (facultative) ===
Les serveurs peuvent temporairement étendre ou modifier les fonctionnalités d'un client en lui transférant du code exécutable. Par exemple par des [[Applet Java|applets Java]] ou des scripts [[JavaScript]]. Cela permet de simplifier les clients en réduisant le nombre de fonctionnalités qu'ils doivent mettre en œuvre par défaut et améliore l'extensibilité du système. En revanche, cela réduit aussi la visibilité de l'organisation des ressources. De ce fait, elle constitue une contrainte facultative dans une architecture REST.

=== Interface uniforme ===
La contrainte d'interface uniforme est fondamentale dans la conception de n'importe quel système REST. Elle simplifie et découple l'architecture, ce qui permet à chaque composant d'évoluer indépendamment. Les quatre contraintes de l'interface uniforme sont les suivantes.

; Identification des ressources dans les requêtes
: Chaque ressource est identifiée dans les requêtes, par exemple par un [[Uniform Resource Identifier|URI]] dans le cas des systèmes REST basés sur le Web. Les ressources elles-mêmes sont conceptuellement distinctes des représentations qui sont retournées au client. Par exemple, le serveur peut envoyer des données de sa base de données en [[Hypertext Markup Language|HTML]], [[Extensible Markup Language|XML]] ou [[JavaScript Object Notation|JSON]], qui sont des représentations différentes de la représentation interne de la ressource.

; Manipulation des ressources par des représentations
: Chaque représentation d'une ressource fournit suffisamment d'informations au client pour modifier ou supprimer la ressource.

; Messages auto-descriptifs
: Chaque message contient assez d'information pour savoir comment l'interpréter. Par exemple, l'interpréteur à invoquer peut être décrit par un [[type de médias]].

; Hypermédia comme moteur d'état de l'application ([[HATEOAS]])
: Après avoir accédé à un URI initial de l'application — de manière analogue aux humains accédant à la [[page d'accueil]] d'un site web —, le client doit être en mesure d'utiliser dynamiquement les [[hyperlien]]s fournis par le serveur pour découvrir toutes les autres actions possibles et les ressources dont il a besoin pour poursuivre la navigation. Il n'est pas nécessaire pour le client de coder en dur cette information concernant la structure ou la dynamique de l'application.

== Propriétés architecturales ==
Les contraintes architecturales de REST confèrent aux systèmes qui les respectent les propriétés architecturales suivantes<ref name="fielding-2000-chap5"/>{{,}}<ref name="erl-2012"/> :

* performance dans les interactions des composants, qui peuvent être le facteur dominant dans la performance perçue par l'utilisateur et l'efficacité du réseau<ref name="fielding-2000-chap2">{{Ouvrage |langue=en |auteur1=Roy Thomas Fielding |titre=Architectural Styles and the Design of Network-based Software Architectures |sous-titre= |éditeur=université de Californie à Irvine |collection= |lieu=Irvine |année=2000 |volume= |tome= |pages totales=162 |numéro chapitre=2 |titre chapitre=Network-based Application Architectures |isbn= |lire en ligne=https://www.ics.uci.edu/~fielding/pubs/dissertation/fielding_dissertation.pdf}}</ref> ;
* [[Scalability|extensibilité]] permettant de supporter un grand nombre de composants et leurs interactions. Roy Fielding décrit l'effet de REST sur l'extensibilité comme suit :

{{Citation bilingue bloc |lang=en |REST's client–server separation of concerns simplifies component implementation, reduces the complexity of connector semantics, improves the effectiveness of performance tuning, and increases the scalability of pure server components. Layered system constraints allow intermediaries—proxies, gateways, and firewalls—to be introduced at various points in the communication without changing the interfaces between components, thus allowing them to assist in communication translation or improve performance via large-scale, shared caching. REST enables intermediate processing by constraining messages to be self-descriptive: interaction is stateless between requests, standard methods and media types are used to indicate semantics and exchange information, and responses explicitly indicate cacheability.|La [[séparation des préoccupations]] client–serveur simplifie l'implémentation des composants, réduit la complexité de la sémantique des connecteurs, améliore l'efficacité de l'optimisation des performances et augmente l'extensibilité des composants purement serveurs. La contrainte d'architecture en couches permet aux intermédiaires — serveurs mandataires, passerelles et pare-feu — d'être introduits à différents niveaux dans la communication sans changer les interfaces entre les composants, leur permettant ainsi d'intervenir dans la traduction des communications ou d'améliorer les performances via des systèmes de cache à grande échelle. REST permet les traitements intermédiaires en forçant des messages auto-descriptifs : l'interaction est sans état entre les requêtes, les méthodes standard et les types de média sont utilisés pour indiquer la sémantique et échanger l'information, et les réponses indiquent explicitement la possibilité de la mise en cache.|Roy Fielding|Architectural Styles and the Design of Network-based Software Architectures<ref name="fielding-2000-chap5"/>.}}

* simplicité d'une interface uniforme ;
* évolutivité des composants pour répondre aux besoins (même lorsque l'application est en cours de fonctionnement) ;
* visibilité des communications entre les composants par des agents de service ;
* portabilité des composants en déplaçant le code avec les données ;
* fiabilité dans la résistance aux pannes du système en cas de pannes des composants, des connecteurs ou des données<ref name="fielding-2000-chap2"/>.

== Appliqué aux services web ==
Les [[Interface de programmation|API]] REST basées sur HTTP sont définies par<ref name="richardson-2007"/> :
* un [[Uniform Resource Identifier|URI]] de base, comme <code><nowiki>http://api.example.com/collection/</nowiki></code> ;
* des [[Hypertext Transfer Protocol#Méthodes|méthodes HTTP]] standards (par ex. : GET, POST, PUT, PATCH et DELETE) ;
* un [[type de médias]] pour les données permettant une transition d'état (par ex. : Atom, microformats, application/vnd.collection+json, etc.). La nature hypermédia de l'application permet d'accéder aux états suivants de l'application par inspection de la représentation courante. Cela peut être aussi simple qu'un URI ou aussi complexe qu'un applet Java.

=== Relation entre URI et méthodes HTTP ===
Le tableau suivant affiche comment les méthodes HTTP sont généralement utilisées dans une API REST :

{| class="wikitable"
|+ Méthodes HTTP
! URI !! GET !! POST !! PUT !! PATCH !! DELETE
|-
! Ressource collection, telle que <code><nowiki>http://api.exemple.com/collection/</nowiki></code>
| ''Récupère'' les URI des ressources membres de la ressource collection dans le corps de la réponse.
| ''Crée'' une ressource membre dans la ressource collection en utilisant les instructions du corps de la requête. L'URI de la ressource membre créée est ''attribué automatiquement'' et retourné dans le champ d'en-tête ''Location'' de la réponse.
| ''Remplace'' toutes les représentations des ressources membres de la ressource collection par la représentation dans le corps de la requête, ou ''crée'' la ressource collection si elle n'existe pas.
| ''Met à jour'' toutes les représentations des ressources membres de la ressource collection en utilisant les instructions du corps de la requête, ou ''crée éventuellement'' la ressource collection si elle n'existe pas.
| ''Supprime'' toutes les représentations des ressources membres de la ressource collection.
|-
! Ressource membre, telle que <code><nowiki>http://api.exemple.com/collection/item3</nowiki></code>
| ''Récupère'' une représentation de la ressource membre dans le corps de la réponse.
| ''Crée'' une ressource membre dans la ressource membre en utilisant les instructions du corps de la requête. L'URI de la ressource membre créée est ''attribué automatiquement'' et retourné dans le champ d'en-tête ''Location'' de la réponse.
| ''Remplace'' toutes les représentations de la ressource membre, ou ''crée'' la ressource membre si elle n'existe pas, par la représentation dans le corps de la requête.
| ''Met à jour'' toutes les représentations de la ressource membre, ou ''crée éventuellement'' la ressource membre si elle n'existe pas, en utilisant les instructions du corps de la requête.
| ''Supprime'' toutes les représentations de la ressource membre.
|}

La méthode GET est sûre, c'est-à-dire que l'appliquer sur une ressource ne résulte pas en un changement d'état de la ressource (sémantique de lecture seule)<ref>{{Lien web |langue=en |titre=Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content |url=https://tools.ietf.org/html/rfc7231#section-4.2.1 |date=14 juin |site=Internet Engineering Task Force (IETF) |consulté le=14 février 2019}}</ref>. Les méthodes GET, PUT et DELETE sont [[Idempotence|idempotentes]], c'est-à-dire que les appliquer plusieurs fois sur une ressource résulte en le même changement d'état de la ressource que les appliquer une seule fois, bien que la réponse puisse différer<ref>{{Lien web |langue=en |titre=Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content |url=https://tools.ietf.org/html/rfc7231#section-4.2.2 |date=14 juin |site=Internet Engineering Task Force (IETF) |consulté le=14 février 2019}}</ref>. Les méthodes GET et POST sont [[Cache web|stockables en cache]], c'est-à-dire que le stockage des réponses à ces requêtes pour une future réutilisation est autorisé<ref>{{Lien web |langue=en |titre=Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content |url=https://tools.ietf.org/html/rfc7231#section-4.2.3 |date=14 juin |site=Internet Engineering Task Force (IETF) |consulté le=14 février 2019}}</ref>.

Contrairement aux services web orientés [[SOAP]], il n'y a pas de norme officielle pour les API REST<ref name="elkstein-2008">{{Lien web |langue=en |titre=Learn REST: A Tutorial |url=http://rest.elkstein.org/2008/02/what-is-rest.html |date=février 2008 |site=Elkstein |consulté le=13 mai 2018}}</ref>, parce que REST est une architecture alors que SOAP est un protocole. REST n'est pas une norme en soi, mais les implémentations qui suivent cette architecture utilisent des normes comme [[HTTP]], [[Uniform Resource Identifier|URI]], [[JSON]] et [[XML]]<ref name="elkstein-2008"/>.

== Bibliographie ==
* {{lang|en|''RESTful Web Services''}}, par Leonard Richardson et Sam Ruby, est un ouvrage en anglais sorti en {{date-|mai 2007}}. Celui-ci a popularisé le style d’architecture REST<ref>{{ouvrage|langue=en|prénom1= Leonard|nom1= Richardson |prénom2= Sam|nom2= Ruby|titre= RESTful Web Services  |éditeur= O'Reilly Media |année=2007|pages totales=454|passage=|isbn= 978-0-596-52926-0}}</ref>.
* {{lang|en|''Building Hypermedia APIs with HTML5 and Node''}}, par Mike Amundsen, sorti en {{date-|novembre 2011}}<ref>{{ouvrage|langue=en|prénom1= Mike|nom1= Amundsen |titre= Building Hypermedia APIs with HTML5 and Node  |éditeur= O'Reilly Media |année=2011|pages totales=244|passage=|isbn= 978-1-4493-0657-1}}</ref>.
* {{lang|en|''REST in Practice''}}, par Jim Webber, Savas Parastatidis, Ian Robinson, sorti en {{date-|septembre 2010}}<ref>{{ouvrage|langue=en|prénom1= Jim |nom1= Webber |prénom2=Savas |nom2= Parastatidis |prénom3= Ian |nom3= Robinson|titre= REST in Practice  |éditeur= O'Reilly Media |année=2010|pages totales=448|passage=|isbn= 978-0-596-80582-1}}</ref>.
* {{lang|en|''REST API Design Rulebook''}}, Designing Consistent RESTful Web Service Interfaces, par Mark Masse, sorti en {{date-|octobre 2011}}<ref>{{ouvrage|langue=en|prénom1= Mark|nom1= Masse |titre=  REST API Design Rulebook  |éditeur= O'Reilly Media |année=2011|pages totales=116|passage=|isbn= 978-1-4493-1050-9}}</ref>.

== Voir aussi ==
=== Articles connexes ===
* [[Waka (protocole)|Protocole Waka]]

=== Liens externes ===
* {{en}} [http://www.ics.uci.edu/~fielding/pubs/dissertation/top.htm {{lang|en|''Architectural Styles and the Design of Network-based Software Architectures''}}] La thèse de Roy Fielding dans laquelle il décrit l’architecture REST
* [http://opikanoba.org/tr/fielding/rest Thèse de Roy T. Fielding - Traduction du Chapitre 5 : REST]
* [http://nicolas-zozol.developpez.com/tutoriels/java/restful/jsp/ Tutoriel pour un Web Service écrit avec JSP ]
* [http://www.journaldunet.com/developpeur/breve/35654/web-services---jboss-privilegie-l-approche-rest.shtml Web Services : JBoss privilégie l’approche REST]
* {{en}} [http://www.rexx.com/~dkuhlman/rest_howto.html {{lang|en|''howto rest pour AOLserver, PyWX, Quixote''}}]
* {{en}} [http://www.eweek.com/c/a/Application-Development/JBoss-Helps-Developers-RESTEasy-Writing-RESTbased-Java-Web-Services/ {{lang|en|''JBoss Helps Developers RESTEasy Writing REST-based Java Web Services''}}]

== Notes et références ==
{{Références}}

{{Palette|Communication inter-processus}}
{{Portail|Informatique}}

[[Catégorie:Web 2.0]]
[[Catégorie:Architecture logicielle]]

