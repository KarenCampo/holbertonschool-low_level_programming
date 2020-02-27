#include "holberton.h"
/**
 * root - function for operation
 * @n: number to find the square root
 * @m: mul to compare
 * Return: return 0
 */
int root(int n, int m)

{
	int r;

	if (n == m * m)
	{
		return (1);
	}
	if (m * m > n)
	{
		return (-1);
	}
	r = root(n, m + 1);
	if (r < 0)
	{
		return (-1);
	}
	return (1 + r);
}

/**
 * _sqrt_recursion - function to find natural square root
 * @n: int
 * Return: 1 on success
 */
int _sqrt_recursion(int n)

{
	int l;

	l = root(n, 1);
	return (l);
}
