# Versioning  

tags: #version #versioning #versionnage 

Une version d'un logiciel correspond à un état donné de l'évolution d'un produit logiciel utilisant le versionnage. Selon le Grand dictionnaire terminologique, le _**versionnage**_ (équivalent francophone de l'anglais versioning) _**est le mécanisme qui consiste à conserver la version d'une entité logicielle quelconque, de façon à pouvoir la retrouver facilement,**_ même après l'apparition et la mise en place de versions plus récentes.

Une version de logiciel est le plus souvent associée à une numérotation, voire dans certains cas à un nom symbolique, qui permet de l'identifier.

Pour les logiciels de nature commerciale (progiciels), on peut être amené à trouver deux numérotations : une numérotation interne à l'entreprise, et une numérotation présentant un caractère commercial. Cela permet de séparer l'aspect marketing ou contractuel de l'aspect technique (nombreuses versions). Par exemple, le traitement de texte Word existe en version Word 2000 (version commerciale), ce qui correspond à la version 9.0.2812 (version technique). En revanche, les logiciels libres utilisent généralement une numérotation unique ; ainsi LibreOffice 3.4.4 correspond à la version de maintenance no 4 de la version fonctionnelle 3.4.

On parle également de version d'un logiciel pour désigner ses différentes implémentations destinées à des systèmes d'exploitation ou des plateformes différents.

## Gestion de l'évolution d'un logiciel
*Articles détaillés : [[Gestion de configuration|Gestion de configuration]] et [[Gestion de version|Gestion de version]]*.

La gestion de l'ensemble des versions d'un logiciel et de celles de ses différents éléments (sa gestion de versions) requiert l'utilisation d'un système de gestion de configuration. Un tel système permet l'existence simultanée de plusieurs versions du logiciel, en développement ou en maintenance. Différentes branches permettent d'introduire des modifications, d'en comparer les versions et d'en fusionner les changements.

## Types d'évolutions

Il faut d'abord différencier les évolutions mineures, des évolutions majeures d'un logiciel :

* Les évolutions **_majeures_** apportent de nouvelles fonctionnalités, voire restructurent complètement l'application.
* Les évolutions **_mineures_** apportent principalement des corrections de bugs ou des ajouts de fonctionnalités secondaires (par exemple, l'ajout d'un bouton de raccourci).

Une application peut être développée en plusieurs branches indépendantes. On retrouve généralement la branche stable et la branche développement, chaque branche ayant sa propre version. Une branche peut aussi correspondre à un cycle de développement particulier.
Article détaillé : Branche (gestion de configuration).

## Numérotation des versions

![[Pasted image 20201026140909.png]]
\- *Exemple d'arbre des versions d'un logiciel*

Il existe différents systèmes pour décrire la version d'un logiciel :

* en utilisant un ou plusieurs chiffres pouvant être séparés par des points : 1.4, 0.9.95.
* en suivant une règle mathématique. Par exemple, la version de TEX tend de manière asymptotique vers π {\displaystyle \pi } \pi  ; la version actuelle est 3.14159265. De même, la version de Metafont tend vers e {\displaystyle e} e ; la version actuelle est 2.71828.
* grâce à l'année de sortie du logiciel : Adobe Illustrator 88.
* grâce à la date de sortie : Wine 20040505 (pour la version sortie le 5 mai 2004), Ubuntu 8.04 (pour la version sortie en avril 2008).
* grâce au numéro de la révision : WebKit r112

On parle aussi d'édition pour désigner des évolutions mineures d'une version. Dans l'exemple de la version 2.6.10, la version sera 2 et l'édition la 6.10 ou bien la version la 2.6 et l'édition 10 (tout dépend des habitudes de l'éditeur ou de la communauté de développement).

Outre la numérotation qui permet d'identifier une version précise, il est courant de qualifier certaines versions afin de préciser à quel cycle de développement du logiciel on est. Par exemple, Mac OS 10.5 est surnommé Leopard.

