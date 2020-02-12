#include "holberton.h"

/**
 * print_to_98 - prints all numbers until 98.
 * @n: variable.
 * return: nothing.
 */
void print_to_98(int n)
{
int count;
if (n < 98)
for (count = n; count < 98; count++)
printf("%i, ", count);
else
for (count = n; count > 98; count--)
printf("%i, ", count);
printf("98\n");
}
