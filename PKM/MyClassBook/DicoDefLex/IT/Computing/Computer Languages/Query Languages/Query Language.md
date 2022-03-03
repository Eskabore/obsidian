## Query Language

Tags:  #query #language 

Un '''langage de requête''' est un [[langage informatique]] utilisé pour accéder aux données  d'une [[base de données]] ou d'autres [[Système d'information|systèmes d'information]]. Il permet d'obtenir les données vérifiant certaines conditions (on parle de critères de sélection), comme toutes les personnes qui habitent une ville donnée. Les données peuvent être triées, elles peuvent également être regroupées suivant les valeurs d'une donnée particulière (par exemple on va regrouper toutes les personnes qui habitent la même rue).

La [[grammaire formelle|grammaire]] d'un langage de requête est adaptée à la structure des données interrogées. Le langage de requête le plus connu et le plus utilisé est [[Structured Query Language|SQL]].

== Exemples ==
{{Catégorie détaillée|Langage de requête}}
Par ordre alphabétique :
* [[Datalog]] pour les bases de données déductives
* [[Data Mining Extensions|DMX]] pour les modèles d'[[exploration de données]] (Data Mining)
* [[Multidimensional Expressions|MDX]] pour les bases de données multidimensionnelles [[Traitement analytique en ligne|OLAP]]
* [[Object Query Language|OQL]] pour les [[Base de données orientée objet|bases de données orientées objet]]
* [[Prolog]]
* [[SPARQL]] pour les graphes [[Resource Description Framework|RDF]]
* [[Structured Query Language|SQL]] pour les [[Base de données relationnelle|bases de données relationnelles]]
* [[XQuery]] pour les données [[Extensible Markup Language|XML]]
* [[XPath]] pour parcourir le [[Document Object Model|DOM]]

== Historique ==
L'idée initiale de langage de requête est introduite par [[Ted Codd]] dans son article séminal sur le [[modèle relationnel]]<ref name=codd>{{Article|langue = EN|auteur1 = Codd, E. F.|titre = A relational model of data for large shared data banks.|périodique = ACM|numéro = 13-6|jour = |mois = 06|année = 1970|issn = 0001-0782|lire en ligne = http://www.seas.upenn.edu/~zives/03f/cis550/codd.pdf|pages = }}</ref>, c'est l'idée de la différence entre les données et leur implémentation : le langage de requête doit exprimer le ''quoi'' et non le ''comment'', c'est-à-dire ce que veut savoir l'utilisateur et non le détail de l'exécution elle-même. L'idée est ici qu'à mesure que la puissance des ordinateurs augmente et que les requêtes se complexifient, le programme dispose de davantage de moyens pour optimiser la requête que l'utilisateur, quitte à remanier celle-ci à résultat égal.

