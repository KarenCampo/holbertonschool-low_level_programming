#include "holberton.h"
/**
 * swap_int - value of *a & *b
 * @a: int *a
 * @b: int *b
 * Return: 0
 */
void swap_int(int *a, int *b)

{
	int c = *a;
	*a = *b;
	*b = c;
}
