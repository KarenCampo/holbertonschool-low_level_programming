#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that prints sum of arguments
 * @n: number of elements
 * Return - if n = 0, return 0
 */
int sum_them_all(const unsigned int n, ...)

{
	va_list a;
	unsigned int i = 0;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n); /*initialize a for n number*/


	for ( ; i < n; i++) /*access all the arguments assigned to a*/
	{
		sum += va_arg(a, int);
	}
	va_end(a); /*cleans memory reserved for a*/
	return (sum);
}
