#include "holberton.h"
/**
 * prime_number - function
 * @n: int
 * @p: int
 * Return: 1 or 0
 */
int prime_number(int n, int p)

{
	if (n == p)
	{
		return (1);
	}
	else if (n % p == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, p + 1));
	}
}

/**
 * is_prime_number - Entry point
 * @n: prime numbers
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
