# Deployment diagram
Tags: #deployment #diagram #mermaid 

A **deployment diagram** in the [[Unified Modeling Language]] models the physical deployment of artifacts on nodes.

    
## Class Diagram

```mermaid
classDiagram
    Animal <|-- Duck
    Animal <|-- Fish
    Animal <|-- Zebra
    Animal : +int age
    Animal : +String gender
    Animal: +isMammal()
    Animal: +mate()
    class Duck{
      +String beakColor
      +swim()
      +quack()
    }
    class Fish{
      -int sizeInFeet
      -canEat()
    }
    class Zebra{
      +bool is_wild
      +run()
    }
    
```

## Graph
           
```mermaid

graph TD

Debut --> CheminA 

CheminA --> CheminB

CheminA --> CheminC

CheminC --> Object1

CheminB --> Object1

Object1 --> Fin

Fin --> PartD

PartD --> Arrivee

```






