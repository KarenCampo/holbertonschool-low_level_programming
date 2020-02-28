#include "holberton.h"

/**
 * print_chessboard - Entry point
 * @a: array of chars
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar(10);
		y++;
	}
}
