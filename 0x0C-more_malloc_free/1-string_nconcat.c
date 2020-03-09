#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - This function concatenates 2 strings
* @s1: string number one
* @s2: string number two
* @n: number of strings bytes
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r; /* r for result*/
	unsigned int ls1, ls2, c1, c2; /* len1 and 2- string lenght c1, c2 counters*/

	ls1 = 0, ls2 = 0, c1 = 0, c2 = 0;
	if (s1)
	{
		while (s1[c1++])
			ls1++;
	}
	if (s2)
	{
		while (s2[c1++])
			ls2++;
	}
	if (ls2 >= n)
	ls2 = n;

	r = malloc(sizeof(char) * (ls1 + ls2 + 1));

	if (r == 0)
	{
	return (NULL);
	}
	for (c1 = 0; c1 < ls1; c1++)
	{
		r[c1] = s1[c1];
	}
	for (c2 = 0; c2 < ls2; c1++, c2++)
	{
		r[c1] = s2[c2];
	}
return (r);
}
