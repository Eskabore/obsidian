{{Voir homonymes|Core|Intel Core}}
{{Infobox Microprocesseur
| nom                = Core i7
| image              = Intel inside core i7.png
| légende            = 
| début-prod         = Depuis [[2008 en informatique|2008]]
| fin-prod           = 
| freq-min           = 1.60
| freq-max           = 5
| fsb-freq-min       = 2.5
| unité-fsb-freq-min = GT/s
| fsb-freq-max       = 6.4
| unité-fsb-freq-max = GT/s
| gravure-min        = 14
| gravure-max        = 45
| fabricant          = Intel
| cœur               =
* Gulftown
* Bloomfield
* Lynnfield
* Clarksfield
* Arrandale
* Sandy Bridge
* Ivy Bridge
* Haswell
* Skylake
* Kaby Lake
* Coffee Lake
| socket             = LGA1366, LGA1156, LGA1155, LGA2011, LGA1150, LGA1151
| architecture       = [[x86]], [[x86-64]], [[MMX (processeur)|MMX]], [[Streaming SIMD Extensions|SSE]], [[Streaming SIMD Extension 2|SSE2]], [[SSE3]], [[SSSE3]], [[SSE4]]
| microarchitecture  = [[Nehalem]], [[Sandy Bridge]], [[Haswell (microarchitecture)|Haswell]]
}}
[[Fichier:Core i7 920 quad front and back.jpg|thumb|Intel Core i7 920.]]
La marque '''Core i7''' d'[[Intel]] est utilisée pour ses [[microprocesseur]]s grand public haut de gamme depuis {{date-|novembre 2008}}. Les marques [[Core i5]], [[Core i3]] et [[Intel Core i9|Core i9]] sont apparues ensuite.

