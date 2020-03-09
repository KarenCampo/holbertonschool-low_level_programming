			0x0D. C - Structures, typedef

# Information for this Project


* [0x0d. Structures](https://docs.google.com/presentation/d/1wy6-h7ox6qUUabC50A6PD5uLiKHasmiOYDk3DwZPfGs/edit#slide=id.g13db114aac_0_240)
* [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
* [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
* [0x0d. typedef and structures](https://docs.google.com/presentation/d/1KNVX4ThB6RGEOFvwMMrHsJzC3EO3G3BaES68szWy9_E/edit#slide=id.g13db114aac_0_250)
* [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)

# Requirements 

* gcc 4.8.4
* All files should be compiled with Ubuntu 14.04 LTS
*  The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called dog.h

# In This Project We Should Learn

* When, why and how to use structures
* How to use typedef

## Why Use Structure
Structure is a user-defined datatype in C language which allows us to combine data of different types together. Structure helps to construct a complex data type which is more meaningful. It is somewhat similar to an Array, but an array holds data of similar type only. But structure on the other hand, can store data of any type, which is practical more useful.

For example: If I have to write a program to store Student information, which will have Student's name, age, branch, permanent address, father's name etc, which included string values, integer values etc, how can I use arrays for this problem, I will require something which can hold data of different types together.

In structure, data is stored in form of records.


## How To Use Typedef

The C programming language provides a keyword called typedef, which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers 

typedef unsigned char BYTE;
After this type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char, for example..

BYTE  b1, b2;
By convention, uppercase letters are used for these definitions to remind the user that the type name is really a symbolic abbreviation, but you can use lowercase, as follows 

typedef unsigned char byte;
You can use typedef to give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly 