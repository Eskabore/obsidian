{{Mettre à jour|date=février 2009}}
{{à sourcer|date=janvier 2013}}
{{Infobox Système d'exploitation
 | nom = FreeBSD
 | logo = Logo-freebsd.svg
 | taille logo = 200
 | image = FreeBSD.png
 | taille image = 
 | légende = Page d'accueil de FreeBSD.
 | famille = [[Berkeley Software Distribution|BSD]]
 | langues = 
 | type de noyau = [[Noyau monolithique]] modulaire
 | état du projet = en développement
 | plates-formes possibles = [[i386]], [[x86-64]], [[Architecture SPARC|SPARC]], [[SPARC64]], [[DEC Alpha|ALPHA]], [[AMD64]], [[IA-64]], [[PC98]], [[PowerPC]], [[ARM architecture]]
 | fondateur = 
 | développeur = Projet FreeBSD
 | licence = [[Licence FreeBSD]]
 | état des sources = [[Logiciel libre]]
 | dernière version stable = 
 | méthode de mise à jour = 
 | interface graphique = 
 | site web = 
 | version précédente = 
 | version suivante = 
}}

'''FreeBSD''' est un [[système d'exploitation]] [[UNIX]] [[logiciel libre|libre]]. Le nom vient de l'association d'une part de ''{{lang|en|free}}'' qui signifie à la fois « libre » et « gratuit » dans l'anglais courant, et d'autre part de ''[[Berkeley software distribution]]'' (BSD), l'UNIX développé à l'[[université de Californie à Berkeley|université de Berkeley]]. Free prend un sens plus connoté dans ce nom : il signifie que le logiciel peut être utilisé gratuitement même pour un usage commercial, que les sources complètes sont disponibles et utilisables avec un minimum de restrictions quant à leur usage, leur distribution et leur incorporation dans un autre projet (commercial ou non), et enfin que n'importe qui est libre de soumettre son [[code source]] pour enlever un [[Bug informatique|bug]] ou améliorer le logiciel, ce code étant incorporé aux sources après accord.

L'objectif du projet FreeBSD est de fournir un système qui puisse servir à tout, avec le moins de restrictions possibles.

Historiquement, les développeurs se sont focalisés pendant un temps sur la plate-forme [[i386]] au sens large (x86) et les performances, c'est-à-dire les temps de réponses du système pour n'importe quelle sollicitation. En 2010, FreeBSD est utilisable et soutenu par la communauté sur un grand nombre de plates-formes : [[DEC Alpha|Alpha]], [[AMD64]], [[Architecture ARM|ARM]], [[Intel 80386|i386]] (architecture i386 ou x86, incluant les Pentium), [[IA-64|ia64]] (la famille de processeurs Intel [[Itanium]] et [[Itanium 2]]), [[x86-64]], [[Architecture MIPS|MIPS]], PC98 (architecture NEC PC-98x1), [[PowerPC]], [[Architecture SPARC|SPARC]] (architecture UltraSPARC de Sun Microsystem) et [[Xbox]].

FreeBSD offre des possibilités avancées en matière de réseau, de performance, de sécurité et de compatibilité. Il y a notamment une compatibilité binaire [[GNU/Linux|Linux]] et [[Windows NT]] (XP inclus). La première permet l'exécution de programmes compilés sur une plateforme GNU/Linux, la seconde permet l'utilisation des pilotes Windows NT des cartes réseau sans fil [[Wi-Fi]]. Le logiciel est un standard industriel sur le marché des [[Serveur informatique|serveurs]]. {{Quand|De nombreux fournisseurs d'accès, hébergeurs et organismes utilisent FreeBSD, parmi lesquels Walnut Creek CDROM, [[Yahoo!]] Inc. ou [[Netcraft]]}}. Le 24 mai 1999, l'équipe du serveur miroir ftp.cdrom.com a annoncé avoir battu la veille leur record de transfert de données<ref>{{Lien web|url=http://www.bafug.org/news/NewRecord.html|titre=Record de transfert de données|consulté le=24 février 2006|archive-url=https://web.archive.org/web/20060211093946/http://www.bafug.org/news/NewRecord.html|archive-date=11 février 2006|brisé le=23 juillet 2018}}</ref> pour un serveur : 1,33 [[tébioctet]] en 24 heures.

== Histoire ==
FreeBSD tire ses origines de l'UNIX de Berkeley. Beaucoup de l'organisation humaine, de l'idéologie et des événements du {{Lien|fr=Computer Systems Research Group|lang=en}} (CSRG) sont restés dans FreeBSD et se transmettent.

Le projet est lancé en 1993 sur la base de [[386BSD]], et la version 1.0 est disponible en production dès novembre 1993. L'équipe de [[Yahoo!]] cherche alors un système d'exploitation stable et performant. Ils le trouvent avec FreeBSD 2, qu'ils installent sur un Pentium 100 puis sur l'ensemble de leurs ordinateurs, comme le raconte [[David Filo]]<ref>[http://www.viewtouch.com/yahoobsd.html Yahoo et FreeBSD]</ref>, cofondateur de Yahoo!

Depuis, l'hébergeur met à disposition plusieurs serveurs pour la communauté FreeBSD.

FreeBSD 3 importe du code de 4.4BSD-Lite release 2, qui est la dernière publication faite par l'[[université de Californie à Berkeley]] (UCB). FreeBSD devient particulièrement mûr et performant avec les versions 4, jusqu'à la dernière (4.11) parue en {{date||janvier|2005|en informatique}}<ref>{{Lien web|url=http://www.freebsd.org/releases/4.11R/announce.html|titre=Annonce de la sortie de FreeBSD 4.11}}</ref>.

Une grande quantité de nouveautés apparaît avec les versions 5, mais {{référence souhaitée|Matthew Dillon, en désaccord avec d'autres membres de la ''core team'' (les développeurs dirigeants)}} décide de continuer la version 4 avec une nouvelle équipe sous le nom de [[DragonFly BSD]]. Parmi ces nouveautés, on compte : une architecture multiprocesseurs nouvelle génération ([[Symmetric multiprocessing|SMPng]], Symmetrical Multi-Processor scheduler next generation) avec des temps de latences plus courts, la possibilité d'exécuter en mode kernel plusieurs programmes, le système de fichiers UFS2, un système de politiques de sécurité en provenance de Trusted BSD<ref>{{Lien web|url=http://www.trustedbsd.org/ trustedbsd.org|titre=Site de Trusted BSD}}</ref>.

Les versions 6 apparaissent en novembre 2005. Elles continuent entre autres le travail sur le système SMP ''(Symmetrical Multi-Processor scheduler)'', les threads, et la sécurité. Le système de fichiers est maintenant multi-threadé, et les processeurs 386 ne sont plus gérés. Il y a trois ''releases'' (publications) en 2006 et une en 2007.

La version 7.0 sort le {{date|27|février|2008}}<ref>{{en}} {{Lien web|titre=FreeBSD 7.0-RELEASE Announcement |url=http://www.freebsd.org/releases/7.0R/announce.html}}</ref> et la 8.0 en novembre 2009<ref>{{en}} {{Lien web |titre=FreeBSD 8.0-RELEASE Announcement |url=http://www.freebsd.org/releases/8.0R/announce.html}}</ref>. Parmi les nouveautés importantes figure le nouvel ordonnanceur, SCHED_ULE, optimisé pour les machines multiprocesseurs sans diminution des performances en monoprocesseur. Cette version a néanmoins été critiquée pour l'intégration tardive de la propolice au sein du kernel<ref>{{en}} {{Lien web|titre=FreeBSD 8 |url=http://freebsdsoftware.org/freebsd-8}}</ref>.

La version 8.0 se manifeste en juillet 2010<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundation|titre=FreeBSD 8.0 release|url=https://www.freebsd.org/releases/8.4R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=10 Juillet 2010|consulté le=14 Mai 2020}}</ref> et furent mis à jour jusqu'au 7 juin 2013<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundatio|titre=FreeBSD 8.4 release|url=https://www.freebsd.org/releases/8.4R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=7 Juin 2013|consulté le=14 Mai 2020}}</ref> avec la version 8.4. En 2013, la version 8.4 proposait de nouvelles fonctionnalités sur le domaine matériel avec le support de l'USB 3.0 et l'accélération d'[[Advanced Encryption Standard|AES]] sur les processeurs Intel. FreeBSD 8.4 apportait du nouveau dans le domaine de la virtualisation avec notamment l'appui de DomU Xen et la virtualisation des couches réseau.

Le 12 janvier 2012<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundation|titre=FreeBSD 9.0 release|url=https://www.freebsd.org/releases/9.0R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=12 Janvier 2012|consulté le=14 Mai 2020}}</ref>, la version 9.0 fut marqué par le nouveau installeur bsdinstall<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundation|titre=FreeBSD Wiki - BSDinstall|url=https://wiki.freebsd.org/BSDInstall|site=https://wiki.freebsd.org/|périodique=[FreeBSD]|date=11 Janvier 2015|consulté le=14 Mai 2020}}</ref> et de l'arrivée de FreeBSD sur la console Playstation 3. Par la suite, [[Sony Interactive Entertainment]] réutilisa FreeBSD 9.0 pour l'[[Système d'exploitation|OS]] de la Playstation 4.

La version 10.0 de FreeBSD (20 janvier 2014<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundation|titre=FreeBSD 10.0 release|url=https://www.freebsd.org/releases/10.0R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=20 Janvier 2014|consulté le=14 Mai 2020}}</ref>) a vu la dépréciation de [[GNU Compiler Collection|GCC]] remplacée par celle de [[Clang]] ainsi que d'autres changements mineurs.

FreeBSD 11.0 sort le 10 octobre 2016<ref>{{Lien web|langue=Anglais|auteur1=FreeBSD Foundation|titre=FreeBSD 11.0 release|url=https://www.freebsd.org/releases/11.0R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=10 Octobre 2016|consulté le=14 Mai 2020}}</ref> et apporte quelques modifications dont la prise en charge plus large pour les pilotes de réseaux sans fil et la prise en charge de l'architecture [[Architecture ARM|arm64]].

En décembre 2018<ref>{{Lien web|langue=Français|auteur1=FreeBSD Foundation|titre=FreeBSD 12.0 release|url=https://www.freebsd.org/releases/12.0R/announce.html|site=https://www.freebsd.org/|périodique=[FreeBSD]|date=Décembre 2018|consulté le=14 Mai 2020}}</ref> la version 12.0 de FreeBSD fut publié, cette version apporte l'ajout du pilote netdump et quelques améliorations du support graphique.

== Versions ==
{{Chronologie de FreeBSD}}

== Développement ==
Beaucoup est resté de l'époque ''Berkeley Software Distribution'' et du CSRG avec, entre autres, de grandes parties des sources, des sources sont publiées avec le système, des décisions prises par un groupe réduit de développeurs.
Les développeurs sont dispersés dans le monde entier.
Les sources de toutes les branches depuis la version 2.2 jusqu'aux dernières expérimentations de ''CURRENT'' sont en permanence disponibles sur les serveurs.
Il est même possible de télécharger les sources d'une branche telles qu'elles étaient à une date précise.

=== L'équipe ===
Le développement se fait d'une manière assez hiérarchisée. La core team rassemble des développeurs élus qui décident de l'évolution générale de FreeBSD. Ils sont actuellement neuf, et on compte 29 anciens (depuis 1992) qui continuent à contribuer. Les élections se tiennent tous les deux ans.

Les autres équipes sont responsables de :
* la sécurité (sept membres) ;
* des ''releases'' (une équipe principale et autant d'équipes que de plates-formes) ;
* de la documentation ;
* de la gestion des ports ;
* des dons.

Certains développeurs font partie de plusieurs équipes, par exemple ''core team'' et ''release engineering team''.

FreeBSD compte en novembre [[2006]] :
* environ 370 développeurs (dont les membres de la core team) qui ont accès en écriture aux sources officielles ; ce sont les ''FreeBSD committers'', terme venant de la commande ''commit'' du programme [[CVS]] (Concurrent Version System), qui permet de transmettre les modifications sur le serveur central ;
* 1905 contributeurs sans privilège ;
* un certain nombre d'utilisateurs et testeurs, parmi lesquels des individus, des organismes, des fournisseurs d'accès et des hébergeurs en général.

Il y a régulièrement des importations et exportations de code entre les systèmes BSD (FreeBSD, [[NetBSD]], [[OpenBSD]], [[DragonFly BSD]]). Par conséquent, les développeurs BSD en général participent au code des BSD. Il y a plusieurs raisons à cela : tous ont pour ancêtre commun 4.4BSDLite et ont une architecture proche - en moyenne bien plus que deux distributions GNU/Linux, et tous ont la même [[licence BSD]].

D'autres licences proches comme celle de [[Solaris (informatique)|Solaris]] permettent également des flux de code. [[Dtrace]], un outil Solaris qui permet de voir d'une manière arbitraire tout ce qui se passe dans le système, est ainsi en train d'être porté sur FreeBSD :
* Devon O'Dell a commencé une grande partie du travail<ref>{{Lien web|url=http://www.sitetronics.com/wordpress/?cat=8|titre= son blog}}</ref> ;
* John Birrell principalement le continue :
** l’avancement peut être suivi sur la page du projet<ref>[http://people.freebsd.org/~jb/dtrace/index.html Page du projet DTrace]</ref>,
** fin mai 2006, 793 sur {{formatnum:1039}} tests que DTrace réalise sous Solaris, réussissent sous FreeBSD.

[[Apple]] a utilisé une grande partie du système version 5, et a participé en retour à l'ajout de fonctionnalités<ref>{{en}}{{Lien web|url=http://www.appleinsider.com/articles/09/10/16/freebsd_adds_support_for_snow_leopards_grand_central_dispatch.html|titre=Grand Central Dispatch d'Apple sera porté sur FreeBSD}}</ref>. Il y a donc une communauté de développeurs FreeBSD – au sens large – très importante.

=== L'organisation ===
FreeBSD a trois étiquettes pour les sources :
* HEAD, version en développement sans restriction (version 7 jusqu'à l'été 2007) ;
* RELENG_x, version en développement mais à l'architecture fixée ;
* RELENG_x_y, version de production mise à jour.

Au numéro x correspond donc une architecture ou une branche. Au numéro y correspond une release. Tous les quatre à six mois, les sources d'une branche sont gelées pour préparer une release, étiquetée RELEASE.

Pour un système compilé :
* HEAD devient CURRENT ;
* RELENG_x devient FreeBSD-x-STABLE ;
* RELENG_x_y devient FreeBSD-x.y-RELEASE au moment de la release, et FreeBSD-x.y-RELEASE-p1, puis p2, etc. avec les mises à jour.

Pour un système FreeBSD de production, les FreeBSD-x.y-RELEASE-pz sont les mieux indiqués.
FreeBSD-CURRENT est tout à fait expérimental<ref>{{Lien web|url=http://www.freebsd.org/doc/fr/books/handbook/current-stable.html|titre=FreeBSD-CURRENT contre FreeBSD-STABLE}}</ref> et contient des fonctionnalités qui ne sont que susceptibles d'être présentes dans la prochaine branche.

Les personnes qui utilisent FreeBSD-CURRENT sont :
* les développeurs actifs qui travaillent de manière spécialisée sur les sources ;
* les testeurs de la communauté qui participent à l'assainissement de FreeBSD-CURRENT, qui proposent aussi des directions d'évolution de FreeBSD, ainsi que des [[patch (informatique)|patches]] (portions de code source) ;
* les personnes qui plutôt suivent l'évolution de FreeBSD, ce qui peut être une activité à plein temps, et éventuellement proposent des patches.

L'organisation du développement et de la communauté fait que le support de FreeBSD est très réactif, notamment en matière de sécurité. Quelques minutes ou heures en général séparent la découverte d'une faille dans la sécurité et le moment où les sources sont corrigées sur le serveur principal.

== Le système ==
FreeBSD est un système d'exploitation à part entière qui comprend le noyau, une partie utilisateur, et les sources. Les programmes ne faisant pas partie de FreeBSD comme [[Apache HTTP Server|Apache]] et [[Firefox]] sont dans le système de ports. Les logiciels importants comme le serveur graphique [[X Window System|X11]], les gestionnaires de fenêtres comme [[FluxBox]] et les environnements de bureau tel que [[KDE]] sont intégrés comme packages (port précompilé) dans les cédéroms de publication de FreeBSD.

FreeBSD est publié en grande majorité sous [[licence BSD]], et sous licence [[Licence publique générale GNU|GPL]] (GNU General Public Licence). Les sources protégées par la [[licence GPL]] sont dans un répertoire séparé.

=== Les « ports » ===
Il s'agit d'une des grandes forces de FreeBSD. Chaque ''port'' est un ensemble de fichiers informatifs précisant où trouver les sources d'une application, éventuellement quelles corrections apporter, comment compiler, et quels sont les programmes ou bibliothèques dont l'application dépend (ces programmes et bibliothèques sont simplement appelées ''dépendances''). Par extension, un ''port'' est une application portée sur FreeBSD. À l'été 2013, il y a plus de {{Unité|24000|ports}}.

Chaque port peut être installé sous forme binaire ou package (système équivalent aux fichiers .rpm, .deb, etc. des distributions GNU/Linux) ou compilé depuis les dernières sources (équivalent des pkgsrc de [[NetBSD]]).
Le système est fait de telle manière qu'avec une seule commande, les sources de l'application et des dépendances sont téléchargées, compilées et installées sur le système d'exploitation.

Depuis 2008, l'[[Environnement d'exécution Java|environnement Java]] de [[Sun Microsystems]] est disponible pour les plates-formes i386 et [[AMD64]] (Java Runtime Environment/JRE et Java Development Kit/JDK) en version 1.6. La fondation FreeBSD a négocié une licence auprès de Sun Microsystems pour une distribution précompilée de cet environnement.

=== Projets associés et personnalisations de FreeBSD ===
* [[TrustedBSD]] est créé en [[2000]] par Robert Watson, membre de la core team. Il s'agit d'un ensemble d'extensions de FreeBSD qui a pour tâche de développer des services de sécurité et d'audit du code source. Régulièrement des éléments de TrustedBSD sont intégrés à FreeBSD.
* {{en}} [http://www.freebsd.org/doc/en_US.ISO8859-1/articles/nanobsd/index.html NanoBSD] fait partie de FreeBSD. C'est un système FreeBSD de taille très réduite pour un usage spécialisé.
* [[PC-BSD]] est une release 6.1 personnalisée avec une interface d'installation plus simple.
* [[DesktopBSD]] est une autre personnalisation de FreeBSD qui se focalise sur une utilisation de bureau, opposée à une utilisation comme serveur.
* [[FreeNAS]] est une distribution qui permet d'utiliser un ordinateur pour réaliser du [[stockage en réseau NAS]].
Trois cédéroms avec système utilisable sans installation sur disque dur ([[live CD]]) existent : [[FreeSBIE]] (du groupe italien GUFI), [[Frenzy BSD]] (un projet russe documenté en français) et le récent [[GhostBSD]].

== Pénétration des marchés ==
{{Section à sourcer|date=février 2015}}
FreeBSD est considéré comme un standard industriel dans le marché des serveurs. Il n'y a pas de données maintenues sur les utilisateurs du système d'exploitation, mais des organismes d'observation comme [[Netcraft]] (qui a tous ses serveurs sous FreeBSD{{Citation nécessaire}}) permettent d'effectuer des évaluations qualitatives.

De grandes parties d'internet (Netblock owners) sont sous FreeBSD :
* Yahoo!, qui comprend HotJobs.com Ltd, Altavista ou Geocities ;
* Rackspace.com ;
* Isle, Inc ;
* Bayerischer Rundfunk ;
* Japan Network Information Center ;
* ViaNet Communications ;
* Hopemoon Co, Ltd ;
* Full Internet Provider.
* T. Tilignac Full Ops.

D'anciens utilisateurs (ou actuels mais ''non confirmés'') de FreeBSD sur serveurs sont :
* Microsoft (hotmail)<ref>{{en}}{{Lien web|url=https://technet.microsoft.com/en-us/library/bb496985.aspx|titre=Migrating Microsoft Hotmail from FreeBSD to Microsoft Windows 2000 Technical Case Study}}</ref>{{,}}<ref>{{en}}{{Lien web|url=https://technet.microsoft.com/en-us/library/bb496986.aspx|titre=Appendices for Migrating Microsoft Hotmail from FreeBSD to Microsoft Windows 2000 Technical Case Study}}</ref>.

L'utilisation de FreeBSD pour un usage domestique, sans être confidentielle, est bien plus modérée auprès du grand public que le système [[GNU]]/[[Linux]].

Pourtant, FreeBSD fait fonctionner les logiciels qui ont largement aidé à populariser les systèmes GNU/Linux, parmi lesquels le serveur graphique X associé à l'espace bureautique et de fenêtrage KDE, les suites bureautiques [[OpenOffice.org]] et [[LibreOffice]], le navigateur web Firefox.

D'autres facteurs entrent en jeu. Sans prétention d'exhaustivité, de hiérarchie quant à l'impact, il y a vraisemblablement :
* la médiatisation, à laquelle ont participé de grandes entreprises comme [[IBM]], [[Microsoft]], [[Novell]] ou [[RedHat]], des organismes d'État et les différents médias qui relayent les sujets sélectionnés ;
* une synergie entre des mouvements : logiciel-libre, un contre-courant par rapport à [[Microsoft]] et aux solutions propriétaires ;
* la licence : parfois jugée trop libre, elle permet à des entreprises comme [[Apple]] ou [[Microsoft]] d'intégrer du code FreeBSD à leur système d'exploitation.

== Le [[Daemon (informatique)|daemon]] [[Berkeley software distribution|BSD]] ([[beastie]]) ==
Le personnage rouge et souriant est le [[Daemon (informatique)|daemon]] BSD. Dans le contexte des systèmes UNIX, les daemons — ''d(isk) a(nd) e(xecution) mon(itor)'' — sont des programmes de maintenance travaillant en arrière-plan et ne nécessitant pas d'intervention humaine. Si ''[[Démon (esprit)|daemon]]'' était entre le milieu du {{s-|XVI|e}} et le {{s-|XIX|e}} l'orthographe d'usage pour ''demon'', aujourd'hui ces deux termes diffèrent. Dans les anciennes croyances grecques ''daemon'' désignait une divinité, un être surnaturel, un génie ou ange gardien. En revanche ''demon'' ([[Démon (esprit)|démon]] en français) a une connotation diabolique. Le terme daemon est réapparu dans les années 1980 avec les débuts d'UNIX, ce avec la même ancienne connotation grecque. Le daemon BSD à la fois revêt l'apparence d'un démon (avec les cornes, et la queue pointue) et incarne un daemon par son apparence bienveillante.

Le daemon BSD s'appelle officiellement [[beastie]], ce qui se prononce comme BSD en anglais. Le nom erroné de Chuck a été employé pendant un temps, à l'origine par Walnut Creek CD-ROM. [[John Lasseter]] (écurie [[Pixar Animation Studios|Pixar]], réalisateur et producteur de ''[[Toy Story]]'' et [[1001 pattes]])  créa le premier l'image de beastie. Depuis 1988 les droits sur le daemon BSD sont détenus par Marshall Kirk McKusick, ancien développeur à l'UC Berkeley Computer Systems Research Group (CSRG). L'image de beastie ci-contre a été créée par Poul-Henning Kamp, ancien membre de la core team.

== Comparaison avec GNU/Linux ==
FreeBSD et GNU/Linux sont deux systèmes de [[type Unix]]. Alors que FreeBSD tend à être entièrement conçu par une seule équipe, chaque composant de GNU/Linux est développé par une équipe différente. De cette manière la cohésion de ces composants est assurée d'office dans le cas de FreeBSD tandis que sous GNU/Linux elle se révèle très complexe, c'est pourquoi il existe des ''[[Distribution GNU/Linux|distributions GNU/Linux]]'', qui sont des systèmes préassemblés dans le but d'être plus rapidement fonctionnels pour l'utilisateur.

Entre les deux systèmes, la nomenclature des périphériques diffère, de même que quelques commandes, ou encore l'arborescence du système de fichiers. C'est typiquement le même genre de différences que l'on peut trouver entre deux [[Distribution GNU/Linux|distributions GNU/Linux]] très différentes.

L'ensemble des distributions [[GNU/Linux]] étant très hétérogène, il est extrêmement difficile de le comparer à une seule entité. Cependant tout comme quelques distributions [[GNU/Linux]], FreeBSD entend fournir un système simple, rapide, stable, sûr, à destination des utilisateurs qui ont déjà une bonne connaissance des systèmes informatiques (par exemple si lors de l'installation l'utilisateur a choisi d'installer un environnement graphique, il ne sera pas configuré automatiquement ni lancé au démarrage par défaut). À ce titre, FreeBSD se rapproche de [[Gentoo]] par exemple.

FreeBSD est très loin de l'installation en quelques clics d'[[Ubuntu (système d'exploitation)|Ubuntu]], qui est parfaitement fonctionnel fraîchement installé et déjà équipé de tous les logiciels de base pour une utilisation domestique. C'est ce que propose [[PC-BSD]], un système FreeBSD pré-installé pour une utilisation bureautique, à l'image d'une distribution [[GNU/Linux]].

De nombreux débats ont lieu sur la sécurité, les performances et diverses qualités de ces systèmes<ref>{{en}}{{Lien web|url=http://www.freesoftwaremagazine.com/articles/comparing_linux_and_freebsd|titre=Comparing Linux and FreeBSD}}</ref>.

FreeBSD possède quelques atouts face aux distributions GNU/Linux :
* La séparation de la base du système et des applications tierces permet en quelque sorte de bénéficier des avantages d'une [[Rolling release|distribution en publication continue]] pour ce qui est des applications, tout en maintenant un système de base particulièrement stable. En quelque sorte, les avantages conjoints d'une [[Debian]] et d'une [[Arch Linux]].
* Le système des [[BSD Jail|jails]], intégré au système de base, est activable instantanément.
* le système de fichiers [[ZFS]], qui est actuellement l'un des plus puissants disponibles, est intégré à FreeBSD depuis 2008.
Cependant, les distributions GNU/Linux sont en train de rattraper ces quelques retards :
* Les conteneurs [[LXC]] sont devenus moins difficiles à mettre en œuvre, grâce aux [[Docker (Système de conteneur Linux)|Dockers]]
* L'utilisation de [[ZFS]] sur un [[noyau Linux]] est possible à travers [[ZFS on Linux]]<ref>{{en}}{{Lien web|url=http://zfsonlinux.org|titre=ZFS on Linux}}</ref>. De plus, [[Btrfs]] le prochain système de fichiers natif pour [[noyau Linux]] reprend une grande partie des fonctionnalités de ZFS, mais n'est pas encore considéré comme stable pour la production.

Inversement, FreeBSD essaie de rattraper le retard qu'il avait sur GNU/Linux concernant les [[hyperviseur]]s avec le tout récent {{Lien|bhyve|lang=en}}, la gestion des paquets binaires avec [[pkgng]]<ref>{{en}}{{Lien web|url=http://www.freebsd.org/doc/handbook/pkgng-intro.html|titre=Using pkgng for Binary Package Management}}</ref> et le support des cartes graphiques avec l'intégration du [[Kernel-based mode-setting|Kernel-mode Setting]].

== Notes et références ==
{{Références|colonnes=2}}

== Voir aussi ==
{{Autres projets|commons=Category:FreeBSD}}
=== Articles connexes ===
* Les autres systèmes BSD : [[NetBSD]], [[PC-BSD]], [[OpenBSD]] et [[DragonFly BSD]]
* Les pare-feux de FreeBSD : [[Ipfirewall]] (IPFW), [[IPFilter]] (IPF) et [[Packet Filter]] (PF, importé d'OpenBSD)
* La Berkeley Software Distribution [[Berkeley software distribution|BSD]]
* [[ClosedBSD]]
* [[Projet Citrus]]
* [[Projet KAME]]
* [[M0n0wall]]

=== Bibliographie ===
==== Références ====
# Oxford American dictionary, 2005.
# Oxford American thesaurus, 2005.
# {{Ouvrage|titre=Unix system administration handbook, 3rd edition|auteur=Evi Nemeth|langue=anglais|lien langue={{en}}|mois=septembre|année=2000|pages=896|isbn=978-0-13-020601-5|présentation en ligne=https://www.amazon.com/UNIX-System-Administration-Handbook-3rd/dp/0130206016}}.
# {{Ouvrage|auteurs=Chris DiBona {{et al.}}|titre=Open sources: voices from the open source revolution|éditeur=O'Reilly|langue=anglais|lien langue={{en}}|mois=janvier|année=1999|pages=280|isbn=978-1-56592-582-3|présentation en ligne=http://oreilly.com/catalog/9781565925823/index.html}}
# Le site officiel [http://www.freebsd.org/ freebsd.org] et sa version traduite en français [http://www.freebsd.org/fr/ freebsd.org/fr/].

=== Bibliographie supplémentaire ===
==== En anglais ====
===== Technique =====
** ''The Design and Implementation of the FreeBSD Operating System''. Marshall Kirk McKusick et George V. Neville-Neil, Addison Wesley Professional, 2004.

===== Générale =====
** ''The Complete FreeBSD'', Greg Lehey. L'ouvrage est depuis le 24 février 2006 [http://www.lemis.com/grog/Documentation/CFBSD/ disponible en ligne].
** BSD Hacks, 100 Industrial-Strength tips for BSD users and administrators. Dru Lavigne. O'Reilly, 2004.
** [https://wiki.freebsd.org/Laptops The FreeBSD Laptop Compatibility List] : liste de compatibilité entre FreeBSD et les ordinateurs portables.
** [http://www.freshports.org/ FreshPorts] : un portail avancé sur les ports.

==== En français ====
* [http://www.freebsd.org/doc/fr_FR.ISO8859-1/books/handbook/ Le manuel FreeBSD]
* [http://www.siteduzero.com/tutoriel-3-273305-freebsd-et-l-envers-du-decor.html ''FreeBSD et l'envers du décor''] : présentation détaillée et guide d'installation

{{Palette|Systèmes d'exploitation}}
{{Portail|logiciels libres|sécurité informatique}}

[[Catégorie:FreeBSD| ]]
[[Catégorie:Sécurité du système d'exploitation]]
