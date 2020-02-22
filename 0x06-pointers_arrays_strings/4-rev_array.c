#include "holberton.h"
#include <stdlib.h>
/**
 * reverse_array - reverses integers
 * @a: array
 * @n: quantity
 * Return - Always 0 on success
 */
void reverse_array(int *a, int n)

{
	int i;
	int *j = (int *) malloc(sizeof(n) * 4);

	n--;
	for (i = 0; i <= n; i++)
	{
		j[i] = a[n - i];
	}
	i = 0;
	while  (i <= n)
	{
		a[i] = j[i];
		i++;
	}
}
