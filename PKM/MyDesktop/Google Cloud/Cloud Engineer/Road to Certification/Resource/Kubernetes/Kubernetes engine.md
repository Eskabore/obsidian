# Kubernetes Engine : Qwik Start

Tâche 1 : Définir une zone de calcul par défaut

`gcloud config set compute/zone us-central1-a`

Tâche 2 : Créer un cluster GKE
https://www.cloudskillsboost.google/focuses/878?locale=fr&parent=catalog

Remarque : Les noms de cluster doivent commencer par une lettre, se terminer par un caractère alphanumérique, et ne pas dépasser 40 caractères.

https://kubernetes.io/docs/concepts/overview/

Task 2. Create multiple web server instances
For this load balancing scenario, create three Compute Engine VM instances and install Apache on them, then add a firewall rule that allows HTTP traffic to reach the instances.

Verify that each instance is running with curl, replacing [IP_ADDRESS] with the IP address for each of your VMs:

Kubernetes cheat-sheet
https://kubernetes.io/docs/reference/kubectl/cheatsheet/

What is GKE ?
https://cloud.google.com/kubernetes-engine/docs?hl=fr

qwiklabs:
https://www.cloudskillsboost.google/quests/66



gcloud config set compute/zone us-east1-b
gcloud container clusters create nucleus-jumphost-webserver1 // kubeconfig genarated for nucleus-...
gcloud container clusters get-credentials nucleus-jumphost-webserver1 //fetch cluster endpoint and auth data
kubectl create deployment hello-app --image=gcr.io/google-samples/hello-app:2.0 //deployment.apps/hello-app created
kubectl expose deployment hello-app --type=LoadBalancer --port 8080 // service(load balancer) hello-app exposed
(kubectl get service)

