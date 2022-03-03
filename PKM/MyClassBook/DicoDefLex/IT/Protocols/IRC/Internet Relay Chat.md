Tags: #IRC 

# Internet Relay Chat - *Discussion relayée par Internet*
![[Pasted image 20201020152442.png]]

**Internet Relay Chat** ou **IRC** (en français, « '''discussion relayée par Internet''' ») est un [[protocole de communication]] textuel sur [[Internet]]. Il sert à la [[Messagerie instantanée|communication instantanée]] principalement sous la forme de discussions en groupe par l’intermédiaire de canaux de discussion, mais peut aussi être utilisé pour de la communication de un à un. Il peut par ailleurs être utilisé pour faire du transfert de fichier.

## Histoire 
Conçu fin {{date||août|1988|en informatique}}, l’IRC a été décrit initialement dans la {{RFC|1459|titre=Internet Relay Chat Protocol|date=mai 1993}} par [[Jarkko Oikarinen]] (surnommé « WiZ ») et Darren Reed<ref>https://encyclopediadramatica.rs/Darren_Reed</ref>, puis révisé dans les {{RFC|2810|titre=Internet Relay Chat: Architecture|date=avril 2000}} à {{RFC|2813|titre=Internet Relay Chat: Server Protocol|date=avril 2000}}. L’IRC fut créé pour remplacer un programme appelé MUT ({{lang|en|''MultiUser talk''}})<ref>{{lien web |titre=What is MUT? |url=https://www.computerhope.com/jargon/m/mut.htm |site=Computerhope.com |consulté le=29-06-2020}}.</ref> sur un [[Bulletin board system|BBS]] finlandais (OuluBox). Oikarinen s’est inspiré du {{lang|en|''Bitnet Relay Chat''}} du réseau [[Bitnet]].

A la fin des années 1990, l'utilisation d’IRC diminue avec l’arrivée des [[Messagerie instantanée|messageries instantanées]] [[Logiciel propriétaire|propriétaires]] grand publics comme [[ICQ]], puis [[MSN Messenger]]. En 2009, IRC reste néanmoins utilisés dans certains milieux désirant se passer par un programme client [[Logiciel propriétaire|propriétaire]], et appréciant son interopérable et son organisation sous forme de canaux propices à la communication en groupe. La plupart des logiciels de messagerie instantanée implémente alors encore le protocole IRC ([[Miranda IM]], [[Pidgin (logiciel)|Pidgin]], [[Trillian (logiciel)|Trillian]] par exemple).

