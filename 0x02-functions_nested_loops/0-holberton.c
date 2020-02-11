#include "holberton.h"

/**
 *
 * Main - defines the main function of the program 
 * putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int main(void)
{
	char name[] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	int k = 0;

	while (name[k] != '\0')
	{
	_putchar(name[k]);
	k++;
	}
	_putchar('\n');
	return (0);
}
