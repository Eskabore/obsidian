{{Voir homonymes|oracle}}
{{À sourcer|date=avril 2009}}
{{Infobox Logiciel
 | couleur boîte = EA1B22
 | nom = Oracle Database
 | logo = Oracle logo.svg
 | image = 
 | développeur = [[Oracle Corporation]]
 | date de première version = 
 | dernière version = 
 | date de dernière version = 
 | version avancée = 
 | date de version avancée = 
 | langage de programmation = 
 | environnement = [[Multiplate-forme]] <small>(voir section dédiée)</small>
 | type = [[Système de gestion de base de données|SGBD]]
 | licence = [[Logiciel commercial|Commercial]]
 | site web = http://www.oracle.com/
}}

'''''Oracle Database''''' est un [[système de gestion de base de données]] [[base de données relationnelle|relationnelle]] (SGBDR) qui depuis l'introduction du support du [[programmation orientée objet|modèle objet]] dans sa version 8 peut être aussi qualifié de [[système de gestion de base de données relationnel-objet]] (SGBDRO). Fourni par [[Oracle Corporation]], il a été développé par [[Larry Ellison]], accompagné entre autres, de [[Bob Miner]] et [[Ed Oates]].

== Historique ==
[[Software Development Laboratories]] a été créé en [[1977]]. En [[1979]], l'entreprise change de nom en devenant [[Relational Software, Inc.]] (RSI) et introduit son produit Oracle V2 comme [[base de données relationnelle]]. La version 2 ne supportait pas les [[Transaction (base de données)|transaction]]s mais implémentait les fonctionnalités [[Structured Query Language|SQL]] basiques de [[requête]] et [[jointure]]. Il n'y a jamais eu de version 1, pour des raisons de [[marketing]], la première version a été la version 2. Celle-ci fonctionnait uniquement sur les systèmes [[Digital Equipment Corporation|Digital]] [[VAX]]/[[Virtual Memory System|VMS]].

En [[1983]], RSI devient [[Oracle Corporation]] pour être plus représentative de son produit phare. La version 3 d'Oracle, entièrement ré-écrite en [[C (langage)|langage de programmation C]], est publiée. Celle-ci supportait les [[Transaction (base de données)|transaction]]s grâce aux fonctionnalités de ''[[commit]]'' et ''[[Rollback (base de données)|rollback]]''. C'est aussi à partir de cette version que la plate-forme [[Unix]] est supportée.

En [[1984]], la version 4 supporte la [[cohérence en lecture]] (''read consistency'').

En [[1985]], la version 5 supporte les requêtes distribuées, dans le cadre de l'intégration du modèle [[client-serveur]] avec l'arrivée des réseaux au milieu des années 1980.

En [[1988]], la version 6 supporte le [[PL/SQL]], le verrouillage de lignes (''row-level locking'') et les sauvegardes à chaud (''hot backups'', lorsque la base de données est ouverte). Oracle met sur le marché son [[progiciel de gestion intégré|ERP]] Oracle Financials basé sur la base de données relationnelle Oracle Database.

En [[1992]], la version 7 supporte les [[contrainte d'intégrité|contraintes d'intégrité]], les [[procédure stockée|procédures stockées]] et les [[déclencheur]]s (''triggers'').

En [[1995]], acquisition d'un puissant moteur multidimensionnel, commercialisé sous le nom d'Oracle Express.

En [[1997]], la version 8 introduit le développement [[programmation orientée objet|orienté objet]], et les applications [[multimédia]] grâce aux services ''Oracle interMedia''<ref>http://lgl.isnetne.ch/designer6i/cahier19/experimentation/exp_images.htm</ref>, renommé ''{{lien|Oracle Multimedia}}'' depuis la version 11g<ref>
 {{lien web|langue=en
 |url          = http://www.oracle.com/technetwork/products/multimedia/documentation/multimedia-155068.html
 |titre        = Oracle Multimedia Documentation for Oracle Database 12c
 |website      = www.oracle.com
 |éditeur    = Oracle Technology Network
 |consulté le   = 2013-12-11
 |extrait        = The name Oracle interMedia was changed to Oracle Multimedia in Oracle Database 11g Release 1.
}}
</ref>.

En [[1999]], la version 8i d'Oracle est publiée dans le but d'affiner ses applications avec [[Internet]] (le ''i'' fait référence à Internet). La base de données comporte nativement une [[machine virtuelle Java]].

En [[2001]], la version 9i ajoute 400 nouvelles fonctionnalités et permet de lire et d'écrire des documents [[Extensible Markup Language|XML]]. Elle intègre le moteur [[OLAP]] : le moteur Oracle Express est dorénavant référencé au sein de l'option Oracle OLAP. Les données multidimensionnelles sont accessibles à partir du langage SQL.

