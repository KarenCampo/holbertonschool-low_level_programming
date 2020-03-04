#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1:First array.
 * @s2: second array.
 * Return: Return NULL
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (j + i + 1));
	if (s == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < j; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; l < i; l++)
	{
		s[j + l] = s2[l];
	}
	return (s);
}
