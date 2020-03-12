#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTER_H_
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif
