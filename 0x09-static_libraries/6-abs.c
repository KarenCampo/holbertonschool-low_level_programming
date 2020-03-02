#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @n: variable, prints absolute value of a number
 * Return: absolute value
 */

int _abs(int n)
{
if (n < 0)
n = n * -1;

return (n);
}
