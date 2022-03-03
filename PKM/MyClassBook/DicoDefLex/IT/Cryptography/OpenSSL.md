![[Pasted image 20201020132244.png]]

tags: #ssl #language 
# OpenSSL
est une boîte à outils de [[chiffrement]] comportant deux [[Librairies|bibliothèques]], <tt>libcrypto</tt> et <tt>libssl</tt>, fournissant respectivement une implémentation des algorithmes [[cryptographie|cryptographiques]] et du [[protocole de communication]] [[Transport Layer Security|SSL/TLS]], ainsi qu'une [[interface en ligne de commande]], <tt>openssl</tt>.

Développée en [[C (langage)|C]], OpenSSL est disponible sur les principaux [[Système d'exploitation|systèmes d'exploitation]] et dispose de nombreux [[Adaptateur (patron de conception)|wrappers]] ce qui la rend utilisable dans une grande variété de [[Langage informatique|langages informatiques]]. En [[2014]], deux tiers des sites [[World Wide Web|Web]] l'utilisaient<ref>{{Lien web
 | url = https://arstechnica.com/security/2014/04/critical-crypto-bug-in-openssl-opens-two-thirds-of-the-web-to-eavesdropping/
 | titre = Critical crypto bug in OpenSSL opens two-thirds of the Web to eavesdropping
 | auteur = Dan Goodin
 | date = 8 avril 2014
 | année = 2014
 | mois = avril
 | site = arstechnica.com
 | éditeur = [[Ars Technica]]
 | en ligne le = 8 avril 2014
 | consulté le = 6 juillet 2014
}}</ref>.

== Histoire ==
Basé sur la bibliothèque SSLeay de Eric A. Young et Tim J. Hudson<ref>{{Lien web
 | url = https://www.openssl.org/about/
 | titre = About the OpenSSL Project
 | site = www.openssl.org
 | consulté le = 6 juillet 2014
}}</ref>, le projet voit le jour en [[1998]] dans le but de mettre à la disposition de tous les outils [[Logiciel libre|libres]] pour le [[chiffrement]].

