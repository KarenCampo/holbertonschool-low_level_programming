#ifndef VARIADIC_fUNCTION_H
#define VARIADIC_FUNCTION_H
/**
 * variadic_function - accepts a variable number of arguments
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
