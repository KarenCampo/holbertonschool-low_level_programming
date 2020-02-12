#include "holberton.h"

/**
 * print_last_digit - computes last digit.
 * @n: variable.
 * Return: last digit.
 */
int print_last_digit(int n)
{
int last;

last = n;

if (last >= 10)
last  = last % 10;
else if (last < 0 && last <= -10)
last = last % 10;

if (last < 0)
last = last * -1;

_putchar(last + '0');
return (last);
}
