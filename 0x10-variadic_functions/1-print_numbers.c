#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - this function prinst numbers
 * @n: number of intergers passed to the function
 * @separator: string to be printed between numbers
 * Return - Always 0 on success
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list b;
	unsigned int i = 0;

	if (separator == NULL) /* if separator is null, don't print it*/
	{
		return;
	}
	va_start(b, n); /* initialize list for n */

	for ( ; i < n; i++)
	{
		printf("%d", va_arg(b, unsigned int));
		if (n - i - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(b);
}
