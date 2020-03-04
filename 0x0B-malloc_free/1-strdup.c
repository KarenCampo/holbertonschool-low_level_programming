#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - length of a string.
 *@s: char variable
 * Return: Always i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
/**
 *_strdup - pointer
 *@str: char variable
 * Return: Always s
 */

char *_strdup(char *str)
{
	int j, l;
	char *s;

	if (!str)
	{
		return (NULL);
	}

	l = _strlen(str) + 1;

	s = malloc(l * sizeof(char));
	if (!s)
	{
		return (NULL);

	}

	for (j = 0; j < l; j++)
	{
		s[j] = str[j];
	}
	s[j] = '\0';
	return (s);
}