En {{date||mars|2009|en informatique}}, les cent plus grands réseaux IRC peuvent fournir du service à plus de {{unité|500000|utilisateurs}} simultanément, avec plusieurs centaines de milliers de canaux (la plupart étant toutefois inactifs), par l’intermédiaire d’environ {{unité|1500|serveurs}} dans le monde<ref>{{en}} {{lien brisé|consulté le=2017-08-01|url=http://irc.netsplit.de/networks/top100.php|titre=Les 100 plus grands réseaux IRC}}.</ref>.

== Aspects techniques ==

Le protocole de communication décrit un [[réseau informatique]] formé de plusieurs [[serveur informatique|serveurs]] connectés sans boucle dans lequel les [[client IRC|clients]] communiquent généralement par le biais du serveur (qui relayera éventuellement le message au reste du réseau). Il est également possible de connecter deux clients directement pour une conversation privée ou un transfert de fichier, c’est le [[Direct client-to-client|DCC]].

IRC est un protocole utilisant [[Transmission Control Protocol|TCP]] et de façon optionnelle [[Transport Layer Security|TLS]]. Un serveur IRC peut se connecter à d’autres serveurs IRC. Un réseau IRC est un ensemble de serveurs IRC connectés l’un à l’autre relayant si nécessaires les messages, formant ainsi une architecture répartie. L’utilisateur utilise un logiciel client IRC afin de se connecter à un des serveurs du réseau, le choix du serveur étant indifférent.

Le protocole étant ouvert et décrit par un [[Request for comments|RFC]], le nombre de logiciels clients existant est important pour tous les [[système d'exploitation|systèmes d’exploitation]] et leur interopérabilité garantie par la RFC.

IRC était à sa création un protocole texte<ref>{{en}} [http://www.irchelp.org/irchelp/rfc/rfc.html Documentation RFC {{lang|en|''Internet Relay Chat Protocol''}}].</ref>, étendu plus tard à de l’{{Référence nécessaire|échange de contenu binaire}}, pour lequel [[Internet Assigned Numbers Authority|IANA]]<ref>{{en}} [http://www.iana.org Site officiel de l’{{lang|en|''The Internet Assigned Numbers Authority''}}].</ref> a attribué le port TCP/194<ref name="IANAports">{{en}} [http://www.iana.org/assignments/port-numbers Liste des assignations usuelles des ports TCP et UDP], sur le site de l’{{lang|en|''The Internet Assigned Numbers Authority''}}.</ref>. Cependant, l’utilisation a été étendue aux [[Port (logiciel)|ports]] 6665-6669<ref name="IANAports"/> cela afin de pouvoir être utilisé en tant que port supérieur à {{formatnum:1024}} par des utilisateurs n’ayant pas les privilèges super-utilisateurs ([[Utilisateur root|{{lang|en|root}}]]) et par conséquent avoir des {{lang|en|''process''}} IRCd lancés plus facilement.

Le protocole n’a défini que des caractères de taille définie sur {{unité|8|[[bit]]s}}, limitant les différents encodages possibles ainsi que le nombre de caractères<ref>{{en}} [http://www.irchelp.org/irchelp/rfc/chapter2.html#c2_  Documentation RFC {{lang|en|''Internet Relay Chat Protocol - The IRC Specification''}}].</ref>. Ceci pose toujours des problèmes en fonction des clients utilisés et de leur langue par défaut, en raison de l’incompatibilité parfois générée entre clients.

La plupart des serveurs IRC ne nécessitent pas l’enregistrement par l’intermédiaire d’un compte, l'utilisateur pouvant alors choisir son {{lang|en|''nickname''}} (surnom) librement tant qu'il est disponible.

En plus de la discussion en groupe, une fonctionnalité disponible pour IRC est le transfert de fichier par l’intermédiaire de la fonction [[Direct client-to-client|DCC]]<ref>{{en}} [http://www.irchelp.org/irchelp/rfc/dccspec.html Documentation RFC {{lang|en|''A description of the DCC protocol''}}].</ref>. Ceci étant, en plus de la fonction ''/dcc send'', le DCC s'utilisait pour un tchat ''/dcc chat'' entre 2 utilisateurs, ce qui évitait de subir un délai.

Un serveur IRC est normalement géré par un ou plusieurs [[IrcOp]]s, contraction d’origine anglophone de {{lang|en|''IRC Operator''}} ou opérateur d’IRC. Les ops étaient nommés par les administrateurs du canal, par exemple par cooptation, de manière éphémère ou constante (enregistrée).

### Les canaux 
L’élément de base pour communiquer sur un réseau est le canal ({{lang|en|''channel''}} dans la spécification). Un canal est défini par une liste d’utilisateurs connectés sur celui-ci.
Pour entrer dans un canal ou pour créer un canal s’il n’existe pas, l’utilisateur utilise la commande <code>join</code>.
Les canaux peuvent être vus de tout le réseau, leur nom est alors préfixé par le caractère [[Croisillon (signe)|croisillon]] « <code>#</code> » ; ils peuvent aussi être des canaux locaux, portés par un serveur uniquement, leur nom est dans ce cas préfixé par le caractère [[esperluette]] « <code>&</code> ».

=== Les modes ===
{{article détaillé|Modes IRC}}
Les modes sont des options positionnées sur des canaux ou des utilisateurs, et qui affectent leur mode de fonctionnement, leurs privilèges et leurs interactions avec les autres entités de l’IRC.

==== Modes standards <nowiki>(RFC 1459)</nowiki> ====
![[Pasted image 20201020152809.png]]

![[Pasted image 20201020152857.png]]

De nombreux développeurs ont ajouté de nouveaux modes, ou ont modifié les modes déjà existants sur leurs serveurs<ref>{{Lien web|langue=en|url=http://www.alien.net.au/irc/usermodes.html|titre=IRC User Modes List|consulté le=2011-04-10|nom=Butcher|prénom=Simon|date=2005-01-12|éditeur=alien.net.au}}</ref>{{,}}<ref>{{Lien web|langue=en|url=http://www.alien.net.au/irc/chanmodes.html|titre=IRC Channel Modes List|consulté le=2011-04-10|nom=Butcher|prénom=Simon|date=2005-01-12|éditeur=alien.net.au}}</ref>{{,}}<ref>{{Lien web|langue=en|url=http://www.alien.net.au/irc/servermodes.html|titre=IRC Server Modes List|consulté le=2011-04-10|nom=Butcher|prénom=Simon|date=2005-01-12|éditeur=alien.net.au}}</ref>{{,}}<ref>{{Lien web|langue=en|url=http://webtoman.com/opera/panel/ircdmodes.html|titre=IRCd Modes|consulté le=2011-04-10|nom=Olsen|prénom=Tommy|éditeur=webtoman.com}}</ref>.

=== Les principales commandes IRC et leur définition ===
{{article détaillé|Aide:IRC/commandes}}
Une commande IRC est toujours définie par le caractère « / » placée en début de ligne. Cette commande peut être une commande définie par la RFC ou une commande liée au client, ou encore au serveur. Si une ligne ne débute pas par « / », elle est envoyée comme message au canal actif.
Par exemple, pour rejoindre un canal, un utilisateur doit effectuer <code>/join #canal</code>.

=== Robots IRC ===

{{Article détaillé|Robot IRC}}

Les robots IRC ou bots IRC sont des programmes exécutés depuis des serveurs ou des ordinateurs permettant de faire des actions automatiquement sur un canal IRC.

== Les réseaux ==
Il existe différents réseaux, composés chacun de plusieurs serveurs.

=== Les ''big four '' ===
Les réseaux IRC historiquement les plus importants sont les suivants :
* [[IRCnet]]
* [[DALnet]]
* [[EFnet]]
* [[Undernet]]

=== Les nouveaux réseaux ===

Dans les années 2000, deux nouveaux réseaux spécialisés apparaissent :
* [[QuakeNet]], qui devient le plus grand réseau avec {{unité|200000|utilisateurs}}, particulièrement lié à l’univers du jeu.
* [[Freenode]], hébergeant les canaux de projets open source ou de la culture libre, dont ceux de la Wikimedia Foundation ou d'Ubuntu, et devient à son tour en 2013 le plus grand réseau avec {{unité|100000|utilisateurs}}<ref>{{lien brisé
 | auteur = Andreas Gelhausen
 | titre = freenode
 | url = http://irc.netsplit.de/networks/freenode/
 | site = irc.netsplit.de
 | consulté le = 23 juillet 2016
}}</ref>.

=== Freenode ===
{{Article détaillé|Freenode}}
Créé en 1995 par [[Rob Levin]], il est renommé Freenode en {{date-|août 2002}} et constitué sous forme d'association sans but lucratif la même année<ref>{{Lien web
 | titre = History and Growth
 | année = entre 2002 et 2006
 | url = https://web.archive.org/web/20061104223304/http://freenode.net/history.shtml
 | site = Freenode
 | consulté le = 23 juillet 2016
}}</ref>.

Le serveur abrite des projets open source et de la culture libre<ref>{{Lien web
 | titre = The Policies
 | url = https://freenode.net/policies
 | site = Freenode
 | consulté le = 23 juillet 2016
}}</ref>.

=== QuakeNet ===
{{Article détaillé|QuakeNet}}

Le réseau est créé en 1997 pour héberger des communautés de joueurs du jeu vidéo [[Quake]]. Par la suite, il sera utilisé par des joueurs d'autres jeux, comme Counter Strike. À son apogée en 2005, il atteint 242 125 utilisateurs<ref>{{lien brisé
 | titre = QuakeNet
 | url = http://irc.netsplit.de/networks/QuakeNet/
 | site = irc.netsplit.de
 | consulté le = 08 octobre 2016
}}</ref>.

=== Les réseaux francophones ===
==== EpiKnet ====
{{Article détaillé|EpiKnet}}
EpiKnet est le principal réseau francophone généraliste.

Le réseau a servi à l'élaboration d'un corpus du [[français]] utilisé sur IRC<ref>{{Article
 | auteur1 = Falaise Achille
 | titre = Constitution d'un corpus de français tchaté
 | périodique = RECITAL
 | mois = décembre
 | année = 2004
 | url texte = https://hal.archives-ouvertes.fr/hal-00909667/document
}}.</ref>{{,}}<ref>[http://www-clips.imag.fr/geta/User/achille.falaise/publis/2004M2RPaper-Falaise.pdf Premier pas vers une TA interactive pour le tchat]</ref> ainsi que d'une analyse sur les marques modales comme les [[interjection]]s ou les [[émoticône]]s, à l'aune de la [[sémiotique]] et de la [[Pragmatique (linguistique)|pragmatique]]<ref>Pierre Halté, ''Les marques modales dans les chats : étude sémiotique et pragmatique des interjections et des émoticônes dans un corpus de conversations synchrones en ligne'', 2013. [http://orbilu.uni.lu/bitstream/10993/19939/1/Halt%C3%A9%20-%20Thesis.pdf lire en ligne]</ref>.

== Note ==
L’anglicisme {{lang|en|''[[Messagerie instantanée|chat]]''}} est souvent utilisé pour décrire les discussions se déroulant sur l’IRC. En français, certains utilisent « bavardage », ''tchatche'', ''tchat'' ou « clavardage » (principalement au Québec). Au Québec, au début du phénomène de conversation instantanée, la graphie « ch@t » était parfois utilisée dans les médias.{{référence souhaitée}}

== Notes et références ==
{{Références}}

== Annexes ==
{{autres projets
|wikibooks=Fonctionnement de l'IRC
}}
=== Articles connexes ===
{{colonnes|taille=18|
* [[Client IRC]]
* [[DansTonChat]]
* ''[[Eggdrop]]''
* [[IrcOp]]
* [[RFC 1459]] (les RFC concernant le protocole IRC)
* [[Liste de clients IRC]]
* [[Aide:IRC/commandes|Liste de commandes IRC]]
* [[Salon de discussion]] (équivalent moins technique de canal de discussion)
* {{lang|en|''[[Secure Internet Live Conferencing]]''}} (SILC)
* [[Serveur IRC]]
* [[Services IRC]]
}}

=== Liens externes ===
* {{site officiel|en|http://www.irc.org}}
* {{en}} [http://www.irchelp.org/ IRChelp.org] (documentation sur l'IRC)
* [[dmoz:World/Français/Informatique/Internet/Discussions/IRC/|Catégorie IRC sur DMOZ.org]]

{{Palette|Modèle OSI|Schéma d'URI}}
{{Portail|réseaux informatiques|Télécommunications|informatique}}

[[Catégorie:IRC|*]]
[[Catégorie:Application d'Internet]]
[[Catégorie:Protocole réseau sur la couche application]]
[[Catégorie:Logiciel de messagerie instantanée]]
