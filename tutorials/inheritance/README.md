
# Inheritance 

Inheritance is the process of creating new classes, called 

derived classes, from existing  base classes. 

* The derived class inherits all the capabilities of the base class but can add embellishments and refinements of its own..


#### friends

``` 
They allow access to private variables of the class they befriend 
```
#

* `1-inheritance.cpp`

| Shapes |
|--------------|
| * length: int |
||
| + setSides(): void |
| + getSides(): void |

        ^                      
        |      

  Inherited classes from the base class `Shapes`                 

| Square | Rectangle |
|:----------|:----------|
| | - breadth : int |
|||
| + setSides(): void | + setSides(): void|
| + getSides(): void | + getSides(): void |
| + area(): void | + area(): void | 
#

* `2-inheritance.cpp`

| Employee |
|--------------|
| - name : string|
| - number : unsigned long |
||
| + getdata(): void |
| + putdata(): void |
        ^                      
        |      
  Inherited classes from the base class `Shapes`                 
  
| Manager | Scientist | Labourer |
|:----------|:----------|:----------|
| - title : string| - pubs : int ||
| - dues: int | ||
||||
| + getdata(): void | + getdata()(): void||
| + putdata(): void | + putdata(): void ||
#

* `3-multiinheritance.cpp`

| Triangle |
|--------------|
| |
| + triangle () : void |

        ^                     
        |      

| Isosceles|
|--------------|
| |
| + isosceles() : void |

        ^                      
        |      

| Equilateral|
|--------------|
| |
| + equilateral () : void|

