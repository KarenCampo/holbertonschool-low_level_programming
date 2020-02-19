#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: character of the string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int j = 0, i = 0, s;

	while (*(str + j) != '\0')

	{
		j++;
	}
	s = ((j - 1) / 2) + 1;
	for (i = s; i < j; i++)
	{
		_putchar(*(str + i));
	}
	_putchar(10);
}
