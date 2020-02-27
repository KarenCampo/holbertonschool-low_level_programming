#include "holberton.h"
/**
 * _pow_recursion - Entry point
 * @x: value of an int
 * @y: power to an int
 * Return: 1 on succes, -1 on error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
