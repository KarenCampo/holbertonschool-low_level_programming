#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet in lowerc 10 times
 * print_alphabet - prints alphabet in lowercase
 * Return: 0, void prints the alphabet on the standar output
 * On error, -1 is returned
 */


void print_alphabet_x10(void)
{
	int i = 'a';
	int j = 1;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
