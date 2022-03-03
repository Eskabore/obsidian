Tags: #Kubernetes #software #cluster #server #Docker #Go 

[**Kubernetes**](https://fr.wikipedia.org/wiki/Kubernetes): est un système Open Source  permettant d'automatiser le déploiment, la montée en charge et la mise en oeuvre de conteneurs d'application sur des (**clusters de serveurs**)[^clus]

[^clus]: On parle de **grappe de serveurs** (Grappe est le terme recommandé par la [Commission générale de terminologie et de néologie]( http://franceterme.culture.fr/FranceTerme)  en France), de **cluster**, de **groupement de serveurs** ou de **ferme de calcul** ("**computer cluster**'') pour désigner des techniques consistant à regrouper plusieurs [[ordinateur]]s indépendants appelés nœuds ("**nodes**"), afin de permettre une gestion globale et de dépasser les limitations d'un ordinateur pour :
       * augmenter la [[disponibilité]] ;
       * faciliter la montée en charge ; 
       * permettre une [[répartition de charge|répartition de la charge]] ;
       * faciliter la gestion des [[Ressource (informatique)|ressources]] ([[processeur]], [[mémoire vive]], [[disque dur|disques durs]], [[Bande passante|bande passante réseau]]).
 
 
 
## Conception
**Kubernetes** définit un jeu d'outils ("primitives") qui, ensemble, fournissent des mécanismes pour déployer, maintenir et mettre à l’échelle des applications. Ces éléments qui composent Kubernetes sont conçus pour être combinés et extensibles et donc permettre de supporter une grande variété de charge de travail. Cette extensibilité est fournie en grande partie par **l'API de Kubernetes**, qui est utilisée par les composants internes aussi bien que par les extensions et les conteneurs tournant sur Kubernetes.

### _Pods_

L’unité de base de l'[[Scheduling (computing)|ordonnancement]] dans Kubernetes est appelée «pod»[^pod]. <br>  - Un pod consiste en un ou plusieurs conteneurs qui ont la garantie d'être co-localisés sur une machine hôte et peuvent en partager les ressources. <br> - Chaque pod dans Kubernetes possède une **adresse IP** unique (à l'intérieur du cluster), qui permet aux applications d'utiliser les ports de la machine sans risque de conflit. <br> - Un pod peut définir un volume, comme un répertoire sur un disque local ou sur le réseau, et l'exposer aux conteneurs de ce pod. <br> - Les pods peuvent être soit gérés manuellement au travers de l'API de Kubernetes soit être délégués à un contrôleur.

[^pod]: C'est une vue abstraite de composants conteneurisés.

### _Labels_  &  _selectors_
**Kubernetes** permet à des clients (utilisateurs et composants internes) d'attacher des paires clés-valeurs appelées "labels" à n'importe quel objet d'**API** dans le système: <br> 
> `Ex: les pods et les nodes`. 

  Par correspondance, les **"label selectors"** sont des **interrogations** faites sur les labels **en lien avec des objets**.

Labels et selectors constituent le premier mécanisme de groupement dans Kubernetes, et sont utilisés pour déterminer les composants sur lesquels appliquer une opération.

Par exemple, si les Pods d'une application ont des labels pour un système $tier$ (ex:"$frontend$", "$backend$") et une $release\_track$ (ex:"$preproduction$", "$production$"), alors une opération sur tous les nodes "$backend$" et "$preproduction$" peuvent utiliser un label selector comme suit:

   >    $tier=backend\ AND\ release\_track=preproduction$


### Contrôleurs
**Un contrôleur** est une boucle d'arbitrage qui pilote l'état courant d'un cluster vers son état désiré. Il effectue cette action en gérant un ensemble de pods. Un des types de contrôleur est appelé "**contrôleur de réplication**”, il gère la réplication et la mise à l'échelle en lançant un nombre spécifique de copies d'un pod sur un cluster. Il gère également la création de pods de remplacement si le nœud sous-jacent est en défaut. Deux des contrôleurs qui font partie du cœur de système de Kubernetes sont : le “**DaemonSet Controller**” pour lancer un seul pod sur chaque machine (ou un sous-ensemble de machine), ainsi que le “**Job Controller**” pour lancer des pods qui ont une fin déterminée (par exemple des scripts). L'ensemble des pods qu'un contrôleur gère est déterminé par des labels selectors qui font partie de la définition du contrôleur.

### Service
**Un service Kubernetes** est _un groupe de pods travaillant ensemble_: <br>
=> `Ex:` <u>Une couche dans une application multi-couches </u>. <br> <br>L'ensemble des pods qui constituent un service sont définis par un label selector.  <p> **Kubernetes** fournit <font color="#7777"> <u> un service de découverte et de routage en assignant une adresse IP et un nom de domaine à un service</u> </font>, et équilibre la charge du trafic en utilisant le [round-robin](https://fr.wikipedia.org/wiki/Round-robin_(informatique))[^ror] des connexions réseaux de cette adresse sur l'ensemble des pods correspondant au sélecteur (même lorsqu'en cas de défaut, les pods changent de machines). </p> Par défaut, un service est exposé à l'intérieur d'un cluster (ex: les pods de backend peuvent être groupés dans un service, avec les requêtes des pods de frontend load balancées vers les backend), mais un service peut également être exposé à l'extérieur d'un cluster (par exemple pour que les clients puissent joindre les pods de frontend).

[^ror]: Le tourniquet est un algorithme d'**ordonnancement** courant dans les systèmes d'exploitation et est adapté aux systèmes travaillant en temps partagés. Une petite unité de temps, appelé <u>**quantum de temps**</u>, est définie. La file d'attente est gérée comme une file circulaire. **L'ordonnanceur** parcourt cette file et alloue un temps processeur à chacun des processus pour un intervalle de temps de l'ordre d'un quantum au maximum. <br> -=> **_La performance de round-robin dépend fortement du choix du quantum de base_.**


###  Architecture 
Kubernetes suit l'architecture maitre/esclave. Les composants de Kubernetes peuvent être divisés en ceux qui gèrent un nœud individuel et ceux qui font partie du plan de contrôle.




![Diagramme d'architecture de Kubernetes](https://upload.wikimedia.org/wikipedia/commons/b/be/Kubernetes.png)


#### lan de contrôle Kubernetes

Le maître Kubernetes est l'unité de contrôle principale qui gère la charge de travail et dirige les communications dans le système. Le plan de contrôle de Kubernetes consiste en plusieurs composants, chacun ayant son propre processus, qui peuvent s'exécuter sur un seul node maître ou sur plusieurs maîtres permettant de créer des clusters haute disponibilité. Les différents composants du plan de contrôle de Kubernetes sont décrits ci-dessous:

#### etcd

etcd est une unité de stockage distribuée persistante et légère de données clé-valeur développée par CoreOS, qui permet de stocker de manière fiable les données de configuration du cluster, représentant l'état du cluster à n'importe quel instant. D'autres composants scrutent les changements dans ce stockage pour aller eux-mêmes vers l'état désiré.

#### serveur d'API

Le serveur d'API est un élément clé et sert l'API Kubernetes grâce à JSON via HTTP. Il fournit l'interface interne et externe de Kubernetes,. Le serveur d'API gère et valide des requêtes REST et met à jour l'état des objets de l'API dans etcd, permettant ainsi aux clients de configurer la charge de travail et les containers sur les nœuds de travail.

#### L'ordonnanceur

L'ordonnanceur est un composant additionnel permettant de sélectionner quel node devrait faire tourner un pod non ordonnancé en se basant sur la disponibilité des ressources. L'ordonnanceur gère l'utilisation des ressources sur chaque node afin de s'assurer que la charge de travail n'est pas en excès par rapport aux ressources disponibles. Pour accomplir cet objectif, l'ordonnanceur doit connaître les ressources disponibles et celles actuellement assignées sur les serveurs.

#### Controller manager

Le gestionnaire de contrôle (controller manager) est le processus dans lequel s'exécutent les contrôleurs principaux de Kubernetes tels que DaemonSet Controller et le Replication Controller. Les contrôleurs communiquent avec le serveur d'API pour créer, mettre à jour et effacer les ressources qu'ils gèrent (pods, service endpoints, etc.).

#### Node Kubernetes

Le Node aussi appelé Worker ou Minion est une machine unique (ou une machine virtuelle) où des conteneurs (charges de travail) sont déployés. Chaque node du cluster doit exécuter le programme de conteneurisation (par exemple Docker), ainsi que les composants mentionnés ci-dessous, pour communiquer avec le maître afin de configurer la partie réseau de ces conteneurs.

#### Kubelet

Kubelet est responsable de l'état d'exécution de chaque nœud (c'est-à-dire, d'assurer que tous les conteneurs sur un nœud sont en bonne santé). Il prend en charge le démarrage, l'arrêt, et la maintenance des conteneurs d'applications (organisés en pods) dirigé par le plan de contrôle,.

Kubelet surveille l'état d'un pod et s'il n'est pas dans l'état voulu, le pod sera redéployé sur le même node. Le statut du node est relayé à intervalle de quelques secondes via messages d’état vers le maître. Dès que le maître détecte un défaut sur un node, le Replication Controller voit ce changement d'état et lance les pods sur d'autres hôtes en bonne santé[réf. nécessaire].

#### Kube-proxy

Le kube-proxy est l’implémentation d'un proxy réseau et d'un répartiteur de charge, il gère le service d'abstraction ainsi que d'autres opérations réseaux. Il est responsable d'effectuer le routage du trafic vers le conteneur approprié en se basant sur l'adresse IP et le numéro de port de la requête entrante.

#### cAdvisor

cAdvisor est un agent qui surveille et récupère les données de consommation des ressources et des performances comme le processeur, la mémoire, ainsi que l'utilisation disque et réseau des conteneurs de chaque node.