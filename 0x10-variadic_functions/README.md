				0x10. C - Variadic functions

# Sources For This Project

* [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
* [C - Variable Arguments](https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm)
* [Variable Argument Lists in C using va_list](https://www.cprogramming.com/tutorial/c/lesson17.html)
* [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
* [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)


# Some Requirements
* Programs and Functions will be compiled with gcc **4.8.4**
* All files should be compiled with Ubuntu 14.04 LTS
* The prototypes of all your functions and the prototype of the function _putchar sgould be included in the header file called variadic_functions.h
* All the header files should be include guarded

# General Learning objectives
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

## What Are Variadic Functions

a *variadic* function which can handle as many arguments as the caller chooses to pass.

 
We typically use *variadic function* when we dont know the total number of arguments that will be used for a function. Basically one single function could potentially have n number of arguments.

The concept of this *variadic function* is already used in several Cs in-built functions.

For example, in printf when you want to print one number, we do something like this.
~~~
printf(" the one number = %d", nOneNumber);
When you want to print two numbers, we still use the same printf function as shown below:

printf(" the first number = %d, the second number =%d ", nOneNumber, nSecondNumber);
~~~
If you look into the stdio.h, you can see that this was implemented using variadic functions.


### C Variadic Macros

In order to use variadic functions we need to understand these macros:

va_list
va_start
va_arg
va_end
va_copy
All these macros are in the stdarg.h which should be included in your code as shown below:

#include <stdarg.h>. 
The word variadic tells us that there is some kind of change or variation is involved here. The variation or change here is that we are dealing with unknown number of arguments for the function.

***Variadic function has two parts:***
 1) mandatory arguments and 
 2) optional arguments.

Atleast one mandatory argument is required. The order is important in this case. So, you will have mandatory arguments first and then you will have optional arguments.

Now, It seems like the first part is mandatory (  the one number = %d ), the optional part comes second and it could be different ( nOneNumber ), depending on the situation you are in.


***va_list someArgumentPointer;.***
In this situation, we need to mentions that our list will have appropriate data and that is the most interesting part of this technique. I will, later, explain how to implement that in function which doesnt know how many elements are being invoked into it or the function that is looking for stopping sign within our string.

va_start will connect our argument list with someArgumentPointer, and we will need to say how many elements in our function we have. In order to use this we would write something like this:

***va_start( someArgumentPoiner, numberOfElements );***
This means that we have already declared our list and we have passed number of elements into our function.

va_arg is macro that will get our data which is currently connected to the argument list, and in order to achieve that task, we would need to know the type of our data. So, to do that we would write:

***va_arg( someArgumentPointer, someType );***
va_end is used in situations when we would like to stop using someArgumentPointer. One more situation in which we use this macro is when we need to reset our list position as well.
This macro will be used like this:

***va_end( someArgumentPointer );.***
va_copy is used in situations for which we need to save our current location, something like book marker. In another words, if you are in the situation in which you are advancing through argument list, but later you would need to rewind your current position to some previous state.

Could be done like this:

***va_copy( va_list argumentDestination, va_list argumentSource );***
In order to state that we have variadic function we need to state three dots as well, however that will be shown afterwards.

### How To Use *va_start* and *va_end* macros

The va_start() macro initializes ap for subsequent use by va_arg() and va_end(), and must be called first.
The argument last is the name of the last argument before the variable argument list, that is, the last argument of which the calling function knows the type.

Because the address of this argument may be used in the va_start() macro, it should not be declared as a register variable, or as a function or an array type.

* **va_arg()**

The *va_arg()* macro expands to an expression that has the type and value of the next argument in the call. The argument ap is the va_list ap initialized by *va_start()*. Each call to *va_arg()* modifies ap so that the next call returns the next argument. The argument type is a type name specified so that the type of a pointer to an object that has the specified type can be obtained simply by adding a * to type.
The first use of the *va_arg()* macro after that of the *va_start()* macro returns the argument after last. Successive invocations return the values of the remaining arguments.

If there is no next argument, or if type is not compatible with the type of the actual next argument (as promoted according to the default argument promotions), random errors will occur.

If ap is passed to a function that uses *va_arg(ap,type)* then the value of ap is undefined after the return of that function.

* **va_end**

Each invocation of *va_start()* must be matched by a corresponding invocation of *va_end()* in the same function. After the call *va_end(ap)* the variable ap is undefined. Multiple traversals of the list, each bracketed by *va_start()* and *va_end()* are possible. *va_end()* may be a macro or a function.


## Why and how to use the const type qualifier
**What**
In the C, C++, and D programming languages, a type qualifier is a keyword that is applied to a type, resulting in a qualified type. For example, *const int* is a qualified type representing a constant integer, while int is the corresponding unqualified type, simply an integer. In D these are known as type constructors, by analogy with constructors in object-oriented programming.

**Why**
Type qualifiers are a way of expressing additional information about a value through the type system, and ensuring correctness in the use of the data. Type qualifiers are not generally used outside the C/C++ family of languages: many languages have a notion of constants, but express this by the name binding being constant (a "variable that doesn't vary"), rather than through the type system

**How - Syntax**
In C and C++, a type is given in a function declaration or variable declaration by giving one or more type specifiers, and optionally type qualifiers. For example, an integer variable can be declared as:

int x;
where int is the type specifier. An unsigned integer variable can be declared as:

unsigned int x;
where both unsigned and int are type specifiers. A constant unsigned integer variable can be declared as:

const unsigned int x;
where const is a type qualifier, which the qualified type of x is const unsigned int and the unqualified type is unsigned int.

Variable declarations further have an optional storage class specifier. Properly this is a separate topic, distinct from the type, though const on a variable declaration is also taken to have implications for the storage class, namely that it can be stored in read-only memory.