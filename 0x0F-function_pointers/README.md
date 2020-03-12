			0x0F. C - Function pointers

# Check the Following sources:

* [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
* [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
* [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
* [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s&feature=youtu.be)(https://www.youtube.com/watch?v=sxTFSDAZM8s&feature=youtu.be)
* [https://boredzo.org/pointers/)

#Some Requirements

* programs and funtions will be compiled with **gcc 4.8.4**
* All files should be ompiled with Ubuntu 14.04 LTS
* The prototypes of all your functions and the prototype of the function _putchar should be included in the header file  **function_pointers.h**
* All of the header files should include guarded

# In This Project we Should Learn:

* What are function pointers and how to use them
* what does a function pointer exactly hold
* where does a function pointer point to in the virtual memory

## **What Are Function Pointers and How To Use Them**

A function pointer, also called a subroutine pointer or procedure pointer, is a pointer that points to a function. As opposed to referencing a data value, a function pointer points to executable code within memory. Dereferencing the function pointer yields the referenced function, which can be invoked and passed arguments just as in a normal function call. Such an invocation is also known as an "indirect" call, because the function is being invoked indirectly through a variable instead of directly through a fixed identifier or address.

Function pointers can be used to simplify code by providing a simple way to select a function to execute based on run-time values.
They're very handy to use for when you want different functions at different times, or different phases of programming. 

### The following C program illustrates the use of two function pointers:

* *func1* takes one double-precision (double) parameter and returns another double, and is assigned to a function which converts centimetres to inches.
* *func2* takes a pointer to a constant character array as well as an integer and returns a pointer to a character, and is assigned to a C string handling function which returns a pointer to the first occurrence of a given character in a character array.

~~~
#include <stdio.h>  /* for printf */
#include <string.h> /* for strchr */

double cm_to_inches(double cm) {
	return cm / 2.54;
}

// "strchr" is part of the C string handling (i.e., no need for declaration)
// See https://en.wikipedia.org/wiki/C_string_handling#Functions

int main(void) {
	double (*func1)(double) = cm_to_inches;
	char * (*func2)(const char *, int) = strchr;
	printf("%f %s", func1(15.0), func2("Wikipedia", 'p'));
	/* prints "5.905512 pedia" */
	return 0;
}
~~~

## What Does a Function Pointer Exactly Holds

Pointer as a function parameter is used to hold addresses of arguments passed during function call. This is also known as *call by reference*. When a function is called by reference any change made to the reference variable will effect the original variable. 

## Where Does a Function Pointer Point in the Virtual Memory

Pointer as a function parameter is used to hold addresses of arguments passed during function call. This is also known as call by reference. When a function is called by reference any change made to the reference variable will effect the original variable. 
