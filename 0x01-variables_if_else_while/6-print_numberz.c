#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starts, entry
 *
 * Return: 0 (Succes)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
{ 
	putchar(num + 48);
}
	putchar('\n');
	return (0);
}
