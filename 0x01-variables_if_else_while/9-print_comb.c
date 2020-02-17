#include <stdio.h>
/**
 * main - Entry point.
 * Return: 0
 */

int main(void)
{
	int i = 48;

	for ( ; i <= 57; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
