#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starts, entry
 *
 * Return: 0 
 */

int main(void)
{
	int num = 0;
	while (num < 10)
{ 
	putchar(num + '0');
	num++;
}
	putchar('\n');
	return (0);
}
