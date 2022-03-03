Tags: #angular #angularjs #framework #javascript 


**<u>AngularJS</u>** est un framework JavaScript libre et open source développé par Google. Il permet de développer des pages web.

### Philosophie d'AngularJS

AngularJS est fondé sur l'idée que la programmation déclarative doit être utilisée pour construire les interfaces utilisateurs et les composants logiciels de câblage, tandis que la programmation impérative excelle pour exprimer la logique métier3.  <br> <p> 
    <font size=4> <u>_La conception de AngularJS est guidée par plusieurs objectifs_ </u> </font> :
   > * découpler les manipulations du DOM de la logique métier. Cela améliore la testabilité du code ;
   > * considérer le test d'une application aussi important que l'écriture de l'application elle-même. La difficulté de la phase de test est considérablement impactée par la façon dont le code est structuré ;
   > * découpler les côtés client et serveur d'une application. Cela permet au développement logiciel des côtés client et serveur de progresser en parallèle, et permet la réutilisabilité de chacun des côtés ;
   > * guider les développeurs pendant toute la durée de la construction d'une application : de la conception de l'interface utilisateur, en passant par l'écriture de la logique métier, jusqu'au test de l'application ;
   > * rendre les tâches faciles évidentes et les tâches difficiles possibles
    
   </p>
 <br>
  <b> Conception </b> <br>
 
  <p>Une page web conçue avec <b>AngularJS</b> suit le patron d'architecture MVC (modèle-vue-contrôleur). Ce patron a pour avantage de proposer un couplage faible entre la présentation, les données, et les composants métier. Dans un langage web, cette séparation permet de diminuer l'importance des manipulations DOM et d'améliorer la testabilité du <b>code</b> . </p>

Dans AngularJS, la partie « vue » est déclarée dans une version étendue du HTML traditionnel, qui comporte de nouvelles balises (tags) et attributs. <br>Ce **HTML étendu** est utilisé pour déclarer une liaison de  _données bidirectionnelle_  entre les modèles et les vues. <br> => les données sont synchronisées automatiquement, et moins d'éléments ont besoin d'être définis en Javascript. Les modèles sont composés de plusieurs couches appelés « scopes ». <br> <u>Les contrôleurs dans AngularJS permettent de prototyper des actions en code JavaScript natif</u>.

En proposant l'injection de dépendances, AngularJS apporte aux applications web côté client les services traditionnellement apportés côté serveur, comme les contrôleurs de vues. En conséquence, une bonne partie du fardeau supporté par le back-end est supprimée, ce qui conduit à des applications web beaucoup plus légères côté serveur.

Par ailleurs, AngularJS a la particularité d'utiliser des _promesses_ (promises), reprises du **langage Q**.

#### Fonctionnement 
La synchronisation automatique des données entre le modèle et la vue est permise par un mécanisme appelé ''**dirty-checking**''. AngularJS exécute en permanence une boucle qui consiste à surveiller et à détecter des modifications sur un objet JavaScript.

AngularJS embarque un sous-ensemble de la bibliothèque open source [[jQuery]] appelé jQLite, mais peut aussi utiliser [jQuery](http://docs.angularjs.org/misc/faq FAQ du site d'AngularJS) si elle est chargée sur la [[Foire aux questions|FAQ]] du site officiel d'AngularJS..
