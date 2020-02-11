#include <stdio.h>
#include <time.h>
#include <stdlio.h>

/**
 * main - starts the program prints the alphabet in lowercase, and then in uppercase
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
