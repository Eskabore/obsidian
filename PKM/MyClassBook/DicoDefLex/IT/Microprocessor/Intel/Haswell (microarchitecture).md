{{Voir homonyme|Haswell (Durham)}}
[[Fichier:Haswell Chip.jpg|thumb|Chip Haswell, avec une épingle pour donner l'échelle]]
[[File:Fully Integrated Voltage Regulator.svg|thumb|Haswell et '''FIVR'''.]]
'''Haswell''' est la [[microarchitecture|micro-architecture]] de [[Intel#Microprocesseurs x86|processeurs]] [[x86-64]] d'[[Intel]] qui succède à la micro-architecture [[Sandy Bridge]] à partir du {{Date|4|juin|2013|en informatique}}<ref>{{Lien web|url=http://www.hardware.fr/news/13093/lancement-haswell-officialise.html|titre=Le lancement d'Haswell officialisé|site=Hardware.fr|auteur=Guillaume Louel|date=26 avril 2013}}</ref>.

Cette architecture éponyme se décline en deux familles de processeurs ci-après détaillées : Haswell (du même nom) et Broadwell.

Le tout, selon le schéma suivant :

* micro-architecture Sandy Bridge :
** famille de processeurs [[Sandy Bridge#Famille Sandy Bridge|Sandy Bridge]], [[photolithographie|gravés]] en {{unité|32|nm}}
** famille de processeurs [[Sandy Bridge#Famille Ivy Bridge|Ivy Bridge]], gravés en {{unité|22|nm}}
* micro-architecture Haswell :
** famille de processeurs Haswell, gravés en {{unité|22|nm}}
** famille de processeurs Broadwell, gravés en {{unité|14|nm}}

== Principales caractéristiques ==
Caractéristiques supposées<ref name="canardplus.com">{{lien web |langue=fr|nom=Doc|prénom=TB|titre=IDF 2008 Shanghai : Processeur : de Nehalem à Haswell |url=http://www.x86-secret.com/dossier-35-200-Processeur_de_Nehalem_a_Haswell.html|éditeur=CanardPC}}</ref> : 
* Augmentation de la taille de certains [[Registre de processeur|registres]] et [[Mémoire tampon|mémoires tampons]]<ref>Anand Lal Shimpi, [http://www.anandtech.com/show/6355/intels-haswell-architecture/7 Intel's Haswell Architecture Analyzed], anandtech.com, 2012-10-05;</ref>{{,}}<ref>[http://www.hardware.fr/articles/897-3/ameliorations-architecture-cpu.html]</ref>
* Nouveaux systèmes d'économie d'énergie, ajout des modes de veille C8, C9 et C10<ref name="THFR_12112012">David Civera, [http://www.tomshardware.fr/articles/consommation-Haswell,1-108.html Le Haswell d'Intel et sa consommation] dans Tom's Hardware, le 12 novembre 2012.</ref>
* Nouveau [[jeu d'instructions]] AVX2<ref name="THFR_16062011">{{Lien web|url=http://www.presence-pc.com/actualite/avx2-intel-44054/ |titre=Les évolutions du x86 chez Intel, avec AVX2. |site=Tom's Hardware |auteur=Pierre Dandumont |date=16 juin 2011 }}</ref> (''[[Advanced Vector Extensions]]''), et instructions [[Multiply-accumulate|''Fused multiply-add'' (FMA3)]]
* La partie graphique évolue par deux fois avec cette micro-architecture : si la famille de micro-processeurs Haswell embarque un cœur graphique de génération 7.5 prenant en charge [[DirectX]] 11.1, [[OpenGL]] 4.0 et [[OpenCL]] 1.2, celle de Broadwell embarque un cœur graphique de génération 8, prenant en charge [[DirectX]] 11.2, [[OpenGL]] 4.4 et [[OpenCL]] 2.0.
{{Article détaillé|Intel HD Graphics}}
* La partie {{Lien|trad=Intel Quick Sync Video|lang=en|fr=Intel Quick Sync Video|texte=Intel Quick Sync Video}} se dote de nouvelles fonctionnalités, telles que la stabilisation d'image
* [[Régulateur de tension]] dans le processeur, à côté du circuit<ref>[http://www.hardware.fr/news/12833/haswell-son-regulateur-tension-integre.html]</ref>

Selon la [[Intel#Tic-tac|stratégie tic-tac]] d'Intel, cette micro-architecture est déclinée en deux familles de microprocesseurs : d'abord Haswell, gravée en {{unité|22|nm}}, puis Broadwell, gravée en {{unité|14|nm}}.

== Famille Haswell ==

''Haswell'' est la famille de microprocesseurs qui succède à [[Sandy_Bridge#Famille_Ivy_Bridge|Ivy Bridge]]. Les processeurs de cette famille utilisent l'architecture Haswell, sont [[photolithographie|gravés]] en [[22 nm]].

=== Modèles de bureau ===
Note : les modèles « K » possèdent un coefficient multiplicateur débloqué, les modèles « S » ont une fréquence horloge réduite et une plus faible consommation d’énergie (-22 % environ). Tous les modèles Core i3, Core i5 et Core i7 embarquent un [[Processeur graphique#Processeur graphique intégré (IGP)|processeur graphique intégré (IGP)]] GT2 (HD 4000)<ref name="THFR_29122012">{{Lien web|url=http://www.tomshardware.fr/articles/Haswell,1-277.html |titre=Les Haswell d'Intel repoussés et détaillés. |site=Tom's Hardware |auteur=David Civera |date=29 décembre 2012 }}</ref>, sauf ceux datant de 2014. Les IGP marqués d'une étoile (*) sont des modèles GT1, les IGP marqués de deux étoiles (**) sont des modèles GT2.Certains modèles, souvent de 2014, embarquent déjà l'HD 4600 (GT3), que nous marquerons à l'aide de trois étoiles (***).

{| class="wikitable centre"
! rowspan=2 | Modèle || rowspan=2 style="text-align:center;" | Cœurs<br />(threads) || colspan=3 | Fréquence || colspan=3 style="text-align:center;" | Cache || rowspan=2 | Mult. || rowspan=2 | Tension || rowspan=2 | Révision (Sspec) || rowspan=2 | [[Enveloppe thermique|TDP]] || rowspan=2 | bus  || rowspan=2 | Socket || rowspan=2 | Référence || colspan=3 style="text-align:center;" | Commercialisation
|-
! Cœurs || Turbo || IGP || L1 || L2 || L3 || Début || Fin 
|- align="center"
| align="left" colspan="17" style="background:#127cc1;color: white" | '''Core i3'''<ref name="THFR_29122012" />
|-
|Core i3-4160
|2 (4)
|3.6 Ghz
|
|350 à 1150 Mhz***
|
|
|
|
|
|
|54 W
|
|LGA 1150
|
|Q3'14
|
|- align="center"
| align="left" | Core i3-4350 || 2 (4) || {{Unité|3.6|GHz}} ||  || 1150 MHz*** ||  || {{Unité|512|kio}} || {{Unité|4|Mio}} ||  ||  ||  || 54 W ||  || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" colspan="17" style="background:#127cc1;color: white" | '''Core i5'''<ref name="THFR_29122012" />
|- align="center"
| align="left" | Core i5-4570TE<ref name="THFR_04062013">{{Lien web|url=http://www.tomshardware.fr/articles/Xeon-E3-1268L-Core-i5-4570TE-Core-i7-4700EQ,1-37805.html |titre=Trois Haswell embarqués pour juin |auteur=David Civera |site=Tom's 
Hardware |consulté le=04 juin 2013 }}</ref> || 2 (4) || {{Unité|2.7|GHz}} || {{Unité|3.3|GHz}} || 350 à 1000 MHz ||  ||  || {{Unité|4|Mio}} ||  ||  ||  || 35 W || rowspan="10" |  || [[LGA 1150]] || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4570T || 2 (4) || {{Unité|2.9|GHz}} || {{Unité|3.6|GHz}} || 1150 MHz ||  ||  || {{Unité|4|Mio}} ||  ||  ||  || 35 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4670T || 4 (4) || {{Unité|2.3|GHz}} || {{Unité|3.3|GHz}} || 1200 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 45 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4430S || 4 (4) || {{Unité|2.7|GHz}} || {{Unité|3.2|GHz}} || 1100 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 65 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4570S || 4 (4) || {{Unité|2.9|GHz}} || {{Unité|3.6|GHz}} || 1150 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 65 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4430 || 4 (4) || {{Unité|3.0|GHz}} || {{Unité|3.2|GHz}} || 1100 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4670S || 4 (4) || {{Unité|3.1|GHz}} || {{Unité|3.8|GHz}} || 1200 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 65 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core I5-4460 || 4 (4) || {{Unité|3.2|GHz}} || {{Unité|3.4|GHz}} || 1100 MHz*** ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small>  || Q2'14 ||
|- align="center"
| align="left" | Core i5-4570 || 4 (4) || {{Unité|3.2|GHz}} || {{Unité|3.6|GHz}} || 1150 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4670 || 4 (4) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || 1200 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" | Core i5-4670K || 4 (4) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || 1200 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 84 W ||  || LGA 1150 || <small></small> ||  Q2'13
|| 
|- align="center"
| align="left" |Core i5-4690K || 4 (4) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || 1200 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 88 W ||  || LGA 1150 || <small></small> || Q2'14 || 
|- align="center"
| align="left" colspan="17" style="background:#127cc1;color: white" | '''Core i7'''<ref name="THFR_29122012" />
|- align="center"
| align="left" | Core i7-4765T || 4 (8) || {{Unité|2.0|GHz}} || {{Unité|3.0|GHz}} || 1200 MHz ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 35 W || rowspan="7" |  || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4700EQ<ref name="THFR_04062013" /> || 4 (8) || {{Unité|2.4|GHz}} || {{Unité|3.4|GHz}} || 400 à 1000 MHz ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 47 W (37 W à 1,7 GHz)|| LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4770T || 4 (8) || {{Unité|2.5|GHz}} || {{Unité|3.7|GHz}} || 1200 MHz ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 45 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4770S || 4 (8) || {{Unité|3.1|GHz}} || {{Unité|3.9|GHz}} || 1200 MHz ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 65 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4770 || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.9|GHz}} || 1200 MHz ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4770K || 4 (8) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || 1250 MHz ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Core i7-4790K || 4 (8) || {{Unité|4.0|GHz}} || {{Unité|4.4|GHz}} || 1250 MHz*** ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 88 W || LGA 1150 || <small></small> || Q2'14 ||
|-
|align="left" |Core i7-4790 
|align="center" |4 (8)
|align="center" |3,6 GHz
|align="center" |{{Unité|4.0|GHz}}
|align="center" |1200 MHz
|
|
|{{Unité|8|Mio}}
|
|
|
|84 W
|
|LGA 1150
|
|Q2'14
|
|- align="center"
| align="left" colspan="17" style="background:#127cc1;color: white" | '''Xeon'''
|- align="center"
| align="left" | Xeon E3-1220L v3<ref name="THFR_13062013_2">{{Lien web|url=http://www.tomshardware.fr/articles/Xeon-E3-1220L-v3-haswell,1-37937.html |titre=Intel ralentit son Xeon E3-1220L v3 |auteur=Yannick Guerrini |site=Tom's Hardware |consulté le=13 juin 2013}}</ref> || 2 (4) || {{Unité|1.1|GHz}} || {{Unité|1.3|GHz}} || - || {{Dunité|2|64|Kio}} || 2 × {{Unité|256|Kio}} || {{Unité|4|Mio}} ||  ||  ||  || 13 W || rowspan="15" |  || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1230L v3<ref name="THFR_13062013">{{Lien web|url=http://www.tomshardware.fr/articles/intel-xeon-haswell,1-37304.html |titre=Intel parle des Xeon Haswell |auteur=Pierre Dandumont |site=Tom's Hardware |consulté le=13 juin 2013}}</ref> || 4 (8) || {{Unité|1.8|GHz}} || {{Unité|2.8|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 25 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1268L v3<ref name="THFR_04062013" /> || 4 (8) || {{Unité|2.3|GHz}} || {{Unité|3.3|GHz}} || {{Unité|350|MHz}}** ({{Unité|1000|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 45 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1265L v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|2.5|GHz}} || {{Unité|3.7|GHz}} || {{Unité|350|MHz}}* ({{Unité|1200|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 45 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1275L v3 || 4 (8) || {{Unité|2.7|GHz}} || 3,9 GHz || 350 MHz (1 200 MHz) ||  4 x 32 Kio
||  4 x 256 Kio
|| {{Unité|8|Mio}} ||  ||  ||  || 35 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1285L v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.1|GHz}} || {{Unité|3.9|GHz}} || {{Unité|350|MHz}}** ({{Unité|1250|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 65 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1220 v3<ref name="THFR_13062013" /> || 4 (4) || {{Unité|3.1|GHz}} || {{Unité|3.5|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 80 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1225 v3<ref name="THFR_13062013" /> || 4 (4) || {{Unité|3.2|GHz}} || {{Unité|3.6|GHz}} || {{Unité|350|MHz}}** ({{Unité|1200|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1230 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.3|GHz}} || {{Unité|3.7|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 80 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1240 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 80 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1245 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.4|GHz}} || {{Unité|3.8|GHz}} || {{Unité|350|MHz}}** ({{Unité|1200|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1270 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 80 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1275 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.5|GHz}} || {{Unité|3.9|GHz}} || {{Unité|350|MHz}}** ({{Unité|1250|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1280 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.6|GHz}} || {{Unité|4|GHz}} || - || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 82 W || LGA 1150 || <small></small> ||  || 
|- align="center"
| align="left" | Xeon E3-1285 v3<ref name="THFR_13062013" /> || 4 (8) || {{Unité|3.6|GHz}} || {{Unité|4|GHz}} || {{Unité|350|MHz}}** ({{Unité|1300|MHz}}) || {{Dunité|4|64|Kio}} || 4 × {{Unité|256|Kio}} || {{Unité|8|Mio}} ||  ||  ||  || 84 W || LGA 1150 || <small></small> ||  || 
|- align="center"
|}

=== Modèles mobiles ===
Note : les IGP marqués d'une étoile (*) sont des modèles HD 4000 (GT2), les IGP marqués de deux étoiles (**) sont des modèles HD 4600 (GT3)<ref name="THFR_29122012" />.

<small></small><small></small><small></small>
{| class="wikitable centre"
! rowspan="2" | Modèle || rowspan="2" style="text-align:center;" | Cœurs<br />(threads) || colspan="3" | Fréquence || colspan="3" style="text-align:center;" | Cache || rowspan="2" | Mult. || rowspan="2" | Tension || rowspan="2" | Révision (Sspec) || rowspan="2" | [[Enveloppe thermique|TDP]] || rowspan="2" | bus  || rowspan="2" | Socket || rowspan="2" | Référence || colspan="2" style="text-align:center;" | Commercialisation
|-
! Cœurs || Turbo || IGP || L1 || L2 || L3 || Début || Fin 
|- align="center"
| colspan="17" align="left" style="background:#127cc1;color: white" | '''Core i7'''<ref name="THFR_29122012" />
|- align="center"
| align="left" | Core i7-4700MQ || 4 (8) || {{Unité|2.4|GHz}} || {{Unité|3.4|GHz}} || 400 MHz<br />(1150 MHz)** ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 47 W 
| ||| FCPGA946 || <small>CW8064701470702</small> ||  || 
|- align="center"
| align="left" | Core i7-4800MQ || 4 (8) || {{Unité|2.7|GHz}} || {{Unité|3.7|GHz}} || 400 MHz<br />(1300 MHz)** ||  ||  || {{Unité|6|Mio}} ||  ||  ||  || 47 W 
| |||  || <small>BX80647I74800MQ</small> ||  || 
|- align="center"
| align="left" | Core i7-4900MQ || 4 (8) || {{Unité|2.8|GHz}} || {{Unité|3.8|GHz}} || 400 MHz<br />(1300 MHz)** ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 47 W
| ||| || <small>BX80647I74900MQ</small> ||  ||
|- align="center"
| align="left" | Core i7-4930MX || 4 (8) || {{Unité|3.0|GHz}} || {{Unité|3.9|GHz}} || 400 MHz<br />(1350 MHz)** ||  ||  || {{Unité|8|Mio}} ||  ||  ||  || 57 W
||  || <small></small> ||  || 
|
|- align="left"
| style="background:#127cc1;color: white" colspan="17" |'''Core i3'''<ref>{{lien web | langue=en |titre=Intel® Core™ i3-4000M Processor (3M Cache, 2.40 GHz) Product Specifications|site=[[Intel|intel.com]] (Product Specs)|lire en ligne=https://ark.intel.com/products/75104/Intel-Core-i3-4000M-Processor-3M-Cache-2_40-GHz|consulté le=2017-10-25}}</ref>
|-
|Core i3-4000M
|2 (4)
|2.4 GHz
|
|400 MHz
|
|
|3 Mio
|
|
|
|37 W
|
|FCPGA946
|
|
|
|}

=== Prise en charge de la partie graphique ===
Pour utiliser la partie graphique de Haswell sous [[Linux]], il faut au minimum<ref>[https://01.org/linuxgraphics/downloads/2013q1-intel-graphics-stack-release 2013Q1 Intel Graphics Stack Release]</ref> :
* [[Noyau Linux|Linux]] 3.8.2
* [[Mesa (OpenGL)|Mesa]] 9.1
* Le [[Pilote informatique|pilote]] xf86-video-intel 2.21.3

La prise en charge sous Linux de ces puces s'étend à [[OpenGL]] 3.5 et [[OpenGL ES]] 3.1<ref name="phoronix OpenGL-ES-3.1">[https://www.phoronix.com/scan.php?page=news_item&px=OpenGL-ES-3.1-Lands-HSW OpenGL ES 3.1 For Haswell Lands With Intel's Mesa Driver]</ref>{{,}}<ref>[https://www.phoronix.com/scan.php?page=news_item&px=Mesa-17.0-Released Mesa 17.0.0 Officially Released]</ref>.

[[OpenCL]] 1.2 est pris en charge sous Linux au moyen de la bibliothèque [[Beignet (bibliothèque)|Beignet]].

À la date du {{date-|16 février 2016}}, [[Vulkan (API)|Vulkan]] est pris en charge à titre expérimental<ref>[https://lists.freedesktop.org/archives/mesa-announce/2016-February/000201.html ANNOUNCE: An open-source Vulkan driver for Intel hardware] sur la liste de diffusion Mesa-announce</ref>.

== Famille Broadwell ==

''Broadwell'' est la famille de microprocesseurs qui succède à [[Haswell#Famille_Haswell|Haswell]]. Les processeurs de cette famille sont [[photolithographie|gravés]] en {{unité|14|nm}}.

Selon la [[Intel#Stratégies_tic-tac_et_processus-architecture-optimisation|stratégie tic-tac]] d'Intel, Haswell représente un « tac » et Broadwell, un « tic ». 

=== Les différents modèles ===

Cette famille de microprocesseurs se décline en modèles de bureau et en modèles mobiles :

* Broadwell-Y : Intel Core M (références Core M-5Y70, M-5Y10a et M-5Y10), comportant 2 cœurs CPU avec [[hyper-Threading]], un cache L3 de 4 Mo et un [[processeur graphique]] [[Intel HD Graphics|HD Graphics]] de huitième génération doté de 24 unités d'exécution. Ces processeurs sont destinés à l'intégration dans des ordinateurs et tablettes à refroidissement passif, et l'accent a été mis sur la réduction du [[Enveloppe_thermique|TDP]] comparé à la famille de microprocesseurs précédente (Haswell)<ref>[http://www.hardware.fr/news/13880/intel-lance-core-m-1ers-broadwell-14nm.html Intel lance les Core M, 1ers Broadwell 14nm], Hardware.fr (5 septembre 2014).</ref>{{,}}<ref>[http://www.hardware.fr/news/13889/idf-complique-tdp-core.html IDF: Le TDP compliqué du Core M], Hardware.fr (11 septembre 2014).</ref>.
* Broadwell-U : Celeron (références 3205U et 3755U) et Pentium (référence 3805U) d'une part, comportant 2 cœurs CPU sans [[hyperthreading]], un cache L3 de 2 Mo et un [[processeur graphique]] [[Intel HD Graphics|HD Graphics]] de huitième génération doté de 12 unités d'exécution ; Core i3 (références i3-5005U, i3-5010U et i3-5157U)/i5 (références i5-5200U, i5-5250U, i5-5300U, i5-5350U, i5-5257U et i5-5287U)/i7 (références i7-5500U, i7-5550U, i7-5600U, i7-5650U et i7-5557U) d'autre part, comportant 2 ou 4 cœurs CPU avec [[hyperthreading]], un cache L3 de 3 Mo (Core i3/i5) ou 4 Mo (Core i7) et un [[processeur graphique]] [[Intel HD Graphics|HD Graphics]] de huitième génération doté de 24 (HD Graphics 5500) ou 48 (HD Graphics 6000 et Iris Graphics 6100) unités d'exécution selon les modèles<ref>[http://www.hardware.fr/news/14014/ces-intel-lance-broadwell-u-core-5e-generation.html CES: Intel lance les Broadwell-U, Core de {{5e}} génération], Hardware.fr (5 janvier 2015).</ref>.
* Broadwell-H : modèles en [[Socket (processeur)|socket]] [[Ball Grid Array|BGA]] (références Core i5-5575R, i5-5675R, i5-5350H, i7-5700HQ, i7-5775R, i7-5750HQ, i7-5850HQ et i7-5950HQ) ou [[Matrice de pastilles|LGA]] (références Core i5-5675C et i7-5775C ; ces modèles, débloqués au niveau du coefficient multiplicateur, sont dédiés à l'overclocking) comportant 2 cœurs CPU avec [[hyperthreading]] ou 4 cœurs CPU sans hyperthreading (Core i5) ou encore 4 cœurs CPU avec hyperthreading (Core i7), un cache L3 de 4 Mo (Core i5) ou 6 Mo (Core i7) et un [[processeur graphique]] [[Intel HD Graphics|HD Graphics]] de huitième génération doté soit de 24 unités d'exécution (HD Graphics 5600 équipant le Core i7-5700HQ) soit de 48 unités d'exécution et d'un cache L4 de 128 Mo en eDRAM (Iris Pro Graphics 6200 équipant tous les autres modèles)<ref>[http://www.hardware.fr/news/14228/intel-lance-broadwell-h-4-coeurs-lga-bga.html Intel lance les Broadwell-H 4 cœurs en LGA et BGA], Hardware.fr (2 juin 2015).</ref>.

=== Prise en charge de la partie graphique ===
Pour utiliser la partie graphique de Broadwell sous [[Linux]], il faut au minimum<ref>[https://01.org/linuxgraphics/downloads/2014q2-intel-graphics-stack-release 2014Q2 Intel Graphics Stack Release]</ref> :
* [[Noyau Linux|Linux]] 3.15
* [[Mesa (OpenGL)|Mesa]] 10.2.2
* Le [[Pilote informatique|pilote]] xf86-video-intel 2.99.911

La prise en charge sous Linux de ces puces s'étend à [[OpenGL]] 4.5<ref>[https://www.phoronix.com/scan.php?page=news_item&px=Intel-Enables-Mesa-GL-4.5 Intel's Mesa Driver Now Enables OpenGL 4.5]</ref>, [[OpenGL ES]] 3.1<ref name="phoronix OpenGL-ES-3.1" /> et [[Vulkan (API)|Vulkan]] 1.0<ref>[https://01.org/linuxgraphics/blogs/jekstrand/2016/open-source-vulkan-drivers-intel-hardware Open-source Vulkan drivers for Intel hardware]</ref>.

[[OpenCL]] 1.2 est pris en charge sous Linux au moyen de la bibliothèque [[Beignet (bibliothèque)|Beignet]].

== Notes et références ==
{{références|colonnes=2}}

== Voir aussi ==
=== Articles connexes ===
* [[Bulldozer (microarchitecture)|Bulldozer]], l'architecture concurrente d'AMD
* [[Skylake]], la microarchitecture suivante d'Intel

=== Lien externe ===
* [http://www.hardware.fr/news/12601/idf-haswell-premiers-details.html Article sur une présentation d'Haswell]

{{Palette|Microprocesseurs Intel}}
{{Portail|informatique|électronique}}

[[Catégorie:Microprocesseur x86 Intel]]
[[Catégorie:Produit lancé en 2013]]