Le dernier numéro peut être remplacé par une lettre : au lieu de 2.5.21, on aurait 2.5.U (c'est le cas notamment pour de nombreux éditeurs de jeux vidéo). 

### Forme générale

Généralement, un numéro de version est composé d'une suite de nombres séparés par des points. Les nombres sont ordonnés du plus significatif au moins significatif : une évolution du premier nombre correspond à une refonte (relative) du logiciel, tandis que le dernier correspond à une évolution mineure. Ainsi, une version nommée « 2.5.21 » pourrait avoir le sens suivant :

* 2e version publiée.
* 5e ajout de fonctionnalités dans la version 2.
* 21e révision de la version 2.5 (ou 22e si la numérotation commence à partir de 0).

De manière générale, plus les modifications apportées par le nouveau patch ou la nouvelle version sont importantes, plus le numéro qui changera sera à gauche. S'il s'agit d'une simple correction d'un bug mineur, on passera de 2.5.21 à 2.5.22. En revanche, s'il s'agit d'une mise à jour majeure (de nouvelles fonctionnalités, une ergonomie différente, etc.), on passera de 2.5.21 à 2.6.0. À titre d'exemple, la version 2.6.10 du noyau Linux indique la 11e révision (la numérotation commence à 0) de la 4e version mineure (les numéros impairs ne sont pas utilisés pour les versions stables) de la 2e version majeure du noyau.

Traditionnellement, la première version fonctionnelle d'un logiciel est notée 1.0. Certaines versions de logiciels sont notées 0.x ou 0.x.x, indiquant ainsi que le logiciel n'est pas encore abouti (version bêta).

Lorsqu'un numéro de version est composé de trois nombres, ils sont respectivement appelés : majeur, mineur et correctif (en anglais major, minor, patch)2.

Les notions de « majeur » ou « mineur » n'ont pas le même sens pour les développeurs et les utilisateurs. Par exemple, une restructuration profonde de l'application mais sans nouvelles fonctionnalités, sera vue comme « majeure » par les développeurs, mais ne sera pas perçue par les utilisateurs. Afin que le changement de version reste compréhensible par ces derniers, le premier chiffre du numéro de version diffusée ne devrait changer que s'il y a une modification des fonctionnalités.

### GoRoCo

G pour Génération, R pour Révision, C pour Correction. Les "o" venant s'intercaler entre les lettres de l’acronyme lui permettant d'être prononcé et retenu plus facilement.

Ce système de versionnement est similaire au versionnement sémantique, à la différence près que ses règles sur l'incrément des numéros sont moins arbitraire. C'est au sein du SI de France Télécom3,4 que cet acronyme a été le plus largement utilisé. 

## Phases de développement

Les phases de développement d'un logiciel, entre le prototype et la version finale

En conception de programme, la terminologie des phases de développement indique l'état d'avancement à travers les étapes dans le respect des spécifications élaborées aux étapes précédentes et ce qui reste à accomplir.

Une phase de développement est associée à une des étapes d'un cycle de développement.

Suit en ordre chronologique, les différentes phases possibles d'un logiciel.

![[Pasted image 20201026144158.png]]

### Maquette

Une maquette est un aperçu visuel de l'objectif recherché, ne disposant pas de réelle fonctionnalité. 

#### Prototype

Un prototype est un premier jet de l'application, ne disposant que de quelques fonctionnalités et servant de démonstrateur.
Version avancée

Se dit d'un logiciel qui est en cours de développement. Ce terme permet de différencier la version en évolution d'un logiciel, qui est encore à un stade entre alpha et RC, de sa version stable. Ainsi, vous pouvez choisir entre le logiciel WikiOnline version stable 1.0 par exemple, et sa version avancée 1.1 (son utilisation est déconseillée, à moins d'avoir absolument besoin des nouvelles fonctionnalités qui ne sont pas dans la version stable, ou dans le but de tests).
Version alpha

Une version alpha n'est pas censée être accessible à un large public : c'est une version interne. C'est la première phase de développement concret du logiciel après le codage de l'application. Généralement, un produit en test alpha — on utilise couramment le terme anglais alpha-test — n'a pas toutes les fonctionnalités prévues dans le produit final, contrairement à un produit en test bêta qui devrait être complet. L'alpha est donc dépourvue de certaines fonctionnalités, et contient un nombre de bugs encore important.

Le but de cette phase est d'implémenter toutes les fonctionnalités du logiciel final, et la version correspondante est traitée à l'intérieur même du studio de développement.

#### Version nightly

La version nightly est en quelque sorte une version alpha permanente : les utilisateurs testent la version de développement en cours au plus près des commits réalisés sur l'arbre de développement, au moyen de versions compilées automatiquement quotidiennement (traditionnellement chaque nuit, d'où l'appellation nigthly).

#### Version bêta

Bêta, ainsi nommée comme la deuxième lettre de l'alphabet grec, est la phase de développement logiciel qui suit alpha. Le bêta-test est donc la deuxième période d'essai d'un produit informatique avant sa publication. Un produit en période de bêta-test est généralement soumis à un nombre important ou représentatif d'utilisateurs : les bêta-testeurs. Ils peuvent être des employés de la société qui développe le logiciel, des bénévoles (notamment dans le cas des logiciels libres) ou des premiers clients notamment dans le processus Lean Startup. Ces personnes ont pour but d'utiliser le logiciel, de rapporter les problèmes rencontrés et de suggérer des améliorations sur les fonctionnalités.

Le bêta-test sert essentiellement à mettre en évidence des bugs résiduels, ou bien à modifier l'interface utilisateur.

Il existe deux formes de test bêta :

   
   * la bêta ouverte ou bêta publique, dans laquelle n'importe qui peut participer, avec parfois une restriction technique (nombre d'utilisateurs connectés simultanément, etc.) ;
   * la bêta fermée ou bêta privée, dans laquelle les personnes intéressées par le produit doivent s'inscrire au préalable ou sont contactées par les concepteurs du produit testé qui sélectionnent les candidatures.
   * les bêtas étant souvent utilisées pour le marketting de jeux videos, la notion de bêta interne est parfois utilisée pour indiquer qu'une bêta fermée est réservée aux employés

#### Version admissible ou pre-release ou Release Candidate

Une version admissible, généralement désignée par le terme anglais Release Candidate (souvent abrégé en RC), est une version du logiciel qui est, du côté pratique, candidate à être la version « finale » ou « stable » dudit logiciel. Elle est mise à disposition à des fins de « tests de dernière minute » visant à déceler les toutes dernières erreurs subsistant au sein du programme.

### Version finale (ou stable)

Quand un logiciel peut accomplir toutes les tâches prévues et que des bugs n'apparaissent plus (ou presque plus), on considère qu'il a atteint sa version « finale » ou « stable » qui peut alors être publiée : en ligne, sur CD-ROM, DVD, etc. On parle parfois de version « or » (de l'anglais « gold »), que l'on appelle aussi version « GA », pour « General Availability » ou version « Gold Master » abrégée en version en « GM » ou encore de « Release to Manufacturing » abrégée en « RTM ».

Tout en étant décrété « en version finale », un logiciel peut comporter quelques bugs résiduels ou peut nécessiter de s'adapter à de nouveaux besoins conduisant à ajouter de nouvelles fonctionnalités et à lancer un nouveau cycle de développement à partir de cette version. Ces modifications ont pour conséquences des mises à jour qui sont disponibles sous forme de rustines, que l'on appelle plutôt des patchs, ou qui sont intégrées dans la distribution suivante du logiciel. 

## Versions d'implémentation

On parle également de « version d'un logiciel » pour désigner ses différentes implémentations destinées à des OS ou plateformes différents : par exemple les versions Windows 32 bits (x86), Windows 64 bits (x64), macOS et Linux d'un même logiciel.

Dans ce cas, le même périmètre fonctionnel du logiciel est assuré par différents exécutables obtenus chacun par la compilation spécifique de codes sources plus ou moins distincts. 