#include <stdio.h>

/**
 * main - Entry point.
 * Return: 0
 */

int main(void)
{
	int mirror = 122;

	for ( ; mirror >= 97; mirror--)
		putchar(mirror);
	putchar(10);
	return (0);
}
