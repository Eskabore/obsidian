Une '''adresse IP''' (avec IP pour ''{{lang|en|[[Internet Protocol]]}}'') est un numéro d'identification qui est attribué de façon permanente ou provisoire à chaque périphérique relié à un [[réseau informatique]] qui utilise l'{{lang|en|[[Internet Protocol]]}}. L'adresse IP est à la base du système d'acheminement (le [[routage]]) des [[Commutation de paquets|paquets de données]] sur [[Internet]].

Il existe des adresses IP de [[IPv4|version 4]] sur {{unité|32|bits}},
![[Pasted image 20201020151452.png]]
et de [[IPv6|version 6]] sur {{unité|128|bits}}.
![[Pasted image 20201020151527.png]]
La {{nobr|version 4}} est actuellement la plus utilisée : elle est généralement représentée en notation décimale avec quatre nombres compris entre {{nobr|0 et 255}}, séparés par des [[Point (signe)|points]], ce qui donne par exemple « 172.16.254.1 ».


== Utilisation des adresses IP ==

L'adresse IP est attribuée à chaque [[Carte réseau|interface avec le réseau]] de tout [[matériel informatique]] ([[routeur]], [[ordinateur]], {{lang|en|[[smartphone]]}}, [[Asymmetric Digital Subscriber Line|modem ADSL]] ou [[modem câble]], [[Imprimante#Imprimante en r.C3.A9seau|imprimante réseau]]{{etc.}}) connecté à un [[Réseau informatique|réseau]] utilisant l’''{{lang|en|Internet Protocol}}'' comme [[protocole de communication]] entre ses nœuds. Cette adresse est assignée soit individuellement par l'administrateur du réseau local dans le [[sous-réseau]] correspondant, soit automatiquement via le protocole [[Dynamic Host Configuration Protocol|DHCP]]. Si l'ordinateur dispose de plusieurs interfaces, chacune dispose d'une adresse IP spécifique. Une interface peut également disposer de plusieurs adresses IP<ref>[https://technet.microsoft.com/en-us/library/cc722518.aspx {{lang|en|Configuring Multiple IP Addresses and Gateways}}], technet.microsoft.com.</ref>.

Chaque paquet transmis par le protocole IP contient l'adresse IP de l'émetteur ainsi que l'adresse IP du destinataire. Les [[routeur]]s IP acheminent les paquets vers la destination de proche en proche. Certaines adresses IP sont utilisées pour la diffusion ({{lang|en|[[multicast]]}} ou [[Broadcast (informatique)|{{lang|en|broadcast}}]]) et ne sont pas utilisables pour adresser des ordinateurs individuels. La technique ''{{lang|en|[[anycast]]}}'' permet de faire correspondre une adresse IP à plusieurs ordinateurs répartis sur Internet.

Les adresses IPv4 sont dites ''publiques'' si elles sont enregistrées et routables sur Internet, elles sont donc uniques ''mondialement''. À l'inverse, les [[Réseau privé|adresses ''privées'']] ne sont utilisables que dans un [[réseau local]], et ne doivent être uniques que dans ce réseau. La [[Network address translation|traduction d'adresse réseau]], réalisée notamment par les {{lang|en|[[box internet]]}}, transforme des ''adresses privées'' en ''adresses publiques'' et permet d’accéder à Internet à partir d'un poste du réseau privé.

== Adresse IP et nom de domaine ==

Le plus souvent, pour se connecter à un [[serveur informatique]], l'utilisateur ne donne pas son adresse IP, mais son [[nom de domaine]] (par exemple <tt>www.wikipedia.org</tt>). Ce nom de domaine est ensuite résolu en adresse IP par l'ordinateur de l'utilisateur en faisant appel au [[système de noms de domaine]] (DNS). Ce n'est qu'une fois l'adresse obtenue qu'il est possible d'initier une connexion.

Les noms de domaine ont plusieurs avantages sur les adresses IP :
* ils sont plus lisibles ;
* ils ne sont pas impliqués dans le routage, donc ils peuvent être conservés même en cas de réorganisation de l'infrastructure réseau ;
* ils ne sont pas limités à quelques milliards comme les adresses IPv4.

