# NSS
tags: #nss #pam 

Le **Name Service Switch** (NSS) autorise le remplacement des traditionnels fichiers Unix de configuration (par exemple /etc/passwd, /etc/group, /etc/hosts) par une ou plusieurs bases de données centralisées, les mécanismes utilisés pour accéder à ces bases étant configurables ; les premiers systèmes de type Unix, à l’exception notable d’Ultrix, soit utilisaient uniquement des fichiers de configuration soit possédaient les règles définissant quels fichiers ou bases de données utiliser codées en dur. Ultrix offrait une fonction très proche de ce que propose le Name Service Switch, avec son fichier de configuration /etc/svc.conf.
NSS a d’abord été développé par Sun Microsystems pour son système Solaris, mais a par la suite été porté sur de nombreux autres systèmes d’exploitation notamment FreeBSD, NetBSD, GNU/Linux, HP-UX, IRIX et AIX.

## nsswitch.conf
NSS est habituellement configuré à l’aide du fichier /etc/nsswitch.conf. Celui-ci liste les « bases de données » (par exemple group, passwd, …) et une ou plusieurs façons d’obtenir l’information (par ex. : files pour les fichiers locaux, nis pour le Network Information Service, nisplus pour NIS+, ldap pour le protocole LDAP, ou encore mysql pour une base de données MySQL). Par exemple :
![[Pasted image 20201027211602.png]]

L’ordre des services listés détermine l’ordre dans lequel NSS tentera d’utiliser ces services pour répondre aux requêtes sur les bases de données.

## NSS et la bibliothèque C
NSS nécessite d’apporter des modifications à la bibliothèque standard du C de façon que les appels à des fonctions comme getpwent ou getgrent soient interceptés par le module NSS approprié. Cela signifie que des applications existantes qui utilisent ces routines pour obtenir des informations relatives à l’identité ne requièrent aucune modification pour s’interfacer avec NSS.

