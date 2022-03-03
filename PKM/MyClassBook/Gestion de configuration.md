# Gestion de configuration


![[Pasted image 20201026150810.png]]
\- *Exemple de configuration d'un système comportant plusieurs sous-systèmes et plusieurs composants*

La **gestion de configuration** consiste à gérer la description technique d'un système[^1] (et de ses divers composants), ainsi qu'à gérer l'ensemble des modifications apportées au cours de l'évolution du système. En d'autres termes, il s'agit de l'ensemble des processus permettant d'assurer la conformité d'un produit aux exigences, tout au long de son cycle de vie. La gestion de configuration est utilisée pour la configuration de systèmes complexes :

* en informatique,
* en aéronautique,
* en automobile,
* en construction navale,
* en pharmacie,
* en systèmes spatiaux,
* en armement,
* en construction ferroviaire.

En informatique, la gestion de configuration peut être utilisée à plusieurs fins :

* Pour stocker et tracer les différentes versions ou révisions de toute information destinée à être utilisée par un système (matériel, logiciel, document, donnée unitaire, etc.).
* Pour déployer des configurations à travers un parc informatique sous formes de fichiers et données.

Ceci est réalisé à l'aide de [[Logiciels de gestion de versions|logiciels de gestion de versions]], propriétaires ou libres.

Utilisée dans le suivi de versions de logiciels, la gestion de configuration permet par exemple de gérer les codes sources. Utilisée dans le suivi de versions de documents, elle permet de tracer toutes les modifications qui sont intervenues sur les informations contenues dans les documents. 

## Constitutifs d'une gestion de configuration

La gestion de configuration est avant tout un *ensemble de pratiques*. Ces pratiques sont au nombre de quatre.
Identification des articles de la configuration

Cette activité d'inventaire recouvre notamment :

* la sélection des articles que l'on veut soumettre à gestion de la configuration,
* la sélection des documents décrivant ces articles et que l'on veut maîtriser.

Autrement dit l'identification fixe le périmètre que l'on veut gérer.

Les activités correspondantes portent sur :

* le type des informations (ex. : formats de fichiers) ; 
      * spécifications techniques,
      * dossiers d'interfaces,
      * dossiers d'allocation,
      * dossiers de définition,
      * dossiers de fabrication,
      * dossiers de validation
* l'organisation des informations (ex. : arborescence) ;
* règles de nommages ;
* cycle de vie des informations ;
* identifications des relations entre les articles.

### Maîtrise de la configuration

Activité consistant à confirmer pour chaque demande d'évolution, pour chaque demande de déviation (dérogation demandée avant l'entrée en production d'un produit) ou dérogation après production que le produit répond à l'ensemble des exigences fonctionnelles. Autrement dit, activité confirmant la cohérence de l'ensemble des données de configurations pendant toute la vie du produit.
* cycle de vie d'une demande de modification ou d'une demande de dérogation

#### Comité de maîtrise de la configuration

Le comité ou bureau de maîtrise de la configuration (change control board ou CCB en anglais), a pour principe de mettre en présence les partenaires (relation client-fournisseur) avec pour objet de statuer sur la gravité et la priorité des différentes demandes de modifications ou demandes de dérogations qui lui sont soumises. 

### Enregistrement des états de la configuration

Pour gérer une configuration il faut pouvoir maîtriser son évolution dans le temps :

*  Enregistrement des états successifs d'un article : à chaque fois qu'un article est modifié, son état précédent est conservé. Les états successifs de l'article sont souvent appelés « version » ou « révision ». L'évolution de l'article peut concerner :
       * la modification de ses caractéristiques intrinsèques (caractéristiques physiques ou fonctionnelles, performances…),
       * la modification de ses liens vers les autres articles (liens de composition, de spécification, de description…)
* Enregistrement des états successifs de la Configuration : il s'agit de conserver, à un instant donné, l'ensemble des versions des articles et les liens qui les structurent. C'est une « photographie » de la configuration, qui peut servir de référence de l'état de la configuration à cet instant.

### Audit et revue

À savoir un audit physique et fonctionnel recouvrant :

* la gestion des sauvegardes
* la vérification de l'intégrité du référentiel de configuration
* la matrice de couverture entre les exigences et les réalisations

## Listes des modifications

Parmi les fonctionnalités dont peuvent disposer les gestionnaires de configuration, on trouve le regroupement de modifications. En général, une modification concerne une tâche, et il est rare qu'une tâche n'affecte qu'un seul document.

Aussi, pour éviter de rechercher dans l'intégralité des documents les modifications apportées à l'occasion de la résolution d'une tâche, l'outil va regrouper lesdits documents au sein d'une liste des modifications.

Ces regroupements permettent une atomicité dans l'évolution du système et réalisent des points d'arrêts cohérents pouvant servir de point de reprise ou de bifurcation (branches) pour les évolutions de la configuration. 


[^1]: Ici système est à prendre dans un sens d'ensemble fonctionnel au sens le plus large de ces termes. Ainsi par exemple s'il n'est pas usuel de désigner par système un immeuble, il en est toutefois un au sens de la gestion de configuration puisqu'il associe différents articles dans l'objectif de satisfaire à un ensemble de fonctions (habitabilité et autres commodités diverses telles que l'accès à l'eau, l'électricité, climatisation, évacuations, etc) en coopération fonctionnelle.