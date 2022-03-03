tags: #vcs #version #software #versioning #versionnage 

Un logiciel de gestion de versions (ou VCS en anglais, pour version control system) est un logiciel qui permet de stocker un ensemble de fichiers en conservant la chronologie de toutes les modifications qui ont été effectuées dessus. Il permet notamment de retrouver les différentes versions d'un lot de fichiers connexes.

Il existe aussi des logiciels et services de gestion de versions décentralisé (distribué) (ou DVCS en anglais, pour distributed version control system). Git et Mercurial1 sont deux exemples de logiciels de gestion de versions décentralisés et sont disponibles sur la plupart des systèmes Unix et Windows.

Les logiciels de gestion de versions sont utilisés notamment en développement logiciel pour conserver le code source relatif aux différentes versions d'un logiciel. 

## Définition

Un logiciel de gestion de versions agit sur une arborescence de fichiers afin de conserver toutes les versions des fichiers, ainsi que les différences entre les fichiers.

Ce système permet par exemple de mutualiser un développement. Un groupe de développeurs autour d'un même développement se sert de l'outil pour stocker toute évolution du code source. Le système gère les mises à jour des sources pour chaque développeur, conserve une trace de chaque changement. Ceux-ci sont, en bonne utilisation, chaque fois accompagnés d'un commentaire. Le système travaille par fusion de copies locale et distante, et non par écrasement de la version distante par la version locale. Ainsi, deux développeurs travaillant de concert sur une même source, les changements du premier à soumettre son travail ne seront pas perdus lorsque le second, qui a donc travaillé sur une version non encore modifiée par le premier, renvoie ses modifications.

Généralement, chaque nouvelle version d'un fichier est appelée révision et son numéro de version est incrémentée de un par rapport à la précédente. 