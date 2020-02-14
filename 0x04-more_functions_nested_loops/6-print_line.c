#include "holberton.h"
/**
 * print_line - Entry point
 * @n: stands for the number of times
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)

		for (a = 0; a < n; a++)
			_putchar('_');
	_putchar('\n');
}
