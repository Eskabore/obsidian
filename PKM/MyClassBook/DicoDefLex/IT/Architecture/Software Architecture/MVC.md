Tags: #mvc #model #view #control #vue #reactjs 


# Modèle-vue-contrôleur ou MVC
est un _*motif d'architecture*_ logicielle destiné aux interfaces graphiques lancé en 1978 et très populaire pour les applications web. <br>Le motif est composé de trois (3) types de modules ayant trois (3) responsabilités différentes :

  * les modèles[^mdl]
  * les vues[^view]
  * les contrôleurs[^cntrl]


   [^mdl]: Un modèle (Model) contient les données à afficher.
   
   [^view]: Une vue (View) contient la présentation de l'interface graphique.
    
   [^cntrl]: Un contrôleur (Controller) contient la logique concernant les actions effectuées par l'utilisateur.
   
#### Description
Une application conforme au motif MVC comporte trois types de modules : les modèles, les vues et les contrôleurs.

### Modèle
Élément qui contient **les données ainsi que de la logique en rapport avec les données** : **V**alidation, **L**ecture et **E**nregistrement.
Il peut, dans sa forme la plus simple, contenir uniquement une simple valeur, ou une structure de données plus complexe. Le modèle représente l'univers dans lequel s'inscrit l'application. Par exemple pour une application de banque, le modèle représente des comptes, des clients, ainsi que les opérations telles que dépôt et retraits, et vérifie que les retraits ne dépassent pas la limite de crédit.

### Vue
: **Partie visible d'une interface graphique**. La vue se sert du modèle, et peut être un diagramme, un formulaire, des boutons, etc. Une vue contient des éléments visuels ainsi que la logique nécessaire pour afficher les données provenant du modèle. Dans une application de bureau classique, la vue obtient les données nécessaires à la présentation du modèle en posant des questions. Elle peut également mettre à jour le modèle en envoyant des messages appropriés. Dans une application web une vue contient des balises [[Hypertext Markup Language|HTML]].

### Contrôleur
Module qui traite les actions de l'utilisateur, modifie les données du modèle et de la vue.

#### Dépendances
Le modèle est indépendant des autres modules. Il ne se sert ni de la vue ni du contrôleur, il peut cependant leur envoyer des messages<ref name="lott" />. Il y a deux liens entre la vue et le modèle : premièrement la vue lit les données du modèle et deuxièmement reçoit des messages provenant du modèle<ref name="lott" />. Dans la mesure où une vue est associée à un modèle et un modèle est indépendant, un même modèle peut être utilisé par plusieurs vues<ref name="lott" />. 

Les aspects de la gestion des entrées/sorties de l'interface utilisateur sont techniquement très différents et ont des interdépendances faibles. La gestion des entrées est déléguée au contrôleur alors que la gestion des sorties est à la charge de la vue. 

<font color=red><strong><u>La vue est dépendante du modèle. Elle interroge celui-ci pour en afficher une représentation</u></strong></font>. 

Le contrôleur dépend de la vue et du modèle : la vue comporte des éléments visuels que l'utilisateur peut actionner<ref name="lott" />. Le contrôleur répond aux actions effectuées sur la vue et modifie les données du modèle<ref name="lott" />.

Dans le cas d'un ''**view model**'', le modèle contient les données que le contrôleur transmet à la vue. Dans le cas d'un ''domain model'' il contient toutes les données en rapport avec l'activité, ainsi que la logique des opérations de modification et de validation des données.

### MVP et MVVM 
Les motifs ''model-view-presenter'' (MVP) et ''model-view-view model'' (MVVM) sont semblables au motifs modèle-vue-contrôleur, à quelques différences près.

* Dans le patron MVP, le contrôleur est remplacé par une présentation. La présentation  est créée par la vue et lui est associée par une interface. Les actions utilisateur déclenchent des événements sur la vue, et ces événements sont propagés à la présentation en utilisant l'interface<ref name="ciliberti" />.
* Dans le patron MVVM il y a une communication bidirectionnelle entre la vue et le modèle, les actions de l'utilisateur entraînent des modifications des données du modèle<ref name="ciliberti" />.

### Dans les applications web


![Représentation des interactions entre le modèle, la vue et le contrôleur dans le cas d'une application web](https://upload.wikimedia.org/wikipedia/commons/b/b2/Mod%C3%A8le-vue-contr%C3%B4leur_%28MVC%29_-_fr.png)










 Certains détails sont alignés avec le langage **Smalltalk**, mais les grandes lignes peuvent s'appliquer à n'importe quel environnement. <br> Le cycle **action→mise à jour→affichage** <br> induit par ce patron est bien adapté aux applications web<ref name="freeman" />. De plus le patron impose la séparation des sujets, et les balises HTML sont ainsi confinées aux vues, ce qui améliore la maintenabilité de l'application<ref name="freeman" />. C'est le framework pour applications web [[Ruby on Rails]] qui a apporté un regain d'intérêt pour ce patron<ref name="freeman" />.

Ce patron est utilisé par de nombreux [[framework]]s pour [[Application web|applications web]] tels que [[Ruby on Rails]], [[Django (framework)|Django]], [[ASP.NET MVC]], [[Spring (framework)|Spring]], [[Apache Struts|Struts]] ou [[Apache Tapestry]]<ref name="walther" />.

Dans la mise en œuvre classique du patron MVC, la vue attend des modifications du modèle, puis modifie la présentation des éléments visuels correspondants<ref name="yates">{{en}}Colin Yates - Seth Ladd - Marten Deinum - Koen Serneels et Christophe Vanfleteren, ''Pro Spring MVC: With Web Flow'', Apress - 2012,{{ISBN|9781430241553}}</ref>. Cette mise en œuvre est appliquée pour les applications de bureau avec des framework comme [[Swing (Java)|Swing]]<ref name="yates" />. Le protocole [[Hypertext Transfer Protocol|HTTP]]  ne permet pas cette mise en œuvre pour les applications web. Pour ces dernières, lors d'une action de l'utilisateur, le contenu de la vue est recalculé puis envoyé au client<ref name="yates" />.
