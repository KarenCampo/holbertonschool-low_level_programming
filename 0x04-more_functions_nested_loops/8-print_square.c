#include "holberton.h"
/**
 * print_square - Entry point
 * @size: prints
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
			_putchar('#');
		_putchar('\n');
	}

}
