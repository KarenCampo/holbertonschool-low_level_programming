#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: prints n times the character
 * Return: 0
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