Techniquement, les Core i7 peuvent appartenir aux familles [[Nehalem#Processeurs Nehalem (gravure 45 nm)|Nehalem]], [[Nehalem#Processeurs Westmere (gravure 32 nm)|Westmere]], [[Sandy Bridge#Famille Sandy Bridge|Sandy Bridge]], [[Sandy Bridge#Famille Ivy Bridge|Ivy Bridge]], [[Haswell (microarchitecture)#processeurs Haswell (gravure 14 nm)|Haswell]], [[Skylake]], [[Kaby Lake (microarchitecture)|Kaby Lake]] et [[:en:Coffee_Lake|Coffee Lake]]. 

Ces processeurs sont généralement utilisés pour le rendu 3D et autres logiciels, en général accompagnés d'une carte graphique hors processeur. 

Leurs [[Passmark|indices Passmark]] en 2016 vont de {{nb|4500}} ({{Unité|6500|U}}<ref>U = {{Langue|en|Ultra-low-voltage}}, destiné aux portables.</ref> à {{unité|2.50|GHz}}) à {{nb|19000}} (6950X à {{unité|3.00|GHz}}). Les Core i7 ont de deux à dix cœurs selon la gamme et la génération.

== Détails techniques ==
{{Voir aussi|Nehalem|Sandy Bridge}}
En 2008, la commercialisation des Core i7 marque l'avènement de la nouvelle microarchitecture [[Nehalem]] chargée de remplacer l'ancienne architecture [[Intel Core (microarchitecture)|Core]]. 

=== Les sockets utilisés ===
* LGA1156
* LGA1366
* LGA1155
* LGA1150
* LGA1151
* LGA2011
* LGA2011-3
* LGA2066

[[Fichier:Socket LGA 1366 open R7309468 wp.jpg|thumb|Socket LGA1366.]]

Les Core i7 utilisent deux sockets différents : LGA1366 pour les modèles Bloomfield (Core i7 9xx) et LGA1156 pour les modèles Lynnfield (Core i7 8xx et Core i5). La présence au sein d'une même gamme de deux sockets distincts pose un problème d'une part en termes d'évolution là où Intel ne proposait précédemment que le LGA775 et d'autre part en termes de communication vis-à-vis du consommateur.

=== L'hyper-Threading ===
La commercialisation des Core i7 marque le retour de la technologie [[Hyperthreading]] (SMT deux voies) qui avait disparu depuis les [[Pentium 4]].

=== Le Turbo Boost ===
La technologie {{lang|en|''Turbo Boost''}} a été officiellement présentée au cours de l'IDF 2008 de San Francisco<ref name="comm_20080819">{{en}} Communiqué de presse Intel, [http://www.intel.com/pressroom/archive/releases/20080819comp.htm {{lang|en|''Intel Shifts Future Core™ Processors Into Turbo Mode''}}] dans Intel News Release, le 19 août 2008.</ref>. Elle permet de désactiver à la volée certains cœurs tout en augmentant la fréquence des autres. Son impact sur le(s) processeur(s) est d'autant plus grand que l'on désactive des cœurs. La hausse de fréquence s'effectue par pas de 133 MHz, appelés ''bins'' par la documentation technique d'Intel<ref>David Legrand, [http://www.pcinpact.com/actu/news/45467-Intel-IDF-Core-i7-Overclocking-Bin.htm « IDF 2008 : l'overclocking sur Nehalem, la grande inconnue »], dans PC INpact, le 21 août 2009.</ref>. Une hausse de 2 bins équivaut ainsi à une augmentation de 266 MHz de chaque cœur actif. Cette solution permet ainsi de mieux tirer profit des applications non développées pour la gestion multi-cœur. Elle se distingue toutefois de la technologie employée sur les [[Penryn (microprocesseur)|Penryn]] mobiles, qui se fonde sur les informations fournies par le système d'exploitation. Avec le Turbo Boost, la gestion est interne au processeur.

Le mois suivant, Intel officialisait sa technologie sous le terme Dynamic Speed Technology (DST)<ref>David Legrand, [http://www.pcinpact.com/actu/news/46284-Intel-Core-i7-DST.htm ''Mode Turbo des Core i7 : ça sera Dynamic Speed Technology''], dans PC INpact, le 26 septembre 2009.</ref>, qui a depuis été renommée Turbo Boost.

=== Le contrôleur mémoire ===
Le contrôleur des processeurs [[Bloomfield (microprocesseur)|Bloomfield]] communique avec la mémoire à travers trois canaux, tandis que celui des processeurs [[Lynfield]] communique avec la mémoire à travers deux canaux.
Plus récemment, les modèles basés sur la plateforme LGA2011-3 profite d'un contrôleur quad-channel (quatre canaux mémoire).

=== Bug et autres problèmes ===
==== Sockets 1156 défectueux ====
À la suite de tests poussés d'augmentation de fréquence sur un Core i7 870, le site {{lien|AnandTech}}<ref>Rajinder Gill, [http://www.anandtech.com/mb/showdoc.aspx?i=3661 P55 ''Extreme Overclockers: Check your sockets!''], dans AnandTech, le 15 octobre 2009.</ref> ainsi que plusieurs utilisateurs<ref>Massman, [http://www.xtremesystems.org/forums/showthread.php?s=195eec42876dc6078cfa6cbca58daf3d&t=234723 ''P55-UD6 socket burn''], dans XtremeSystems Forums, le 18 septembre 2009.</ref> ont endommagé sérieusement leurs carte-mères à base de chipset P55 et leurs processeurs. À la suite d'investigations, le responsable serait le socket LGA1156 conçu par [[Foxconn]] dont les mauvais contacts socket-processeur empêcheraient ce dernier de recevoir correctement toute l'énergie nécessaire. En réponse à ce problème, les fabricants de carte-mères ont échangé leur socket pour des modèles de marques Lotes ou Tyco/AMP. Dans le même temps, [[Foxconn]] a réagi en réalisant de nouveaux sockets.

==== Surchauffe des Skylake et Kabylake ====
Après beaucoup de messages d'utilisateurs mécontents sur le forum Intel, la marque a confirmé des problèmes de surchauffe sur certains i7 7700K. Il est déconseillé, dans le même communiqué, de surcadencer son processeur<ref>{{lien web |langue=en |auteur1=Khalid Moammer |titre=Intel Says i7 7700K CPUs Shouldn’t Be Overclocked In Response To Countless Overheating Complaints |url=https://wccftech.com/intel-i7-7700k-owners-flood-forums-with-overheating-complaints/ |site=Wccftech.com |date=05-05-2017 |consulté le=30-07-2020}}.</ref>. Le souci serait en partie du à la pâte thermique utilisée entre le die et l'IHS qui serait de qualité moyenne, notamment sur les modèles de 6 et 7<sup>ème</sup> génération.

== La gamme Bureau ==

=== Westmere 'Gulftown' ===
{{voir aussi|Gulftown}}
Pressenti pour être nommé [[Core i9]]<ref>David Legrand, [http://www.pcinpact.com/actu/news/51516-intel-havendale-clarkdale-gulftown-core-i9.htm ''Intel saute l'Havendale en 45 nm, pour le Clarkdale en 32 nm''], dans PC INpact, le 19 juin 2009.</ref>, le premier processeur sextuple-cœur conçu par Intel pour le grand public est finalement commercialisé sous le nom de Core i7 980X<ref>Florian Vieru, [http://www.pcworld.fr/2009/12/14/materiel/cpu/intel-core-i7-980x-core-i7-930/464071/ ''Gulftown sera le Core i7-980X, Core i7-930 pour bientôt !''], dans PCWorld.fr, le 14 décembre 2009.</ref>. C'est le premier de la gamme à appartenir à la famille [[Westmere]] et donc à être gravé en [[32 nm]].

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs || rowspan=2 | [[Thread (informatique)|Threads]] || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost">Les valeurs sont présentées respectivement avec 4, 3, 2 et 1 cœur(s) actif(s). Entre parenthèses est indiqué le nombre de bins.</ref> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | [[Socket_(processeur) | Socket]] || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#444E50;color: white" | '''Core i7 900 Extreme Edition'''
|- align="center"
| align="left" | 990X || 6 || 12 || 3,46 GHz || 3,60 (1) - 3,60 (1) - 3,60 (1) - 3,60 (1) - 3,73 (2) - 3,73 (2) || 6 × 64 Kio || 6 × 256 Kio || 12 Mio || 26 ||  || D0 || 130 W || [[QuickPath Interconnect|QPI]] 6,4 GT/s + 3×DDR3 1,333 GT/s|| [[LGA1366]] || <small></small> || 01 jan 2011 || 
|- align="center"
| align="left" | 980X || 6 || 12 || 3,33 GHz || 3,46 (1) - 3,46 (1) - 3,46 (1) - 3,46 (1) - 3,60 (2) - 3,60 (2) || 6 × 64 Kio || 6 × 256 Kio || 12 Mio || 25 ||  || D0 || 130 W || [[QuickPath Interconnect|QPI]] 6,4 GT/s + 3×DDR3 1,333 GT/s|| [[LGA1366]] || <small></small> || {{date-|11 mars 2010}} || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 900'''
|- align="center"
| align="left" | 970 || 6 || 12 || 3,20 GHz || 3,33 (1) - 3,33 (1) - 3,33 (1) - 3,33 (1) - 3,46 (2) - 3,46 (2) || 6 × 64 Kio || 6 × 256 Kio || 12 Mio || 24 ||  || || 130 W || QPI 4,8 GT/s + 3×DDR3 1,333 GT/s|| LGA1366 || <small></small> || {{date-|juillet 2010}}<ref>Florian Vieru, {{lien brisé|url=http://www.pcworld.fr/2010/07/19/materiel/cpu/intel-core-i7-970-core-i5-760-i7-870s/501961/ |titre=''Intel lance le Core i7-970 et baisse le prix de plusieurs CPU'' }}, , dans PCWorld.fr, le 19 juillet 2010.</ref> || 
|}

=== Nehalem 'Bloomfield' ===
{{voir aussi|Bloomfield (microprocesseur)}}
La gamme Core i7 9xx correspond au segment très haut de gamme en dehors du Gulftown. La révision D0 est apparue à la suite de la commercialisation du Core i7 975 XE et a entrainé une légère refonte de la gamme : les Core i7 940 et 965 XE ont respectivement été remplacés par les modèles 950 et 975 XE tandis que le 920 a lui aussi bénéficié de cette nouvelle révision. Ce dernier est toutefois remplacé par le i7 930 à partir de {{date-|janvier 2010}}.
==== Révision D0 ====
La première révision des Bloomfield Core i7 a été introduite à la suite de la commercialisation du Core i7 975. Bien que Intel n'ait pas communiqué sur les évolutions de ce stepping, on peut noter une légère amélioration des performances par rapport aux révisions C0. La consommation en charge diminue légèrement et permet une meilleure stabilité du processeur pour l'overclocking, ainsi le 975 XE peut aisément atteindre les 4 GHz contrairement au 965 XE qui reste en dessous<ref>Patrick Schmid, [http://www.presence-pc.com/tests/core-i7-stepping-23153/ ''Core i7 : C0 (965) VS D0 (975)''], dans Tom's hardware, le 24 août 2009.</ref>.

==== Liste des processeurs ====
{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs || rowspan=2 | Threads || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost"/> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | [[Socket_(processeur) | Socket]] || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
!  width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#444E50;color: white" | '''Core i7 900 Extreme Edition'''
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37153 975 XE] || 4 || 8 || 3,33 GHz || 3,46 (1) - 3,46 (1) - 3,46 (1) - 3,60 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×25 || 0,8 - 1,375 V || D0 || 130 W || rowspan=2|[[QPI]] 6,4 GT/s + 3×DDR3 1,333 GT/s|| [[LGA1366]] || <small>AT80601002274AA</small> || {{date-|2 juin 2009}} || {{date-|18 février 2011}}
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37149 965 XE] || 4 || 8 || 3,20 GHz || 3,33 (1) - 3,33 (1) - 3,33 (1) - 3,46 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×24 || 0,8 - 1,375 V || C0 || 130 W || [[LGA1366]] || <small>AT80601000921AA</small> || {{date-|17 novembre 2008}} || {{date-|4 septembre 2009}}
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 900'''
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37151 960] || 4 || 8 || 3,20 GHz || 3,33 (1) - 3,33 (1) - 3,33 (1) - 3,46 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×24 || 0,8 - 1,375 V || D0 || 130 W || rowspan="5" | QPI 4,8 GT/s + 3×DDR3 1,066 GT/s || [[LGA1366]] || <small>AT80601002112AA</small> || {{date-|20 octobre 2009}} || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37150 950] || 4 || 8 || 3,06 GHz || 3,20 (1) - 3,20 (1) - 3,20 (1) - 3,33 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×23 || 0,8 - 1,375 V || D0 || 130 W || [[LGA1366]] || <small>AT80601002112AA</small> || {{date-|2 juin 2009}} || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37148 940] || 4 || 8 || 2,93 GHz || 3,06 (1) - 3,06 (1) - 3,06 (1) - 3,20 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×22 || 0,8 - 1,375 V || C0 || 130 W || [[LGA1366]] || <small>AT80601000918AA</small> || {{date-|17 novembre 2008}} || {{date-|4 septembre 2009}}
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=41447 930] || 4 || 8 || 2,80 GHz || 2,93 (1) - 2,93 (1) - 2,93 (1) - 3,06 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×21 || 0,8 - 1,375 V || D0 || 130 W || [[LGA1366]] || <small>AT80601000897AA</small> || {{date-|1 mars 2010}} || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=37147 920] || 4 || 8 || 2,66 GHz || 2,80 (1) - 2,80 (1) - 2,80 (1) - 2,93 (2) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || ×20 || 0,8 - 1,375 V || C0 - D0 || 130 W || [[LGA1366]] || <small>AT80601000741AA</small> || {{date-|17 novembre 2008}} || {{date-|24 septembre 2010}}
|}

