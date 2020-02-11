#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: 0, void prints the alphabet on the standar output
 * On error, -1 is returned
 */

void print_alphabet(void)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
