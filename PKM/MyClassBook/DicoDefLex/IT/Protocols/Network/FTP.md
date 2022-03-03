{{Langue du titre|en}}
{{Voir homonymes|FTP}}
{{Infobox Protocole réseau sur la couche application
| sigle             = FTP
| fonction          = [[Partage de fichiers]]
| date de création  = 
| port              = 21 (écoute)<br />20 (données par défaut)
| rfc               = {{RFC|3659|titre=Extensions to FTP|date=mars 2007}}
}}

'''{{Langue|en|File Transfer Protocol}}''' ([[Protocole réseau|protocole]] de [[transfert de fichier]]), ou '''FTP''', est un [[protocole de communication]] destiné au [[partage de fichiers]] sur un [[réseau informatique|réseau]] [[Suite des protocoles Internet|TCP/IP]]. Il permet, depuis un ordinateur, de copier des fichiers vers un autre ordinateur du réseau, ou encore de supprimer ou de modifier des fichiers sur cet ordinateur. Ce mécanisme de copie est souvent utilisé pour alimenter un [[site web]] [[Hébergeur web|hébergé]] chez un tiers.

La variante de FTP protégée par les protocoles SSL ou [[Transport Layer Security|TLS]] (SSL étant le prédécesseur de TLS) s'appelle [[File Transfer Protocol over SSL|FTPS]].

FTP obéit à un modèle [[client-serveur]], c'est-à-dire qu'une des deux parties, le ''client'', envoie des requêtes auxquelles réagit l'autre, appelé ''serveur''. En pratique, le serveur est un ordinateur sur lequel fonctionne un logiciel lui-même appelé [[serveur FTP]], qui rend publique une arborescence de fichiers similaire à un [[système de fichiers]] [[UNIX]]. Pour accéder à un serveur FTP, on utilise un logiciel client FTP (possédant une [[interface graphique]] ou en [[Interface en ligne de commande|ligne de commande]]).

FTP, qui appartient à la [[couche application]] du [[modèle OSI]] et du [[Suite des protocoles Internet|modèle ARPA]], utilise une connexion [[Transmission Control Protocol|TCP]].

Par convention, deux [[Port (logiciel)|ports]] sont attribués (''{{lang|en|well known ports}}'') pour les connexions FTP : le port 21 pour les commandes et le port 20 pour les données. Pour le FTPS dit ''implicite'', le port conventionnel est le 990.

Ce protocole peut fonctionner avec [[IPv4]] et [[IPv6]].

== Histoire ==
FTP est issu de la {{RFC|114|titre=A FILE TRANSFER PROTOCOL|date=16 avril 1971}} créée le 16 avril 1971. Cette spécification fut remplacée par la {{RFC|765|titre=FILE TRANSFER PROTOCOL|date=juin 1980}} en juin 1980. Elle fut elle-même rendue obsolète par la {{RFC|959|titre=FILE TRANSFER PROTOCOL (FTP)|date=octobre 1985}} en octobre 1985, version finale de la spécification.

Plusieurs RFC viennent compléter cette spécification, comme la {{RFC|2228|titre=FTP Security Extensions|date=octobre 1997}} de juin 1997 pour l'ajout d'extensions de sécurité ou la {{RFC|2428|titre=FTP Extensions for IPv6 and NATs|date=septembre 1998}} de septembre 1998 qui ajoute la prise en charge du protocole [[IPv6]] et définit un nouveau type de mode passif.

== Interopérabilité ==
Le protocole FTP ne permet pas toujours d'assurer l'[[interopérabilité]] entre plates-formes différentes et régions différentes par une gestion adéquate de l'[[Codage des caractères|encodage]] des noms de fichiers. Seuls les logiciels serveur et client respectant le standard {{RFC|2640|titre=Internationalization of the File Transfer Protocol|date=juillet 1999}} en donnent la garantie<ref>
http://www.linuxfromscratch.org/blfs/view/cvs/introduction/locale-issues.html#locale-wrong-filename-encoding Beyond Linux® From Scratch - Version 2012-08-12 - Chapter 2. Important Information - Going Beyond BLFS - Locale Related Issues.</ref>, grâce à l'utilisation de l'encodage [[UTF-8]] et accessoirement d'une nouvelle commande LANG permettant de choisir la langue des messages retournés par le serveur lors de la [[couche session|session]] FTP. L'encodage UTF-8 permet d'encoder les noms des fichiers provenant de n'importe quel pays, bien qu'un encodage plus spécifique puisse toujours être utilisé localement par le serveur, la conversion vers l'UTF-8 restant à sa discrétion.

