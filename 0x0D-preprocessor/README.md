					0x0C PREPROCESSOR PROJECT...

# Check this Information Out

* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Object-like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
* [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
* [Pre Processor Directives in C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
* [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
* [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
* [Include guard](https://en.wikipedia.org/wiki/Include_guard)
* [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)


# In This Project we Should Learn

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files


# Requirements

* gcc 4.8.4
* Ubuntu 14.04 LTS
* The use of _putchar is allowed
* Global variables are not allowed to use in this project
* No more than 5 functions please


# Functions Description


* ***Macro Functions***
* ***The Most Common Predefined Macros***
* ***How to include guard your header files***

* **Macro Function**: Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.

To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in parentheses, separated by commas. The invocation of the macro need not be restricted to a single logical lineit can cross as many lines in the source file as you wish. The number of arguments you give must match the number of parameters in the macro definition. When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the corresponding argument. (You need not use all of the parameters in the macro body.)

As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses.

     #define min(X, Y)  ((X) < (Y) ? (X) : (Y))
       x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
       y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
       z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));
(In this small example you can already see several of the dangers of macro arguments. See Macro Pitfalls, for detailed explanations.)

Leading and trailing whitespace in each argument is dropped, and all whitespace between the tokens of an argument is reduced to a single space. Parentheses within each argument must balance; a comma within such parentheses does not end the argument. However, there is no requirement for square brackets or braces to balance, and they do not prevent a comma from separating arguments. Thus,

     macro (array[x = y, x + 1])
passes two arguments to macro: array[x = y and x + 1]. If you want to supply array[x = y, x + 1] as an argument, you can write it as array[(x = y, x + 1)], which is equivalent C code.

All arguments to a macro are completely macro-expanded before they are substituted into the macro body. After substitution, the complete text is scanned again for macros to expand, including the arguments. This rule may seem strange, but it is carefully designed so you need not worry about whether any function call is actually a macro invocation. You can run into trouble if you try to be too clever, though. See Argument Prescan, for detailed discussion.

For example, min (min (a, b), c) is first expanded to

       min (((a) < (b) ? (a) : (b)), (c))
and then to

     ((((a) < (b) ? (a) : (b))) < (c)
      ? (((a) < (b) ? (a) : (b)))
      : (c))
(Line breaks shown here for clarity would not actually be generated.)

You can leave macro arguments empty; this is not an error to the preprocessor (but many macros will then expand to invalid code). You cannot leave out arguments entirely; if a macro takes two arguments, there must be exactly one comma at the top level of its argument list. Here are some silly examples using min:

     min(, b)        ==> ((   ) < (b) ? (   ) : (b))
     min(a, )        ==> ((a  ) < ( ) ? (a  ) : ( ))
     min(,)          ==> ((   ) < ( ) ? (   ) : ( ))
     min((,),)       ==> (((,)) < ( ) ? ((,)) : ( ))
     
     min()      error--> macro "min" requires 2 arguments, but only 1 given
     min(,,)    error--> macro "min" passed 3 arguments, but takes just 2
Whitespace is not a preprocessing token, so if a macro foo takes one argument, foo () and foo ( ) both supply it an empty argument. Previous GNU preprocessor implementations and documentation were incorrect on this point, insisting that a function-like macro that takes a single argument be passed a space if an empty argument was required.

Macro parameters appearing inside string literals are not replaced by their corresponding actual arguments.

     #define foo(x) x, "x"
     foo(bar)        ==> bar, "x"Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.

To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in parentheses, separated by commas. The invocation of the macro need not be restricted to a single logical lineit can cross as many lines in the source file as you wish. The number of arguments you give must match the number of parameters in the macro definition. When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the corresponding argument. (You need not use all of the parameters in the macro body.)

As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses.

     #define min(X, Y)  ((X) < (Y) ? (X) : (Y))
       x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
       y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
       z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));
(In this small example you can already see several of the dangers of macro arguments. See Macro Pitfalls, for detailed explanations.)

Leading and trailing whitespace in each argument is dropped, and all whitespace between the tokens of an argument is reduced to a single space. Parentheses within each argument must balance; a comma within such parentheses does not end the argument. However, there is no requirement for square brackets or braces to balance, and they do not prevent a comma from separating arguments. Thus,

     macro (array[x = y, x + 1])
passes two arguments to macro: array[x = y and x + 1]. If you want to supply array[x = y, x + 1] as an argument, you can write it as array[(x = y, x + 1)], which is equivalent C code.

All arguments to a macro are completely macro-expanded before they are substituted into the macro body. After substitution, the complete text is scanned again for macros to expand, including the arguments. This rule may seem strange, but it is carefully designed so you need not worry about whether any function call is actually a macro invocation. You can run into trouble if you try to be too clever, though. See Argument Prescan, for detailed discussion.

For example, min (min (a, b), c) is first expanded to

       min (((a) < (b) ? (a) : (b)), (c))
and then to

     ((((a) < (b) ? (a) : (b))) < (c)
      ? (((a) < (b) ? (a) : (b)))
      : (c))
(Line breaks shown here for clarity would not actually be generated.)

You can leave macro arguments empty; this is not an error to the preprocessor (but many macros will then expand to invalid code). You cannot leave out arguments entirely; if a macro takes two arguments, there must be exactly one comma at the top level of its argument list. Here are some silly examples using min:

     min(, b)        ==> ((   ) < (b) ? (   ) : (b))
     min(a, )        ==> ((a  ) < ( ) ? (a  ) : ( ))
     min(,)          ==> ((   ) < ( ) ? (   ) : ( ))
     min((,),)       ==> (((,)) < ( ) ? ((,)) : ( ))
     
     min()      error--> macro "min" requires 2 arguments, but only 1 given
     min(,,)    error--> macro "min" passed 3 arguments, but takes just 2
Whitespace is not a preprocessing token, so if a macro foo takes one argument, foo () and foo ( ) both supply it an empty argument. Previous GNU preprocessor implementations and documentation were incorrect on this point, insisting that a function-like macro that takes a single argument be passed a space if an empty argument was required.

Macro parameters appearing inside string literals are not replaced by their corresponding actual arguments.

     #define foo(x) x, "x"
     foo(bar)        ==> bar, "x"

* **The most common Predefined Macros**: The common predefined macros are GNU C extensions. They are available with the same meanings regardless of the machine or operating system on which you are using GNU C or GNU Fortran. Their names all start with double underscores.

__COUNTER__
This macro expands to sequential integral values starting from 0. In conjunction with the ## operator, this provides a convenient means to generate unique identifiers. Care must be taken to ensure that __COUNTER__ is not expanded prior to inclusion of precompiled headers which use it. Otherwise, the precompiled headers will not be used.

__GFORTRAN__
The GNU Fortran compiler defines this.

__GNUC__
__GNUC_MINOR__
__GNUC_PATCHLEVEL__
These macros are defined by all GNU compilers that use the C preprocessor: C, C++, Objective-C and Fortran. Their values are the major version, minor version, and patch level of the compiler, as integer constants. For example, GCC version x.y.z defines __GNUC__ to x, __GNUC_MINOR__ to y, and __GNUC_PATCHLEVEL__ to z. These macros are also defined if you invoke the preprocessor directly.

If all you need to know is whether or not your program is being compiled by GCC, or a non-GCC compiler that claims to accept the GNU C dialects, you can simply test __GNUC__. If you need to write code which depends on a specific version, you must be more careful. Each time the minor version is increased, the patch level is reset to zero; each time the major version is increased, the minor version and patch level are reset. If you wish to use the predefined macros directly in the conditional, you will need to write it like this:

/* Test for GCC > 3.2.0 */
#if __GNUC__ > 3 || \
    (__GNUC__ == 3 && (__GNUC_MINOR__ > 2 || \
                       (__GNUC_MINOR__ == 2 && \
                        __GNUC_PATCHLEVEL__ > 0))
Another approach is to use the predefined macros to calculate a single number, then compare that against a threshold:

#define GCC_VERSION (__GNUC__ * 10000 \
                     + __GNUC_MINOR__ * 100 \
                     + __GNUC_PATCHLEVEL__)

/* Test for GCC > 3.2.0 */
#if GCC_VERSION > 30200
Many people find this form easier to understand.

* **How to Include Guard to Header Files**: The C preprocessor processes directives of the form #include <file> in a source file by locating the associated file on disk and transcluding ("including") its contents into a copy of the source file known as the translation unit, replacing the include directive in the process. The files included in this regard are generally header files, which typically contain declarations of functions and classes or structs. If certain C or C++ language constructs are defined twice, the resulting translation unit is invalid. #include guards prevent this erroneous construct from arising by the double inclusion mechanism.

The addition of #include guards to a header file is one way to make that file idempotent. Another construct to combat double inclusion is #pragma once, which is non-standard but nearly universally supported among C compilers.