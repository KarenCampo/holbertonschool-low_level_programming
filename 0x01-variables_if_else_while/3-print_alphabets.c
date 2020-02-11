#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - starts he program prints the alphabet in lowercase, and then in uppercas
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar (c);
	}
	for (C = 'A' ; C <= 'Z' ; C++)
	{
		putchar (C);
	}
	putchar('\n');

	return (0);
}
