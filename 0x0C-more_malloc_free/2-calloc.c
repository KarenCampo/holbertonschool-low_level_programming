#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory'
 * @nmemb: array
 * @size: argument lenght
 * n: number of bytes in a string
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == '\0' || size == '\0')
	{
		return (NULL);/*nmemb and size must have value*/
	}

	p = malloc(nmemb * size);/*memory allocation*/
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';
return (p);
}
