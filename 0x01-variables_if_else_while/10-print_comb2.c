#include <stdio.h>
/**
 * main - Entry point.
 * Return: 0
 */

int main(void)
{

	int i = 0, fd, sd;

	for ( ; i <= 99; i++)
	{
		fd = (i / 10);
		sd = (i % 10);
		putchar('0' + fd);
		putchar('0' + sd);
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);

}
