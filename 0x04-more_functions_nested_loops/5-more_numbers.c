#include "holberton.h"

/**
 * more_numbers - Entry point
 * Return: Always 0
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
