#include "holberton.h"

/**
 * flip_bits - Write a function that flips numbers
 * @n: Number Input number A
 * @m: Number Input number B
 * Return:  the number of bits to flip to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flipy = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flipy += 1;
	}
	return (flipy);
}
