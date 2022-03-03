# Online Certificate Status Protocol 
**OCSP**, en français « *protocole de vérification de certificat en ligne* » est un [[Protocole de communication|protocole Internet]] utilisé pour valider un [[Certificat électronique|certificat numérique]]  [[X.509]]. OCSP est [[Standard Internet|standardisé]] par l'[[Internet Engineering Task Force|IETF]] dans la {{RFC|6960}}.

![[Pasted image 20201020131308.png]]
Ce schéma illustre comment la requête OCSP est formée et envoyée vers le serveur OCSP.

![[Pasted image 20201020131441.png]]
Ce schéma illustre comment la réponse OCSP est formée et envoyée vers le client OCSP. Cette réponse peut être : GOOD, REVOKED ou UNKNOWN.

Online Certificate Status Protocol (OCSP, en français « protocole de vérification de certificat en ligne » est un [[Protocole de communication|protocole Internet]] utilisé pour valider un [[Certificat électronique|certificat numérique]]  [[X.509]]. OCSP est [[Standard Internet|standardisé]] par l'[[Internet Engineering Task Force|IETF]] dans la {{RFC|6960}}.

Ce protocole est une alternative réglant certains des problèmes posés par les [[Liste de révocation de certificats|listes de révocation de certificats]] (CRL) dans une [[infrastructure à clés publiques]] (PKI). Les messages OCSP sont codés en [[ASN.1]] et peuvent être transportés par différents [[Couche application|protocoles applicatifs]] ([[Simple Mail Transfer Protocol|SMTP]], [[Lightweight Directory Access Protocol|LDAP]], [[Hypertext Transfer Protocol|HTTP]], etc.). Les communications OCSP étant de la forme « requête/réponse », les [[Serveur informatique|serveurs]] OCSP sont appelés répondeurs OCSP.

## Centralisation de la validation des certificats 
La [[validation des certificats]] est une tâche plus complexe qu'il n'y paraît. Elle est traditionnellement effectuée par le [[Client (informatique)|client]] de la PKI. Une grande confiance est ainsi accordée au client pour ce traitement critique. Or une grande partie des clients PKI effectuent leur validation de manière encore incomplète ou imparfaite (en [[2006 en informatique|2006]]). Par exemple, la non-automatisation de la récupération des CRL par les [[Navigateur web|navigateurs web]] pose un problème quant à la mise à jour des informations.

OCSP permet de centraliser cette tâche au sein d'une PKI. Afin de valider un certificat, le client n'a plus à communiquer qu'avec une seule entité : le répondeur OCSP. On peut parler aussi d'autorité de validation (VA pour ''{{lang|en|Validation Authorithy}}'').

## Avantage par rapport aux CRL 
Plusieurs raisons peuvent amener à préférer le protocole OCSP aux traditionnelles CRL :

* OCSP fournit des informations sur le statut du certificat plus à jour ;
* avec OCSP, le client n'a plus besoin de récupérer lui-même la CRL. Vu la taille parfois importante de cette CRL, cela allège le trafic réseau ;
* le client n'a plus à traiter lui-même la CRL. Cela permet l'économie d'un traitement relativement complexe ;
* le répondeur OCSP permet de proposer des mécanismes de facturation au vendeur, et non pas à l'acheteur ;
* les CRL peuvent être comparées à une « liste de mauvais clients » d'une banque. Cela constitue une fuite d'information non souhaitable.

## Autres avantages ==
OCSP présente d'autres avantages en termes de déploiement des clients et d'architecture réseau :

* c'est le répondeur OCSP qui récupère les différents certificats constitutifs d'une [[chaîne de certificats]] et les CRL. Cela simplifie les communications, car le client ne dispose pas forcément de la connectivité nécessaire à leur récupération (filtrage par un [[Pare-feu (informatique)|pare-feu]], etc.) ;
* le répondeur OCSP valide la remontée du chemin de certification. Le client fait donc l'économie de cet autre traitement consommateur en ressources ;
* grâce au chaînage des répondeurs OCSP, le client ne communique qu'avec un seul répondeur, digne de confiance. Cela épargne au client des communications plus complexes.

## Exemple d'utilisation
1. [[Alice et Bob]] sont des clients d'Ivan, l'[[autorité de certification]] (AC). Ils possèdent le certificat de clé publique d'Ivan ;
2. Alice et Bob possèdent chacun un certificat de clé publique émis par Ivan ;
3. Alice veut effectuer une transaction avec Bob. Elle lui envoie donc son certificat contenant sa [[Clé de chiffrement|clé publique]] ;
4. Bob veut s'assurer que le certificat d'Alice n'a pas été révoqué. Il crée une ''requête OCSP'' contenant l'[[Somme de contrôle|empreinte]] du certificat d'Alice et l'envoie à Ivan ;
5. Le répondeur OCSP d'Ivan vérifie le statut du certificat d'Alice dans la base de données de la CA ;
6. Le répondeur OCSP confirme la validité du certificat d'Alice en envoyant une ''réponse OCSP'' positive [[Signature numérique|signée]] à Bob ;
7. Bob vérifie la signature cryptographique de la réponse ;
8. Bob effectue sa transaction avec Alice.

## Alternative à OCSP : le protocole SCVP 
Le {{Lien|trad=SCVP|fr=Server-based Certificate Validation Protocol}} (SCVP) est une alternative à OCSP.

## Notes et références ==
{{Références}}

== Annexes ==
=== Articles connexes ===
* [[Agrafage OCSP]]

=== Liens externes ===
* [http://www.e-xpertsolutions.com/images/pdf/Cotte.pdf Mise en œuvre d'un client OCSP pour Apache / HES Geneva & e-Xpert Solutions] {{pdf}}
* {{en}} [http://hosteddocs.ittoolbox.com/TB100104.pdf Implementing Online Certificate Status Protocol / Tirthankar Barari] {{pdf}}
* {{en}} [http://www.ietf.org/html.charters/pkix-charter.html Internet-Drafts]
* {{en}} [http://datatracker.ietf.org/doc/rfc5055/  Spécifications du standard]
* {{en}} [http://www.ascertia.com/products/adss-ocsp-server  Vérification en ligne de certificat de statut]

{{Portail|cryptologie|sécurité informatique}}

[[Catégorie:Protocole réseau]]
[[Catégorie:Protocole de communication chiffrée]]
[[Catégorie:Gestion de clé]]
