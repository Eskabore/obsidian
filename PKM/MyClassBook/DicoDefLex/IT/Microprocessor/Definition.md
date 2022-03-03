Un '''microprocesseur''' est un [[processeur]] dont tous les composants ont été suffisamment miniaturisés pour être regroupés dans un unique [[circuit intégré|boitier]]. Fonctionnellement, le processeur est la partie d’un [[ordinateur]] qui exécute les instructions et traite les données des [[programme informatique|programmes]].

[[Fichier:Intel 4004.jpg|thumb|Un [[Intel 4004]] dans son boîtier à 16 broches, premier microprocesseur commercialisé<ref>{{lien web|format=pdf|langue=en|url=http://www.intel.com/Assets/PDF/DataSheet/4004_datasheet.pdf|titre=4004 - 4 bits microprocessor|site=intel.com|consulté le=6 mai 2017}}</ref>.]]
[[File:4004 arch.svg|Architecture de l'Intel 4004.]]
[[Fichier:80486dx2-large.jpg|thumb|L'intérieur d'un [[Intel 80486|Intel 80486DX2]].]]
[[File:4004 arch.svg|thumb|Architecture de l'Intel 4004.]]


== Description ==
Jusqu’au début des [[années 1970]], les différents [[composant électronique|composants électroniques]], nécessaires au fonctionnement d'un processeur ne pouvaient pas tenir sur un seul [[circuit intégré]], ce qui nécessitait d'interconnecter de nombreux composants dont plusieurs circuits intégrés. En 1971, la société américaine [[Intel Corporation|Intel]] réussit, pour la première fois, à placer tous les composants qui constituent un processeur sur un seul circuit intégré donnant ainsi naissance au microprocesseur<ref>{{Ouvrage|langue=fr|titre=Le second {{s-|XX}}|sous-titre=(1939-2000) : les 12 thèmes-clés|lieu=Paris|éditeur=[[Éditions Ellipses|Ellipses]]|collection=poche|année=2016|pages totales=702|isbn=978-2-340-01442-8|oclc=1004318546}}, {{p.|208}}</ref>.

Cette miniaturisation a permis :
* d'augmenter les vitesses<ref group=alpha>Cette vitesse est exprimé sous forme d'une ''fréquence'' exprimée en [[hertz|hertz (Hz)]], qui comptabilise le nombre de cycles qu'effectue l'horloge de synchronisation du processeur en une seconde.</ref> de fonctionnement des processeurs, grâce à la réduction des distances entre les composants ; 
* de réduire les coûts, grâce au remplacement de plusieurs circuits par un seul ; 
* d'augmenter la fiabilité : en supprimant les connexions entre les composants du processeur, on supprime l'un des principaux vecteurs de panne ; 
* de créer des ordinateurs bien plus petits : les [[Ordinateur personnel|micro-ordinateurs]] ; 
* de réduire la consommation énergétique<ref name=":0" group=alpha>Ce n'est pas la seule raison, mais, plus un transistor est petit, moins il a besoin d'énergie pour commuter correctement.</ref>. 

Les principales caractéristiques d'un microprocesseur sont :
; Le [[jeu d'instructions]] : qui varie avec le type de microprocesseur et le constructeur : additionner deux nombres, comparer deux nombres pour déterminer s’ils sont égaux, comparer deux nombres pour déterminer lequel est le plus grand, multiplier deux nombres... Un processeur peut exécuter plusieurs dizaines, voire centaines ou milliers, d’instructions différentes.
; La complexité de son architecture : Cette complexité se mesure par le nombre de [[transistor]]s contenus dans le microprocesseur. Plus le microprocesseur contient de transistors, plus il pourra effectuer des opérations complexes, et/ou traiter des nombres de grande taille.
; Le nombre de [[bit]]s que le processeur peut traiter simultanément : Les premiers microprocesseurs ne pouvaient traiter plus de [[Nibble|4 bits]] d'un coup. Ils devaient donc exécuter plusieurs instructions pour additionner des nombres de {{Unité|32 ou 64 bits}}.  En 2007 les microprocesseurs peuvent traiter des nombres sur {{unité|64|bits}}. Le nombre de bits des [[bus informatique|bus]], de la [[Mémoire (informatique)|mémoire]] et du processeur est en rapport direct avec la capacité à traiter de grands nombres rapidement, ou des nombres d'une grande précision (nombres de décimales significatives).
; La vitesse de l’horloge : Le rôle de l’horloge est de cadencer le rythme du travail du microprocesseur. La fréquence correspond à ce que l'on appelle un cycle d'horloge. Une instruction, selon le type de processeur et d'instruction peut prendre un ou plusieurs cycles d'horloge. Les processeurs [[Processeur à jeu d'instructions réduit|RISC]] sur lequel toutes les opérations en [[langage machine]] sont simples mais câblées prend généralement un cycle par instruction. Au contraire, un processeur [[Complex instruction set computing|CISC]], contient du [[microcode]], ou une instruction en langage machine, est alors une suite d'instructions câblées. En conséquence, dans tous les cas, à technologie égale, plus la fréquence est élevée, plus le nombre d'instruction pouvant être exécutée est élevée.

Par exemple, un {{nobr|processeur ''A''}} cadencé à {{unité|400|MHz}} peut exécuter certaines instructions plus rapidement qu'un autre ''B'' cadencé à {{unité|1|GHz}}, tout dépend de leurs architectures respectives.

La combinaison des caractéristiques précédentes détermine la puissance du microprocesseur qui s’exprime en « millions d'instructions par seconde » (MIPS). Dans les années 1970, les microprocesseurs effectuaient moins d’un million d’instructions par seconde, mais en 2007, les processeurs pouvaient effectuer plus de {{nombre|10|milliards d’[[instructions par seconde]]}}.

== Histoire ==
{{voir aussi|Liste de microprocesseurs{{!}}Historique des produits des constructeurs de microprocesseurs}}<!-- Il n'y a pas qu'Intel! -->
[[Fichier:Transistor Count and Moore's Law - 2011.svg|thumb|upright=1.0|Illustration de la [[loi de Moore]], une observation de l’évolution du nombre de transistors d'un microprocesseur, de 1971 à 2011<ref>''Nanoinformatique - Inventer l'ordinateur du XXIème Siècle'' [[Jean-Baptiste Waldner|J.B. Waldner]], Hermes Science, London, 2007, ''(adaptation et actualisation fig2.13, p.58)''</ref>.]]

En [[1969]], le microprocesseur est inventé par un ingénieur et un physicien d'[[Intel]], [[Marcian Hoff|Marcian Hoff (surnommé Ted Hoff)]]<ref>{{en}}[https://www.bbc.com/news/technology-13260039 ''The man who invented the microprocessor''], sur bbc.com</ref>{{,}}<ref>{{en}}[http://www.silicon-valley-story.de/sv/intel_hoff.html "Ted" Hoff's first microprocessor], sur silicon-valley-story.de, consulté le 25 décembre 2016</ref>, et [[Federico Faggin]], qui venait de le rejoindre, fort de recherches menées en Italie. [[Federico Faggin]], ingénieur italien est en 1968 chez Fairchild-SGS à [[Agrate Brianza]]<ref name =cph/>, puis à [[Palo Alto]] avec [[Thomas Klein]]<ref name =cph/>, le concepteur du premier circuit intégré commercial à grilles auto-alignées, le Fairchild 3708, puis chef de projet de la [[Technologie Silicon Gate]] (TSG), la première méthode pratique pour la fabrication des circuits intégrés MOS (semi-conducteur à oxyde de métal) avec grilles auto-alignés, qui a remplacé la grille d'aluminium traditionnel d'un transistor MOS par une grille en silicium, pour intégrer deux fois plus de transistors dans la même surface. [[Federico Faggin]] est embauché par Intel en {{date-|avril 1970}}<ref name =cph/>, pour être le chef de projet, le créateur de la méthodologie de conception et le concepteur principal. En seulement quelques mois, avec [[Marcian Hoff]], des quatre puces de l'Intel 4004, qui servit initialement à fabriquer des contrôleurs graphiques en mode texte, il conçut un processeur d'usage général, avec une licence achetée au japonais [[Busicom]]<ref name =cph>"Computers Pioneer" par J.A.N Lee  [http://history.computer.org/pioneers/faggin.html]</ref>.

[[Marcian Hoff]] a formulé l'architecture du microprocesseur (une architecture de bloc et un jeu d'instructions). Le premier microprocesseur commercialisé, le {{Date|15|novembre|1971}}, est l'[[Intel 4004]] {{unité|4|[[bit]]s}}, suivi par l'[[Intel 8008]] à {{unité|8|bits}} et qui servit initialement à fabriquer des [[carte graphique|contrôleurs graphiques]] en mode texte. Jugé trop lent par le client qui en avait demandé la conception, il devint un processeur d'usage général. 

Ces processeurs sont les précurseurs des [[Intel 8080]], [[Zilog Z80]], et de la future famille des Intel [[x86]]<ref>{{en}} [http://www.intel4004.com/museum_display.htm The Intel 4004 Microprocessor and the Silicon Gate Technology], sur le site intel4004.com, consulté le 7 décembre 2015</ref>. Federico Faggin est l'auteur d'une méthodologie de conception nouvelle pour la puce et la logique, fondée pour la première fois sur la technologie ''{{langue|en|silicon gate}}'' développé par lui en [[1968]] chez [[Fairchild Semiconductor|Fairchild]]. Il a aussi dirigé la conception du premier microprocesseur jusqu'à son introduction sur le marché en [[1971]]<ref>{{en}}F. Faggin et M. E. Hoff: ''Standard Parts and Custom Design Merge in a Four-chip Processor Kit''. ''Electronics'', {{Date|24|avril|1972}}</ref>.

Presque à la même époque la société américaine, Motorola, effectue des travaux et innovations similaires sous la direction de [[Chuck Peddle]]<ref name =pic>{{en}} Nebojsa Matic , [https://groups.csail.mit.edu/lbr/stack/pic/pic-microcontrollers.pdf {{pdf}} "PIC microcontrollers, for beginners"], mit.edu</ref>, venu de [[General Electric]], où il avait conçu une caisse enregistreuse électronique, mais qui décide en 1970 d'abandonner son activité informatique. Il participe au développement du microprocesseur {{nobr|Motorola 6800}}, à {{unité|8|bits}}, vendu alors {{unité|300|US$}}, et qui va servir aux ordinateurs d'usage professionnel {{nobr|Goupil 1 et 2}} de la société [[SMT Goupil|SMT]]. 

Dans les [[années 1970]], apparaissent les concepts de [[datagramme]] et d'[[informatique distribuée]], avec [[ARPANET|Arpanet]], le [[Cyclades (réseau)|réseau Cyclades]] et la {{langue|en|[[Distributed system architecture|Distributed System Architecture]]}}, devenue en [[1978]] le [[modèle OSI|modèle « OSI-DSA »]]. Le microprocesseur est très vite accueilli comme la pierre angulaire de cette [[informatique distribuée]], car il permet de décentraliser le calcul, avec des [[Histoire des bourses de valeurs#De l'Affaire Bull à l'encerclement de l'empire IBM|machines moins coûteuses et moins encombrantes face au monopole IBM]], produites en plus grande série. 

En [[1990]], [[Gilbert Hyatt (inventeur)|Gilbert Hyatt]] revendique la paternité du microprocesseur en se basant sur un [[brevet]] qu’il avait déposé en [[1970]]<ref>{{en}}[http://www.historyofinformation.com/expanded.php?id=121 Gilbert Hyatt Files the First General Patent on the Microprocessor, Later Invalidated], sur historyofinformation.com de décembre 1970, consulté le 25 décembre 2016</ref>. La reconnaissance de l’antériorité du brevet de Hyatt aurait permis à ce dernier de réclamer des [[redevance]]s sur tous les microprocesseurs fabriqués de par le monde, mais le brevet de Hyatt a été invalidé en [[1995]] par l’office américain des brevets, sur la base du fait que le microprocesseur décrit dans la demande de brevet n'avait pas été réalisé, et n'aurait d'ailleurs pas pu l'être avec la technologie disponible au moment du dépôt du brevet<ref>{{lien web|langue=en|url=http://www.intel4004.com/hyatt.htm|titre=The Intel 4004 Microprocessor and the Silicon Gate Technology|site=intel4004.com|consulté le=25 décembre 2016}}</ref>. 

Le tableau suivant décrit les principales caractéristiques des microprocesseurs fabriqués par Intel, et montre leur évolution en termes de nombre de transistors, en miniaturisation des circuits, et en augmentation de puissance. Il faut garder à l'esprit que si ce tableau décrit l'évolution des produits d'Intel, l'évolution des produits des concurrents a suivi avec plus ou moins d'avance ou de retard la même marche. 

Un programme informatique est, par essence, un flux d'instructions exécutées par un processeur. Chaque [[Instruction machine|instruction]] nécessite un à plusieurs [[Signal d'horloge|cycles d'horloge]], l'instruction est exécutée en autant d'étapes que de cycles nécessaires. Les microprocesseurs séquentiels exécutent l'instruction suivante lorsqu'ils ont terminé l'instruction en cours. Dans le cas du parallélisme d'instructions, le microprocesseur pourra traiter plusieurs instructions dans le même cycle d'horloge, à condition que ces instructions différentes ne mobilisent pas simultanément une unique ressource interne. Autrement dit, le processeur exécute des instructions qui se suivent, et ne sont pas dépendantes l'une de l'autre, à différents stades d'achèvement. Cette [[File (structure de données)|file]] d'exécution à venir s'appelle un [[Pipeline (architecture des processeurs)|pipeline]]. Ce mécanisme a été implémenté la première fois dans les années 1960 par [[IBM]]. Les processeurs plus évolués exécutent en même temps autant d'instructions qu'ils ont de pipelines, ce à la condition que toutes les instructions à exécuter parallèlement ne soient pas interdépendantes, c'est-à-dire que le résultat de l'exécution de chacune d'entre elles ne modifie pas les conditions d'exécution de l'une des autres. Les processeurs de ce type sont appelés [[Processeur superscalaire|processeurs superscalaires]]. Le premier ordinateur à être équipé de ce type de processeur était le [[Seymour Cray]] [[Control Data 6600|CDC 6600]] en 1965. Le [[Pentium (microprocesseur)|Pentium]] est le premier des processeurs superscalaires pour [[compatible PC]]. 

Les concepteurs de processeurs ne cherchent pas simplement à exécuter plusieurs instructions indépendantes en même temps, ils cherchent à optimiser le temps d'exécution de l'ensemble des instructions. Par exemple le processeur peut trier les instructions de manière que tous ses pipelines contiennent des instructions indépendantes. Ce mécanisme s'appelle l'[[exécution dans le désordre|exécution out-of-order]]. Ce type de processeur s'est imposé pour les machines grand public des années 1980 et aux années 1990<ref name="Culler15">{{harv|texte=Culler et al|p=15|réf=Culler}}</ref>. L'exemple canonique de ce type de pipeline est celui d'un [[Reduced instruction set computer|processeur RISC]], (reduced instruction set computer) en cinq étapes. Le [[Intel Pentium 4]] dispose de {{nombre|35|étages}} de pipeline<ref>{{en}} Patt, Yale (avril 2004).  "[http://users.ece.utexas.edu/~patt/Videos/talk_videos/cmu_04-29-04.wmv ''The Microprocessor Ten Years From Now: What Are The Challenges, How Do We Meet Them?''] {{Lien archive|url=http://users.ece.utexas.edu/~patt/Videos/talk_videos/cmu_04-29-04.wmv# |horodatage archive=20181108094320 |titre=Copie archivée }} {{wmv}}], sur utexas.edu, consulté le 7 novembre 2007.</ref>. Un compilateur optimisé pour ce genre de processeur fournit un code qui sera exécuté plus rapidement.

Pour éviter une perte de temps liée à l'attente de nouvelles instructions, et surtout au délai de rechargement du [[Commutation de contexte|contexte]] entre chaque changement de [[Thread (informatique)|threads]], les fondeurs<ref group=alpha>Société fabricant des [[Circuit intégré|puces électroniques]].</ref> ont ajouté à leurs processeurs des procédés d'optimisation pour que les threads puissent partager les pipelines, les caches et les registres. Ces procédés, regroupés sous l'appellation ''[[Simultaneous Multi Threading]]'', ont été mis au point dans les années 1950. Par contre, pour obtenir une augmentation des performances, les compilateurs doivent prendre en compte ces procédés, il faut donc re-compiler les programmes pour ces types de processeurs. Intel a commencé à produire, début des [[années 2000]], des processeurs implémentant la technologie SMT à deux voies. Ces processeurs, les [[Pentium 4]], peuvent exécuter simultanément deux {{langue|en|threads}} qui se partagent les mêmes pipelines, caches et registres. Intel a appelé cette technologie ''SMT à deux voies'' : l’''[[Hyper-Threading|Hyperthreading]]''. Le ''{{lien|Super-threading}}'' est, quant à lui, une technologie SMT dans laquelle plusieurs threads partagent aussi les mêmes ressources, mais ces threads ne s'exécutent que l'un après l'autre et non simultanément<ref>[https://arstechnica.com/articles/paedia/cpu/hyperthreading.ars/3 Superthreading with a multithreaded processor], sur arstechnica.com</ref>.

Depuis longtemps déjà, existait l'idée de faire cohabiter plusieurs processeurs au sein d'un même composant, par exemple les ''[[Système sur une puce|System on Chip]]''. Cela consistait, par exemple, à ajouter au processeur, un [[Unité de calcul en virgule flottante|coprocesseur arithmétique]], un [[Processeur de signal numérique|DSP]], voire un cache mémoire, éventuellement même l'intégralité des composants que l'on trouve sur une carte mère. Des processeurs utilisant deux ou quatre [[Microprocesseur multi-cœur|cœurs]] sont donc apparus, comme le [[POWER4]] d'[[IBM]] sorti en 2001. Ils disposent des technologies citées préalablement. Les ordinateurs qui disposent de ce type de processeurs coûtent moins cher que l'achat d'un nombre équivalent de processeurs. Cependant, les performances ne sont pas directement comparables, cela dépend du problème traité. Des API spécialisées ont été développées afin de tirer parti au mieux de ces technologies, comme le [[Threading Building Blocks]] d'Intel.

{| class="wikitable"
! Date
! Nom
! Nombre de<br />transistors
! Finesse de<br />gravure (nm)
! Fréquence de l'horloge
! Largeur<br />des données
! [[Instructions par seconde|MIPS]]
|-
| align="center" |1971
| align="center" |[[Intel 4004]]
| align="center" |{{Formatnum:2300}}
| align="center" |{{Formatnum:10000}}
| align="center" |{{Unité|740|kHz}}
| align="center" |4 bits/4 bits bus
| align="center" | 0,06
|-
| align="center" |1974
| align="center" |[[Intel 8080]]
| align="center" |{{Formatnum:6000}}
| align="center" |{{Formatnum:6000}}
| align="center" |{{Unité|2|MHz}}
| align="center" |8 bits/8 bits bus
| align="center" |{{Formatnum:0.64}}
|-
| align="center" |1979
| align="center" |[[Intel 8088]]
| align="center" |{{Formatnum:29000}}
| align="center" |{{Formatnum:3000}}
| align="center" |{{Unité|5|MHz}}
| align="center" |16 bits/8 bits bus
| align="center" |{{Formatnum:0.33}}
|-
| align="center" |1982
| align="center" |[[Intel 80286]]
| align="center" |{{Formatnum:134000}}
| align="center" |{{Formatnum:1500}}
| align="center" |{{unité/2|6|à=16|MHz}} ({{unité|20|MHz}} chez AMD)
| align="center" |16 bits/16 bits bus
| align="center" |1
|-
| align="center" |1985
| align="center" |[[Intel 80386]]
| align="center" |{{Formatnum:275000}}
| align="center" |{{Formatnum:1500}}
| align="center" |{{unité/2|16|à=40|MHz}}
| align="center" |32 bits/32 bits bus
| align="center" |5
|-
| align="center" |1989
| align="center" |[[Intel 80486]]
| align="center" |{{Formatnum:1200000}} (800nm)
| align="center" |{{Formatnum:1000}} à 800
| align="center" |16 à {{Unité|100|MHz}}
| align="center" |32 bits/32 bits bus
| align="center" |20
|-
| align="center" |1993
| align="center" |[[Intel P5|Pentium]] ([[Intel P5]])
| align="center" |{{Formatnum:3100000}}
| align="center" |800 à 250
| align="center" |{{unité/2|60|à=233|MHz}}
| align="center" |32 bits/64 bits bus
| align="center" |100
|-
| align="center" |1997
| align="center" |[[Pentium II]]
| align="center" |{{Formatnum:7500000}}
| align="center" |350 à 250
| align="center" |233 à {{Unité|450|MHz}}
| align="center" |32 bits/64 bits bus
| align="center" |300
|-
| align="center" |1999
| align="center" |[[Pentium III]]
| align="center" |{{Formatnum:9500000}}
| align="center" |250 à 130
| align="center" |450 à {{Unité|1400|MHz}}
| align="center" |32 bits/64 bits bus
| align="center" |510
|-
| align="center" |2000
| align="center" |[[Pentium 4]]
| align="center" |{{Formatnum:42000000}}
| align="center" |180 à 65
| align="center" |{{unité/2|1.3|à=3.8|GHz}}
| align="center" |32 bits/64 bits bus
| align="center" |{{Formatnum:1700}}
|-
| align="center" |2004
| align="center" |Pentium 4 D (Prescott)
| align="center" |{{Formatnum:125000000}}
| align="center" |90 à 65
| align="center" |2.66 à {{Unité|3.6|GHz}}
| align="center" |32 bits/64 bits bus
| align="center" |{{Formatnum:9000}}
|-
| align="center" |2006
| align="center" |Core 2 Duo (Conroe)
| align="center" |{{Formatnum:291000000}}
| align="center" |[[65 nm|65]]
| align="center" |{{Unité|2.4|GHz}} (E6600)
| align="center" |64 bits/64 bits bus
| align="center" |{{Formatnum:22000}}
|-
| align="center" |2007
| align="center" |Core 2 Quad (Kentsfield)
| align="center" |2*{{formatnum:291000000}}
| align="center" |65
| align="center" |{{Unité|3|GHz}} (Q6850)
| align="center" |64 bits/64 bits bus
| align="center" |2*{{formatnum:22000}} (?)
|-
| align="center" |2008
| align="center" |Core 2 Duo (Wolfdale)
| align="center" |{{Formatnum:410000000}}
| align="center" |45
| align="center" |{{Unité|3.33|GHz}} (E8600)
| align="center" |64 bits/64 bits bus
| align="center" |~{{Formatnum:24200}}
|-
| align="center" |2008
| align="center" |Core 2 Quad (Yorkfield)
| align="center" |2*{{Formatnum:410000000}}
| align="center" |[[45 nm|45]]
| align="center" |{{Unité|3.2|GHz}} (QX9770)
| align="center" |64 bits/64 bits bus
| align="center" |~2*{{Formatnum:24200}}
|-
| align="center" |2008
| align="center" |Intel Core i7 (Bloomfield)
| align="center" |{{Formatnum:731000000}}
| align="center" |45
| align="center" |{{Unité|3.33|GHz}} (Core i7 975X)
| align="center" |64 bits/64 bits bus
| align="center" |?
|-
| align="center" |2009
| align="center" |Intel Core i5/i7 (Lynnfield)
| align="center" |{{Formatnum:774000000}}
| align="center" |45
| align="center" |{{Unité|3.06|GHz}} (I7 880)
| align="center" |64 bits/64 bits bus
| align="center" |{{formatnum:76383}}
|-
| align="center" |2010
| align="center" |Intel Core i7 (Gulftown)
| align="center" |{{Formatnum:1170000000}}
| align="center" |[[32 nm|32]]
| align="center" |{{Unité|3.47|GHz}} (Core i7 990X)
| align="center" |64 bits/64 bits bus
| align="center" |{{formatnum:147600}}
|-
| align="center" |2011
| align="center" |Intel Core i3/i5/i7 (Sandy Bridge)
| align="center" |{{Formatnum:1160000000}}
| align="center" |32
| align="center" |{{Unité|3.5|GHz}} (Core i7 2700K)
| align="center" |64 bits/64 bits bus
| align="center" |
|-
| align="center" |2011
| align="center" |Intel Core i7/Xeon (Sandy Bridge-E)
| align="center" |{{Formatnum:2270000000}}
| align="center" |32
| align="center" |{{Unité|3.5|GHz}} (Core i7 3970X)
| align="center" |64 bits/64 bits bus
| align="center" |1 ou 2
|-
| align="center" |2012
| align="center" |Intel Core i3/i5/i7 (Ivy Bridge)
| align="center" |{{Formatnum:1400000000}}
| align="center" |[[22 nm|22]]
| align="center" |{{Unité|3.5|GHz}} (Core i7 3770K)
| align="center" |64 bits/64 bits bus
| align="center" |
|-
| align="center" |2013
| align="center" |Intel Core i3/i5/i7 (Haswell)
| align="center" |{{Formatnum:1400000000}} 
| align="center" |22
| align="center" |3,8 GHz (Core i7 4770K)
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2014
| align="center" |Intel Core i3/i5/i7 (Broadwell)
| align="center" |1 400 000 000
| align="center" |[[14 nm|14]]
| align="center" |3,8 GHz (Core i7 5775R)
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2015
| align="center" |Intel Core i3/i5/i7 (Skylake)
| align="center" |1 750 000 000 
| align="center" |14
| align="center" |4 GHz (Core i7 6700K)
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2016
| align="center" |Intel Core i3/i5/i7 (Kabylake)
| align="center" |?
| align="center" |14
| align="center" |4.2 GHz (Core i7 7700K)
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2017
| align="center" |Intel Core i3/i5/i7 (Coffe Lake)
| align="center" |?
| align="center" |14
|3.7 GHz ~ 4.7 GHz (Core i7 8700K)
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2018
| align="center" |Intel Core i3/i5/i7 (?)
| align="center" |?
| align="center" |[[14 nm|14]]
| align="center" |
| align="center" |64 bits/64 bits bus
|
|-
| align="center" |2018
| align="center" |Intel Core i3/i5/i7/i9 (Ice Lake)
| align="center" |?
| align="center" |10
|
|
|
|-
| align="center" |2019
| align="center" |Intel Core i3/i5/i7/i9 (Tigerlake)
| align="center" |?
| align="center" |10
|
|
|
|}

* ''Date'' : l’année de commercialisation du microprocesseur.
* ''Nom'' : le nom du microprocesseur.
* ''Nombre de transistors'' : le nombre de transistors contenus dans le microprocesseur.
* ''Finesse de gravure (nm)'' : la largeur minimale possible (en [[nanomètre]]s) du canal des transistors, elle sert indirectement d'unité de base (lambda) dans le dimensionnement des autres structure du circuit. En comparaison, l'épaisseur d'un cheveu humain est de {{Unité|100|microns}} = {{Unité|100000|nm}}. Le diamètre d’un atome de silicium est de l’ordre de {{Unité|100|pm}}={{Unité|0.1|nm}}. En 2014, à des finesses de gravure de l’ordre de {{Unité|10|nm}} (pour la mémoire), on se retrouve avec certaines structures (comme la couche d'isolation de la grille des transistors) ayant une épaisseur de moins de {{unité|4|nm}}, ce qui fait quelque dizaines d'atomes de silicium. En augmentant la finesse de gravure, on se rapproche des limites en deçà desquelles le comportement électrique des matériaux relève de moins en moins de la physique classique, mais de plus en plus de la [[mécanique quantique]] (les électrons traversant la grille des transistors par effet tunnel).
* ''Fréquence de l’horloge'' : la fréquence du [[signal d'horloge]] interne qui cadence le microprocesseur. MHz = million(s) de cycles par seconde. GHz = milliard(s) de cycles par seconde.
* ''Largeur des données'' : le premier nombre indique le nombre de bits sur lequel une opération est faite. Le second nombre indique le nombre de bits transférés à la fois entre la mémoire et le microprocesseur.
* ''MIPS'' : le nombre de millions d’instructions, sur des entiers, effectuées par le microprocesseur en une seconde.

== Familles ==
[[Fichier:XPC7455 01.jpg|thumb|upright=0.8|Microprocesseur PowerPC 4755.]]
[[Fichier:P60ARM GC 01.jpg|thumb|upright=0.8|Microprocesseur ARM60.]]
[[Fichier:IntelCore2DuoE6600.jpg|thumb|upright=0.8|Microprocesseur Intel Core 2 Duo.]]

Les microprocesseurs sont habituellement regroupés en familles, en fonction du [[jeu d'instructions]] qu'ils exécutent. Si ce jeu d'instructions comprend souvent une base commune à toute la famille, les microprocesseurs les plus récents d'une famille peuvent présenter de nouvelles instructions. La [[rétrocompatibilité]] au sein d'une famille n'est donc pas toujours assurée. Par exemple un programme dit compatible [[x86]] écrit pour un processeur [[Intel 80386]]<ref>{{lien web|titre=Intel arrête la production de ses anciens processeurs|url=http://www.reghardware.co.uk/2006/05/18/intel_cans_386_486_960_cpus/|site=reghardware.co.uk}}.</ref>, qui permet la protection mémoire, pourrait ne pas fonctionner sur des processeurs antérieurs, mais fonctionne sur tous les processeurs plus récents (par exemple un [[Core Duo]] d'Intel ou un [[Athlon]] d'AMD).

Il existe des dizaines de familles de microprocesseurs. Parmi celles qui ont été les plus utilisées, on peut citer :

La famille la plus connue par le grand public est la famille [[x86]], apparue à la fin des [[années 1970]], développée principalement par les entreprises [[Intel Corporation|Intel]] (fabricant du [[Pentium (marque)|Pentium]]), [[Advanced Micro Devices|AMD]] (fabricant de l'[[Athlon]]), [[VIA Technologies|VIA]] et [[Transmeta]]. Les deux premières entreprises dominent le marché en fabriquant la majorité des microprocesseurs pour [[Ordinateur personnel|micro-ordinateurs]] [[Compatible PC|compatibles PC]] et [[Macintosh]] depuis [[2006]].

Le [[MOS Technology 6502]]<ref>[http://idoc64.free.fr/ASM/instruction.htm ''Le jeu d'instructions du 6502/6510''&nbsp;] – sur free.fr<!-- Site perso comme référence? Fiabilité, --></ref> qui a servi à fabriquer les [[Apple II]], [[Commodore PET]], et dont les descendants ont servi au [[Commodore 64]] et aux consoles [[Atari 2600]]. Le MOS Technology 6502 a été conçu par d'anciens ingénieurs de Motorola et était très inspiré du [[Motorola 6800]].

Le microprocesseur [[Zilog Z80]] a été largement utilisé dans les [[années 1980]] dans la conception des premiers micro-ordinateurs personnels {{Unité|8|bits}} comme le [[TRS-80]], les [[Sinclair ZX80]], [[ZX81]], [[ZX Spectrum]], le standard [[MSX]], les [[Amstrad CPC]] et plus tard dans les systèmes embarqués.

La famille [[Motorola 68000]] (aussi appelée m68k) de [[Motorola]] animait les premiers [[Macintosh]], les [[Mega Drive]], les [[Atari ST]] et les [[Commodore International|Commodore]] [[Amiga]]. Leurs dérivés ([[Motorola DragonBall|Dragonball]], [[Motorola ColdFire|ColdFire]]) sont toujours utilisés dans des systèmes embarqués.

Les microprocesseurs [[PowerPC]] d'[[International Business Machines Corporation|IBM]] et de [[Motorola]] équipaient jusqu'en [[2006]] les micro-ordinateurs [[Macintosh]] (fabriqués par [[Apple]]). Ces microprocesseurs sont aussi utilisés dans les serveurs de la {{nobr|série ''P''}} d'IBM et dans divers [[système embarqué|systèmes embarqués]]. Dans le domaine des [[Console de jeux vidéo|consoles de jeu]], des microprocesseurs dérivés du PowerPC équipent la [[Wii]] ([[Wii#Processeur_principal|Broadway]]), la [[GameCube]] ([[PowerPC Gekko|Gekko]]), [[Xbox 360]] (dérivé à trois cœurs nommé Xenon). La [[PlayStation 3]] est équipée du microprocesseur [[Cell (processeur)|Cell]], dérivé du POWER4, une architecture proche de PowerPC.

Les processeurs d'[[architecture MIPS]] animaient les [[stations de travail]] de [[Silicon Graphics]], des consoles de jeux comme la [[PSone]], la [[Nintendo 64]] et des systèmes embarqués, ainsi que des [[routeur]]s [[Cisco Systems|Cisco]]. C'est la première famille à proposer une architecture {{unité|64|bits}} avec le [[MIPS R4000]] en 1991. Les processeurs du fondeur chinois [[Loongson]], sont une nouvelle génération basées sur les technologies du MIPS, utilisés dans des supercalculateurs et des ordinateurs faible consommation.

La famille [[Architecture ARM|ARM]] est de nos jours utilisée principalement dans les [[informatique embarquée|systèmes embarqués]], dont de nombreux [[Assistant personnel|PDA]] et [[smartphone]]s. Elle a précédemment été utilisée par [[Acorn Computers|Acorn]] pour ses [[Acorn Archimedes|Archimedes]] et [[RISC PC|RiscPC]].

== Rapidité d'exécution des instructions ==
=== Fréquence de fonctionnement ===
Les microprocesseurs sont [[:wikt:cadencé|cadencés]] par un [[signal d'horloge]] (signal [[:wikt:oscillant|oscillant]] régulier imposant un rythme au transfert entre circuit). Au milieu des [[années 1980]], ce signal avait une fréquence de 4 à {{Unité|8|[[hertz|MHz]]}}. Dans les années 2000, cette fréquence atteint {{Unité|3|GHz}}. Plus cette fréquence est élevée, plus le microprocesseur peut exécuter à un rythme élevé les instructions de base des programmes mais plus la qualité des [[bus (informatique)|bus]] doit être soignée et leur longueur adaptée à la fréquence.

L'augmentation de la fréquence présente des inconvénients :
* la [[Refroidissement à air|dissipation thermique]]<ref>[http://www.techniques-ingenieur.fr/base-documentaire/electronique-photonique-th13/cartes-electroniques-technologies-et-conception-42287210/dissipation-thermique-dans-les-systemes-electroniques-e3952/ ''Dissipation thermique dans les systèmes électroniques''], sur techniques-ingenieur.fr</ref> d'un circuit donné est proportionnelle à sa fréquence de fonctionnement et au carré de sa tension d'alimentation<ref>{{lien web|format=pdf|langue=|url=http://www.nae.fr/wp-content/uploads/2015/07/Etude_DissipationThermique.pdf|titre=''dissipation thermique dans les composants''|site=nae.fr|consulté le=}}</ref> : cela implique d'avoir une solution de refroidissement du processeur adaptée ;
* la fréquence est notamment limitée par les temps de commutation des [[porte logique|portes logiques]] : il est nécessaire qu'entre deux « coups d'horloge », les signaux numériques aient eu le temps de parcourir tout le trajet nécessaire à l'exécution de l'instruction attendue ; pour accélérer le traitement, il faut agir sur de nombreux paramètres (taille d'un [[transistor]], interactions électromagnétiques entre les circuits{{etc.}}) qu'il devient de plus en plus difficile d'améliorer (tout en s'assurant de la fiabilité des opérations).

=== Overclocking ===
L'[[overclocking]] consiste à appliquer au microprocesseur une fréquence du signal d'horloge supérieure aux recommandations du fabricant ce qui permet d'exécuter plus d'instructions à chaque seconde. Cela nécessite souvent plus de puissance d'alimentation au risque de dysfonctionnements voire de destruction en cas de surchauffe.

=== Optimisation du chemin d'exécution ===
Les microprocesseurs actuels sont optimisés pour exécuter plus d'une instruction par cycle d'horloge, ce sont des microprocesseurs avec des unités d'exécution parallélisées. De plus ils sont dotés de procédures qui « anticipent » les instructions suivantes avec l'aide de la statistique. 

Dans la course à la puissance des microprocesseurs, deux méthodes d'optimisation sont en concurrence : 
* la technologie [[Reduced instruction set computer|RISC]] (''Reduced Instruction Set Computer'', [[jeu d'instructions]] simple), rapide avec des instructions simples de taille standardisée, facile à fabriquer et dont on peut monter la fréquence de l'horloge sans trop de difficultés techniques ;
* la technologie [[Complex instruction set computer|CISC]] (''Complex Instruction Set Computer''), dont chaque instruction complexe nécessite plus de cycles d'horloge, mais qui a en son cœur beaucoup d'instructions précâblées. 

Néanmoins, avec la diminution de la taille des puces électroniques et l'accélération des fréquences d'horloge, la distinction entre ''RISC'' et ''CISC'' a quasiment complètement disparu. Là où des familles tranchées existaient, on observe aujourd'hui des microprocesseurs où une structure interne ''RISC'' apporte de la puissance tout en restant compatible avec une utilisation de type ''CISC'' (la famille Intel x86 a ainsi subi une transition entre une organisation initialement très typique d'une structure ''CISC''. Actuellement elle utilise un cœur ''RISC'' très rapide, s'appuyant sur un système de réarrangement du code ''à la volée'') mis en œuvre, en partie, grâce à des [[mémoires caches]] de plus en plus grandes, comportant jusqu'à trois niveaux.

== Structure et fonctionnement ==
{{article détaillé|Architecture des processeurs|micro-architecture}}

=== Structure d'un microprocesseur ===
L'unité centrale d'un microprocesseur comprend essentiellement :
* une [[unité arithmétique et logique]] (UAL) qui effectue les opérations ;
* des registres qui permettent au microprocesseur de stocker temporairement des données ;
* une unité de contrôle qui commande l'ensemble du microprocesseur en fonction des instructions du programme.
Certains registres ont un rôle très particulier :
* le registre indicateur d'état (''flags''), ce registre donne l'état du microprocesseur à tout moment, il peut seulement être lu ;
* le compteur de programme (PC, ''Program Counter''), il contient l'adresse de la prochaine instruction à exécuter ;
* le pointeur de pile (SP, ''Stack Pointer''), c'est le pointeur d'une zone spéciale de la mémoire appelée [[Pile (informatique)|pile]] où sont rangés les arguments des [[sous-programme]]s et les [[Adressage mémoire|adresses]] de retour.
Seul le ''Program Counter'' est indispensable, il existe de (rares) processeurs ne comportant pas de registre d'état ou pas de pointeur de pile (par exemple le {{Lien|langue=en|trad=NS320xx}}).

L'unité de contrôle peut aussi se décomposer :
* le registre d'instruction, mémorise le code de l'instruction à exécuter ;
* le décodeur décode cette instruction ;
* le séquenceur exécute l'instruction, c'est lui qui commande l'ensemble des organes du microprocesseur.

=== Fonctionnement ===
Pour commencer, le microprocesseur va charger une instruction contenue en [[Mémoire (informatique)|mémoire]] grâce au compteur de programme. Ce dernier est au passage incrémenté, afin que le processeur traite l'instruction suivante au prochain cycle. L'instruction est alors décodée et si nécessaire le microprocesseur va chercher en mémoire les données supplémentaires. Dans certains cas, des instructions servent uniquement à charger une donnée dans un registre précis ou à écrire une donnée d'un registre en mémoire. Dans ce cas, le processeur charge ou écrit la donnée puis passe à l'instruction suivante. Dans le cas où le processeur doit effectuer une opération de calcul, le processeur fait alors appel à l'ALU. Dans beaucoup d'architectures, celle-ci fonctionne avec un [[Accumulateur (informatique)|registre accumulateur]]. Celui-ci enregistre le résultat de l'opération précédente, qui peut ensuite être réutilisé. Dans le cas d'un saut (''goto, jump''), c'est le compteur de programme qui est directement modifié. Dans le cas d'un [[Structure de contrôle|saut conditionnel]] (''if''), le processeur vérifie avant le saut qu'une condition booléenne est valide (''true''). Dans certains sauts (''jump''), le processeur ajoute une valeur à l'accumulateur. Cela permet au programme d'être exécuté à n'importe quel endroit dans la mémoire. Les instructions se divisent donc en plusieurs catégories :
* Les instructions de chargement (''load'') : mettent l'accumulateur à une certaine valeur ;
* Les instructions de rangement (''store'') : permettent d'écrire la valeur de l'accumulateur dans un registre ou un emplacement de mémoire précis ;
* Les instructions de saut (''if'', ''jump'') : permettent de déplacer choisir la prochaine instruction à exécuter ;
* Les instructions de calcul (''add'', ''mul'', ''div'', ''etc.'') : permettent par exemple d'ajouter le contenu du registre X à l'accumulateur, de multiplier l'accumulateur par le registre Y{{etc.}}

À la fin du cycle, le processeur finit de ranger ses données en mémoire ou dans les registres spécifiques. En cas de retenue, un registre spécial reçoit la valeur de la retenue, ce qui permet de le combiner à nouveau pour fonctionner avec plus de bits que ce que permet l'architecture. En cas d'erreur, comme une division par zéro, le processeur modifie un registre d'état et peut déclencher une interruption. 
Toutes ces étapes peuvent s’effectuer en plusieurs cycles d'horloge. Une optimisation consiste à les exécuter à la chaîne (principe du pipeline) ou en parallèle (architecture superscalaire). Actuellement, face à la difficulté liée à la montée en fréquence des microprocesseurs, les fabricants tentent d'augmenter le nombre d'Instructions Par Cycle (IPC) afin d'augmenter la vitesse de leurs processeurs. Cela a conduit à l'apparition de [[Processeur multi cœur|processeurs multi-cœurs]], composés de plusieurs unités, ou cœur, capables d'exécuter une instruction indépendamment de l'autre (contrairement à une architecture superscalaire, qui conserve des registres en commun). On parle alors de calcul en parallèle. Néanmoins, cela nécessite des programmes adaptés et les performances de ces processeurs dépendent donc de plus en plus de la qualité de programmation des programmes qu'ils exécutent.

== Fabrication ==
{{article détaillé|Fabrication des dispositifs à semi-conducteurs}}

La fabrication d'un microprocesseur est essentiellement identique à celle de n'importe quel [[circuit intégré]]. Elle suit donc un procédé complexe. Mais l'énorme taille et complexité de la plupart des microprocesseurs a tendance à augmenter encore le coût de l'opération. La [[loi de Moore]], qui indique que le nombre de transistors des microprocesseurs sur les puces de silicium double tous les deux ans, indique également que les coûts de production doublent en même temps que le degré d'intégration.

La fabrication des microprocesseurs est aujourd'hui considérée comme l'un des deux facteurs d'augmentation de la capacité des unités de fabrication (avec les contraintes liées à la fabrication des mémoires à grande capacité). La [[photolithographie|finesse de la gravure]] industrielle a atteint {{unité|45|nm}} en 2006<ref>{{lien web|langue=en|url=http://www.intel.com/pressroom/archive/releases/20060125comp.htm|titre=Intel First to Demonstrate Working 45nm Chips|site=intel.com|consulté le=}}</ref>. En diminuant encore la finesse de gravure, les fondeurs se heurtent aux règles de la [[mécanique quantique]].

== Problème d'échauffement ==
Malgré l'usage de techniques de gravures de plus en plus fines, l'échauffement des microprocesseurs reste approximativement proportionnel au carré de leur tension à architecture donnée. Avec <math>V</math> la tension, <math>f</math> la fréquence, et <math>k</math> un coefficient d'ajustement, on peut calculer la [[Dissipation de puissance du processeur|puissance dissipée]] <math>P</math> :

:<math>P = k \times V^2 \times f</math>

Ce problème est lié à un autre, celui de la [[Conductivité thermique|dissipation thermique]] et donc souvent des [[ventilateur]]s, sources de nuisances sonores. Le refroidissement liquide peut être utilisé. L'utilisation d'une [[pâte thermique]] assure une meilleure conduction de la chaleur du processeur vers le radiateur. Si l'échauffement ne pose pas de problème majeur pour des applications type ordinateur de bureau, il en pose pour toutes les applications portables. Il est techniquement facile d'alimenter et de refroidir un ordinateur fixe. Pour les applications portables, ce sont deux problèmes délicats. Le téléphone portable, l'ordinateur portable, l'appareil photo numérique, le PDA, le baladeur MP3 ont une batterie qu'il s'agit de ménager pour que l'appareil portable ait une meilleure autonomie.

== Prospective et innovation ==
* '''[[matériau bidimensionnel|Matériaux bidimensionnels]]''' : L'[[électronique bidimensionnelle]]<ref>Fiori, G. et al. ''Electronics based on two-dimensional materials''. Nat. Nanotechnol. 9, 768–779 (2014).</ref> est une piste d'innovation envisagée dès 2010<ref>Mak, K. F., Lee, C., Hone, J., Shan, J. & Heinz, T. F. Atomically thin MoS2: a new direct-gap semiconductor. Phys. Rev. Lett. 105, 136805 (2010).</ref>. Elle s'appuie sur des microprocesseurs de taille nanométrique<ref>Li, L. et al. Black phosphorus field-effect transistors. Nat. Nanotechnol. 9, 372–377 (2014).</ref>, imprimé en seulement deux dimensions, à partir de semi-conducteur 2D d'un ou seulement quelques atomes d'épaisseur, afin d'encore miniaturiser l'électronique sous les limites permises par le silicium<ref>Stefan Wachter, Dmitry K. Polyushkin, Ole Bethge & Thomas Mueller (2017), ''A microprocessor based on a two-dimensional semiconductor'' ; Nature Communications 8, Article n°14948 mis en ligne le 11 Avril 2017 ; Doi:10.1038/ncomms14948 ([https://www.nature.com/articles/ncomms14948 résumé])</ref>.<br/>Dans les années 2010, des prototypes comprenant quelques transistors ont été testés avec succès.<br />Des matériaux organiques<ref>Myny, K. et al. An 8-bit, 40-instructions-per-second organic microprocessor on plastic foil. IEEE J. Solid-State Circuits 47, 284–291 (2012).</ref>, des [[nanotubes de carbone]]<ref>Shulaker, M. M. et al. Carbon nanotube computer. Nature 501, 526–530 (2013).</ref> ou le [[disulfure de molybdène]] sont des matériaux qui semblent prometteurs<ref>adisavljevic, B., Radenovic, A., Brivio, J., Giacometti, V. & Kis, A. Single-layer MoS2 transistors. Nat. Nanotechnol. 6, 147–150 (2011).</ref>{{,}}<ref>Roy, T. et al. (2015) ''Dual-gated MoS2/WSe2 van der Waals tunnel diodes and transistors.'' ACS Nano 9, 2071–2079</ref>{{,}}<ref>Pu, J. et al. (2012) ''Highly flexible MoS2 thin-film transistors with ion gel dielectrics.'' Nano Lett. 12, 4013–4017</ref>{{,}}<ref>Wang, H. et al. (2012) ''Integrated circuits based on bilayer MoS2 transistors''. Nano Lett. 12, 4674–4680</ref>, notamment pour produire des composés souples<ref>Cheng, R. et al. (2014) ''Few-layer molybdenum disulfide transistors and circuits for high-speed flexible electronics''. Nat. Commun. 5, 5143</ref>, pouvant par exemple être intégrés dans des feuilles de plastique, des vêtements ou des « robots mous ». Le disulfure de molybdène a été utilisé en 2017 pour fabriquer un semi-conducteur permettant de produire un microprocesseur en quasi 2D, comprenant {{nombre|115|transistors}}. Ce dernier a efficacement exécuté des programmes stockés dans une mémoire externe (pour un [[bit]] de données mais les auteurs disent que la conception peut être mise à l'échelle pour en gérer plus). À cette échelle les microprocesseurs sont invisibles et pourraient par exemple être intégrés dans le verre de lunettes, de pare-brise ou de vitres ou dans une lentille oculaire.

== Notes et références ==
=== Notes ===
{{références|groupe=alpha}}

=== Références ===
{{références}}

== Voir aussi ==
=== Bibliographie ===
* {{en}} Jon Stokes, ''An Illustrated Introduction to Microprocessors and Computer Architecture par Jon Stokes'', No Starch Press, 2006, {{ISBN|978-1-59327-104-6}} 
* {{en}} Grant McFarland, "''Microprocessor Design''", McGraw-Hill Professional, 2006, {{ISBN|978-0-07-145951-8}}
* [[Jean-Baptiste Waldner]], ''Nano-informatique et intelligence quantique - Inventer l'ordinateur du {{s-|XXI|e}}'', Hermes Science, Londres, 2006, {{ISBN|2-7462-1516-0}}
* {{Ouvrage|langue=en|auteur1=David E. Culler ; Jaswinder Pal Singh and Anoop Gupta (1999).|titre=Parallel Computer Architecture|sous-titre=A Hardware/Software Approach|lieu=San Francisco (Calif.)|éditeur=Morgan Kaufmann Publishers|année=1999|pages totales=1025|isbn=978-1-55860-343-1|isbn2=1-55860-343-3|lire en ligne=https://books.google.com/books?id=MHfHC4Wf3K0C&printsec=frontcover|id=Culler}}.
*{{en}}[[Federico Faggin]], et al.: ''The MCS-4 An LSI Microcomputer System''. ''IEEE 1972 Region Six Conference''
*{{en}}[[Yale Patt]], Sanjay J. Patel, ''Introduction to Computing Systems: From Bits and Gates to C and Beyond'', Mc Graw Hill
*{{en}}Wade Warner, [https://www.ibm.com/developerworks/library/pa-microhist/ ''Great moments in microprocessor history''], 2004, [[IBM]]

=== Articles connexes ===
{{colonnes|taille=25|
* [[Processeur]]
* [[Liste de microprocesseurs]]
* [[Chronologie des microprocesseurs]]
* [[Loi de Moore]]
* [[Traitement numérique (microprocesseur)]]
* [[Microcontrôleur]]
* [[In-circuit emulator|Émulateur in-circuit]]
* [[Overclocking]]
}}

=== Liens externes ===
* [http://www.computerhistory.org/exhibits/microprocessors/index.shtml Galerie de microprocesseurs de 1971 à 1996]
* [http://www.x86-secret.com/popups/articleswindow.php?id=64  Article sur la fabrication des wafers]

{{Palette|Électronique}}
{{Portail|électricité et électronique|informatique|technologies}}

[[Catégorie:Microprocesseur|*]]
[[Catégorie:Carte mère]]
