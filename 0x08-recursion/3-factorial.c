#include "holberton.h"
/**
 * factorial - Entry point
 * @n: given number
 * Return: 1 on success, -1 when error
 */
int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
			return (0);
}