== Classe d'adresse IP ==
{{Article détaillé|Classe d'adresse IP}}
Jusqu'aux {{nobr|[[années 1990]]}}, les adresses IP étaient réparties en classes (A, B, C, D et E), qui étaient utilisées pour l'assignation des adresses et par les protocoles de routage. Cette notion est désormais obsolète pour l'attribution et le routage des adresses IP du fait de la pénurie d'adresses ({{RFC|1517|titre=Applicability Statement for the Implementation of Classless Inter-Domain Routing (CIDR)|auteur=R. Hinden {{et al.}}|date=septembre 1993}}) du début des {{nobr|[[années 2010]]}}. La mise en place très progressive des adresses IPv6 a accéléré l'obsolescence de la notion de classes. Attention toutefois : dans la pratique, au début des {{nobr|années 2010}}, de nombreux matériels et logiciels se basent sur ce système de classe, y compris les algorithmes de routage des protocoles dit ''{{lang|en|classless}}'' ({{cf.}} ''Cisco CCNA Exploration - Protocoles et concepts de routage''). Malgré tout, il est facile d'émuler une organisation en classe à l'aide du système [[CIDR|{{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}}]].

=== Sous-réseau ===
{{Article détaillé|Sous-réseau}}

En [[1984]], devant la limitation du modèle de classes, la {{RFC|917|titre=INTERNET SUBNETS|auteur=Jeffrey Mogul|date=octobre 1984}} (''{{lang|en|Internet subnets}}'') crée le concept de ''sous-réseau''. Ceci permet par exemple d'utiliser une adresse de {{nobr|Classe B}} comme {{nombre|256|sous-réseaux}} de {{nombre|256|ordinateurs}} au lieu d'un seul réseau de {{nombre|65536|ordinateurs}}, sans toutefois remettre en question la notion de classe d'adresse.

Le masque de sous-réseau permet de déterminer les deux parties d'une adresse IP correspondant respectivement au numéro de réseau et au numéro de l'hôte.

Un masque a la même longueur qu'une adresse IP. Il est constitué d'une suite de {{nobr|chiffres 1}} (éventuellement) suivie par une suite de {{nobr|chiffres 0}}.

Pour calculer la partie sous-réseau d'une adresse IP, on effectue une opération [[Fonction logique|ET logique]] bit à bit entre l'adresse et le masque. Pour calculer l'adresse de l'hôte, on effectue une opération ET bit à bit entre le [[complément à un]] du masque et l'adresse.

En IPv6, les sous-réseaux ont une taille fixe de /64, c'est-à-dire que 64 des {{nombre|128|bits}} de l'adresse IPv6 sont réservés à la numérotation d'un hôte dans le sous-réseau.

=== Agrégation des adresses ===
En 1992, la {{RFC|1338|titre=Supernetting: an Address Assignment and Aggregation Strategy|auteur=V. Fuller, T. Li, J. Yu et K. Varadhan|date=juin 1992}} (''{{lang|en|Supernetting: an Address Assignment and Aggregation Strategy}}'') propose d'abolir la notion de classe qui n'était plus adaptée à la taille d'Internet.

Le ''{{lang|en|Classless Inter-Domain Routing}}'' (CIDR), est mis au point en 1993 {{RFC|1518|titre=An Architecture for IP Address Allocation with CIDR|auteur=Y. Rekhter et T. Li|date=septembre 1993}} afin de diminuer la taille de la [[table de routage]] contenue dans les [[routeur]]s. Pour cela, on agrège plusieurs entrées de cette table en une seule et unique plage continue.

La distinction entre les adresses de {{nobr|classe A}}, B ou C a été ainsi rendue obsolète, de sorte que la totalité de l'espace d'adressage {{lang|en|unicast}} puisse être gérée comme une collection unique de sous-réseaux indépendamment de la notion de classe. Le masque de sous-réseau ne peut plus être déduit de l'adresse IP elle-même, les protocoles de routage compatibles avec {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}}, dits ''{{lang|en|classless}}'', doivent donc accompagner les adresses du masque correspondant. C'est le cas de {{lang|en|[[Border Gateway Protocol]]}} dans sa {{nobr|version 4}}, utilisé sur Internet ({{RFC|1654|titre=A Border Gateway Protocol 4 (BGP-4)|auteur=Y. Rekhter et T. Li| date=juillet 1994}} ''{{lang|en|A Border Gateway {{nobr|Protocol 4}}}}'', 1994), [[Open Shortest Path First|OSPF]], [[Enhanced Interior Gateway Routing Protocol|EIGRP]] ou [[Routing Information Protocol|RIPv2]]. Les [[Registre Internet régional|registres Internet régionaux]] (RIR) adaptent leur politique d'attribution des adresses en conséquence de ce changement.

L'utilisation de ''masque de longueur variable'' (''{{lang|en|Variable-Length Subnet Mask}}'', VLSM) permet le découpage de l'espace d'adressage en blocs de taille variable, permettant une utilisation plus efficace de l'espace d'adressage.

Le calcul du nombre d'adresses d'un sous-réseau est le suivant, 2<sup>taille de l'adresse - masque</sup>.

Un fournisseur d'accès internet peut ainsi se voir allouer un bloc /19 (soit 2<sup>32-19</sup> = 2<sup>13</sup> = {{nombre|8192|adresses}}) et créer des sous-réseaux de tailles variables en fonction des besoins à l'intérieur de celui-ci : de /30 pour des liens points-à-point à /24 pour un réseau local de {{nombre|200|ordinateurs}}. Seul le bloc /19 sera visible pour les réseaux extérieurs, ce qui réalise l'agrégation et l'efficacité dans l'utilisation des adresses.

La notation {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}} a été introduite pour simplifier la notation, avec un "/" suivi du nombre décimal de bits de poids fort identifiant un sous-réseau (les autres bits de poids faible étant alloués uniquement à des hôtes de ce seul sous-réseau, à charge pour lui de découper ensuite plus finement et router différemment lui-même des sous-plages). Pour le routage sur Internet les masques de sous-réseau ont été abandonnés en IPv4 au profit de la notation {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}}, de sorte que toutes les plages d'adresses d'un même sous-réseau sont contiguës, et les anciens sous-réseaux encore en vigueur composés de plusieurs plages discontinues ont été redéclarés en autant de sous-réseaux que nécessaire puis agrégés autant que possible par renumération. Les masques de sous-réseau IPv4 peuvent cependant être encore utilisés dans les tables de routage interne à un même réseau dont les hôtes ne sont pas routés et adressables directement via Internet, la conversion en plages {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}} s'effectuant désormais sur les routeurs en bordure des réseaux privés et seulement pour les adresses IPv4 publiques, mais normalement plus dans les points d'échange inter-réseaux.

