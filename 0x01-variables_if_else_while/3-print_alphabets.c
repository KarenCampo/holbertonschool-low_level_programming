#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - starts the program, prints files
 *
 * Return: 0
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
		putchar (m);
	}
	for (m = 'A' ; m <= 'Z' ; m++)
	{
		putchar (m);
	}
	putchar('\n');

	return (0);
}