=== Nehalem 'Lynnfield' ===
{{voir aussi|Lynnfield}}
Déclinaison supérieure de la gamme [[Intel Core i5#Lynnfield|Core i5 Lynnfield]], le Core i7 Lynnfield se présente comme une déclinaison abordable du haut de gamme grâce entre autres à son socket LGA1156. Bénéficiant d'un TDP inférieur au Bloomfield, il se distingue aussi par un Turbo Boost plus généreux (jusqu'à 5 bins) mais reste cantonné à des fréquences initiales inférieures.

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs || rowspan=2 | Threads || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost"/> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 800K'''
|- align="center"
| align="left" | 875K || 4 || 8 || 2,93 GHz || 3,20 (2) - 3,20 (2) - 3,46 (4) - 3,60 (5) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 22+ ||  || B1 || 95 W || [[Direct Media Interface|DMI]] 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 || [[LGA1156]] || <small></small> ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 800'''
|- align="center"
| align="left" | 880 || 4 || 8 || 3,06 GHz || 3,33 (2) - 3,33 (2) - 3,60 (4) - 3,73 (5) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 23 ||  || B1 || 95 W || rowspan=3 |[[Direct Media Interface|DMI]] 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 ||  [[LGA1156]] || <small></small> || || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=41315 870] || 4 || 8 || 2,93 GHz || 3,20 (2) - 3,20 (2) - 3,46 (4) - 3,60 (5) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 22 ||  || B1 || 95 W ||  [[LGA1156]] || <small>BV80605001905AI </small> || {{date-|9 septembre 2009}} || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=41316 860] || 4 || 8 || 2,80 GHz || 2,93 (1) - 2,93 (1) - 3,33 (4) - 3,46 (5) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 21 ||  || B1 || 95 W || LGA1156 || <small>BV80605001908AK </small> || {{date-|9 septembre 2009}} || {{date-|1 août 2010}} 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 800S'''
|- align="center"
| align="left" | 870S || 4 || 8 || 2,66 GHz || 2,80 (1) - 2,80 (1) - 3,20 (4) - 3,20 (4) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 20 ||  || B1 || 82 W || rowspan=2|[[Direct Media Interface|DMI]] 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 || [[LGA1156]] || <small></small> ||  || 
|- align="center"
| align="left" | 860S || 4 || 8 || 2,53 GHz || 2,53 (0) - 2,53 (0) - 3,33 (6) - 3,46 (7) || 4 × 64 Kio || 4 × 256 Kio || 8 Mio || 19 ||  || B1 || 82 W || LGA1156 || <small></small> || {{1er}} trim. 2010<ref name="pcinpact-210709">David Legrand, [http://www.pcinpact.com/actu/news/52073-intel-core-i5-i7-clarkdale.htm ''La roadmap de la rentrée d'Intel se dévoile dans le détail''], dans PC INpact, le 21 juillet 2009.</ref> || 
|}

=== Sandy Bridge ===
{{article détaillé|Sandy Bridge}}

Note : les IGP marqués d'une étoile (*) sont des modèles HD 2000, les IGP marqués de deux étoiles (**) sont des modèles HD 3000.
{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 style="text-align:center;" | Cœurs (threads) || colspan=3 | Fréquence || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision<br />(Sspec) || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus  || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! Cœurs || Turbo || IGP || L1 || L2 || L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2000K'''
|- align="center"
| align="left" | 2600K<ref name="modelK" group="note">Bénéficie d'un coefficient multiplicateur débloqué.</ref> || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || {{Unité|850|MHz}}<br/>({{Unité|1.35|GHz}})**|| 4 × {{Unité|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} || ×34 ||  || D2 (SR00C) || 95 W || rowspan="2" | 2×DDR3 + DMI 20 Gbit/s + FDI + 16×PCI-express 2.0 || [[LGA1155]] || <small>CM8062300833908<br />BX80623I72600K</small> || T1 2011 || {{Date rapide|29|mars|2013|en informatique}}<ref name="THFR_26092012">[http://www.presence-pc.com/actualite/Celeron-Core-i5-i7-48883/ Un Celeron, dix Core i5 et quatre Core i7 sont sur un bateau…], Tom's Hardware (26 septembre 2012).</ref>
|- align="center"
| align="left" | 2700K<ref name="modelK" group="note" /> || 4 (8) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || {{Unité|850|MHz}}<br/>({{Unité|1.35|GHz}})**|| 4 × {{Unité|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} || ×35 || || D2 (SR0DG) || 95 W  || LGA1155 || <small>CM8062301124100<br />BX80623I72700K</small> || {{Date rapide||octobre|2011|en informatique}} || {{Date rapide|29|mars|2013|en informatique}}<ref name="THFR_26092012" />
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2000'''
|- align="center"
| align="left" | 2600 || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || {{Unité|850|MHz}}<br/>({{Unité|1.35|GHz}})*|| 4 × {{Unité|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} || ×34 ||  || D2 (SR00B) || 95 W || rowspan="1" | 2×DDR3 + DMI 20 Gbit/s + FDI + 16×PCI-express 2.0 || LGA1155 || <small>CM8062300834302<br />BX80623I72600</small> || {{Date rapide|5|janvier|2011|en informatique}} || {{Date rapide|29|mars|2013|en informatique}}<ref name="THFR_26092012" />
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2000S'''
|- align="center"
| align="left" | 2600S || 4 (8) || {{Unité|2.8|GHz}} || {{Unité|3.8|GHz}} || {{Unité|850|MHz}}<br/>({{Unité|1.35|GHz}})*|| 4 × {{Unité|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} || ×28 || || D2 (SR00E) || 65 W ||rowspan="1" | 2×DDR3 + DMI 20 Gbit/s + FDI + 16×PCI-express 2.0 || LGA1155 || <small>CM8062300835604<br />BX80623I72600S</small> || T1 2011 || {{Date rapide|29|mars|2013|en informatique}}<ref name="THFR_26092012" />
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 3000'''
|- align="center"
| align="left" | 3820 || 4 (8) || {{Unité|3.6|GHz}} || {{Unité|3.8|GHz}} || - || 4 × {{Unité|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|10|Mio}} || ×36 || {{Unité|0.6|V}} – {{Unité|1.35|V}} || M1 (SR0LD) || 130 W ||rowspan="1" | 4×DDR3 + DMI 20 Gbit/s + 40×PCI-express 2.0 || [[LGA 2011]] || <small>CM8061901049606<br />BX80619I73820</small> || T1 2012 || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 3000K'''
|- align="center"
| align="left" | 3930K<ref name="modelK" group="note" /> || 6 (12) || {{Unité|3.2|GHz}} || {{Unité|3.8|GHz}} || - || 6 × {{Unité|64|Kio}} || 6 × {{Unité|256|Kio}} || {{Unité|12|Mio}} || ×32 || {{Unité|0.6|V}} – {{Unité|1.35|V}} || C1<ref name="revC1_VTd" group="note">La technologie VT-d n'est pas prise en charge par le stepping C1.</ref> (SR0H9)<br />C2 (SR0KY) || 130 W || rowspan="1" | 4×DDR3 + DMI 20 Gbit/s + 40×PCI-express 2.0|| LGA2011 || <small>CM8061901100802<br />BX80619I73930K</small>|| {{Date rapide|14|novembre|2011|en informatique}} || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 3000X'''
|- align="center"
| align="left" | 3960X<ref name="modelK" group="note" /> || 6 (12) || {{Unité|3.3|GHz}} || {{Unité|3.9|GHz}} || - || 6 × {{Unité|64|Kio}} || 6 × {{Unité|256|Kio}} || {{Unité|15|Mio}} || ×33 || {{Unité|0.6|V}} – {{Unité|1.35|V}} || C1<ref name="revC1_VTd" group="note" /> (SR0GW)<br />C2 (SR0KF)|| 130 W ||rowspan="2" | 4×DDR3 + DMI 20 Gbit/s + 40×PCI-express 2.0 ||  LGA2011 || <small>CM8061907184018<br />BX80619I73960X</small> || {{Date rapide|14|novembre|2011|en informatique}} || 
|- align="center"
| align="left" | 3970X<ref name="modelK" group="note" /> || 6 (12) || {{Unité|3.5|GHz}} || {{Unité|4|GHz}} || - || 6 × {{Unité|64|Kio}} || 6 × {{Unité|256|Kio}} || {{Unité|15|Mio}} || ×35 || {{Unité|0.6|V}} – {{Unité|1.35|V}} || C2 (SR0WR) || 150 W || LGA2011 || <small>CM8061901281201<br />BX80619I73970X</small>|| T4 2012 || 
|}

=== Ivy Bridge ===
Gravés en {{unité|22|nm}} et {{unité|32|nm}}, les processeurs Core i7 Ivy Bridge embarquent un IGP HD Graphics 4000.

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 style="text-align:center;" | Cœurs (threads) || colspan=3 | Fréquence || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision (Sspec) || rowspan=2 width="35" | [[Enveloppe thermique|TDP]] || rowspan=2 | bus  || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! Cœurs || Turbo || width="65" | IGP || width="55" | L1 || width="55" | L2 || L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 3700'''
|- align="center"
| align="left" | 3770K || 4 (8) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || 650 MHz<br/>(1,15 GHz) || 4 × 64 Kio || 4 × 256 Kio || {{Unité|8|Mo}} || ×35 ||  || E1 (SR0PL) || 77 W ||rowspan="4" | 2×DDR3 + DMI + FDI + 16×PCI-express 3.0 || LGA 1155 || <small>CM8063701211700<br/>BX80637I73770K</small> || {{date-|29 avril 2012}}<ref name="THFR_1">[http://www.presence-pc.com/actualite/Ivy-Bridge-Core-47172/ Premiers Ivy Bridge en avril, la suite en juin], Tom's Hardware (29 mars 2012).</ref> || 
|- align="center"
| align="left" | 3770T || 4 (8) || {{Unité|2.5|GHz}} || {{Unité|3.7|GHz}} || 650 MHz<br/>(1,15 GHz) || 4 × 64 Kio || 4 × 256 Kio || {{Unité|8|Mo}} || ×25 ||  || E1 (SR0PQ) || 45 W || LGA 1155 || <small>CM8063701212200</small> || {{date-|29 avril 2012}}<ref name="THFR_1"/> || 
|- align="center"
| align="left" | 3770S || 4 (8) || {{Unité|3.1|GHz}} || {{Unité|3.9|GHz}} || 650 MHz<br/>(1,15 GHz) || 4 × 64 Kio || 4 × 256 Kio || {{Unité|8|Mo}} || ×31 ||  || E1 (SR0PN) || 65 W || LGA 1155 || <small>CM8063701211900<br/>BX80637I73770S</small> || {{date-|29 avril 2012}}<ref name="THFR_1"/> || 
|- align="center"
| align="left" | 3770 || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.9|GHz}} || 650 MHz<br/>(1,15 GHz) || 4 × 64 Kio || 4 × 256 Kio || {{Unité|8|Mo}} || ×34 ||  || E1 (SR0PK) || 77 W || LGA 1155 || <small>CM8063701211600<br/>BX80637I73770</small> || {{date-|29 avril 2012}}<ref name="THFR_1"/> || 
|}

=== Haswell ===
Cette gamme de processeurs gravés en 22 nm et 14 nm (sortis en 2013) embarquent un IGP HD Graphics 4600

====Skylake====
Sorti en 2015.

==== Kaby Lake ====
Sorti en {{date-|septembre 2016}}.

==== Coffee Lake ====
sorti en {{date-|septembre 2017}}.

== La gamme Mobile ==
La gamme mobile, initiée avec les cœurs Clarksfield, ne fait plus partie de la gamme [[Centrino]] qui disparait en 2009.

=== Clarksfield ===
{{article détaillé|Clarksfield}} 

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs || rowspan=2 | Threads || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost"/> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#444E50;color: white" | '''Core i7 900XM Extreme Edition'''
|- align="center"
| align="left" | 940XM || 4 || 8 || 2,13 GHz || 2,40 (2) - 2,40 (2) - 3.20 (8) - 3,33 (9) || 4 × 32 kio || 4 × 256 kio || 8 Mio || 16 ||  || B1 || 55 W || rowspan=2|[[Direct Media Interface|DMI]] 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 || PGA 988 ||  || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=43126 920XM] || 4 || 8 || 2,00 GHz || 2,26 (2) - 2,26 (2) - 3.06 (8) - 3,20 (9) || 4 × 32 kio || 4 × 256 kio || 8 Mio || 15 ||  || B1 || 55 W || PGA 988 || <small>BY80607002529AF</small> || {{date-|23 septembre 2009}}<ref name="pcinpact-130809">Bruno Cormier, [http://www.pcinpact.com/actu/news/52489-premier-core-i7-mobile-fin-septembre.htm ''Les premiers Core i7 mobiles prévus pour fin septembre''], dans PC INpact, le 13 août 2009.</ref>
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 800QM'''
|- align="center"
| align="left" | 840QM || 4 || 8 || 1,86 GHz || 2,13 (2) - 2,13 (2) - 2,93 (8) - 3,20 (10) || 4 × 32 kio || 4 × 256 kio || 8 Mio || 14 ||  || B1 || 45 W || rowspan=2|DMI 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 || PGA 988 ||  || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=43124 820QM] || 4 || 8 || 1,73 GHz || 2,00 (2) - 2,00 (2) - 2,80 (8) - 3,06 (10) || 4 × 32 kio || 4 × 256 kio || 8 Mio || 13 ||  || B1 || 45 W || PGA 988 || <small>BY80607002904AK</small> || {{date-|23 septembre 2009}}<ref name="pcinpact-130809"/>
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 700QM'''
|- align="center"
| align="left" | 740QM || 4 || 8 || 1,73 GHz || 1,86 (1) - 1,86 (1) - 2,53 (6) - 2,93 (9) || 4 × 32 kio || 4 × 256 kio || 6 Mio || 13 ||  || B1 || 45 W || rowspan=2|DMI 2,5 GT/s + 2×DDR3 + 16×PCI-express 2.0 || PGA 988 ||  || 
|- align="center"
| align="left" | [http://ark.intel.com/Product.aspx?id=43122 720QM] || 4 || 8 || 1,60 GHz || 1,73 (1) - 1,73 (1) - 2,40 (6) - 2,80 (9) || 4 × 32 kio || 4 × 256 kio || 6 Mio || 12 ||  || B1 || 45 W || PGA 988 || <small>BX80607I7720QM</small> || {{date-|23 septembre 2009}}<ref name="pcinpact-130809"/>
|}

=== Arrandale ===
{{voir aussi|Arrandale}} 

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs (Thread) || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost"/> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 600M'''
|- align="center"
| align="left" | 640M || 2 (4) || 2,80 GHz || 3,20 (3) - 3,46 (5) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 21 ||  ||  || 35 W || rowspan=2|[[Direct Media Interface|DMI]] 2,5 GT/s + FDI + 2×DDR3 + 16×PCI-express 2.0 ||  ||  ||  || 
|- align="center"
| align="left" | 620M || 2 (4) || 2,66 GHz || 3,06 (3) - 3,33 (5) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 20 ||  ||  || 35 W ||  ||  || {{1er}} trim. 2010<ref name="tom-220909">Matthieu Lamelot, [http://www.presence-pc.com/actualite/Core-i7-620M-i5-540M-36513/ ''Cinq Core i7/i5 "Arrandale" prévus début 2010''], dans Tom's hardware, le 22 septembre 2009.</ref> || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 600LM'''
|- align="center"
| align="left" | 660LM || 2 (4) || 2,26 GHz || 2,80 (4) - 3,06 (6) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 17 ||  ||  || 25 W || rowspan=3 | DMI 2,5 GT/s + FDI + 2×DDR3 + 16×PCI-express 2.0 ||  ||  ||  || 
|- align="center"
| align="left" | 640LM || 2 (4) || 2,13 GHz || 2,66 (4) - 2,93 (6) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 16 ||  ||  || 25 W ||   ||  ||  || 
|- align="center"
| align="left" | 620LM || 2 (4) || 2,00 GHz || 2,53 (4) - 2,80 (6) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 15 ||  ||  || 25 W ||   ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 600UM'''
|- align="center"
| align="left" | 680UM || 2 (4) || 1,46 GHz || 2,13 (5) - 2,53 (8) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 11 ||  ||  || 18 W || rowspan=4 | DMI 2,5 GT/s + FDI + 2×DDR3 + 16×PCI-express 2.0 ||  ||  ||  || 
|- align="center"
| align="left" | 660UM || 2 (4) || 1,33 GHz || 2,00 (5) - 2,40 (8) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 10 ||  ||  || 18 W ||   ||  ||  || 
|- align="center"
| align="left" | 640UM || 2 (4) || 1,20 GHz || 1,86 (5) - 2,26 (8) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 9 ||  ||  || 18 W ||   ||  || {{1er}} trim. 2010<ref name="tom-220909"/> || 
|- align="center"
| align="left" | 620UM || 2 (4) || 1,06 GHz || 1,76 (5) - 2,13 (8) || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 8 ||  ||  || 18 W ||  ||  || {{1er}} trim. 2010<ref name="tom-220909"/> || 
|}

=== Sandy Bridge ===
{{article détaillé|Sandy Bridge}}

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 | Cœurs (Thread) || rowspan=2 | Fréquence || rowspan=2 | Turbo Boost<ref group="note" name="turboboost"/> || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! width="70" | L1 || width="70" | L2 || width="70" | L3 || Début || Fin 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2800QM'''
|- align="center"
| align="left" | 2820QM || 4 (8) || 2,30 GHz || 3,40 GHz || 4 × 64 Kio || 4 × 256 Kio ||  8 Mio || 23 ||  ||  || 45 W || || ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2700QM'''
|- align="center"
| align="left" | 2720QM || 4 (8) || 2,20 GHz || 3,30 GHz || 4 × 64 Kio || 4 × 256 Kio || 6 Mio || 22 ||  ||  || 45 W || || ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2600QM'''
|- align="center"
| align="left" | 2635QM || 4 (8) || 2,00 GHz || 2,90 GHz || 4 × 64 Kio || 4 × 256 Kio || 6 Mio || 20 ||  ||  || 45 W || || ||  ||  || 
|- align="center"
| align="left" | 2630QM || 4 (8) || 2,00 GHz || 2,90 GHz || 4 × 64 Kio || 4 × 256 Kio || 6 Mio || 20 ||  ||  || 45 W || || ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2600M'''
|- align="center"
| align="left" | 2620M || 2 (4) || 2,70 GHz || 3,40 GHz || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 27 ||  ||  || 35 W || || ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2600M LV'''
|- align="center"
| align="left" | 2649M || 2 (4) || 2,30 GHz || 3,20 GHz || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 23 ||  ||  || 25 W || || ||  ||  || 
|- align="center"
| align="left" | 2629M || 2 (4) || 2,10 GHz || 3,00 GHz || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 21 ||  ||  || 25 W || || ||  ||  || 
|- align="center"
| align="left" colspan=17 style="background:#127cc1;color: white" | '''Core i7 2600M ULV'''
|- align="center"
| align="left" | 2657M || 2 (4) || 1,60 GHz || 2,70 GHz || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 16 ||  ||  || 17 W || || ||  ||  || 
|- align="center"
| align="left" | 2617M || 2 (4) || 1,50 GHz || 2,60 GHz || 2 × 64 Kio || 2 × 256 Kio || 4 Mio || 15 ||  ||  || 17 W || || ||  ||  || 
|}

=== Ivy Bridge ===
{{Article principal|Sandy Bridge#Famille Ivy Bridge}}

=== Haswell ===
{{Article principal|Haswell (microarchitecture)}}

=== Skylake ===
{{Article détaillé|Skylake}}

=== Kaby Lake ===
{{Article détaillé|Kaby Lake (microarchitecture)}} Dernière génération, sortie en {{date-|août 2016}}.

== Chipsets compatibles ==
{| class="wikitable centre" style="font-size: 90%;"
|-
! rowspan=2 | Chipset
! rowspan=2 | Commercialisation
! colspan=4 style="text-align:center;" | Architecture
! colspan=5 style="text-align:center;" | Processeur Graphique
|-
! Nom de code || Gravure || TDP || Interface bus
! Modèle || Fréquence || DirectX || OpenGL || Moteur HD
|- align="left"
| colspan="19" style="background:#127cc1;color: white" | '''Intel'''
|- align="center"
| align="left" | X58 || {{date-|octobre 2008}} || Tylersburg ||  || 24,1 W || QPI || colspan=5 | - 
|- align="center"
| align="left" | P55 || {{date-|septembre 2009}} || Ibex Peak ||  ||  || DMI || colspan=5 | - 
|- align="center"
| align="left" | PM55 || {{date-|septembre 2009}} || Ibex Peak-M ||  || 3,5 W || DMI || colspan=5 | - 
|}

== Performances relatives brutes ==
Pour évaluer les ordres de grandeur des puissances relatives de ces processeurs, un repère possible est l'indice ''{{Langue|en|Passmark}}''<ref>{{en}} [https://www.cpubenchmark.net/high_end_cpus.html « {{Langue|en|High End CPUs - Intel vs AMD}} »], {{Langue|en|CPU Benchmarks}}.</ref>. Au {{date-|15 septembre 2015}}, cet indice est de {{nb|16000}} pour le Core i7-5960X à 3,00 GHz (bureau), de {{nb|4000}} pour le Core i7-3667U à 2,00 GHz (ultraportables).

== Notes et références ==
=== Notes ===
{{Références|groupe=note}}

=== Références ===
{{Références}}

== Voir aussi ==
=== Articles connexes ===
* [[Intel Core i3]]
* [[Intel Core i5]]
* [[Intel Core i9]]

=== Liens externes ===
* {{en}} [http://www.clunk.org.uk/forums/overclocking/22106-core-i7-overclocking-guide-beginners.html Core i7 Overclocking Guide For Beginners.] dans Clunk.org.uk
* [http://www.pcinpact.com/articles/intel-core-i7/348-1.htm Tout savoir de l'architecture Nehalem] dans PC INpact
* [http://www.tt-hardware.com/modules.php?name=News&file=article&sid=12109 Nehalem : visite du cœur du Core i7...] dans TT-Hardware
* [http://www.xbitlabs.com/articles/cpu/display/core-i7-920-overclocking.html Intel Core i7-920 Overclocking Guide] dans X-bit Labs

{{Palette|Microprocesseurs Intel}}
{{Portail|électricité et électronique|informatique}}

[[Catégorie:Microprocesseur x86 Intel|Core i7]]
[[Catégorie:Produit lancé en 2008]]

[[en:Intel Core#Core i7]]