En IPv6, la notation {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}} est la seule standardisée (et la plus simple) pour les plages d'adresses (pouvant comporter jusqu'à {{nombre|128|bits}}), les sous-réseaux comptant généralement de {{nombre|16|à=96|bits}} dans l'espace public adressable sur Internet (les {{nombre|48|derniers}} bits étant laissés à disposition de l'adressage local direct sur un même support réseau sans nécessiter aucun routeur ni même souvent aucune préconfiguration de routeurs au sein du réseau local) ; en IPv6, elle se note elle aussi avec un nombre décimal de bits après le "/" qui suit une adresse IPv6 de base (et non en hexadécimal comme les adresses de base des plages d'adresses d'un même sous-réseau).

== Base de données des adresses IP ==
{{Distribution de l'espace d'adressage IPv4}}
L'[[Internet Assigned Numbers Authority|IANA]], qui est depuis [[2005 en informatique|2005]] une division de l'[[Internet Corporation for Assigned Names and Numbers|ICANN]], définit l'usage des différentes plages d'adresses IP en segmentant l'espace en {{nombre|256|blocs}} de taille /8, numérotés de 0/8 à 255/8.
![[Pasted image 20201020151701.png]]

Les adresses IP ''{{lang|en|[[unicast]]}}'' sont distribuées par l'[[Internet Assigned Numbers Authority|IANA]] aux [[registre Internet régional|registres Internet régionaux]] (RIR). Les {{abréviation discrète|RIR|Regional Internet Registry|en}} gèrent les ressources d'adressage IPv4 et IPv6 dans leur région. L'espace d'adressage {{lang|en|unicast}} IPv4 est composé des blocs d'adresse /8 de 1/8 à 223/8. Chacun de ces blocs est soit réservé, assigné à un réseau final ou à un [[registre Internet régional]] (RIR) ou libre{{RFC|2373|titre=IP Version 6 Addressing Architecture|auteur=S. Deering et R. Hinden|date=juillet 1998}}{{,}}<ref>{{en}} [http://www.iana.org/assignments/ipv4-address-space/ {{lang|en|IPv4 address space}}], iana.org.</ref>. En {{date-|février 2011}}, il ne reste plus aucun bloc /8 libre.

