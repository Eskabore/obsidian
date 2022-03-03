Transfer Layer Security

{{voir homonymes|TLS|SSL}}
{{Langue du titre|en}}La '''''{{Langue|en|Transport Layer Security}}''''' ''('''TLS''')'' ou « Sécurité de la couche de transport », et son prédécesseur la '''''{{Langue|en|Secure Sockets Layer}}''''' ''('''SSL''')'' ou « Couche de ''[[Socket|sockets]]'' sécurisée »<ref>{{Lien web|langue=|auteur1=|titre=Page sur la SSL|url=https://www.commentcamarche.net/contents/215-ssl-secure-sockets-layers|site=commentcamarche.net|périodique=|date=19/05/2015|consulté le=23/05/2020}}</ref>, sont des [[protocole de communication|protocoles]] de sécurisation des échanges par [[réseau informatique]], notamment par [[Internet]]. Le protocole ''SSL'' a été développé à l'origine par [[Netscape Communications Corporation]] pour son navigateur.  L'organisme de normalisation [[Internet Engineering Task Force|''IETF'']] en a poursuivi le développement en le rebaptisant ''{{Langue|en|Transport Layer Security}}'' ''(TLS)''. On parle parfois de ''SSL/TLS'' pour désigner indifféremment ''SSL'' ou ''TLS''.

La ''TLS'' (ou ''SSL'') fonctionne suivant un mode [[client-serveur]]. Il permet de satisfaire les objectifs de sécurité suivants :

* l'[[authentification]] du serveur ;
* la [[confidentialité]] des données échangées (ou session [[chiffrement|chiffrée]]) ;
* l'[[Intégrité (cryptographie)|intégrité]] des données échangées ;
* de manière optionnelle, l'[[authentification]] du client (mais dans la réalité celle-ci est souvent assurée par la couche applicative).

Le protocole est très largement utilisé, et sa mise en œuvre est facilitée par le fait que les protocoles de la couche application, comme le ''[[HTTP]]'', n'ont pas à être profondément modifiés pour utiliser une connexion sécurisée, mais seulement implémentés au-dessus de la ''SSL/TLS'', ce qui pour le ''HTTP'' a donné le protocole ''[[HTTPS]]''.

Un groupe de travail spécial de l'<nowiki/>''IETF'' a permis la création de la ''TLS'' et de son équivalent en mode non-connecté [[User Datagram Protocol|''UDP'']], la ''[[DTLS]]''. Depuis qu'il est repris par l'''IETF'', le protocole ''TLS'' a connu quatre versions : ''TLS v1.0'' en 1999, ''TLS v1.1'' en 2006, ''TLS v1.2'' en 2008 et ''TLS v1.3'' en 2018<ref>{{Lien web|langue=en-US|titre=TLS 1.3 Published: in Firefox Today|url=https://blog.mozilla.org/security/2018/08/13/tls-1-3-published-in-firefox-today/|site=Mozilla Security Blog|consulté le=2018-08-13}}</ref>.

== Présentation ==
Au fur et à mesure qu'[[Internet]] se développait, de plus en plus de sociétés commerciales se mirent à proposer des achats en ligne pour les particuliers. L'offre se mit à croître régulièrement, mais le chiffre d'affaires dégagé par le [[commerce électronique]] restait modeste tant que les clients n'avaient pas une confiance suffisante dans le paiement par carte bancaire. Une des façons de sécuriser ce paiement fut d'utiliser des protocoles d'authentification et de chiffrement tels que SSL. La session chiffrée est utilisée pour empêcher un tiers d'intercepter des données sensibles transitant par le réseau : numéro de carte lors d'un paiement par [[carte bancaire]], [[mot de passe]] lorsque l'utilisateur s'identifie sur un site… 

Avec un système SSL, la sécurité a été sensiblement améliorée et les risques pour le client grandement réduits, comparés à l'époque où le paiement par internet était encore une technologie émergente. Bien que, comme tout système de chiffrement, le SSL/TLS ne pourra jamais être totalement infaillible, le grand nombre de [[banque]]s et de sites de [[commerce électronique]] l'utilisant pour protéger les transactions de leurs clients peut être considéré comme un gage de sa résistance aux attaques malveillantes.

En 2009, TLS est utilisé par la plupart des [[Serveur web|serveurs web]]. L'internaute peut reconnaître qu'une [[Transaction informatique|transaction]] est chiffrée à plusieurs signes :
* l'URL dans la barre d'adresse commence par http'''s''' ( <nowiki>https://...</nowiki>) et non http ;
* affichage d'une clé ou d'un cadenas, dont l'emplacement varie selon le navigateur : généralement à gauche de la barre d'adresse mais aussi dans la barre inférieure de la fenêtre ;
* les navigateurs peuvent ajouter d'autres signes, comme le passage en jaune de la barre d'adresse (cas de Firefox sur d'anciennes versions).

== Historique ==
=== Protocole SSL ===
La première version de SSL parue, la SSL 2.0, possédait un certain nombre de défauts de sécurité, parmi lesquels la possibilité de forcer l'utilisation d'algorithmes de chiffrement plus faibles, ou bien une absence de protection pour la prise de contact et la possibilité pour un attaquant d'exécuter des attaques par troncature<ref>http://www.securityfocus.com/infocus/1818</ref>. Les protocoles PCT 1.0, puis SSL 3.0, furent développés pour résoudre la majeure partie de ces problèmes, le second devenant rapidement le protocole le plus populaire pour sécuriser les échanges sur Internet.

* [[1994]]<ref>http://www.authsecu.com/ssl-tls/ssl-tls.php</ref> : '''SSL 1.0'''. Cette première spécification du protocole développé par Netscape resta théorique et ne fut jamais mise en œuvre<ref>http://www.ehow.com/facts_5597610_ssl-2_0-security_.html</ref>.
* [[Février 1995]] : publication de la norme '''SSL 2.0''', première version de SSL réellement utilisée. Elle fut également la première implémentation de SSL bannie, en mars 2011 ([[:rfc:6176|RFC 6176]]).
* [[Novembre 1996]] : '''SSL 3.0''', la dernière version de SSL, qui inspirera son successeur TLS. Ses spécifications sont rééditées en août 2008 dans la {{RFC|6101|titre=The Secure Sockets Layer (SSL) Protocol Version 3.0|date=août 2011}}. Le protocole est banni en [[2014]], à la suite de la publication de la faille [[POODLE]], ce bannissement est définitivement ratifié en juin 2015 ([[:rfc:7568|RFC 7568]]).

=== Protocole TLS ===
Le protocole TLS n'est pas structurellement différent de la version 3 de SSL, mais des modifications dans l'utilisation des [[fonction de hachage|fonctions de hachage]] font que les deux protocoles ne sont pas directement interopérables. Cependant TLS, comme SSLv3, intègre un mécanisme de compatibilité ascendante avec les versions précédentes, c'est-à-dire qu'au début de la phase de négociation, le client et le serveur négocient la « meilleure » version du protocole disponible par tous deux. Pour des raisons de sécurité, détaillées dans la [[:rfc:6176|RFC 6176]] parue en 2011, la compatibilité de TLS avec la version 2 de SSL est abandonnée<ref>Levillain 2012, ''SSL/TLS : état des lieux et recommandations'', {{p.|7-8}} (voir bibliographie).</ref>.

La génération des [[Cryptographie symétrique|clés symétriques]] est un peu plus sécurisée dans TLS que dans SSLv3 dans la mesure où aucune étape de l'algorithme ne repose uniquement sur [[MD5]] pour lequel sont apparues des faiblesses en [[cryptanalyse]].

* [[Janvier 1999]] : Publication de la norme '''TLS 1.0'''. TLS est le protocole développé par l'IETF pour succéder au SSL<ref>[[:rfc:2246|RFC 2246]]</ref>. Plusieurs améliorations lui sont apportées par la suite :
**[[Octobre 1999]] : ajout du protocole [[Kerberos (protocole)|Kerberos]] à TLS<ref>[[:rfc:2712|RFC 2712]]</ref> ;
** [[Mai 2000]] : passage à TLS lors d'une session [[Hypertext Transfer Protocol|HTTP]] 1.1<ref>[[:rfc:2817|RFC 2817]] et [[:rfc:2818|RFC 2818]]</ref> ;
** [[Juin 2002]] : support du système de chiffrement [[Standard de chiffrement avancé|AES]] par TLS<ref>[[:rfc:3268|RFC 3268]]</ref>.
* [[Avril 2006]] : publication de la norme '''TLS 1.1'''<ref>[[:rfc:4346|RFC 4346]]</ref>.
* [[Août 2008]] : publication de la norme '''TLS 1.2'''<ref>[[:rfc:5246|RFC 5246]]</ref>.
* [[Mars 2011]] ([[:rfc:6176|RFC 6176]]) : abandon de la compatibilité avec SSLv2 pour toutes les versions de TLS.
* [[Avril 2014]] : {{1er}} brouillon pour '''TLS 1.3'''<ref>{{lien web|url=https://tools.ietf.org/html/draft-ietf-tls-rfc5246-bis-00|titre=The Transport Layer Security (TLS) Protocol Version 1.3 — draft-ietf-tls-rfc5246-bis-00|site=ietf.org}}</ref>.
* [[Juin 2015]] : abandon de la compatibilité avec SSLv2 et SSLv3<ref>[[:rfc:7568|RFC 7568]]</ref>.
* [[Mars 2018]] : Nouveau brouillon de '''TLS 1.3'''<ref>{{lien web|url=https://tools.ietf.org/html/draft-ietf-tls-tls13-28|titre=The Transport Layer Security (TLS) Protocol Version 1.3 — draft-ietf-tls-tls13-28|site=IETF.org}}</ref>
*[[Août 2018]] : publication de la norme '''TLS 1.3'''<ref>[[:rfc:8446|RFC 8446]]</ref>{{,}}<ref>{{Lien web|langue=en|titre=TLS 1.3 updates the most important security protocol on the Internet, delivering superior privacy, security, and performance.|url=https://www.ietf.org/blog/tls13/|site=IETF|date=|consulté le=2018-08-13}}</ref>. Les principales évolutions sont l'abandon du support des algorithmes trop faibles comme MD4, RC4, DSA ou SHA-224, une négociation en moins d'étapes (plus rapide par rapport à TLS 1.2), et une réduction de la vulnérabilité aux attaques par replis.

La première version professionnelle de TLS 1.3 est [[wolfSSL]], publiée en mai 2017<ref>{{Article|langue=français|auteur1=|titre=Sécurité : le protocole TLS 1.3 dispose déjà d’une version commerciale signée WolfSSL|périodique=L'Embarqué|date=le 20 septembre 2018|issn=|lire en ligne=http://www.lembarque.com/securite-le-protocole-tls-1-3-dispose-deja-dune-version-commerciale-signee-wolfssl_007879|pages=}}</ref>.

== TLS dans les applications industrielles ==
Les réseaux industriels modernes fonctionnant en TCP/IP utilisent de plus en plus la sécurisation TLS. Ainsi les protocoles pour le contrôle commande des réseaux électriques comme IEC-61850, IEC-60870 et DNP3 associent TLS pour se protéger des cyberattaques.

== Mise en œuvre de TLS par les applications ==
=== Support par les navigateurs ===
La plupart des navigateurs sont aussi des clients TLS. Les navigateurs web supportant par défaut la dernière version TLS 1.2 sont :

* Apple Safari 7 et suivants ;
* Google Chrome et Chromium 30 et suivants ;
* Microsoft Internet Explorer 11 et suivants ;
* Mozilla Firefox 27 et suivants ;
* Opera 17 et suivants ;
* Microsoft Edge.

Les principaux développeurs de navigateurs web ont annoncé mettre fin à leur support de TLS 1.1 et versions précédentes à partir du printemps 2020<ref>{{Lien web|langue=|auteur1=Catalin Cimpanu|titre=Les navigateurs bloquent l'accès aux sites HTTPS utilisant les protocoles TLS 1.0 et 1.1|url=https://www.zdnet.fr/actualites/les-navigateurs-bloquent-l-acces-aux-sites-https-utilisant-les-protocoles-tls-10-et-11-39900171.htm|site=zdnet.fr|périodique=|date=5 mars 2020|consulté le=10 avril 2020}}</ref>.

[[HTTPS Everywhere]] est une [[extension (logiciel)|extension]] pour [[navigateur web]] qui permet d'étendre l'usage du SSL/TLS sur certains sites. Elle active le chiffrement sur les pages où il est normalement désactivé. Ceci ne peut évidemment fonctionner que si le site en question supporte déjà TLS<ref>http://assiste.com/HTTPS_Everywhere.html</ref>. L'extension est maintenue conjointement par le [[projet Tor]] et l'[[EFF]] depuis 2010<ref>{{en}} [https://www.eff.org/deeplinks/2010/06/encrypt-web-https-everywhere-firefox-extension « Encrypt the Web with the HTTPS Everywhere Firefox Extension »], ''eff.org'', 17 juin 2010.</ref>.

=== Authentification par certificat numérique ===
Dans la majorité des cas, l'utilisateur authentifie le serveur TLS sur lequel il se connecte. Cette authentification est réalisée par l'utilisation d'un [[certificat numérique]] [[X.509]] délivré par une [[autorité de certification]] (AC). Des applications web peuvent utiliser l'authentification du poste client en exploitant TLS. Il est alors possible d'offrir une authentification mutuelle entre le client et le serveur. Le certificat client peut être stocké au format logiciel sur le poste client ou fourni par un dispositif matériel ([[carte à puce]], token USB). Cette solution permet d'offrir des mécanismes d'[[authentification forte]].

=== Principe de fonctionnement dans les navigateurs web ===
![[Pasted image 20201020130035.png]]
Lorsqu'un utilisateur se connecte à un site web qui utilise TLSv1.2 (ou inférieur), les étapes suivantes ont lieu :
1. le navigateur du client envoie au serveur une demande de mise en place de connexion sécurisée par TLS.
2. Le serveur envoie au client son [[Certificat électronique|certificat]] : celui-ci contient sa [[clé publique]], ses informations (nom de la société, adresse postale, pays, e-mail de contact...) ainsi qu'une signature numérique.
3. Le navigateur du client tente de vérifier la signature numérique du certificat du serveur en utilisant les clés publiques contenues dans les certificats des [[Autorité de certification|autorités de certifications]] (AC) intégrées par défaut dans le navigateur.
       3.1. Si l'une d'entre elles fonctionne, le navigateur web en déduit le nom de l'autorité de certification qui a signé le certificat envoyé par le serveur. Il vérifie que celui-ci n'est pas expiré puis envoie une [[Online Certificate Status Protocol|demande OCSP]] à cette autorité pour vérifier que le certificat du serveur n'a pas été révoqué.
       3.2. Si aucune d'entre elles ne fonctionne, le navigateur web tente de vérifier la signature numérique du certificat du serveur à l'aide de la [[Certificat électronique#Comment g.C3.A9n.C3.A9rer une cl.C3.A9 publique|clé publique]] contenue dans celui-ci.
              3.2.1. En cas de réussite, cela signifie que le serveur web a lui-même signé son certificat. Un message d'avertissement s'affiche alors sur le navigateur web, prévenant l'utilisateur que l'identité du serveur n'a pas été vérifiée par une autorité de certification et qu'il peut donc s'agir potentiellement d'un site frauduleux.
              3.2.2. En cas d'échec, le certificat est invalide, la connexion ne peut pas aboutir.
4. Le navigateur du client génère une [[Cryptographie symétrique|clé de chiffrement symétrique]], appelée [[clé de session]], qu'il chiffre à l'aide de la clé publique contenue dans le certificat du serveur puis transmet cette clé de session au serveur.
5. Le serveur déchiffre la clé de session envoyée par le client grâce à sa clé privée. 
6. Le client et le serveur commencent à s'échanger des données en chiffrant celles-ci avec la clé de session qu'ils ont en commun. **On considère à partir de ce moment que la connexion TLS est alors établie entre le client et le serveur.** 
7. Une fois la connexion terminée (déconnexion volontaire de l'utilisateur ou si durée d’inactivité trop élevée), le serveur révoque la clé de session.

**Optionnel** : si le serveur nécessite également que le client s'authentifie, le client lui envoie son propre certificat en même temps que la clé de session. Le serveur procède alors comme détaillé au point n°3 pour vérifier que le certificat du client est valide.

'''Depuis TLSv1.3''', l'échange de la clé de session doit obligatoirement se faire via Diffie-Hellman avec courbe elliptiques ([[Échange de clés Diffie-Hellman basé sur les courbes elliptiques|ECDHE]]) : le RSA ne peut plus être utilisé pour cela.

== Attaques ==
{{Section incomplète}}
En 2001, [[Serge Vaudenay]] a découvert une [[attaque par canal auxiliaire]] contre SSL. À la suite de la mise à jour du standard, cette attaque est maintenant totalement dépassée et ne peut plus être utilisée. Cette attaque profitait d'une mauvaise implémentation du remplissage qui était utilisé lorsque les entrées avaient une taille variable. Le [[mode de chiffrement]] CBC ([[Cipher Block Chaining|cipher block chaining]]) consiste à diviser les données en plusieurs blocs de même taille et à les chiffrer de manière chaînée (le résultat précédent est utilisé lors du chiffrement suivant). L'attaque de Vaudenay utilisait les temps de réponse des serveurs en cas d'erreurs lors du remplissage. Avec un peu de chance, il était possible de découvrir les dernières données qui avaient été envoyées et de les récupérer. L'attaque était toutefois inopérante avec un chiffrement de type [[RC4]] et n'était valable que sous certaines conditions. Elle a malgré tout été utilisée avec succès contre certains « webmails » qui envoyaient plusieurs fois les mêmes données{{référence nécessaire}}.

En mars 2014, une [[Bug (informatique)|vulnérabilité logicielle]] fut découverte dans la bibliothèque OpenSSL : [[Heartbleed]], introduite par erreur dans une mise à jour d'[[OpenSSL]] réalisée deux ans plus tôt. Cette faille a été largement médiatisée, y compris dans les médias généralistes<ref>[http://www.rfi.fr/technologies/20140410-heartbleed-hackers-faille-securite-dashlane/ RFI]</ref>{{,}}<ref>[https://www.lemonde.fr/faille-heartbleed/ Le Monde (tous les articles)]</ref>{{,}}<ref>[http://www.lefigaro.fr/secteur/high-tech/2014/04/11/01007-20140411ARTFIG00496-heartbleed-la-faille-qui-frappe-le-coeur-de-la-securite-sur-internet.php?pagination=2 Le Figaro]</ref>, comme l'avait été notamment le [[ver informatique|ver]] [[I love you (ver informatique)|I love you]] en 2000.
{{Article détaillé|Heartbleed}}

Le 15 octobre 2014, une équipe de recherche chez Google a identifié une faille dans la conception de SSLv3 permettant de déchiffrer le contenu. Cette attaque a été nommée POODLE pour ''{{lang|en|Padding Oracle On Downgraded Legacy}}''. Elle est présente uniquement dans SSLv3.
{{Article détaillé|POODLE}}Le 2 mars 2016<ref>{{Lien web|nom1=Gavois|prénom1=Sébastien|titre=DROWN  : quand des failles SSLv2 permettent de décrypter des connexions TLS|url=http://www.nextinpact.com/news/98844-drown-quand-failles-sslv2-permettent-decrypter-connexions-tls.htm|site=www.nextinpact.com|consulté le=2016-03-10}}</ref>, les chercheurs détaillent la faille baptisée [[DROWN]]. Elle consiste à utiliser l'ancienne version SSL v2 afin de déchiffrer la technologie TLS v1.2.

## Spécifications techniques 


### Réseau 
![[Pasted image 20201020130727.png]]
Dans la pile de protocole [[TCP/IP]], SSL se situe entre la couche application (comme [[HTTP]], [[File Transfer Protocol|FTP]], [[SMTP]], etc.) et la [[Couche de transport|couche transport]] [[TCP|TCP(Transmission Control Protocol)]].
<br />Son utilisation la plus commune reste cependant en dessous de HTTP. Le protocole SSL est implémenté par la [[Couche de session|couche session]] de la pile, ce qui a deux conséquences&nbsp;:
* pour toute application existante utilisant TCP, il peut exister une application utilisant SSL. Par exemple, l'application HTTPS correspond à HTTP au-dessus de SSL&nbsp;ou encore [[DNS over TLS]] ;
* une application SSL se voit attribuer un nouveau numéro de port par l'[[Internet Assigned Numbers Authority|IANA]]. Par exemple HTTPS est associé au port 443. Dans certains cas, le même port est utilisé avec et sans SSL. Dans ce cas, la connexion est initiée en mode non chiffré. Le tunnel est ensuite mis en place au moyen du mécanisme StartTLS. C'est le cas, par exemple, des protocoles [[Internet_Message_Access_Protocol|IMAP]], [[Simple_Mail_Transfer_Protocol|SMTP]] ou [[Lightweight_Directory_Access_Protocol#StartTLS|LDAP]].

### Authentification 
L'authentification du serveur et du client peuvent se faire par le biais de [[Certificat électronique|certificats électroniques]] soit par le biais de [[Pre-shared key|secrets pré-partagés]] (ou ''Pre-shared key)''<ref>{{Lien web|langue=|auteur1=IETF|titre=Pre-Shared Key Ciphersuites for Transport Layer Security (TLS) (RFC 4279)|url=https://tools.ietf.org/html/rfc4279|site=tools.ietf.org|périodique=|date=Décembre 2005|consulté le=10 avril 2020}}</ref>''.'' L'authentification est optionnelle.[[Fichier:Handshake_TLS.png|alt=|vignette|Création d'une session TLS 1.2]]

### Détails du protocole 
Les messages échangés par le biais de TLS sont appelés ''record.'' En général, ces messages sont encapsulés dans des datagrammes TCP. Une variante sur UDP existe et s'appelle [[Datagram Transport Layer Security|DTLS]]. Il existe quatre types de records :

* Les messages [[Handshake]] permettent de négocier la version TLS, les suites cryptographiques utilisées (ou ''cipher suites''), les algorithmes de compression, permettent le partage d'un secret (ou ''pre-master secret'') et de données aléatoires à partir duquel sera générée la clef de session (ou ''master secret'') pour chiffrer les données et, de façon optionnelle, l'authentification du serveur et du client
* Les messages de type ''Alert'' fournissent des erreurs et leur sévérité : ''warning'' ou ''fatal''. Toute erreur fatale a pour conséquence la terminaison de la session
* Les messages de type ''Change Cipher Spec'' indiquent le changement de suites cryptographiques dans les échanges
* Les messages ''Application data'' correspondent aux données chiffrées et compressées suivant les paramètres de chiffrement et de compression préalablement établis entre le client et le serveur

### Cryptographie 
La sécurité est réalisée d'une part par un [[chiffrement asymétrique]], comme le [[chiffrement RSA]], qui permet, après authentification de la clé publique du serveur, la constitution d'un [[secret partagé]] entre le client et le serveur, d'autre part par un [[chiffrement symétrique]] (beaucoup plus rapide que les chiffrements asymétriques), comme l'[[Advanced Encryption Standard|AES]], qui est utilisé dans la phase d'échange de données, les clés de chiffrement symétrique étant calculées à partir du secret partagé. Une [[fonction de hachage]], comme [[SHA-1]], est également utilisée, entre autres, pour assurer l'intégrité et l'authentification des données (via par exemple [[HMAC]]).

Plus exactement, les messages ''Application data'' sont chiffrés grâce à une clé de chiffrement et un algorithme de chiffrement symétrique par bloc comme AES 128 ou par flux comme [[Salsa20|CHACHA20]]. Ils sont authentifiés soit grâce une fonction [[HMAC]] soit directement grâce au [[Mode d'opération (cryptographie)|mode d'opération]] du chiffrement symétrique par bloc.

Les clés de chiffrement et les clés HMAC sont générées à partir d'un secret échangé entre les deux pairs (''pre-master secret)'', les données aléatoires échangées durant la phase d'''Handshake'' et l'utilisation d'une [[Fonction de dérivation de clé|fonction de dérivation des clés]] se basant sur HMAC. Cet échange de secret peut être authentifié (ou non) via l'utilisation d"un algorithme de [[signature numérique]] comme [[Digital Signature Algorithm|DSA]] ou l'algorithme RSA.

Au total, il y a cinq types de clés cryptographiques utilisées lors d'une session TLS :

* Clés publiques/privées Diffie-Hellman du serveur et du client : pour l'échange du secret via l'algorithme Diffie-Hellman, si utilisé
* Clés privées du serveur et du client : pour signer les données envoyées lors de la phase d'échange du secret. La signature des données est optionnelle et dépend de la négociation des suites cryptographiques
* Clés publiques du serveur et du client : pour vérifier l'authenticité du pair lors de la phase d'échange du secret. La vérification est optionnelle et dépend de la négociation des suites cryptographiques. Dans le cas où l'échange du secret est réalisé par RSA et non Diffie-Hellman, le secret est chiffré avec la clé publique du serveur avant d'être envoyé par le client. Ces clés sont fournies lors de la phase de Handshake via les [[Certificat électronique|certificats électroniques]]
* Clés de chiffrement du serveur et du client : pour chiffrer les données applicatives. Selon les fonctions de chiffrement utilisées, elles peuvent aussi permettre d'authentifier les données applicatives
* Clés MAC du serveur et du client : pour authentifier les données applicatives si la fonction de chiffrement de le permet pas

Les suites cryptographiques utilisées ont le format suivant :

* Pour TLS 1.2 : TLS_KE_CIPHER_HASH.
* Pour TLS 1.3 : TLS_CIPHER_HASH

où KE indique un algorithme d'échanges de secrets, CIPHER un algorithme de chiffrement symétrique, et HASH une [[fonction de hachage]]. La fonction HMAC est dérivée de la fonction de hachage.

Par exemple, la suite cryptographique TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 indique que le pair peut utiliser l'algorithme d'échange de clefs Diffie-Hellman éphémère sur [[Courbe elliptique|courbes elliptiques]] authentifié par l'algorithme de signature [[Elliptic curve digital signature algorithm|ECDSA]], l’algorithme de chiffrement symétrique AES 128 en mode [[Galois/Counter Mode|GCM]] et la fonction de hachage SHA256.

Dans la version 1.2, l'algorithme d'échanges de secrets peut être RSA ou une variante de l'algorithme [[Échange de clés Diffie-Hellman|Diffie-Hellman]] (authentifié ou non, éphémère ou non, sur courbes elliptiques ou non)  alors que pour la version 1.3 seul l'algorithme Diffie-Hellman éphémère est autorisé et la fonction de signature numérique est précisée dans des extensions des messages ClientHello, ServerHello et HelloRetryRequest de la phase de ''Handhsake''.

## Notes et références 
### Notes 
{{Références|groupe=note}}

### Références
{{Références}}

== Voir aussi ==
=== Bibliographie ===
* {{en}} Eric Rescorla, ''SSL and TLS, Designing and Building Secure Systems'', Addison Wesley, 2001.
* Olivier Levillain, 2012, ''SSL/TLS : état des lieux et recommandations'', [[ANSSI]] 2012, [http://www.ssi.gouv.fr/agence/publication/ssltls-etat-des-lieux-et-recommandations/].
* Olivier Levillain, 2015, ''SSL/TLS, 3 ans plus tard'', [[ANSSI]] 2015, [http://www.ssi.gouv.fr/agence/publication/ssltls-3-ans-plus-tard/].

=== Articles connexes ===
{{Colonne|nombre=2|
* [[Secure Electronic Transaction|SET]] : protocole destiné spécialement à sécuriser les transactions Internet de paiement par carte bancaire.
* [[Chiffrement]]
* [[Authentification]]
* [[Authentification forte]]
* [[Protocole de vérification en ligne de certificat]]
* [[Port hopping]]
* Pour les [[mise en œuvre|implémentations]], voir :
** [[OpenSSL]] ;
** [[GnuTLS]] ;
** [[Java Secure Socket Extension|JSSE]] pour [[Java_(langage)|Java]].
* [[HTTP Strict Transport Security]]
}}
* [[Certificat électronique#Comment g.C3.A9n.C3.A9rer une cl.C3.A9 publique|Comment générer une clé publique]]
{{Palette|Modèle OSI|Logiciels de cryptographie}}
{{Portail|sécurité informatique|Télécommunications}}

[[Catégorie:Protocole réseau sur la couche session]]
[[Catégorie:Protocole de communication chiffrée]]
