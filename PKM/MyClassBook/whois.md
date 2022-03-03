'''Whois''' (contraction de l'[[anglais]] {{lang|en|''who is?''}}, signifiant « qui est ? ») est un service de recherche fourni par les registres [[Internet]], par exemple les [[Registre Internet Régional|Registres Internet régionaux]] ([[Registre Internet régional|RIR]]) ou bien les [[Registre de noms de domaine|registres de noms de domaine]] permettant d'obtenir des informations sur une [[adresse IP]] ou un [[nom de domaine]]. Ces informations ont des usages très variés, que ce soit la coordination entre ingénieurs réseaux pour résoudre un problème technique, ou bien la recherche du titulaire d'un nom de domaine par une société qui souhaiterait l'obtenir.

== Exemples ==
Voici par exemple la sortie de la commande GNU <code>whois wikipedia.org</code> :

 ... Avertissement juridique ...
 Domain ID:D51687756-LROR
 Domain Name:WIKIPEDIA.ORG
 Created On:13-Jan-2001 00:12:14 UTC
 Last Updated On:09-May-2012 00:25:29 UTC
 Expiration Date:13-Jan-2016 00:12:14 UTC
 Sponsoring Registrar:MarkMonitor Inc. (R37-LROR)
 Status:CLIENT DELETE PROHIBITED
 Status:CLIENT TRANSFER PROHIBITED
 Status:CLIENT UPDATE PROHIBITED
 Registrant ID:mmr-116560
 Registrant Name:Domain Admin
 Registrant Organization:Wikimedia Foundation, Inc.
 Registrant Street1:149 New Montgomery Street
 Registrant Street2:Third Floor
 Registrant Street3:
 Registrant City:San Francisco
 Registrant State/Province:CA
 Registrant Postal Code:94105
 Registrant Country:US
 Registrant Phone:+1.4158396885
 Registrant Phone Ext.:
 Registrant FAX:+1.4158820495
 Registrant FAX Ext.:
 Registrant Email:dns-admin@wikimedia.org
 ...

Et celle du serveur whois d'[[AfriNIC]] pour <code>213.136.100.81</code> :

 inetnum:      213.136.100.0 - 213.136.100.255
 netname:      CIT-ICA
 descr:        {{lang|en|Backbone}} Internet de Côte d’Ivoire Telecom
 {{lang|en|country}}:      CI
 admin-c:      AS2462-AFRINIC
 tech-c:       AC1582-AFRINIC
 {{lang|en|status}}:       {{lang|en|ASSIGNED}} PA
 <br />
 {{lang|en|person}}:       ANGEL SANCHEZ
 {{lang|en|address}}:      COTE D'IVOIRE TELECOM
 {{lang|en|address}}:      17 BP 275 ABIDJAN 17
 {{lang|en|address}}:      IVORY COAST
 {{lang|en|phone}}:        +225 20 34 53 27
 {{lang|en|e-mail}}:       asanchez@citelecom.ci
 nic-hdl:      AS2462-AFRINIC

Certains [[site web|sites web]] fournissent un service analogue, souvent appelé ''whois'' par abus de langage.

== Organisation et schéma de données ==

Les données stockées dans la [[base de données]] du registre le sont selon son propre schéma de données. Il n'existe pas de norme sur ce que le registre doit stocker et selon quel vocabulaire.

Par exemple, <code>.org</code>, cité plus haut pour <code>wikipedia.org</code>, a la notion de '''date d'expiration''', qui n'existe pas dans tous les registres (<code>.fr</code> a une '''date anniversaire''' qui n'a pas la même signification puisque le renouvellement est automatique).

Comme ce schéma de données est étroitement lié à la politique d'enregistrement du registre, il est probable qu'il n'y aura pas de convergence de ces schémas.

== Droit et protection des données personnelles ==

Comme whois ne permet pas d'authentification, l'accès au serveur whois est public. Cela peut poser des problèmes pour la protection de la [[vie privée et informatique|vie privée]] des personnes ou, tout simplement, pour le secret commercial ou bien pour la protection contre le [[spam]].

Diverses solutions ont été étudiées et parfois déployées (comme des systèmes optionnels de diffusion restreinte des informations, voire comme la quasi-suppression des données renvoyées par whois). Le choix de ce qu'on publie reste une des questions politiques les plus brûlantes pour un registre Internet. 

Les données servies par le serveur whois sont fréquemment fausses : soit elles étaient erronées depuis le début (par exemple parce que le titulaire n'avait pas d'autre choix pour protéger sa vie privée), soit elles sont devenues invalides avec le temps. 

=== [[RFC]] ===

* [[:rfc:812|RFC 812]] - {{lang|en|NICNAME/WHOIS}} ([[1982 en informatique|1982]], obsolète)
* [[:rfc:954|RFC 954]] - {{lang|en|NICNAME/WHOIS}} ([[1985 en informatique|1985]], obsolète)
* [[:rfc:3912|RFC 3912]] - {{lang|en|WHOIS protocol specification}} ([[2004 en informatique|2004]], actuel)

== Technique ==

Chaque registre a son propre serveur whois. Les mécanismes de redirection, permettant à un registre de renvoyer à un autre, mieux renseigné, ne sont pas normalisés. 

Le RFC ne spécifie absolument pas le format de sortie. Le format « attribut : valeur » que l'on voit dans les exemples ci-dessus est le plus courant mais pas le seul. 

Et, même dans ce cas, en l'absence de schéma de données commun, l'interprétation du résultat de whois nécessite une connaissance de la politique du registre interrogé. 

Pour trouver le serveur whois pertinent, on doit l'indiquer à son logiciel. Il n'existe pas de mécanismes standard pour le trouver. Certains clients whois « intelligents » utilisent un fichier de configuration local (c'est le cas de [http://directory.fsf.org/whois.html GNU <code>whois</code>]) ou bien accèdent à une base non officielle.

Du point de vue technique, les grosses limitations de whois sont :

* aucun mécanisme d'authentification ;
* aucun mécanisme d'[[internationalisation de logiciel|internationalisation]] ;
* pas de norme pour le format de sortie ;
* pas de norme pour les redirections.

En raison de ces limitations, l'[[Internet Engineering Task Force|IETF]] a développé un nouveau protocole, IRIS ({{lang|en|''[[Internet Registry Information Service]]''}}), spécifié dans le [[Request for comments|RFC]] 3981, et qui n'est actuellement déployé par aucun registre. D'autres protocoles comme [[Lightweight Directory Access Protocol|LDAP]] ou whois++ ont tenté de remplacer whois, sans succès.

== Divers ==

La commande '''/whois {pseudo}'''  permet dans la plupart des clients [[|IRC]] d'obtenir des informations sur une personne connectée.

== Voir aussi ==

=== Articles connexes ===
* [[GNU inetutils]]
* [[Footprinting]]

=== Liens externes ===
* [http://www.afnic.fr/fr/produits-et-services/services/whois/ Site Whois de l'AFNIC]
* [http://www.icann.org/ The Internet Corporation for Assigned Names and Numbers]
* [http://www.iana.org/ The Internet Assigned Numbers Authority]
* [http://sourceforge.net/projects/modwhois/ mod_whois - Module WHOIS pour Apache]
{{Portail|informatique|Télécommunications}}

[[Catégorie:Domain Name System]]