== Utilisation ==
Pour accéder à un serveur FTP, on utilise un logiciel (client FTP). Ces logiciels existent avec ligne de commande ou avec une interface graphique. Le standard FTP est si répandu que ces logiciels sont à présent inclus avec les dernières distributions Windows & Linux.

L'utilisation en ligne de commande, sous Windows comme sous Linux, se fait généralement au moyen de la commande '''''<nowiki>ftp adresse_du_serveur</nowiki>''''' saisie dans une console. (ici, ftp est le nom du logiciel, et le paramètre le nom du serveur)

Dans les interfaces graphiques, comme les navigateurs Web, la forme usuelle est utilisée, à savoir :   '''''<nowiki> ftp://adresse_du_serveur</nowiki>''''' . Ici, ftp est le nom du protocole, suivi du nom du serveur.

Sous [[Windows]] ([[Windows Vista|Vista]] et [[Windows 7|7]]), un logiciel client FTP est installé sur la machine, car inclus dans Windows. On peut y accéder à travers le dossier  ''Ordinateur'' puis la commande  ''Ajouter un emplacement réseau''.

== Implémentations ==
=== Logiciels clients de FTP ===
==== Logiciels libres ====
{{Article détaillé|Logiciel libre}}
* [[GNU inetutils]] : [[Paquet (logiciel)|paquet logiciel]] [[GNU]] contenant un client FTP en ligne de commande
* [[Ftp (Unix)|ftp]] (en ligne de commande sous Unix/Linux/Windows)
* [[cURL]] (en ligne de commande sous Linux/OS X/Windows)
* [[Cyberduck]] (pour Mac OS X et Windows)
* [[FileZilla]] (pour Linux, Mac OS X et Windows)
* [[FireFTP]] (extension pour Firefox)
* [[gFTP]] (pour GNOME)
* NcFTP (Windows et systèmes de type UNIX)
* {{Lien|fr=Secure FTP (logiciel)|lang=en|trad=Secure FTP (software)|texte=Secure FTP}} (pour Java SE)
* [[WinSCP]]
* [[Yafc]]