En [[2003]], la version 10g supporte les [[Expression rationnelle|expressions rationnelles]]. Le ''g'' signifie ''grid'' ; un des atouts marketing de la 10g est en effet qu'elle supporte le ''[[grid computing]]''.

En novembre [[2005]], la version 10g Express Edition, complètement gratuite, est publiée, ainsi que la version 10g Release 2.

En juillet [[2007]], la version 11g  Linux et Windows.

En septembre [[2009]], la version 11g Release 2 est publiée<ref>{{lien web|url=http://www.lemondeinformatique.fr/actualites/lire-oracle-11g-r2-simplifiera-les-mises-a-jour-de-progiciel-ou-pas-29174.html|titre=Oracle 11g R2 simplifiera les mises à jour de progiciel.. ou pas|consulté le=22 décembre 2011}}.</ref>.

En juillet [[2013]], la version 12c est publiée<ref>{{en}}{{lien web|url=http://www.oracle.com/us/corporate/press/1967380|titre=Oracle Announces General Availability of Oracle Database 12c, the First Database Designed for the Cloud}}.</ref>

En [[2017]], la version 12c release 2 (12.2.0.1)  est publiée.

En [[2018]], la version 18c est publiée, il s'agit de la version 12.2.0.2 mais avec la nouvelle convention de version.

En [[2019]], la version 19c est publiée.

== Conventions sur les numéros de version ==
Les numéros de version d'Oracle ont introduit une certaine confusion chez de nombreuses personnes.

La nomenclature de version a changé au cours du temps, mais se base en général sur la convention suivante : ''version X.Y.Z.a'' où X.Y désigne la version majeure du produit : 8.1 pour 8i, 9.2 pour 9i Release 2{{etc}} Ceci n'est plus vrai en 10, où l'on a une version majeure (10g), déclinée en deux « ''{{Lang|en|releases}}'' ». Au sein d'une même version majeure (8i, 9i ou 10g), les fonctionnalités générales du [[Base de données relationnelle|RDBMS]] sont censées être les mêmes.

Le chiffre Z désigne quant à lui le niveau de correctif générique appliqué. Oracle délivre en général 3 ou 4 mises à jour (« ''{{Lang|en|patchset}}'' ») pour une version majeure, mais cela reste très variable.

Enfin, le chiffre a désigne un niveau de correctif spécifique à un système d'exploitation, ou une plateforme.

Depuis la version 7, les versions majeures du [[Système de gestion de base de données|SGBD]] Oracle ont été les suivantes :

* Oracle 7 : 7.1, 7.2, 7.3
* Oracle 8 : 8.0.3, 8.0.4, 8.0.5, 8.0.6
* Oracle 8i : 8.1.5 (Release 1), 8.1.6 (Release 2), 8.1.7 (Release 3)
* Oracle 9i : 9.0.1 (Release 1), 9.2.0 (Release 2)
* Oracle 10g : 10.1 (Release 1), 10.2 (Release 2)
* Oracle 11g : 11.1 (Release 1), 11.2 (Release 2)
* Oracle 12c : 12.1 (Release 1), 12.2 (Release 2)
À partir de 2018, un rythme annuel de nouvelles versions est prévu : le numéro de version rappellera l'année, la prochaine version sera donc la 18 (au lieu de la 12.2.0.2 initialement prévue), la suivante la 19...

== Éditions et licences ==
L'ensemble des environnements (développement, test, intégration, homologation, production…) utilisant le moteur de bases de données Oracle doit être sous [[licence propriétaire|licence]]. On distingue deux modes de licences :
* Utilisateurs nommés : concrètement, nombre de personnes uniques se connectant aux bases de données. Ceci convient à des applications de gestion typique en mode client/serveur et aux environnements hors-production où le nombre d'utilisateurs est connu. On note qu'Oracle applique un nombre minimal d'utilisateurs par "licence processeur" (généralement 25).
* Licence Processeur : en fonction de la puissance du serveur hébergeant les instances, un certain nombre de licences doit être acquis. Il faut prendre en compte deux notions : premièrement, la puissance est définie par un nombre de processeurs (CPU), et un nombre de cœurs par CPU. Deuxièmement un "core factor" s'applique en fonction de la puissance que délivre le constructeur des processeurs. Exemple : La majorité des processeurs Intel possède un facteur de 0,5 (cf : [[Microprocesseur multi cœur|puces « multi-core »]] ([[Intel]], [[Advanced Micro Devices|AMD]], [[Architecture SPARC|SPARC]], Power). Avec ces éléments on fait le calcul suivant : (nombre de CPU x nombre de cœurs par CPU x core factor). Et on obtient le nombre de "licences processeur" qu'il faut acquérir.  Cette option est directement dédiée aux [[Architecture trois tiers|architectures trois tiers]], où les applications positionnées au-dessus des bases de données, vont générer des requêtes par un nombre inconnu d'utilisateurs. C'est typiquement le cas lorsqu'une application est ouverte sur le Web et lorsque des milliers de personnes peuvent potentiellement accéder à la base (sites web). 

En version 10g, Oracle valorise le prix d'une licence selon 3 types :
* édition Entreprise : comprend toutes les fonctionnalités du produit,
* édition Standard : limitations apportées aux fonctionnalités et sur le nombre de [[processeur]]s (4 maximum),
* édition Standard One : limitations apportées aux fonctionnalités et sur le nombre de [[processeur]]s (2 maximum).

On notera qu'en plus de ces licences, Oracle facture en sus certaines options selon les règles définies plus haut. Ainsi, les fonctionnalités suivantes doivent être spécifiquement achetées <ref>(en) Database Options&Packs :  [http://docs.oracle.com/cd/E11882_01/license.112/e47877/options.htm#DBLIC139 Dans la documentation Oracle].</ref>:
* [[Partitionnement (Oracle)|Partitionning Oracle]]
* [[OLAP]]
* Oracle Advanced Security (ASO)
* Oracle Data Masking
* [[Exploration de données|Data Mining]]
* {{lien|lang=en|trad=Oracle RAC}} Real Application Cluster (que en Enterprise Edition)

=== À propos de la virtualisation ===
Si un serveur Oracle est installé dans un environnement virtualisé (hors OracleVM) utilisant plusieurs serveurs physiques, c'est le nombre de processeurs de l'ensemble des machines physiques constituant le cluster qu'il faut licencier, car Oracle considère que le SGBD peut utiliser tour à tour l'ensemble des processeurs de l'infrastructure. La plupart des personnes, dans les entreprises moyennes ou grosses, ont une ferme de serveurs VMWare ou Hyper-V. Si des produits Oracle soumis à licence sont utilisés, il faut impérativement analyser les besoins et les coûts de licence. Par exemple, une ferme de 4 serveurs composés chacun de 4 processeurs Intel (CPU), tous composés de 2 cœurs sera « licenciée » pour 4*4*2*0,5 = 16 licences CPU — ce qui peut devenir prohibitif. C'est la raison pour laquelle, la technologie OracleVM reste conseillée, d'autant plus qu'elle offre des fonctionnalités égales.

Certaines technologies de virtualisation (IBM, SUN et même Microsoft depuis peu<ref>(en) Note sur le support Hyper-V : Metalink Doc ID 1563794.1 (contrat de support nécessaire pour y accéder).</ref>) sont bien supportées par Oracle, mais il semble qu'il y ait un (gros) désaccord entre Oracle et VMWare<ref>(en) Support de VMWare : Metalink Doc ID 249212.1.</ref>{{,}}<ref>(en) Position officielle de VMware : [http://www.vmware.com/files/pdf/techpaper/vmw-understanding-oracle-certification-supportlicensing-environments.pdf voir §2].</ref>. En effet les règles d'Oracle sur le licensing n'ont jamais changé, contrairement aux fonctionnalités de VMware. 

Sur les technologies de virtualisation supportées par Oracle, l'utilisation de VM permet d'optimiser le coût des licences par une meilleure utilisation de la  charge CPU.

=== Logiciels Oracle gratuits ===
Oracle propose depuis fin 2005 une version totalement gratuite de la base, « Oracle Database Express Edition »<ref>https://www.oracle.com/technetwork/database/database-technologies/express-edition/downloads/index.html Oracle Database XE
Downloads] [[Logiciel libre]] de développement, de déploiement et de distribution.</ref>. Il s'agissait d'une version 10g Standard Edition One, fortement limitée : en 2011, elle limite la taille totale de la base à 4Go (hors système, temporaire, segments d'annulation et autres fichiers), la SGA ne peut dépasser 1 Go et un seul processeur sera utilisé sur les machines qui en disposent de plusieurs. La version 11gR2 d'Oracle Express Edition présente les mêmes limitations, à part la taille des données utilisateur qui est portée à 11 Go.

En {{date-|octobre 2018}}, la version XE d'Oracle 12c est rendue disponible. Les limites ont été étendues à 2 processeurs, 2 Gb de mémoire vive et 12 Gb de données<ref>(en)[https://blogs.oracle.com/oracle-database/oracle-database-18c-xe-now-available Oracle Database 18c XE now available!].</ref>. Sortie d'abord en version Linux (x64) uniquement, cette version est également disponible pour Windows (x64) depuis {{date-|février 2019}}<ref>(en) [https://mikedietrichde.com/2019/02/21/oracle-18c-express-edition-xe-for-windows-is-available/ Oracle 18c Express Edition (XE) for Windows is available].</ref>.

[[Oracle SQL Developer]] est lui aussi gratuit, cet outil développé en Java permet, via une interface graphique, de gérer les objets de la base, visualiser les sessions et de faire du SQL.

== Téléchargement des produits ==
L'intégralité des produits Oracle, à savoir :
* la base de données (RDBMS) ;
* le serveur d'application (IAS) ;
* la suite collaborative (OCS) ;
* l'environnement de développement (ODS) ;
* la suite applicative (eBusiness suite).

ainsi que les documentations associées<ref>(en) [http://www.oracle.com/technetwork/indexes/documentation/index.html#database LA référence de la documentation Oracle].</ref>, sont téléchargeables en version intégrale, sans limitation de durée, sur le site Oracle Technology Network<ref>{{en}} [http://otn.oracle.com/ Oracle Technology Network] – téléchargement des produits, documentations…</ref>

== Fonctionnalités ==
=== Principales ===
* [[Structured Query Language|SQL]]
* [[PL/SQL]], langages de programmation, utilisé pour créer des procédures, des fonctions et des [[déclencheur]]s.
* [[Java (langage)|Java]], ce langage de programmation est aussi utilisable pour créer des triggers lors de l'insertion, la modification ou l'effacement d'éléments
* Montage de la base de données sur plusieurs serveurs (grid en 10g, rac en 9i)
* Spatial, pour permettre la gestion de données géographiques
* Partitionnement physiques des données en sous-ensembles pour optimiser les temps d'accès
* Moteur [[OLAP]] intégré, stockant les cubes sous forme de [[Binary large object|BLOB]] (Binary Large Objects)
* Gestion de très grands volumes de données, taille maxi de 65 536 fichiers de 128 To chacun en utilisant les BigFiles de la version 10gR2 ou 10.2
* [[Réplication (informatique)|Réplication des données]] selon différents modes [[synchronisme|synchrones]] ou [[asynchronisme|asynchrones]] de tout ou partie d'une base de données : voir {{lien|lang=en|Oracle Data Guard}} ou encore la solution Golden Gate (le couteau suisse d'Oracle tant il permet de faire de choses différentes à la fois).

=== Fonctionnalités annexes ===
* [[Partitionnement (Oracle)|Partitionnement]]
* [[Module Oracle Text]]
* [[DBLink]]

== Plate-formes prises en charge ==
En {{date-|octobre 2004}}, les plates-formes prises en charge pour Oracle 10g Release 1 étaient :
* [[HP-UX]] PA-RISC
* HP-UX Itanium
* HP [[Tru64]]
* [[Linux]] [[x86]]
* Linux [[Itanium]]
* [[z/Linux]]
* [[Mac OS X]]
* [[Windows]] (32-bit)
* Windows (64-bit Itanium)
* [[Sun Microsystems|Sun]] [[solaris (informatique)|Solaris]] x86
* Sun [[solaris (informatique)|Solaris]] ([[Architecture SPARC|SPARC]]) (64-bit)

En {{date-|mai 2006}}, les plates-formes suivantes sont prises en charge pour Oracle 10g Release 2 :
* HPUX Itanium
* HPUX PA-RISC
* Linux Itanium
* Linux Power5
* Linux x86_64 (Opteron / EM64T)
* Linux 32bits
* Windows Itanium
* Windows x86_64 (Opteron / EM64T)
* Windows 32bits
* Solaris SPARC64
* Solaris x86-64
* IBM AIX5L
* IBM z/OS (OS/390)

En {{date-|février 2012}}, les plates-formes suivantes sont prises en charge pour Oracle 11g Release 2 :
* HPUX Itanium
* HPUX PA-RISC
* Linux x86_64 (Opteron / EM64T)
* Linux 32bits
* Windows x86_64 (Opteron / EM64T)
* Windows 32bits
* Solaris SPARC64
* Solaris x86-64
* IBM AIX5L
* IBM z/OS (OS/390)

En {{date-|juillet 2013}}, les plates-formes suivantes sont prises en charge pour Oracle 12c Release 1 :
* Linux x86_64
* Solaris SPARC64
* Solaris x86-64
* Windows x86_64

== Connecteurs ==
* ODBC
* JDBC
* En Java, Oracle peut être utilisé de façon transparente avec le standard [[JDO]].
* En PHP, Oracle peut être utilisé de façon transparente avec le standard [[PHP Data Objects|PDO]]

== Outils de sauvegarde ==
![[Pasted image 20201020124745.png]]
* '''RMAN''' (Recovery MANager) est un logiciel destiné aux sauvegardes et restaurations des bases de données Oracle.
Il est fourni par Oracle depuis la version 8.0, en remplacement de « {{Lang|en|Enterprise Backup Utility}} » (en version 7.3.x d'Oracle).

RMAN sauvegarde les données (datafiles), les journaux de transactions (archives), le fichier de contrôle (control file) et éventuellement le fichier de configuration d'instance (spfile).

RMAN peut utiliser une base « catalogue » dans laquelle il stocke les informations concernant les données sauvegardées.
Les données sauvegardées peuvent être envoyées sur disque, sur bande, ou à un logiciel de sauvegarde tiers (ex : [[Tivoli Storage Manager]], [[EMC Legato Networker]]{{etc}}).

== Outils d'administration ==
* '''Oracle Enterprise Manager (OEM)''' est un logiciel destiné aux [[Administrateur de bases de données|administrateurs]] (DBAs). Il permet, via une interface graphique, de gérer des bases de données Oracle (sauvegardes Rman, supervision{{etc}}).
En Oracle 9i, la console OEM est un client [[Java (technologie)|Java]]. Depuis Oracle 10g, OEM est orienté web, et se décline en plusieurs versions : une version simple nommée « {{Lang|en|Oracle Enterprise Manager Database Control}} » et une version permettant d'administrer plusieurs bases nommée « {{Lang|en|Oracle Enterprise Manager Grid Control}} ». Il faut noter que l'utilisation de certaines fonctions (diagnostic et tuning) proposées dans l'interface implique la facturation d'options supplémentaires.

== Liste de records ==
{{à délister|date=janvier 2015}}
* Oracle est la première base de données à intégrer nativement [[environnement d'exécution Java|JRE]]
* Oracle est la première base de données à dépasser le million de transactions par minute au bench TPC-C, en {{date-|novembre 2004}} [http://www.tpc.org/tpcc/results/tpcc_result_detail.asp?id=103110401]
* En 2012, Oracle est la seule base de données à proposer un test TPC-H avec une taille de {{unité|30|To}} [http://www.tpc.org/tpch/results/tpch_perf_results.asp]
* En 2012, Oracle est la première base de données à atteindre 30 millions de transactions au test TPC-C [http://www.tpc.org/tpcc/results/tpcc_perf_results.asp]

== Certifications ==
Il existe différents niveaux de certification autour des produits Oracle.
Au niveau de la base de données (RDBMS) :
* Oracle Certified Associate (OCA)
* Oracle Certified Professional (OCP)
* Oracle Certified Master (OCM)
* Oracle Certified Expert (OCE)
* Oracle Certified Specialist (OCS)

== Notes et références ==
{{Références
 | colonnes = 2
}}

== Voir aussi ==
=== Articles connexes ===
* [[Informix]] 
* [[Ingres (base de données)|Ingres]] 
* [[Teradata]] 
* [[Microsoft SQL Server]] 
* [[DB2]]
* [[PostgreSQL]] 
* [[MySQL]] 
* [[Adaptive Server Enterprise]]

=== Liens externes ===
{{autres projets
|commons=Category:Oracle (database)
|b=Oracle
}}
* [http://www.oracle.com/fr/ Oracle France]
* {{en}} [http://otn.oracle.com Oracle Technology Network] téléchargement des produits, documentations, …
* {{en}} [http://www.oracle.com/pls/db102/homepage Oracle Database 10G Documentation Library]
* {{en}} [http://www.oracle.com/pls/db112/homepage Oracle Database 11G Documentation Library]
* [http://oracle.developpez.com Cours, guides et tutoriels, FAQ Oracle]
* (en) Banque de [http://oracle-scripts.net scripts SQL pour les DBA], version 8i à 12c
* [http://www.dsfc.net/infrastructure/base-de-donnees-infrastructure/installer-oracle-10g-sur-centos-5-5/ Installer Oracle 10g sur Centos 5.5]

{{Palette|Systèmes de gestion de base de données}}

{{Portail|Bases de données|logiciel}}

[[Catégorie:Logiciel pour Linux]]
[[Catégorie:Logiciel pour Mac OS]]
[[Catégorie:Logiciel pour Unix]]
[[Catégorie:Logiciel pour Windows]]
[[Catégorie:Système de gestion de base de données]]
[[Catégorie:Logiciel Oracle]]
