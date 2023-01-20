Trailhead [page](https://trailhead.salesforce.com/content/learn/modules/apex-basics-for-admins/get-started-with-apex)


## Write Pseudocode
## Code Commenting
## System.debug
![[Pasted image 20220706223023.png]]
## [Collections](https://trailhead.salesforce.com/content/learn/modules/apex-basics-for-admins/use-collections?trailmix_creator_id=satyaharsheetha&trailmix_slug=apex-class-triggers)
A collection is a type of variable that can store multiple items. In our tea example, we have a sugar bowl with several sugar cubes inside it. The sugar bowl is considered a collection and the sugar cubes are items that are stored in that collection.
![[Pasted image 20220707005513.png]]
>There are 3 typesof **collections**: ==**lists, sets** and **maps**==

Lists
An Apex list is an ordered group of items of the same type, like a shopping list. 

1. Tea
2. Sugar
3. Honey
4. Milk

> Each item in the shopping list is a string, and each item has a position within the list. To declare a list you need a few things. You will use the ==list== **reserved word**, the **data type** (all items must be the same data type) within the <> characters, and the **reserved word new**. At the end of this statement there are required parentheses. 
![[Pasted image 20220707011127.png]]

## Declare an empty List
1. In the Developer Console, click **Debug | Open Execute Anonymous Window**.
2. Copy this code and paste it into the Enter Apex Code window
```java
//Declare the groceries list
List<String> groceries = new List<String>();
  
//The output for this statement is an empty list, ().
System.debug('Groceries Value: ' + groceries);
```
3. Select the **Open log** checkbox and then click **Execute**. The Execution Log opens, displaying the result of running your code.
4. Select the **Debug Only** checkbox at the bottom of the window.
>  When you ran the code, you probably noticed that the output was (). Because you haven’t added anything to the list, it’s empty. When you declared the groceries list, you created a single empty space, ready for items to be added. 
![[Pasted image 20220707012636.png]]
## Declare a List with a Set Size
> If ==we know exactly how long our list needs to be, we can set the size when we declare the list==. We do this by including the size in brackets, [ ], after the data type, like this: 
![[Pasted image 20220707012808.png]]


## Initialize a List
Initializing a list is assigning initial values to a list. There are two ways to add items to a list:
1. Declare and initialize a list.
```java
//Sets the first item in the list to 'Tea'
List<String> groceries = new List<String>{'Tea'}; 
```
2. Declare an empty list and add values later
```java
List<String> groceries = new List<String>();
groceries.add('Tea');
```
#### Declare and Initialize a List
The syntax for initializing a list with values is similar to declaring an empty list. The difference is that instead of using parenthesis (( ) ), you use curly braces ( { } ) to add values. 
1. In the Developer Console, click Debug | Open Execute Anonymous Window.
2. Copy this code and paste it into the Enter Apex Code window
```java
//Declare the groceries list
List<String> groceries = new List<String>{'Tea','Sugar','Honey','Milk'};
  
//The output for this statement is Tea, Sugar, Honey, Milk
System.debug('Groceries: ' + groceries);
```
3. Select the Open log checkbox and then click Execute. The Execution Log opens, displaying the result of running your code.
4. Select the Debug Only checkbox at the bottom of the window.

#### Declare an Empty List and Add Values Later
Apex provides methods that let you work with lists. Let’s use the add method to add grocery items to the groceries list.
1. In the Developer Console, click Debug | Open Execute Anonymous Window.
2. Copy this code and paste it into the Enter Apex Code window
```java
//Create the groceries list
List<String> groceries = new List<String>();
  
//The output for this statement is null
System.debug('Groceries: ' + groceries);
  
//Use the add method to add an element to the list
groceries.add('Tea');
groceries.add('Sugar');
groceries.add('Honey');
groceries.add(2, 'Milk');
  
//The output for this statement is Tea, Sugar, Milk, Honey
System.debug('Groceries: ' + groceries);
```
3. Select the Open log checkbox and then click Execute. The Execution Log opens, displaying the result of running your code.
4. Select the Debug Only checkbox at the bottom of the window.
 ![[Pasted image 20220707014105.png]]
 Did you notice the dot (“.”)between `groceries` and `add`? Apex uses dot notation. Dot notation has several uses. In line 8, we connect the `add` method (that Apex provides) to the `groceries` list with a dot to add an item (Tea) to the list.

Line 11 demonstrates another way to add an item to a list, by inserting the item in a specific index (position): 
![[Pasted image 20220707014236.png]]
