# TCP


{{voir homonymes|TCP}}

'''{{lang|en|Transmission Control Protocol}}''' (littéralement, « protocole de contrôle de transmissions »), [[abréviation|abrégé]] '''TCP''', est un protocole de transport fiable, en [[mode connecté]], documenté dans la {{RFC|793|titre= TRANSMISSION CONTROL PROTOCOL|date=Septembre 1981>}} de l’[[Internet Engineering Task Force|IETF]].

Dans le [[Suite des protocoles Internet|modèle Internet]], aussi appelé modèle TCP/IP, TCP est situé au-dessus de IP. Dans le modèle [[Modèle OSI|OSI]], il correspond à la [[couche transport]], intermédiaire de la [[couche réseau]] et de la [[couche session]]. Les applications transmettent des flux de données sur une connexion réseau. TCP découpe le flux d’[[octet]]s en ''segments'' dont la taille dépend de la [[Maximum Transmission Unit|MTU]] du réseau sous-jacent ([[couche liaison de données]]).

TCP a été développé en 1973 puis adopté pour [[Arpanet]] en 1983, remplaçant [[Network Control Program (Arpanet)|NCP]] ({{RFC|801|titre=NCP/TCP TRANSITION PLAN|auteur=Jon Postel|date=novembre 1981}}).

== Fonctionnement ==
Une session TCP fonctionne en trois phases : 
* l'établissement de la connexion ;
* les transferts de données ;
* la fin de la connexion. 

L'établissement de la connexion se fait par un [[Three-way handshake|handshaking en trois temps]]. La rupture de connexion, elle, utilise un [[handshaking]] en quatre temps. Pendant la phase d'établissement de la connexion, des paramètres comme le numéro de séquence sont initialisés afin d'assurer la transmission fiable (sans perte et dans l'ordre) des données.

=== Structure d'un segment TCP ===
'''En bits'''

![[Pasted image 20201020153456.png]]

