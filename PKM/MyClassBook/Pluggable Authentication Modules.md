# PAM
tags: #pam #authentication #pluggin
En informatique, Pluggable Authentication Modules (modules d'authentification enfichables, en abrégé PAM) est un mécanisme permettant d'intégrer différents schémas d'authentification de bas niveau dans une API de haut niveau, permettant de ce fait de rendre indépendants du schéma les logiciels réclamant une authentification.

PAM est une création de Sun Microsystems et est supporté en 2006 sur les architectures Solaris, Linux, FreeBSD, NetBSD, AIX et HP-UX.

L'administrateur système peut alors définir une stratégie d'authentification sans devoir recompiler des programmes d'authentification. PAM permet de contrôler la manière dont les modules sont enfichés dans les programmes en modifiant un fichier de configuration.

Les programmes qui donnent aux utilisateurs un accès à des privilèges doivent être capables de les authentifier. Lorsque vous vous connectez sur le système, vous indiquez votre nom et votre mot de passe. Le processus de connexion vérifie que vous êtes bien la personne que vous prétendez être. Il existe d'autres formes d'authentification que l'utilisation des mots de passe, qui peuvent d'ailleurs êtres stockés sous différentes formes.

## Modules PAM

Les modules PAM sont des bibliothèques dynamiques (par ex. pam_unix.so) fournissant les six primitives d'authentification définies dans la norme, regroupées dans quatre mécanismes :

* Le mécanisme account fournit une seule primitive : il vérifie si le compte demandé est disponible (si le compte n'est pas arrivé à expiration, si l'utilisateur est autorisé à se connecter à cette heure de la journée, etc.).
* Le mécanisme auth fournit deux primitives ; il assure l'authentification réelle, éventuellement en demandant et en vérifiant un mot de passe, et il définit des « certificats d'identité » tels que l'appartenance à un groupe ou des « tickets » kerberos.
* Le mécanisme password fournit une seule primitive : il permet de mettre à jour le jeton d'authentification (en général un mot de passe), soit parce qu'il a expiré, soit parce que l'utilisateur souhaite le modifier.
* Le mécanisme session fournit deux primitives : mise en place et fermeture de la session. Il est activé une fois qu'un utilisateur a été autorisé afin de lui permettre d'utiliser son compte. Il lui fournit certaines ressources et certains services, par exemple en montant son répertoire personnel, en rendant sa boîte aux lettres disponible, en lançant un agent ssh, etc.

## Extensions
* pam_mount est une extension de PAM permettant de monter un système de fichiers quand un utilisateur se connecte. On pourra par exemple lancer le montage d’un répertoire CIFS en utilisant le mot de passe que l’utilisateur vient de rentrer. De plus, la partition sera démontée quand l’utilisateur va se déconnecter. En le combinant avec le module pam_ldap, il permet d’utiliser le couple SaMBa/OpenLDAP pour l’authentification et la gestion des répertoires utilisateur sous Linux. Mais les fonctions de pam_mount ne s’arrêtent pas là : il permet aussi de monter à la connexion des partitions de nombreux types comme des partitions chiffrées comme loop-AES.