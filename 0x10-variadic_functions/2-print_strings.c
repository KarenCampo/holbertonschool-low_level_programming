#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints two strings
 * @n: number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list c;
	unsigned int i = 0;
	char *p;

	if (separator == NULL)
	{
		return;
	}
	va_start(c, n);

	for ( ; i < n; i++)
	{
		p = va_arg(c, char *);
			printf("%s", p);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		if (p == NULL)
		{
			printf("(nil)");
		}

	}
	va_end(c);
	printf("\n");
}