Signification des champs :
* Port source : numéro du port source
* Port destination : numéro du port destination
* Numéro de séquence : numéro de séquence du premier octet de ce segment
* Numéro d'acquittement : numéro de séquence du prochain octet attendu
* Taille de l'en-tête : longueur de l'en-tête en mots de 32 bits (les options font partie de l'en-tête)
* Indicateurs ou ''Flags'' : 
** Réservé : réservé pour un usage futur
** ECN/NS : signale la présence de congestion, voir {{RFC|3168|titre=The Addition of Explicit Congestion Notification (ECN) to IP|date=septembre 2001}} ; ou Nonce Signaling, voir {{RFC|3540|titre=Robust Explicit Congestion Notification (ECN) Signaling with Nonces|date=juin 2003}}
** CWR : Congestion Window Reduced : indique qu'un paquet avec ECE a été reçu et que la congestion a été traitée
** ECE : ECN-Echo : si SYN=1 indique la capacité de gestion ECN, si SYN=0 indique une congestion signalée par IP (voir [[:rfc:3168|RFC 3168]])
** URG : Signale la présence de données '''urg'''entes
** ACK : signale que le paquet est un accusé de réception ('''ack'''nowledgement)
** PSH : données à envoyer tout de suite ('''p'''u'''sh''')
** RST : rupture anormale de la connexion ('''r'''e'''s'''e'''t''')
** SYN : demande de '''syn'''chronisation ou établissement de connexion
** FIN : demande la '''fin''' de la connexion
* Fenêtre : taille de fenêtre demandée, c'est-à-dire le nombre d'octets que le récepteur souhaite recevoir sans accusé de réception
* Somme de contrôle : somme de contrôle calculée sur l'ensemble de l'en-tête TCP et des données, mais aussi sur un pseudo en-tête (extrait de l'en-tête IP)
* Pointeur de données urgentes : position relative des dernières données urgentes
* Options : facultatives
* Remplissage : zéros ajoutés pour aligner les champs suivants du paquet sur 32 bits, si nécessaire
* Données : séquences d'octets transmis par l'application (par exemple : +OK [[Post Office Protocol|POP3]] server ready...)

=== Établissement d'une connexion ===
{{article détaillé|Three-way handshake}}
![[Pasted image 20201020153612.png]]
Même s'il est possible pour deux systèmes d'établir une connexion entre eux simultanément, dans le cas général, un système ouvre une '[[socket]]' (point d'accès à une connexion TCP) et se met en attente passive de demandes de connexion d'un autre système. Ce fonctionnement est communément appelé ''ouverture passive'', et est utilisé par le côté ''serveur'' de la connexion. Le côté ''client'' de la connexion effectue une ''ouverture active'' en 3 temps :

# Le client envoie un segment SYN au serveur,
# Le serveur lui répond par un segment SYN/ACK, 
# Le client confirme par un segment ACK.

Durant cet échange initial, les numéros de séquence des deux parties sont synchronisés :

# Le client utilise son numéro de séquence initial dans le champ "Numéro de séquence" du segment SYN (x par exemple),
# Le serveur utilise son numéro de séquence initial dans le champ "Numéro de séquence" du segment SYN/ACK (y par exemple) et ajoute le numéro de séquence du client plus un (x+1) dans le champ "Numéro d'acquittement" du segment,
# Le client confirme en envoyant un ACK avec un numéro de séquence augmenté de un (x+1) et un numéro d'acquittement correspondant au numéro de séquence du serveur plus un (y+1).

=== Transferts de données ===
![[Pasted image 20201020153751.png]]
Pendant la phase de transferts de données, certains mécanismes clefs permettent d'assurer la robustesse et la fiabilité de TCP. En particulier, les numéros de séquence sont utilisés afin d'ordonner les segments TCP reçus et de détecter les données perdues, les [[Somme de contrôle|sommes de contrôle]] permettent la détection d'erreurs, et les acquittements ainsi que les temporisations permettent la détection des segments perdus ou retardés.

==== Numéros de séquence et d'acquittement ====
Grâce aux numéros de séquence et d'acquittement, les systèmes terminaux peuvent remettre les données reçues dans l'ordre à l'application destinataire.

Les numéros de séquence sont utilisés pour décompter les données dans le flux d'octets. On trouve toujours deux de ces nombres dans chaque segment TCP, qui sont le ''numéro de séquence'' et le ''numéro d'acquittement''. Le ''numéro de séquence'' représente le propre numéro de séquence de l'émetteur TCP, tandis que le ''numéro d'acquittement'' représente le numéro de séquence du destinataire. Afin d'assurer la fiabilité de TCP, le destinataire doit acquitter les segments reçus en indiquant qu'il a reçu toutes les données du flux d'octets jusqu'à un certain numéro de séquence.

Le numéro de séquence indique le premier octet des données.

Par exemple, dans le cas d'un échange de segments par [[Telnet]] :

# L'hôte A envoie un segment à l'hôte B contenant un octet de données, un ''numéro de séquence'' égal à 43 (Seq = 43) et un ''numéro d'acquittement'' égal à 79 (Ack = 79),
# L'hôte B envoie un segment ACK à l'hôte A. Le ''numéro de séquence'' de ce segment correspond au ''numéro d'acquittement'' de l'hôte A (Seq = 79), et le ''numéro d'acquittement'' au ''numéro de séquence'' de A tel que reçu par B, augmenté de la quantité de données en bytes reçue (Ack = 43 + 1 = 44), 
# L'hôte A confirme la réception du segment en envoyant un ACK à l'hôte B, avec comme ''numéro de séquence'' son nouveau ''numéro de séquence'', à savoir 44 (Seq = 44) et comme ''numéro d'acquittement'' le ''numéro de séquence'' du segment précédemment reçu, augmenté de la quantité de données reçue (Ack = 79 + 1 = 80). 

Les numéros de séquence sont des nombres entiers non signés sur [[Architecture_32_bits|32 bits]], qui reviennent à zéro après avoir atteint (2^32)-1. Le choix du numéro de séquence initial est une des clefs de la robustesse et de la sécurité des connexions TCP.

Une amélioration de TCP, nommée acquittement sélectif (''{{lang|en|selective acknowledgement}}'' ou SACK), autorise le destinataire TCP à acquitter des blocs de données reçus dans le désordre.

==== Somme de contrôle ====
Une [[Checksum#Protocole IP|somme de contrôle]] sur 16 bits, constituée par le complément à un de la somme complémentée à un de tous les éléments d'un segment TCP (en-tête et données), est calculée par l'émetteur, et incluse dans le segment émis. Le destinataire recalcule la somme de contrôle du segment reçu, et si elle correspond à la somme de contrôle reçue, on considère que le segment a été reçu intact et sans erreur.

==== Temporisation ====
La perte d'un segment est gérée par TCP en utilisant un mécanisme de temporisation et de retransmission. Après l'envoi d'un segment, TCP va attendre un certain temps la réception du ACK correspondant. Un temps trop court entraîne un grand nombre de retransmissions inutiles et un temps trop long ralentit la réaction en cas de perte d'un segment.

Dans les faits, le délai avant retransmission doit être supérieur au [[Round-Trip delay Time|RTT]] moyen d'un segment, c'est-à-dire au temps que prend un segment pour effectuer l'aller-retour entre le client et le serveur. Comme cette valeur peut varier dans le temps, on "prélève" des échantillons à intervalle régulier et on en calcule une moyenne pondérée :

 RTT moyen = (1-<math>\alpha</math>) * RTT moyen + <math>\alpha</math> * RTT échantillon

Une valeur typique pour <math>\alpha</math> est 0.125. L'influence des échantillons diminue de manière exponentielle dans le temps.

Le délai à utiliser est obtenu à partir de cette estimation du RTT moyen et en y ajoutant une marge de sécurité. Plus la différence entre un échantillon et la moyenne est grande, plus la marge de sécurité à prévoir est importante. Le calcul se fait à partir de la variance pondérée entre l'échantillon et la moyenne :

 Variance RTT = (1-<math>\beta</math>) * Variance RTT + <math>\beta</math> * |RTT échantillon - RTT moyen|

Une valeur typique pour <math>\beta</math> est 0.25. Le délai à utiliser est finalement donné par la formule suivante :

 Délai = RTT moyen + 4 * Variance RTT

L'[[Algorithme de Karn]] permet de mieux évaluer le délai en présence d{{'}}''acquittements ambigus''. En effet, si un segment envoyé a été perdu, les segments ultérieurs provoqueront des acquittements où figurera le numéro du premier octet manquant, et on ne sait donc plus à quel segment envoyé correspondent ces acquittements.

Parfois, quand le délai est trop long, il est avantageux de ne pas attendre avant de retransmettre un segment. Si un hôte reçoit 3 ACKs pour le même segment, alors il considère que tous les segments transmis après le segment acquitté ont été perdus et les retransmet donc immédiatement (''{{lang|en|Fast retransmit}}'').

==== Contrôle de flux ====
Chaque partenaire dans une connexion TCP dispose d'un tampon de réception dont la taille n'est pas illimitée. Afin d'éviter qu'un hôte ne surcharge l'autre, TCP prévoit plusieurs mécanismes de contrôle de flux. Ainsi, chaque segment TCP contient la taille disponible dans le tampon de réception de l'hôte qui l'a envoyé. En réponse, l'hôte distant va limiter la taille de la fenêtre d'envoi afin de ne pas le surcharger.

D'autres algorithmes comme [[Algorithme de Nagle|Nagle]] ou Clarck facilitent également le contrôle du flux.

==== Contrôle de congestion ====
La congestion intervient lorsque trop de sources tentent d'envoyer trop de données trop vite pour que le réseau soit capable de les transmettre. Ceci entraîne la perte de nombreux paquets et de longs délais.

Les acquittements des données émises, ou l'absence d'acquittements, sont utilisés par les émetteurs pour interpréter de façon implicite l'état du réseau entre les systèmes finaux. À l'aide de temporisations, les émetteurs et destinataires TCP peuvent modifier le comportement du flux de données. C'est ce qu'on appelle généralement le contrôle de congestion.

Il existe une multitude d'[[Algorithme TCP|algorithmes d'évitement de congestion pour TCP]].

==== Autres ====
TCP utilise un certain nombre de mécanismes afin d'obtenir une bonne robustesse et des performances élevées. Ces mécanismes comprennent l'utilisation d'une fenêtre glissante, l'algorithme de démarrage lent (''{{lang|en|slow start}}''), l'algorithme d'évitement de congestion (''{{lang|en|congestion avoidance}}''), les algorithmes de retransmission rapide (''{{lang|en|fast retransmit}}'') et de récupération rapide (''{{lang|en|fast recovery}}''), etc. Des recherches sont menées actuellement afin d'améliorer TCP pour traiter efficacement les pertes, minimiser les erreurs, gérer la congestion et être rapide dans des environnements très haut débit.

=== Terminaison d'une connexion ===
![[Pasted image 20201020153927.png]]
La phase de terminaison d'une connexion utilise un handshaking en quatre temps, chaque extrémité de la connexion effectuant sa terminaison de manière indépendante. Ainsi, la fin d'une connexion nécessite une paire de segments FIN et ACK pour chaque extrémité.

== Ports TCP ==
TCP, comme [[User Datagram Protocol|UDP]], utilise le numéro de [[Port (logiciel)|port]] pour identifier les applications. À chaque extrémité ([[Client (informatique)|client]]/[[Serveur (informatique)|serveur]]) de la connexion TCP est associé un numéro de port sur 16 bits (de 1 à 65535) assigné à l'application émettrice ou réceptrice. Ces ports sont classés en trois catégories :
* Les ''ports bien connus'' sont assignés par l'[[Internet Assigned Numbers Authority|IANA]] ({{lang|en|Internet Assigned Numbers Authority}}) dans la plage 0-1023, et sont souvent utilisés par des processus système ou ayant des droits privilégiés. Les applications bien connues qui fonctionnent en tant que serveur et sont en attente de connexions utilisent généralement ces types de ports. Exemples : [[File Transfer Protocol|FTP]] (21), [[Secure Shell|SSH]] (22), [[Telnet]] (23), [[Simple Mail Transfer Protocol|SMTP]] (25), [[HTTP]] (80), [[POP3]] (110).
* Les ''ports enregistrés'' sont généralement utilisés par des applications utilisateur comme ports sources éphémères pour se connecter à un serveur, mais ils peuvent aussi identifier des services non enregistrés par l'IANA.
* Les ''ports dynamiques/privés'' peuvent aussi être utilisés par des applications utilisateur, mais plus rarement. Ils n'ont pas de sens en dehors d'une connexion TCP particulière.

== Développement de TCP ==
C'est le [[Département de la Défense des États-Unis|ministère américain de la Défense (DoD)]] qui à l'origine a développé le modèle de référence TCP/IP, car il avait besoin d'un réseau pouvant résister à toutes les situations<ref>{{Lien web|url=http://www.livinginternet.com/i/ii_darpa.htm|titre=DARPA / ARPA -- Defense / Advanced Research Project Agency|éditeur=''livinginternet.com''|consulté le=19 janvier 2011}}</ref>.

TCP est un protocole assez complexe, et en évolution. Même si des améliorations significatives ont été apportées au cours des années, son fonctionnement de base a peu changé depuis le [[:rfc:793|RFC 793]], publié en [[1981]]. Le {{RFC|1122|titre=Requirements for Internet Hosts -- Communication Layers|date=octobre 1989}} (''Host Requirements for Internet Hosts''), a clarifié un certain nombre de pré-requis pour l'implémentation du protocole TCP. Le {{RFC|2581|titre=TCP Congestion Control|date=avril 1999}} (''TCP Congestion Control''), l'un des plus importants de ces dernières années, décrit de nouveaux algorithmes utilisés par TCP pour éviter les congestions. En 2001, le [[:rfc:3168|RFC 3168]] a été écrit afin de présenter un mécanisme de signalisation des congestions (''explicit congestion notification'' ou ECN), et s'ajoute à la liste des RFC importants qui complètent la spécification originale. 

== Utilisations de TCP ==
Au début du {{XXIe siècle}}, TCP est utilisé approximativement pour 90 % de tout le trafic [[Internet]]<ref>{{Lien web|url=https://sites.cs.ucsb.edu/~almeroth/classes/F02.276/papers/sprint.pdf|titre=Packet-level traffic measurements from the Sprint IP backbone |consulté le=05/06/2020}}</ref>. Les applications les plus courantes qui utilisent TCP sont [[Hypertext Transfer Protocol|HTTP]]/[[HyperText Transfer Protocol Secure|HTTPS]] ([[World Wide Web]]), [[Simple Mail Transfer Protocol|SMTP]]/[[Post Office Protocol|POP3]]/[[Internet Message Access Protocol|IMAP]] (messagerie) et [[File Transfer Protocol|FTP]] (transfert de fichiers). [[Youtube]] et [[Netflix]] utilisent également TCP pour leurs fluxs de [[streaming]]<ref>{{Lien web|url=https://hal.inria.fr/inria-00638063/document |titre=Network Characteristics of Video Streaming Traffic |consulté le=05/06/2020}}</ref>.

== Alternatives à TCP ==
De nombreuses applications en temps réel n'ont pas besoin, et peuvent même souffrir, des mécanismes complexes de transport fiable de TCP : applications de diffusion multimédia (audio, vidéo, jeux multi-joueurs) en temps réel, échanges de fichiers, etc. Dans ce type d'applications, il est souvent préférable de gérer les pertes, erreurs ou congestions, plutôt que d'essayer de les éviter.

Pour ces besoins particuliers, d'autres [[couche de transport|protocoles de transport]] ont été créés et déployés.
* UDP ([[User datagram protocol]]) est souvent utilisé lorsque le temps-réel est privilégié sur la fiabilité. Tout comme TCP, ce protocole propose un multiplexage applicatif à travers la notion de ports, mais fonctionne en mode non connecté.
* SCTP ([[Stream Control Transmission Protocol]]), protocole fournissant des services similaires à TCP (fiabilité, remise en ordre des séquences, et contrôle de congestion), tout en offrant la possibilité de communications multi-cibles comme avec UDP.

* MPTCP ([[Multipath TCP]]) est une surcouche à TCP qui rassemble diverses connexions TCP (à travers différentes interfaces réseau: GSM, Wifi, etc.), au sein d'une même méta-connexion ([[:rfc:6824|RFC 6824]]). Ce fonctionnement permet d'exploiter tous les chemins disponibles en parallèle, et donc améliorer significativement les performances et la fiabilité d'une connexion.

== Références ==
{{Références}}

== Voir aussi ==

=== Articles connexes ===
* [[Suite des protocoles internet]]
* [[Liste de ports logiciels TCP et UDP]]
* [[Internet Protocol]]
* [[Stream Control Transmission Protocol|SCTP]]
* [[User datagram protocol]]
* [[Modèle OSI]]
* [[Algorithme de Nagle]]

=== Liens externes ===
* {{en}} [[:rfc:793|RFC 793]] - Transmission Control Protocol
* {{fr}} [http://www.frameip.com/rfc/rfc793-fr.php Traduction Française de la RFC 793]
* {{en}} [http://www.iana.org/assignments/port-numbers IANA assignation des ports]
* {{en}} [http://www.icir.org/floyd/ Sally Floyd's homepage]
* {{en}} [http://condor.depaul.edu/~jkristof/technotes/tcp.html La vision de John Kristoff sur TCP]
* {{en}} [http://citeseer.ist.psu.edu/stone00when.html When The CRC and TCP Checksum Disagree]
* {{en}} [http://www.yale.edu/pclt/COMM/TCPIP.HTM Introduction à TCP/IP] - avec des images
* {{en}} [http://sourceforge.net/project/showfiles.php?group_id=218708 Open Source TCP/IP library]

![[Pasted image 20201020154059.png]]

[[Catégorie:TCP/IP]]
[[Catégorie:Protocole réseau sur la couche transport]]