==== Logiciels propriétaires ====
{{Article détaillé|Logiciel propriétaire}}
* {{Lien|fr=CrossFTP|lang=en|trad=CrossFTP|texte=CrossFTP}} (pour Java SE)
* CuteFTP  (pour Mac OS X et Windows)
* {{Lien|fr=Fetch (logiciel)|lang=en|trad=Fetch (FTP client)|texte=Fetch}} (pour Mac OS X)
* FTP Rush (Windows 2000, Windows XP (32/64 bits), Windows 2003 (32/64 bits), Windows Vista (32/64 bits), Windows 7(32/64 bits){{Retrait|FTP Rush prend en charge les protocoles FTP, FXP, SFTP et TFTP. C'est un partagiciel.}}
* {{Lien|fr=FTP Voyager|lang=en|trad=FTP Voyager|texte=FTP Voyager}} (pour Windows)
* {{Lien|fr=Steed (logiciel)|lang=en|trad=Steed (FTP client)|texte=Steed}} (pour Windows)
* {{Lien|fr=Transmit (logiciel)|lang=en|trad=Transmit (file transfer tool)|texte=Transmit}} (pour Mac OS X)
* [[Webdrive|WebDrive]] (Windows 7, Windows 10, Windows 2008, Windows 2012, Windows 2016, Mac OS X){{Retrait| WebDrive prend en charge les protocoles FTP, SFTP, WebDAV et S3.}}
* {{Lien|fr=Yummy FTP|lang=en|trad=Yummy FTP|texte=Yummy FTP}} (pour Mac OS X)

=== Logiciels serveurs de FTP<ref>https://www.techwench.com/4-popular-ftp-servers-reviewed/</ref> ===
==== Logiciels libres ====
{{Article détaillé|Logiciel libre}}
* [[FileZilla Server]] (Windows) et FileZilla Client (Windows)
* [[VsFTPd]] (Unix)
* [[ProFTPd]] (Unix)
* [[Pure-FTPd]] (Unix)

==== Logiciels propriétaires ====
{{Article détaillé|Logiciel propriétaire}}
* [[Titan FTP Server]]{{Retrait|Titan FTP Server prend en charge les protocoles FTP, SFTP et SSL}}
* AXWAY Gateway

== Le protocole ==
Le protocole utilise deux types de connexions TCP :
* Une connexion de ''contrôle'' initialisée par le client, vers le serveur (port 21 en général), pour transmettre les commandes concernant les fichiers (suppression de fichiers, renommage, liste des fichiers…).
* Une connexion de ''données'' initialisée par le client ou le serveur pour transférer les données requises (contenu des fichiers, liste de fichiers).

=== Établissement des connexions ===
FTP peut s'utiliser de deux façons différentes.


Mode actif :
[[Image:FTP mode actif.png|Établissement des connexions TCP en mode actif.]]

En '''mode actif''', c'est le client FTP qui détermine le port de connexion à utiliser pour permettre le transfert des données. Ainsi, pour que l'échange des données puisse se faire, le serveur FTP initialisera la connexion de son port de données (port 20) vers le port spécifié par le client. Le client devra alors configurer son pare-feu pour autoriser les nouvelles connexions entrantes afin que l'échange des données se fasse. De plus, il peut s'avérer problématique pour les utilisateurs essayant d'accéder à des serveurs FTP lorsque ces utilisateurs sont derrière une passerelle [[Network address translation|NAT]]. Étant donnée la façon dont fonctionne le [[Network address translation|NAT]], le serveur FTP lance la connexion de données en se connectant à l'adresse externe de la passerelle [[Network address translation|NAT]] sur le port choisi. Certaines passerelles [[Network address translation|NAT]] n'ayant pas de correspondance pour le paquet reçu dans la table d'état, le paquet sera ignoré et ne sera pas délivré au client.

Mode passif :
[[Image:FTP mode passif.png|Établissement des connexions TCP en mode passif.]]

En '''mode passif''', le serveur FTP détermine lui-même le port de connexion à utiliser pour permettre le transfert des données (data connexion) et le communique au client. En cas de présence d'un pare-feu devant le serveur, celui-ci devra être configuré pour autoriser la connexion de données. L'avantage de ce mode est que le serveur FTP n'initialise aucune connexion. Ce mode fonctionne sans problème avec des clients derrière une passerelle [[Network address translation|NAT]]. Dans les nouvelles implémentations, le client initialise et communique directement par le port 21 du serveur ; cela permet de simplifier les configurations des pare-feu serveur.

=== La connexion de contrôle ===
Cette connexion fonctionne en mode texte et est donc aisée à simuler avec [[Telnet]].

Le client envoie une commande sous la forme d'une ligne de texte terminée par un retour à la ligne (CR suivi de LF, soit <code>\r\n</code>,0D0A en hexadécimal, ou le caractère 13 et le caractère 10).

Par exemple, la commande suivante demande le téléchargement du fichier "fichier.txt" :
 RETR fichier.txt

'''''N.B.''': Les commandes telles que GET ou PUT ne sont pas reconnues dans le protocole FTP, mais souvent utilisées par les logiciels de client FTP.''

À la suite de l'envoi de la commande, le client reçoit une ou plusieurs réponses du serveur. Chaque réponse est précédée d'un code décimal permettant au client FTP de traiter la réponse qui peut comporter une ou plusieurs lignes de texte.

Pour l'exemple précédent, si le serveur trouve le fichier demandé, il envoie au client :
 150 File status okay; about to open data connection.
Selon ce que le client et le serveur ont convenu, l'un des deux écoute sur le port TCP convenu, et l'autre s'y connecte pour établir la connexion de données.
Puis le serveur envoie au client le contenu du fichier demandé, ferme la connexion de données, et envoie la réponse suivante sur la connexion de contrôle :
 226 Closing data connection.

La connexion de contrôle réutilise le protocole de contrôle du terminal NVT introduite au départ pour [[Telnet]], sous une forme simplifiée. Cela signifie en particulier que le code de code décimal 255 sert à introduire des séquences de contrôle de l'affichage.

=== La connexion de données ===
[[Fichier:Passive FTP Verbindung.svg|thumb|Connexion de données.]]
La connexion de données est établie pour la durée de transmission de données (contenu de fichiers, ou liste de fichiers).
En général, elle est établie pour le transfert de données d'une seule commande, à moins qu'un autre mode de transmission soit sélectionné et supporté par le serveur.

La commande <code>PASV</code> indique au serveur qu'il doit attendre passivement la connexion en écoutant un port TCP.
Le port écouté par le serveur est indiqué dans la réponse :
 227 Entering Passive Mode (''h1'',''h2'',''h3'',''h4'',''p1'',''p2'').
Où <code>h1</code> à <code>h4</code> sont 4 nombres entiers entre 0 et 255 représentant l'adresse IP du serveur, et <code>p1</code> et <code>p2</code> représentent le port TCP où le serveur attend la connexion, sous la forme de deux entiers entre 0 et 255 (<code>port_TCP = p1 * 256 + p2</code>).

Dans le cas contraire où le client attend la connexion sur un port TCP, il indique sous la même forme le port écouté en envoyant la commande <code>PORT</code> :
 PORT ''h1'',''h2'',''h3'',''h4'',''p1'',''p2''
Si tout se passe bien, le serveur répond :
 200 Command okay.

=== Mode de transfert ===
Lors du transfert de fichier sur la connexion de données, deux modes peuvent être utilisés :
* Le mode binaire : le fichier est transmis tel quel.
* Le mode [[American Standard Code for Information Interchange|ASCII]] : uniquement destiné aux fichiers texte. Le fichier est examiné et des transformations apportées pour conserver un format correct. Par exemple, la fin de ligne est représentée par le [[Saut de ligne|caractère <LF>]] sur un système UNIX, et par la paire <CR><LF> sous Windows. Une machine Windows recevant un fichier texte par FTP récupère donc finalement un fichier avec des [[Carriage Return Line Feed|<CR><LF>]] en mode ASCII et des <LF> en mode binaire. Ce mode a donc ses avantages, mais peut être source de corruption de fichiers (non texte) pendant le transfert si on utilise un client ancien / en ligne de commande, incapable de s'adapter au type de fichier. Il faut alors basculer en mode binaire (en utilisant généralement la commande BIN) avant le transfert, afin de le conserver intact.

=== Transfert entre deux serveurs ===
{{article détaillé|File eXchange Protocol}}

La spécification du protocole FTP précise qu'il est possible d'effectuer un transfert de fichiers directement entre deux serveurs FTP.

== Notes et références ==
{{Références|colonnes=2}}

== Voir aussi ==
=== Articles connexes ===
* [[Protocole réseau passant difficilement les pare-feu]]
* [[:Catégorie:Client FTP|Clients FTP]]
* Autres protocoles de [[transfert de fichiers]] : 
** [[Trivial File Transfer Protocol]] (TFTP)
** [[Secure File Transfer Protocol]] (SFTP)
** [[File Transfer Protocol over SSL]] (FTPS)
** [[File eXchange Protocol]] (FXP)
** [[Cross File Transfer|CFT (Cross File Transfer)]]
* [[Variable d'environnement#$LANG et $LANGUAGE|Variable d'environnement pour la langue]]
=== Liens externes ===
* [http://www.sitelec.org/cours/caleca/ftp/index.htm Le protocole FTP]
* {{lien web|langue=en|id=rfc1579|url=http://tools.ietf.org/html/rfc1579|année=1994 |mois=février |titre=RFC1579 : Firewall-Friendly FTP}}
* {{en}} [http://code.google.com/p/ifilework/ Exemple d'un serveur et d'un client FTP pour les étudiants]
* {{en}} [//servertest.online/ftp Test de serveur FTP en ligne] Authentification, connectivité, chiffrement et mode.

{{Palette|Protocoles de transfert de fichier|Modèle OSI|Schéma d'URI}}
{{Portail|informatique|Télécommunications|réseaux informatiques}}

[[Catégorie:File Transfer Protocol|*]]
[[Catégorie:Protocole réseau sur la couche application]]
