#include "holberton.h"
/**
 * puts2 - Entry point
 * @str: char pointer
 * Return: Always 0
 */
void puts2(char *str)
{
	int j = 0;

	for (j = 0; str[j] != 0; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar(10);
}
