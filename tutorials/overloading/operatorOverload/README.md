
# Operator overloading 

This describes the forms of operator overloading in c++.

#

`1-memberOverload.cpp`

~ Overloads of postfix operators

| Overloads | X | Y | Z |

|:----------|:----------|:----------|:----------|

| Object A  | 2 | 5 | 9 |

 |++ A | 3 | 6 | 10 |

|++ A | 4 | 7 | 11 |

|-- A | 3 | 6 | 10 |

#

`2-memberOverload.cpp`

~ Passing Overloads of postfix operators to another object

```

B = A++;

C  = A--;

```

| Objects | X | Y | Z |

|:----------|:----------|:----------|:----------|

| A  | 2 | 5 | 9 |

| B | 3 | 6 | 10 |

| C | 2 | 5 | 10 |

#

`3-memberOverload.cpp`

~ Passing Overloads of +, -, * , / operators to another object

```

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

~ Overloads of prefix operators

| Overloads | X | Y | Z |

|:----------|:----------|:----------|:----------|

| Object A  | 2 | 5 | 9 |

|A++ | 3 | 6 | 10 |

|A++ | 4 | 7 | 11 |

|A-- | 3 | 6 | 10 |

#

