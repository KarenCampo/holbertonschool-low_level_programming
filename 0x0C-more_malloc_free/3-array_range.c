#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - for spaces
* @max: members
* @min: arguments
* return: array
*/
int *array_range(int min, int max)
{
	int *a; /* variable for array*/
	int b = 0;

	if (min > max)
	return (NULL); 

	a = malloc(sizeof(int) * (min - max + 1));

	if (a == NULL)
	return (NULL);

	for ( ; min < max; b++, min++)
	a[b] = min;


}