Codd introduit donc un langage, basé sur le calcul des prédicats, pour interroger une ''base de données relationnelle'' (c'est-à-dire vue sous forme de tables). ll introduit aussi une autre façon d'interroger, via une algèbre, et montre l'équivalence entre les deux. Le projet de Codd, alors employé d'[[IBM]] deviendra un projet de recherche à forte visibilité, ''System R''. Le projet de recherche donnera lieu à un produit, [[DB2]]. C'est dans ce produit que nait le langage SQL qui deviendra le langage standard des langages de requêtes relationnels.

== SQL ou le langage d'interrogation de données (''LID'') ==
Une base de données peut être interrogée de manière formelle par le langage SQL ou par un langage algébrique. 
Le langage [[Structured Query Language|SQL]] (Structured Query Langage) est une évolution de SEQUEL développé en 1976 par IBM comme un langage de recherche. 
SQL est devenu un standard des bases de données relationnelles (en 1987, normalisation de ce langage par ANSI). 
SQL s'utilise sous deux formes, soit d'une manière interactive, soit à l'intérieur d'un langage hôte (C, fortran, cobol…). 
SQL ne comporte qu'une vingtaine d'instructions, il est dit procédural (l'accès aux données se fait par leur contenu et non par leur chemin). SQL est un langage de définition des données ([[Langage de définition de données|LDD]]), de manipulation de données ([[langage de manipulation de données|LMD]]), de contrôle des données ([[Langage de contrôle de données|LCD]]) et d'interrogation des données (LID).Malgré le succès du langage SQL qui a suivi, Edgar F. Codd dénoncera cet outil qu'il considère comme une interprétation incorrecte de ses théories.

Le [[langage algébrique]] (LA) correspond à un pseudo algorithme du SQL. Il est composé de peu d'opérateurs (sélection, projection et jointure étant les opérateurs de base).

=== Terminologie ===
SQL comme le LA permettent la gestion et l'interrogation des bases de données. Une base de données peut être considérée comme une table à deux dimensions, dont les colonnes sont les [[Champ (base de données)|champs]] et les lignes sont les [[N-uplet|tuples]]. Plusieurs tables peuvent contenir des colonnes de même noms, pour les différencier, il faudra préfixer les rubriques par le nom de la [[table]].

''Remarque :'' La base de données fournie en exemple est composée de 2 tables. La table '''Employe''' constituée d'un code employé, d'un nom, d'un prénom, d'une date de naissance, d'une adresse et d'un code emploi. La table '''Emploi''' constituée d'un code emploi (auquel fait référence la table EMPLOYE), d'un libellé d'emploi, de la ville concernée par cet emploi.

=== La projection ===
La projection est une opération qui consiste à ne sélectionner que certaines données pour l'affichage. La syntaxe est la suivante :
 R1 ← PROJ(nomdelatable; liste des propriétés)

 SELECT liste des propriétés
 FROM nomdelatable ;

Exemples :

 LA : PROJ(Employe; nom, prénom)

 SQL : SELECT nom, prénom
       FROM Employe ;

Cette requête ne renvoie que les nom et prénom de la table Employe

 LA : PROJ(Employe; *)

 SQL : SELECT * 
       FROM Employe ;

Cette requête renvoie toutes les rubriques de la table Employe grâce au caractère joker *.

=== Le tri ===
Pour obtenir un affichage trié, il est nécessaire de le préciser. L'opérateur de tri est à utiliser en langage algébrique. La clause '''order by''' est à ajouter à la fin de la requête SQL, suivi du nom de la colonne qui doit être utilisé pour ce tri Le tri par défaut s'effectue par ordre croissant ; pour obtenir un tri par ordre décroissant, il faut rajouter le paramètre '''DESC'''.

 R2 ← TRI('''R1'''; attribut du tri croissant)

 SELECT Liste des propriétés
 FROM nomdelatable
 ORDER BY propriété ASC;

Ou :

 R2 ← TRI('''R1'''; attribut du tri décroissant)

 SELECT Liste des propriétés
 FROM nomdelatable
 ORDER BY propriété DESC;

''Attention !'' : le tri ne s'effectue qu'à l'affichage, en aucun cas la base de données n'est modifiée.

Exemple :

* Sélection des employés (nom et prénom) triés par ordre alphabétique du nom et par date de naissance décroissante.

 R1 ← PROJ(Employe; nom, prenom, datenais)
 R2 ← TRI(R1; nom croissant, '''datenais décroissant''')

 SELECT nom, prenom, datenais
 FROM Employe
 ORDER BY nom ASC, datenais DESC ;

''Attention !'' : Pour un tri multi-critères, l'ordre de tri est celui de la rubrique d'avant.

* À partir du tri ci-dessus, nous rajoutons un tri par prénom croissant

 R1 ← PROJ(Employe; nom, prenom, datenais)
 R2 ← TRI(R1; nom croissant, datenais décroissant, '''prenom croissant''')

 SELECT nom, prenom, datenais
 FROM Employe
 ORDER BY nom ASC, datenais DESC, prenom ASC ;

=== La sélection ===
La sélection consiste à sélectionner des lignes répondant à certains critères. La syntaxe est la suivante :

 R1 ← SEL(R; propriété opérateur valeur ET propriété opérateur valeur)

''Attention !'' : Le langage algébrique s'écrit à l'envers du SQL.

 SELECT liste des propriétés
 FROM nomdelatable
 WHERE propriété op valeur
 AND propriété op valeur ;

* Qu'est-ce qu'un critère de sélection (appelé aussi prédicat) ?
C'est le résultat de la comparaison de deux expressions au moyen d'un opérateur de comparaison.

* Qu'est-ce qu'un opérateur ?
Un opérateur décrit une opération de comparaison.

Egal =
différent != ou ⇔ suivant le SGBDR
Supérieur >
Supérieur ou égal >=
Inférieur <
Inférieur ou égal ⇐

''Attention !'' : Les minuscules sont différenciées des majuscules

=== La jointure ===
C'est une opération permettant de ramener sur une même ligne des données venant de plusieurs tables. Une jointure s'effectue grâce à un produit cartésien de plusieurs tables (256 au maximum) et l'application de sélections.

 R3 = JOIN(R1, R2; R1.propriété opérateur R2.propriété)

=== Les sous-interrogations ===
Une sous-interrogation est l'expression d'un [[prédicat]] à l'aide du résultat d'une sélection. Il peut y avoir jusqu’à 16 niveaux de sous-interrogations. Une erreur est générée si une sous-interrogation n'amène rien ou si elle ramène plus de valeurs que ne peut en accepter le champ.

== Complétude des langages de requêtes ==
C'est Codd le premier qui dans son article ''A relational model of data for large shared data banks'' définit la complétude d'un langage comme l'équivalence à l'algèbre relationnelle.

Plus généralement, un langage de requête est complet s'il permet de poser toutes les questions possibles sur une base de données. Une définition "statique" a été introduite en parallèle par Bancilhon et Paredaens, qui énonce qu'un langage est complet s'il permet de produire toutes les relations invariantes par le groupe d'isomorphismes qui laissent les éléments du graphe invariants. Paredaens a démontré que l'algèbre relationnelle était complète et Bancilhon a démontré que le calcul relationnel était complet.

== Bibliographie ==
* Relational completeness of database sublanguages E. F. Codd. IBM Research. Laboratory. San Jose, California. 1971 
* On the Completeness of Query Languages for Relational Data Bases. François Bancilhon, MFCS 1978: 112-123
Jan Paredaens: 
* On the Expressive Power of the Relational Algebra. Inf. Process. Jan Paredaens, Lett. 7(2): 107-111 (1978)

== Références  ==
{{Références}}

== Liens externes ==
* {{fr}} {{lien web|url=http://laurent-audibert.developpez.com/Cours-BD/html/Cours-BD017.php|auteur=Laurent Audibert|site=developpez.com|titre=Langage SQL}}

{{Palette Base de données}}
{{portail|programmation informatique|bases de données}}

[[Catégorie:Langage de requête|*]]
[[Catégorie:Base de données]]

[[no:Database#Spørrespråk]]
