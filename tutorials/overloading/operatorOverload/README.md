

# Operator overloading 

This describes the forms of operator overloading in c++.

## Base class - `points3D`

|  points3D | 
|:----------|
| - x : int |
| - y : int |
| - z : int |
||
| + getX(): int |
| + getY(): int |
| + getZ(): int |

```
points3D pointA; // default constructor
points3D pointB(3, 4, 5);  // args constructor
```

#

`1-memberOverload.cpp`

~ Overloads of prefix operators

|  points3D | 
|:----------|
| + operator ++(): void | 
| + operator --(): void |


```
points3D A(2, 5, 9);
++A;
++A;
--A;
```
| Overloads | X | Y | Z |
|:----------|:----------|:----------|:----------|
| Object A  | 2 | 5 | 9 |
|++ A | 3 | 6 | 10 |
|++ A | 4 | 7 | 11 |
|-- A | 3 | 6 | 10 |

#

`2-memberOverload.cpp`

~ Passing Overloads of postfix operators to another object

|  points3D | 
|:----------|
| + operator ++ () : points3D | 
| + operator -- () : points3D |

```
points3D A(2, 5, 9), B, C;
B = ++A;
C  = --A;
```

| Objects | X | Y | Z |
|:----------|:----------|:----------|:----------|
| A  | 2 | 5 | 9 |
| B | 3 | 6 | 10 |
| C | 2 | 5 | 10 |

#

`3-memberOverload.cpp`

~ Passing Overloads of +, -, * , / operators to another object

|  points3D | 
|:----------|
| + operator + (points3D) : points3D | 
| + operator - (points3D) : points3D |
| + operator * (points3D) : points3D |
| + operator / (points3D) : points3D |

```
points3D A(2, 5, 9), B(4, 1, 7), C, D, E;
C = A + B ;
D = A - B;
E = A * B;
F = A / B;
```

| Objects | X | Y | Z |
|:----------|:----------|:----------|:----------|
| A  | 2 | 5 | 9 |
| B | 4 | 1 | 7 |
| C | 6 | 6 | 16 |
| D | -2 | 4 | 2 |
| E | 8 | 5 | 63 |
| F | 0| 5 | 1|

#

`4-memberOverload.cpp`

~ Overloads of postfix operators

|  points3D | 
|:----------|
| + operator ++(int): void | 
| + operator --(int): void |


```
points3D A(2, 5, 9);
A++;
A++;
A--;
```
| Overloads | X | Y | Z |
|:----------|:----------|:----------|:----------|
| Object A  | 2 | 5 | 9 |
|A++ | 3 | 6 | 10 |
|A++ | 4 | 7 | 11 |
|A-- | 3 | 6 | 10 |

`5-memberOverload.cpp`

~ Overloads of <>, >=, <=

|  points3D | 
|:----------|
| + operator > (points3D) : bool | 
| + operator >= (points3D) : bool | 
| + operator <= (points3D) : bool | 


```
points3D (2,5,9), B(1,1,1), C(6,7,4);

```
| Overloads | Bool|
|:----------|:----------|
| A >= B  | 1 |
| B > C | 0 |
| A <= C | 1 |

`6-friendOverload.cpp`

~ Overloads of <>, >=, <=

|  points3D | 
|:----------|
| friend | 
| + operator + (points3D, points3D) : points3D | 
 

```
points3D (2,5,9), B(1,1,1), C(6,7,4), D;
D = A + B  C;

```

| Objects | X | Y | Z |
|:----------|:----------|:----------|:----------|
| A  | 2 | 5 | 9 |
| B | 1 | 1 | 1 |
| C | 6 | 7 | 4 |
| D | 10 | 13 | 14 |


