
# Function overloading 

This describes the various ways of overloading functions

#
`1-paramTypeOverload.cpp`

~ absolute(a) - Returns the absolute of a variable 

* absolute (-5)
```
5 
//integer argument 
```
* absolute (-5.5)
```
5.5 
//float argument 
```
#
`2-numOfparamOverload.cpp`

~ power (a,n) - Returns the nth of a or square of a if n is not specified 

* power(2)
```
4 
//one argument of type integer 
```
* power(2,4)
```
16 
//two arguments of type integers 
```
#
`3-numOfparamOverload.cpp`

~ display (args) -  print out it's arguments

* display (4.5)
```
4.5 
//one argument of type float 
```
* display (" Asta", 24)
```
Name: Asta 
Age.   : 24
 //two arguments of type string and float
```
* display (1,"Eddie", 83)
```
Id : 1
Name: Asta 
Cwa   : 83
 //three arguments of type integer, string and double 
```

