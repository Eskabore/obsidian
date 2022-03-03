![[Pasted image 20201020163825.png]]
**GraphQL** est un [[langage de requête]]s et un [[environnement d'exécution]], créé par [[Facebook]] en 2012, avant d'être publié comme projet [[Open source|open-source]] en 2015<ref>{{Lien web|url=https://code.facebook.com/posts/1691455094417024|title=GraphQL: A data query language}}</ref>. Inscrit dans le modèle [[Client–serveur|Client-Serveur]], il propose une alternative aux [[Interface de programmation|API]] [[Representational state transfer - REST API]]|REST]]<ref name="graphql-website"/>. La requête du client définit une structure de données, dont le stockage est éventuellement distribué, et le serveur suit cette structure pour retourner la réponse<ref>{{Lien web|langue=Français|auteur1=Romain Calamier|titre=GraphQL: Et pour quoi faire ?|url=https://blog.octo.com/graphql-et-pourquoi-faire/|site=blog.octo.com|périodique=|date=09/08/2018}}</ref>. Fortement typé, ce langage évite les problèmes de retour de données insuffisants ({{langue|en|''under-fetching''}}) ou surnuméraires ({{langue|en|''over-fetching''}}).

== Principe ==
Une API GraphQL permet de récupérer des données en fonction de la requête client. En REST, c'est la méthode de [[Hypertext Transfer Protocol|requête HTTP]] (GET, POST,...), l'URL ou encore les paramètres envoyés qui définissent les fonctions métiers à appeler et la nature du retour. GraphQL le fait directement avec la requête envoyée en POST. Comme les requêtes POST ne sont pas mises en cache côté serveur, les requêtes GraphQL doivent être mises en cache côté client<ref>https://www.apollographql.com/blog/graphql-caching-the-elephant-in-the-room-11a3df0c23ad/</ref>.

=== Langage de requêtes ===
La particularité de GraphQL est que la structure de la réponse du serveur est fixée par le client (conformément aux limites de l'API). Par exemple, c'est lui qui décide des champs qu'il souhaite pour chaque ''Objet'', et dans quel ordre il veut les recevoir.

Prenons la situation d'un fournisseur de fruits & légumes. Il dispose d'une API GraphQL lui permettant d'obtenir toutes les commandes qu'on lui a effectuées et leurs détails. Lorsqu'il consulte sa plateforme de gestion, son navigateur adresserait la requête suivante via la méthode GET :<syntaxhighlight lang="yaml">
{
    orders {
        id
        productsList {
            product {
                name
                price
            }
            quantity
        }
        totalAmount
    }
}
</syntaxhighlight>Après traitement de la réponse par l'API (dont le client n'a pas forcément connaissance), le serveur répondrait comme suit :<syntaxhighlight lang="yaml">
{
    "data": {
        "orders": [
            {
                "id": 0,
                "productsList": [
                    {
                        "product": {
                            "name": "orange",
                            "price": 1.5
                        },
                        "quantity": 100
                    }
                ],
                "totalAmount": 150
            }
        ]
    }
}
</syntaxhighlight>Dans cet exemple, un produit peut posséder beaucoup plus d'attributs que simplement le nom et le prix. Mais dans notre situation, le fournisseur n'a pas besoin de plus d'informations que ça. De cette manière, l'utilisation de GraphQL a permis au client de se passer des informations inutiles, et donc de gagner du temps et des ressources. Le problème de données surnuméraires, dit ''over-fetching'', a ainsi été évité. De même, l'API GraphQL a garanti l'obtention de toutes les informations nécessaires à la consultation du fournisseur, ce qu'un API REST n'aurait pas forcément permis en une requête seulement. Cette fois, c'est le problème de données insuffisantes, ou ''under-fetching'', qui a été évité.

=== Environnement d'exécution ===
Une API GraphQL est organisée grâce aux ''Types'' et ''Champs''. Pour déclarer l'ensemble de ces éléments, le fournisseur de données doit construire le squelette de l'API. C'est ce schéma qu'il partagera à tous les clients qu'il veut, sans que ceux-ci n'aient besoin de savoir comment les données ont été récupérées. Dans l'exemple précédent, le schéma pourrait être celui-ci :<syntaxhighlight lang="text">
type Query {
    orders: [Order]
}

type Product {
    id: Int!
    name: String
    weight: Float
    price: Float
}

type Order {
    id: Int!
    productsList: [
        product: Product
        quantity: Int
    ]
    totalAmount: Int
}

![[Pasted image 20201020164151.png]]
Le premier ''Type'', ''Query'', contient toutes les requêtes de consultation admises par l'API. Dans l'exemple, on retrouve la règle ''orders'', qui permet de recevoir un ensemble d'objets ''Order''. Un autre ''Type'' existe aussi, ''Mutation'', contenant toutes les règles de mise à jour des données, comme les insertions par exemple. Les deux blocs suivants définissent les structures de objets ''Product'' et ''Order''. Comme expliqué dans la section précédente, le client pourra demander tous les attributs de chaque type, ou moins.

À travers la déclaration du squelette de l'API, on comprend mieux l'appellation du langage : GraphQL. En effet, une réponse conforme au schéma de l'exemple peut être représentée par l'arbre ci-contre. Un premier niveau de l'arbre contient toutes les commandes (''orders''). À chaque branche ''order'', on retrouve d'autres sous-divisions ''product'', correspondant aux champs ''productsList''. Dans une API REST, il aurait par exemple fallu demander la liste des commandes, puis pour chaque commande, demander les produits qui y appartiennent. Dans l'idée, la structure arborescente de GraphQL devient plus avantageuse quand l'arbre devient plus profond. Le langage a peu de limite puisqu'il est capable de prendre en charge des relations beaucoup plus complexes, avec des objets interdépendants par exemple.

Attention à la confusion : le nom de ''Graph Query Language'' ne vient pas du fait que GraphQL est destiné aux [[Base de données orientée graphe|bases de données orientées graphes]], mais bien de la structure arborescente des réponses aux requêtes. Il ne faut donc surtout pas confondre GraphQL avec GQL.

== Utilisations ==
GraphQL a été implémenté pour de nombreux langages, par exemple Graphene<ref>{{Lien web|url=http://graphene-python.org/|titre=GraphQL in Python made simple}}</ref> pour [[Python (langage)|Python]], [[Apollo (framework Javascript)|Apollo]]<ref>{{Lien web|langue=anglais|titre=Page d'accueil d'Apollo GraphQL|url=https://www.apollographql.com/|site=|date=|consulté le=}}</ref> et [[Relay (framework Javascript)|Relay]]<ref>{{Lien web|langue=anglais|titre=Introduction to Relay|url=https://facebook.github.io/relay/docs/en/introduction-to-relay.html|site=https://facebook.github.io/|date=|consulté le=}}</ref> pour [[JavaScript|Javascript]]. Il est utilisé par certaines [[Base de données orientée graphe|bases de données orientées graphe]] comme [[ArangoDB]] en tant que langage de requête<ref>{{Lien web|url=https://www.arangodb.com/2016/02/using-graphql-nosql-database-arangodb/|titre=Using GraphQL with NoSQL database ArangoDB}}</ref>.

Facebook est le premier investigateur de GraphQL. En effet, les applications iOS étaient souvent confrontées à des saturations de la consommation des données. Une application mobile doit donc prendre en compte la possibilité que l'utilisateur ait une faible bande passante, ce qui se traduit par un besoin de réduire au maximum le nombre d'appels à une API ainsi que la quantité de données transmises. Le principal avantage de GraphQL est ainsi de pouvoir fournir une application via un seul appel de données, en déléguant la tâche de structure des données au serveur. On épargne ainsi au client la multiplicité des échanges réseau, ce qui représente un gain de temps bénéfique.

== Inconvénients ==
Du fait que la structure d'une réponse d'une API GraphQL est personnalisable par le client, l'utilisation d'un cache côté serveur est peu envisageable. En effet, les requêtes et leurs réponses dépendent du client.

== Références ==
{{Références}}

== Annexes ==
=== Liens externes ===
* {{Site officiel}}

{{Portail|programmation informatique|bases de données}}

[[Catégorie:Interface de programmation]]
