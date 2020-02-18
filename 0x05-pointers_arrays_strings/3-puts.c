#include "holberton.h"
/**
 * _puts - prints a string.
 * @str: stands for string.
 */
void _puts(char *str)

{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
			_putchar(10);
}