[[Fichier:Heartbleed.svg|thumb|Image illustrant la faille de sécurité [[Heartbleed]]]]
Bien que massivement utilisée, la bibliothèque est peu médiatisée en dehors de la communauté informatique. Cela change en avril [[2014]] à la suite de la révélation d'une [[Vulnérabilité (informatique)|vulnérabilité]] majeure, [[Heartbleed]] qui permet de récupérer le contenu de la mémoire du serveur sans laisser aucune [[trace numérique]]<ref>{{Lien web
 |url = http://heartbleed.com/
 |titre = The Heartbleed Bug
 |langue = en
 |site = Heartbleed
 |consulté le = 9 avril 2014}}</ref>{{,}}<ref>{{Lien web
 |url = https://www.openssl.org/news/secadv_20140407.txt
 |titre = TLS heartbeat read overrun (CVE-2014-0160)
 |date = 7 avril 2014
 |site = Openssl.org
 |consulté le = 9 avril 2014
 |langue = en}}</ref>. Du fait de sa très grande utilisation, de nombreux sites internet grand public, entre autres [[Wikipédia]], [[Google (moteur de recherche)|Google]], [[Dropbox]], [[Yahoo!]] et [[Flickr]], sont affectés et recommandent à leurs utilisateurs de ne pas se connecter pendant les quelques jours nécessaires à effectuer les mises à jour puis de changer leur mots de passe<ref>{{Lien web
 |url = http://www.zdnet.com/heartbleed-bug-affects-yahoo-imgur-okcupid-convo-7000028213/
 |titre = Heartbleed bug affects Yahoo, OKCupid sites; users face losing passwords
 |langue = en
 |site = Znet
 |date = 8 avril 2014
 |consulté le = 9 avril 2014
 |auteur = Zack Whittaker}}</ref><sup>,</sup><ref>{{Lien web|nom1=Pagliery|prénom1=Jose|titre=Heartbleed bug: passwords to change right now|url=http://money.cnn.com/2014/04/10/technology/security/heartbleed-passwords/index.html|site=CNNMoney|date=2014-04-10|consulté le=2017-06-07}}</ref>.

### Heartbleed
a mis en avant le manque de moyen d'OpenSSL et de nombreux [[Logiciel libre|logiciels libres]] essentiels au bon fonctionnement d'internet et des systèmes de communication. Cette constatation a mené à la création de la [[Core Infrastructure Initiative]] soutenu par des entreprises majeures du secteur informatique telles que [[Google]], [[Microsoft]], [[Facebook (entreprise)|Facebook]] ou encore [[Amazon Web Services]]<ref>{{Lien web|langue=en|titre=Amazon Web Services, Cisco, Dell, Facebook, Fujitsu, Google, IBM, Intel, Microsoft, NetApp, Rackspace, VMware and The Linux Foundation Form New Initiative to Support Critical Open Source Projects {{!}} The Linux Foundation|url=https://www.linuxfoundation.org/news-media/announcements/2014/04/amazon-web-services-cisco-dell-facebook-fujitsu-google-ibm-intel|site=www.linuxfoundation.org|consulté le=2017-06-07}}</ref>.

De nouvelles failles, de moindres importances que Heartbleed, sont rendues publiques en juin de la même année. Les annonces et l'importance de ces failles ont permis de révéler plusieurs problèmes dans la [[Qualité logicielle|qualité du code]].

Ces problèmes ont poussé des développeurs du projet [[OpenBSD]] à [[Fork (développement logiciel)|forker]] OpenSSL en [[LibreSSL]]<ref>{{Lien web
 | url = http://www.zdnet.com/openbsd-forks-prunes-fixes-openssl-7000028613/
 | titre = OpenBSD forks, prunes, fixes OpenSSL
 | auteur = Larry Seltzer
 | date = 21 avril 2014
 | année = 2014
 | mois = avril
 | site = www.zdnet.com
 | en ligne le = 21 avril 2014
 | consulté le = 6 juillet 2014
}}</ref>. Quelques mois plus tard, [[Google]] annonce avoir également créé son propre fork, mais pour des raisons de facilité de maintenance car elle l'utilise dans ses projets [[Google Chrome|Chrome]] et [[Android]]<ref>{{Lien web
 | url = https://www.imperialviolet.org/2014/06/20/boringssl.html
 | titre = BoringSSL
 | auteur = Adam Langley
 | date = 20 juin 2014
 | année = 2014
 | mois = juin
 | site = www.imperialviolet.org
 | en ligne le = 20 juin 2014
 | consulté le = 6 juillet 2014
}}</ref>{{,}}<ref>{{Lien web
 | url = https://arstechnica.com/security/2014/06/google-unveils-independent-fork-of-openssl-called-boringssl/
 | titre = Google unveils independent “fork” of OpenSSL called “BoringSSL”
 | auteur = Dan Goodin
 | date = 21 juin 2014
 | année = 2014
 | mois = juin
 | site = arstechnica.com
 | éditeur = [[Ars Technica]]
 | en ligne le = 21 juin 2014
 | consulté le = 6 juillet 2014
}}</ref>.

Le {{date-|19 janvier 2017}} il a été annoncé que Akamai apporte un soutien financier à la fondation OpenSSL pour accélérer le développement de la version 1.1.1 qui sera la première à inclure la possibilité d’utiliser TLS 1.3<ref>{{Lien web
 |url = https://mta.openssl.org/pipermail/openssl-announce/2017-January/000090.html
 |titre = [openssl-announce] Akamai sponsors TLS 1.3
 |langue = en
 |site = mta.openssl.org
 |date = 19 janvier 2017
 |consulté le = 16 février 2017
 |auteur = Steve Marquess}}</ref>. OpenSSL 1.1.1 devait être initialement disponible début avril 2017 mais les spécifications de TLS 1.3 n’étant pas finalisées sa sortie est différée. Une première version beta est finalement apparue le {{date-|13 février 2018}} et le {{date-|11 Septembre 2018}} la release de la version 1.1.1 LTS (Long Term Support) voit enfin le jour avec le support du TLS 1.3.

=== Versions ===
{| class="wikitable mw-collapsible mw-collapsed" style="width:100%"
|+ Historique des versions majeures de OpenSSL
|-
! Version !! Date de sortie !! Commentaire !! Dernière version mineure
|-
| style="background-color:#fa8072;" | 0.9.1
| {{date-|23 décembre 1998}}
| Lancement du projet
| 0.9.1c ({{date-|4 mars 1999}})
|-
| style="background-color:#fa8072;" | 0.9.2
| {{date-|22 mars 1999}}
| 
| 0.9.2b ({{date-|6 avril 1999}})
|-
| style="background-color:#fa8072;" | 0.9.3
| {{date-|25 mai 1999}}
|
| 0.9.3a ({{date-|29 mai 1999}})
|-
| style="background-color:#fa8072;" | 0.9.4
| {{date-|9 août 1999}}
| 
| 0.9.4 ({{date-|9 août 1999}})
|-
| style="background-color:#fa8072;" | 0.9.5
| {{date-|28 février 2000}}
|
| 0.9.5a ({{date-|1 avril 2000}})
|-
| style="background-color:#fa8072;" | 0.9.6
| {{date-|24 septembre 2000}}
| 
| 0.9.6m ({{date-|17 mars 2004}})
|-
| style="background-color:#fa8072;" | 0.9.7
| {{date-|31 décembre 2002}}
| Support des [[Accélération matérielle|cartes accélératrices matérielles]]
| 0.9.7m ({{date-|23 février 2007}})
|-
| style="background-color:#fa8072;" | 0.9.8
| {{date-|5 juillet 2005}}
| 
| 0.9.8zh ({{date-|3 décembre 2015}})
|-
| style="background-color:#fa8072;" | 1.0.0
| {{date-|29 mars 2010}}
| 
| 1.0.0t ({{date-|3 décembre 2015}})
|-
| style="background-color:#fa8072;" | 1.0.1
| {{date-|14 mars 2012}}
| 
| 1.0.1u ({{date-|22 septembre 2016}})
|-
| style="background-color:orange;" | 1.0.2
| {{date-|24 février 2014}}
| Consultez le [https://www.openssl.org/news/openssl-1.0.2-notes.html changelog].
| 1.0.2t ({{date-|10 septembre 2019}})
|-
| style="background-color:#fa8072;" | 1.1.0
| {{date-|25 août 2016}}
| Consultez le [https://www.openssl.org/news/openssl-1.1.0-notes.html changelog].
| 1.1.0l ({{date-|10 septembre 2019}})
|-
| style="background-color:#A0E75A;" | '''1.1.1'''
| {{date-|11 septembre 2018}}
| Consultez le [https://www.openssl.org/news/openssl-1.1.1-notes.html changelog].
| 1.1.1d ({{date-|10 septembre 2019}})
|-
| colspan="4" |
{{Début de colonnes|taille=|nombre=4}}
{{Légende/Début}}
{{Légende|#fa8072|Ancienne version, non supportée}}
{{Légende|orange|Ancienne version, encore supporté}}
{{Légende|#A0E75A|Version actuelle}}
{{Légende|#87CEEB|Version future}}
{{Légende/Fin}}
{{Fin de colonnes}}
|}

== Algorithmes ==
OpenSSL supporte un grand nombre de :
* types de [[chiffrement]] :
: [[Advanced Encryption Standard|AES]], [[Blowfish]], [[Camellia (algorithme)|Camellia]], ChaCha20, [[SEED]], [[CAST-128]], [[Data Encryption Standard|DES]], [[International Data Encryption Algorithm|IDEA]], [[RC2]], [[RC4]], [[RC5 (chiffrement)|RC5]], [[Triple DES]], [[GOST 28147-89]]
* [[Fonction de hachage cryptographique|fonctions de hachage cryptographique]] :
: [[MD5]], [[MD4]], [[MD2]], [[SHA-1]], [[SHA-2]], [[RIPEMD-160]], [[MDC-2]], [[GOST R 34.11-94]]
* types de [[Cryptographie asymétrique|cryptographie à clé publique]] :
: [[chiffrement RSA|RSA]], [[Digital Signature Algorithm|DSA]], [[Échange de clés Diffie-Hellman|Diffie-Hellman]], [[Cryptographie sur les courbes elliptiques|courbe elliptique]], [[GOST R 34.10-2001]]

== Notes et références ==
{{Références}}

== Annexes ==
{{Autres projets
 | wikibooks  = OpenSSL
}}

=== Bibliographie ===
* {{Ouvrage|langue=en|auteur1=John Viega|auteur2=Matt Messier|auteur3=Pravir Chandra|titre=Network Security with OpenSSL|sous-titre=Cryptography for Secure Communications|lieu=Sebastopol, CA|éditeur=O'Reilly|année=2002|mois=juin|jour=15|numéro d'édition=1|année première édition=2002|pages totales=367|isbn=0-596-00270-X|isbn2=978-0-596-00270-1|oclc=49959243|lccn=2002025832}}

=== Articles connexes ===
* [[POODLE]], faille dans SSL version 3
* [[Heartbleed]]
* [[Suite cryptographique]]

=== Liens externes ===
* {{Site officiel}}

{{Palette|Logiciels de cryptographie}}
{{Portail|sécurité informatique|Logiciels libres|cryptologie|Télécommunications}}

[[Catégorie:Logiciel libre de sécurité informatique]]
[[Catégorie:Logiciel de cryptographie]]
