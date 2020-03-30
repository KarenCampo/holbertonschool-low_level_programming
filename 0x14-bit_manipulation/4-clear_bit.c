#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: Number
 * @index: The index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ndx;

	if (index >= sizeof(unsigned int) * sizeof(long))
	{
		return (-1);
	}

	ndx = ~(1 << index);
	*n = *n & ndx;
	return (1);
}
