{{Voir homophones|S.O.A.P.}}
{{à sourcer|date= octobre 2012}}
[[Fichier:SOAP.svg|thumb|right|220px|Structure de SOAP.]]
'''SOAP''' (ancien acronyme de ''{{Langue|en|Simple Object Access Protocol}}'') est un protocole d'échange d'information structurée dans l'implémentation de services web bâti sur [[XML#|XML - Extensible markup language]].

![[Pasted image 20201020171921.png]]

Il permet la transmission de [[message]]s entre objets distants, ce qui veut dire qu'il autorise un objet à invoquer des méthodes d'objets physiquement situés sur un autre [[serveur informatique|serveur]]. Le transfert se fait le plus souvent à l'aide du protocole [[HTTP]], mais peut également se faire par un autre protocole, comme [[Simple Mail Transfer Protocol|SMTP]].

Le protocole SOAP est composé de deux parties :
* une enveloppe, contenant des informations sur le message lui-même afin de permettre son acheminement et son traitement ;
* un [[modèle de données]], définissant le format du message, c'est-à-dire les informations à transmettre.

SOAP a été initialement défini par [[Microsoft]] et [[International Business Machines Corporation|IBM]]<ref>{{en}} Voir [http://msdn.microsoft.com/fr-fr/library/bb469912.aspx SOAP : {{Langue|en|Simple Object Access Protocol}}].</ref>, mais est devenu une référence depuis une recommandation du [[World Wide Web Consortium|W3C]], utilisée notamment dans le cadre d'architectures de type '''[[Service Oriented Architecture|SOA]]''' (''{{Langue|en|Service Oriented Architecture}}'') pour les [[Service Web#Les Services Web WS|Services Web WS-*]].

Le protocole SOAP emploie des [[métadonnée]]s<ref>{{en}} Voir [http://webservices.xml.com/pub/a/ws/2003/07/22/sessions.html?page=2 {{Langue|en|Using SOAP metadata}}].</ref>.

SOAP n'est plus un acronyme depuis la version 1.2. En effet, SOAP v1.2 a été réécrit en fonction d'infosets XML, et non plus sous forme de sérialisations <?xml … ?> comme il l'était en v1.1. La notion d'objet (spécifiée dans ''{{Langue|en|Simple '''Object''' Access Protocol}}'') devient donc obsolète.

== Critiques techniques ==
De nombreux commentateurs et spécialistes ont discuté des avantages et inconvénients de SOAP relatifs aux autres technologies, et relatifs aux contextes de son utilisation.

=== Avantages ===
* Utiliser SOAP via HTTP facilite la communication et évite les problèmes de proxys et pare-feu par rapport à des technologies plus anciennes.
* SOAP est :
** assez ouvert pour s'adapter à différents protocoles de transport ;
** indépendant de la plate-forme ;
** indépendant du langage ;
** extensible.

=== Inconvénients ===
* En raison du nombre d'informations qu'impose le format XML, SOAP peut alourdir considérablement les échanges par rapport à des  [[middleware]]s comme [[CORBA]] ou [[Internet Communications Engine|ICE]], ce qui n'est pas forcément un handicap quand les volumes de données transités par SOAP sont faibles par rapport au volume total de données échangées.
* SOAP décrit la manière dont les applications doivent communiquer entre elles, certains considèrent que le couplage reste fort entre le serveur et ses clients. Une modification de l'[[Interface_de_programmation|API]] implique ainsi une évolution côté client, contrairement à une architecture orientée ressources telle que [[Representational State Transfer|REST]].

== Notes et références ==
{{Références}}

== Voir aussi ==

=== Articles connexes ===
* [[CORBA]]
* [[Component Object Model|COM]]
* [[Service Web#Les Services Web WS|Les Services Web WS-*]]
* [[Web Services Description Language]] (WSDL)
* [[Ajax (informatique)]]
* [[REST]]
* [[XML-RPC]], l'ancêtre de SOAP
* [[Liste des spécifications des Services Web WS-*]]
* [[Action Message Format]]

=== Liens externes ===
* {{fr}} [http://www.w3.org/2002/07/soap-translation/soap12-part0.html Page sur SOAP sur le site du W3C]
* {{en}} [http://www.ibm.com/developerworks/webservices/tutorials/ws-understand-web-services1/ws-understand-web-services1.html Page sur SOAP sur le site IBM]
* {{en}} [http://www.w3.org/2002/ws/ Web Services Activity W3C]
* {{en}} [http://www.ws-i.org/ L'organisation WS-I]
* {{fr}} [http://www.abrillant.com/doc/soap/index.htm Page de documentation]
* {{fr}} [http://blog.clever-age.com/fr/2006/10/27/soap-vs-rest-choisir-la-bonne-architecture-web-services/ Comparatif SOAP/REST]

{{Palette|Communication inter-processus}}
{{Portail|informatique|Web sémantique}}

[[Catégorie:Protocole réseau]]
[[Catégorie:Dialecte XML]]
[[Catégorie:Standard du web]]
[[Catégorie:Services web]]
[[Catégorie:Sigle de 4 caractères]]
