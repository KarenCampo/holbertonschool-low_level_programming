#include "holberton.h"

/**
 * print_sign - verifies the sign of a number
 * @n: variable to compare
 * Return: 1 if +, 0 = 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
