#include "holberton.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 * Return: Nothing but prints in stdout the binary series
 */

void print_binary(unsigned long int n)
{
	int bit, c, size = 0;
	unsigned long int dec = n;

	if (n == 0)
		_putchar('0');

	while (dec)
	{
		size++;
		dec >>= 1;
	}

	for (c = size - 1; c >= 0; c--)
	{
		bit = n >> c;
			if (bit & 1)
				_putchar('1');
			else
				_putchar('0');
	}
}