En IPv6, le bloc 2000::/3 est réservé pour les adresses {{lang|en|unicast}} globales<ref>{{en}} [http://www.iana.org/assignments/ipv6-unicast-address-assignments/ {{lang|en|IPv6 Unicast Address Assignments}}], iana.org.</ref>. Des blocs /23 sont assignés aux {{abréviation discrète|RIR|Regional Internet Registry|en}} depuis 1999.

Il est possible d'interroger les bases de données des {{abréviation discrète|RIR|Regional Internet Registry|en}} pour savoir à qui est assignée une adresse IP grâce à la commande [[whois]] ou via les [[Site web|sites web]] des {{abréviation discrète|RIR|Regional Internet Registry|en}}.

Les {{abréviation discrète|RIR|Regional Internet Registry|en}} se sont regroupés pour former la [[Registre Internet régional#Number Resource Organization|{{lang|en|Number Resource Organization}}]] (NRO) afin de coordonner leurs activités ou projets communs et mieux défendre leurs intérêts auprès de l'{{abréviation discrète|ICANN|Internet Corporation for Assigned Names and Numbers|en}} (l'{{abréviation discrète|IANA|Internet Assigned Numbers Authority|en}}), mais aussi auprès des organismes de normalisation (notamment l'[[Internet Engineering Task Force|IETF]] ou l'[[Internet Society|ISOC]]).

=== Plages d'adresses IP spéciales ===

==== IPv4 ====

![[Pasted image 20201020151919.png]]

'''[[réseau privé|Adresses privées]] :'''
* Ces adresses ne peuvent pas être routées sur Internet. Leur utilisation par un réseau privé est encouragée pour éviter de réutiliser les adresses publiques enregistrées. Il faut toutefois prévoir qu'il n'y ait pas de doublon lors de l'interconnexion de réseaux privés non prévue lors de leurs créations.

'''Adresses de diffusion :'''
* L'adresse 255.255.255.255 est une adresse de diffusion (''[[Broadcast (informatique)|{{lang|en|broadcast}}]]''), limitée au même sous-réseau que la liaison locale utilisée, d'un hôte à tous les hôtes de ce sous-réseau (sans transiter par un routeur spécifique sur ce sous-réseau) ; elle sert notamment à découvrir les routeurs connectés et eux-mêmes adressés dans tout sous-réseau auquel l'hôte source est connecté.
* La première adresse d'un sous-réseau spécifie le réseau lui-même, elle sert pour des messages non nécessairement destinés aux seuls routeur mais qui ne doivent normalement pas être reroutés vers Internet.
* La dernière adresse est une adresse de diffusion (''{{lang|en|[[Broadcast (informatique)|broadcast]]}}'') pour des messages normalement destinés aux seuls les routeurs d'une liaison spécifique permettant les échanges entre tous les hôtes de ce sous-réseau d'une part et les autres réseaux extérieurs (dont l'Internet global). Cette adresse n'est habituellement pas reroutée vers Internet, sauf en cas d'utilisation de protocoles particuliers dont le routeur est un point de terminaison et de conversion.

'''Adresses {{lang|en|multicast}} :'''
* En IPv4, tout détenteur d'un numéro d'[[Autonomous System|AS]] {{nombre|16|bit}} peut utiliser un bloc de {{nombre|256|adresses}} IP {{lang|en|multicast}}, en 233.x.y.z où x et y sont les {{unité|2|octets}} du numéro d'AS ({{RFC|3180|titre=GLOP Addressing in 233/8|auteur=D. Meyer et P. Lothberg|date=septembre 2001}}).

==== IPv6 ====
{{Article détaillé|Adresse IPv6}}

{|class="wikitable"
|+Les plages d'adresses IPv6 suivantes sont réservées ({{RFC|5156|titre=Special-Use IPv6 Addresses|auteur=M. Blanchet|date=avril 2008}}) :
! scope=col | Bloc !! scope=col |Usage !! scope=col |Référence
|-
| ::/128 || Adresse non spécifiée || {{RFC|4291|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}} 
|-
| ::1/128 || Adresse de bouclage || {{RFC|4291|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}} 
|-
| ::ffff:0:0/96 || [[Adresse IPv6 mappant IPv4]] || {{RFC|4291|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}}
|-
| 0100::/64 || sollicitation de [[Black hole (informatique) | trou noir ]] || {{RFC|6666|titre=A Discard Prefix for IPv6|auteur=N. Hilliard et D. Freedman|date=août 2012}}
|- 
| 2000::/3 || Adresses {{lang|en|[[unicast]]}} routables sur Internet || {{RFC|3587|titre=IPv6 Global Unicast Address Format|auteur=R. Hinden, S. Deering et E. Nordmark|date=août 2003}}
|-
| 2001::/32 || [[Teredo (protocole)|Teredo]] || {{RFC|4380|titre=Teredo: Tunneling IPv6 over UDP through Network Address Translations (NATs)|auteur=C. Huitema|date=février 2006}}
|-
| 2001:2::/48 || Tests de performance || {{RFC|5180|titre=IPv6 Benchmarking Methodology for Network Interconnect Devices|auteur=C. Popoviciu, A. Hamza, G. Van de Velde et D. Dugatkin|date=mai 2008}}
|-
| 2001:10::/28 || Orchid || {{RFC|4843|titre=An IPv6 Prefix for Overlay Routable Cryptographic Hash Identifiers (ORCHID)|auteur=P. Nikander, J. Laganier et F. Dupont|date=avril 2007}}
|-
| 2001:db8::/32 || documentation || {{RFC|3849|titre=IPv6 Address Prefix Reserved for Documentation|auteur=G. Huston, A. Lord et  P. Smith|date=juillet 2004}}
|-trou noir
| 2002::/16 || [[6to4]] || {{RFC|3056|titre=Connection of IPv6 Domains via IPv4 Clouds|auteur=B. Carpenter et K. Moore|date=février 2001}}
|-
| fc00::/7 || Adresses locales uniques || {{RFC|4193|titre=Unique Local IPv6 Unicast Addresses|auteur=R. Hinden et B. Haberman|date=octobre 2005}}
|-
| fe80::/10 || Adresses locales lien || {{RFC|4291|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}}
|-
| ff00::/8 || Adresses {{lang|en|[[multicast]]}} || {{RFC|4291|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}}
|-
|}

'''Adresses spéciales'''
* ::/128 indique une adresse non spécifiée. Celle-ci est illégale en tant qu'adresse de destination mais elle peut être utilisée localement dans une application pour indiquer n'importe quelle interface réseau ou sur le réseau dans une phase d'acquisition de l'adresse.

'''Adresses locales'''

En IPv6, les adresses locales de site fec0::/10 étaient réservées par la {{RFC|3513|titre=Internet Protocol Version 6 (IPv6) Addressing Architecture|auteur=R. Hinden et S. Deering|date=avril 2003|}} pour le même usage privé, mais sont considérées comme obsolètes par la {{RFC|3879|titre=Deprecating Site Local Addresses|auteur=C. Huitema et B. Carpenter|date=septembre 2004}} pour privilégier l'adressage public et décourager le recours aux [[Network address translation|NAT]]. Elles sont remplacées par les adresses locales uniques fc00::/7 qui facilitent l'interconnexion de réseaux privés en utilisant un identifiant aléatoire de {{nombre|40|bits}}.

En IPv6, les adresses fe80::/64 ne sont uniques que sur un lien. Un hôte peut donc disposer de plusieurs adresses identiques dans ce réseau sur des interfaces différentes. Pour lever une ambiguïté avec ces adresses de scope lien local, on devra donc préciser l'interface sur laquelle l'adresse est configurée. Sous les systèmes de type [[Unix]], on ajoute à l'adresse le signe pourcent suivi du nom de l'interface (par exemple ff02::1%eth0), tandis que sous [[Microsoft Windows|Windows]] on utilise le numéro de l'interface (ff02::1%11).

'''Adresses expérimentales obsolètes'''
* 3ffe::/16 et 5f00::/8 étaient utilisés par le [[6bone]] entre 1996 et 2006.
* ::a.b.c.d/96 (où a.b.c.d est une adresse IPv4) étaient des [[Adresse compatible IPv4|adresses compatibles IPv4]] définies dans la {{RFC|1884|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=décembre 1995}} mais rendues obsolètes par la {{RFC|4291|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=R. Hinden et S. Deering|date=février 2006}} en 2006.

=== Épuisement des adresses IPv4 ===
{{Article détaillé|Épuisement des adresses IPv4}}

La popularité d'Internet a abouti à l'épuisement en 2011 des blocs d'adresses IPv4 disponibles, ce qui menace le développement du réseau.

Pour remédier à ce problème ou repousser l'échéance, plusieurs techniques existent :
* [[IPv6]], dont la capacité d'adressage est considérable<ref>[http://www.lefigaro.fr/flash-eco/2012/06/06/97002-20120606FILWWW00669-internet-nouvelle-norme-pour-les-ip.php Internet : nouvelle norme pour les IP], ''[[Le Figaro]]'', {{date-|6 juin 2012}}.</ref> ;
* [[Network address translation|NAT]], qui permet à de nombreux ordinateurs d'un réseau privé de partager une adresse publique, mais qui complique le fonctionnement de certains protocoles ;
* les [[Registre Internet régional|registres Internet régionaux]] ont développé des politiques d'affectation d'adresses plus contraignantes, qui tiennent compte des besoins réels à court terme. L'affectation de blocs d'adresses plus petits diminue cependant l'efficacité de l'agrégation des adresses ;
* la récupération des blocs attribués généreusement autrefois, certaines entreprises disposent ainsi d'un bloc /8, soit plus de {{nombre|16|millions}} d'adresses publiques.

== Enjeux sociaux ==

Si l'adresse IP est initialement conçue dans un usage technique, elle pose aussi des questions éthiques, dans la mesure où elle peut dans certains pays servir à agréger un [[Profil utilisateur|profil]] très détaillé d'une personne et de ses activités<ref>[https://www.priv.gc.ca/media/1768/ip_201305_f.pdf <!-- à wikifier : ajouter titre, etc. -->{{pdf}}].</ref>{{Référence non conforme}}.

=== Usages ===
{{...}}

L'identification par adresse IP se fait dans de multiples contextes très différents :
* à des fins d'identification du titulaire de la ligne, par exemple avec la coopération du [[fournisseur d'accès à Internet]] dans le cadre d'une enquête judiciaire ;
* à des fins d'élaborations d'hypothèses sur [[Adresse MAC|l'identifiant unique de la carte réseau]] (il peut transparaître avec IPv6, selon le protocole utilisé pour l'auto-configuration, toutefois ce n'est pas une donnée fiable) ;
* à des fins de sécurisation en complément d'autres moyens d'identification (liste blanche, notifications supplémentaires ou questions de vérification plus poussée en cas d'IP non reconnue) ;
* à des fins d'identification approximative plus ou moins anonyme à des fins publicitaires (par exemple pour ré-envoyer de la publicité à tous les appareils partageant une même connexion Internet){{note|groupe="n"|texte=Par exemple, avec le produit {{lang|en|Household extension}} fourni par {{lang|en|TheTradeDesk}}<ref>{{lien web | langue=en | titre=Household Extension | url=https://web.archive.org/web/20140317083107/http://www.thetradedesk.com:80/products/household-extension/ | site=thetradedesk.com | url originale=https://www.thetradedesk.com/products/household-extension}}.</ref>.}} ;
* Wikipédia se sert des adresses IP pour contrôler les utilisateurs non inscrits. Elle a ainsi bloqué en 2016 et pour un an une adresse IP émanant du Ministère de l'Intérieur français pour « ''trop d'actes de vandalisme'' »<ref>{{Lien web |langue=fr |titre=Wikipedia bloque pour un an une adresse IP du ministère de l'Intérieur |url=https://www.francetvinfo.fr/sciences/high-tech/wikipedia-bloque-pour-un-an-une-adresse-ip-du-ministere-de-l-interieur_1267141.html |site=Franceinfo |date=2016-01-13 |consulté le=2020-07-15}}</ref>.

=== Problématiques ===
{{Article connexe|Loi Création et Internet#L'identification par l'adresse IP}}

Tenter d'identifier un internaute de façon fiable au travers son adresse IP pose un problème{{note|groupe="n"|texte=Des problèmes juridiques notamment, comme le montre cet article en s'interrogeant sur l'adresse IP au regard de la [[loi informatique et libertés]]<ref>{{lien web | titre=L'adresse IP est-elle une donnée personnelle ? | url=http://www.donneespersonnelles.fr/adresse-ip-est-elle-donnee-personnelle | site=donneespersonnelles.fr | date=18 novembre 2011 | prénom=Thiébaut | nom=Devergranne | consulté le=7 janvier 2018}}.</ref>.}}, pour plusieurs raisons :
* une adresse IP publique peut être utilisée par plusieurs personnes simultanément et indépendamment (voir [[Network address translation|NAT]] et {{lang|en|[[Carrier Grade NAT]]}}) ;
* il est possible d'[[Usurpation d'adresse IP|usurper l'adresse IP]] d'autrui dans la source d'un [[Suite des protocoles Internet|paquet IP]] dans la mesure où les routeurs utilisent normalement l'adresse destination. L'établissement d'une connexion [[Transmission Control Protocol|TCP]] implique cependant un routage bidirectionnel correct.

Le traçage de l'adresse IP est souvent utilisé à des fins de marketing<ref>{{article|langue=fr |prénom1=Ariane |nom1=Krol |prénom2=Jacques |nom2=Nantel |titre=Pêcher le client dans une baignoire |sous-titre=Nouveaux outils du marketing |lien titre= |périodique=Le Monde diplomatique |lien périodique=Le Monde diplomatique |numéro=711 |mois=juin |année=2013 |url texte=http://www.monde-diplomatique.fr/2013/06/KROL/49191}}.</ref>, et soupçonné d'influencer les politiques tarifaires<ref>{{article|langue=fr |titre={{lang|en|IP tracking}} : l'eurodéputée Françoise Castex veut une enquête de la Commission |périodique=[[ZDNet]] |mois=janvier |année=2013 |url texte=http://www.zdnet.fr/actualites/ip-tracking-l-eurodeputee-francoise-castex-veut-une-enquete-de-la-commission-39786679.htm}}.</ref>.

== ''{{lang|en|[[Request for comments]]}}'' ==
Les définitions des adresses IP {{nobr|versions 4 et 6}}, la notion de classe et la notation {{abréviation discrète|CIDR|Classless Inter-Domain Routing|en}} sont documentées dans les ''{{lang|en|[[Request for comments]]}}'' suivants (en [[anglais]]) :

=== Communes ===
* {{RFC|997|titre=INTERNET NUMBERS|auteur=J. Reynolds et J. Postel|date=mars 1987}} — ''{{lang|en|Internet numbers}}'', {{date||mars|1987|en informatique}}
* {{RFC|791|titre=INTERNET PROTOCOL - DARPA INTERNET PROGRAM - PROTOCOL SPECIFICATION|date=septembre 1981}} — ''{{lang|en|Internet Protocol}}'', {{date||septembre|1981|en informatique}} (IP).
* {{RFC|1519|titre=Classless Inter-Domain Routing (CIDR): an Address Assignment and Aggregation Strategy|auteur=V. Fuller, T. Li, J. Yu et K. Varadhan|date=septembre 1993}} — ''{{lang|en|Classless Inter-Domain Routing (CIDR): an Address Assignment and Aggregation Strategy}}'', {{date||septembre|1993|en informatique}}
* {{RFC|1918|doublon=oui|titre=Address Allocation for Private Internets|auteur=Y. Rekhter,  B. Moskowitz, D. Karrenberg, G. J. de Groot et E. Lear|date=février 1996}} — ''{{lang|en|Address Allocation for Private Internets}}'', {{date||février|1996|en informatique}}
* {{RFC|1531|titre=Dynamic Host Configuration Protocol|auteur=R. Droms|date=octobre 1993}} — ''{{lang|en|Dynamic Host Configuration Protocol}}'', {{date||octobre|1993|en informatique}} (DHCP)

=== IPv4 ===
* {{RFC|3330|titre=Special-Use IPv4 Addresses|date=septembre 2002}} — ''{{lang|en|Special-Use IPv4 Addresses}}'', {{date||septembre|2002|en informatique}}
* {{RFC|903|titre=A Reverse Address Resolution Protocol|auteur=Finlayson, Mann, Mogul, Theimer|date=juin 1984}} — ''{{lang|en|A Reverse Address Resolution Protocol}}'', {{date||juin|1984|en informatique}} (RARP)

=== IPv6 ===
* {{RFC|2460|titre=Internet Protocol, Version 6 (IPv6) Specification|auteur=S. Deering et R. Hinden|date=décembre 1998}} — ''{{lang|en|Internet Protocol, {{nobr|Version 6}} (IPv6) Specification}}'', {{date||décembre|1998|en informatique}}
* {{RFC|2373|doublon=oui|titre=IP Version 6 Addressing Architecture|auteur=S. Deering et R. Hinden|date=juillet 1998}} — ''{{lang|en|IP {{nobr|Version 6}} Addressing Architecture}}'', {{date||juillet|1998|en informatique}}
* {{RFC|2893|titre=Transition Mechanisms for IPv6 Hosts and Routers|auteur=R. Gilligan et E. Nordmark|date=août 2000}} — ''{{lang|en|Transition Mechanisms for IPv6 Hosts and Routers}}'', {{date||août|2000|en informatique}}

La liste des {{abréviation discrète|RIR|Regional Internet Registry|en}} ainsi que la table d'allocation des adresses se trouvent sur la page ''[http://www.iana.org/ipaddress/ip-addresses.htm {{lang|en|Number Resources}}]'' de l'{{abréviation discrète|IANA|Internet Assigned Numbers Authority|en}}.

== Notes et références ==
=== Notes ===
{{Références|groupe="n"}}
=== Références ===
{{Références}}

== Voir aussi ==
=== Articles connexes ===
* [[Adresse IPv6]]
* [[Adresse IP virtuelle]]
* ''{{lang|en|[[ARP poisoning]]}}''
* ''{{lang|en|[[Broadcast (informatique)|Broadcast]]}}''
* ''{{lang|en|[[Internet Protocol]]}}''
* [[Usurpation d'adresse IP]]

=== Liens externes ===
* {{Note autre projet|wikibooks|Réseaux TCP/IP|rôle=lien externe}}
* [http://www.donneespersonnelles.fr/adresse-ip-est-elle-donnee-personnelle L'adresse IP est-elle une donnée personnelle] (article juridique)

{{Portail|informatique|Internet|télécommunications}}

[[Catégorie:TCP/IP]]
[[Catégorie:Adressage réseau]]
[[Catégorie:Identifiant]]
