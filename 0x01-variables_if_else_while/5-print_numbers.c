#include <stdio.h>


/**
 * main -  prints digits from 0-9
 * Return: 0 Succes
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
{	putchar(num + 48);

}
	putchar('\n');
	return (0);
}
