#include <stdio.h>
/**
 * main - Entry point.
 * Return: 0
 */

int main(void)
{
	char a = '0';
	int b = 97;

	for ( ; a <= '9'; a++)
		putchar(a);

	for ( ; b <= 102 ; b++)
		putchar(b);
	putchar(10);
	return (0);
}
