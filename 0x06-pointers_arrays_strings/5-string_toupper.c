#include "holberton.h"
/**
 * *string_toupper - string function
 * @p: character to be changed
 * Return: p = string_toupper(s)
 */
char *string_toupper(char *p)
{
	int i = 0;

	for ( ; p[i] != '\0'; i++)
		if (p[i] >= 97 && p[i] <= 122)
		{
a.
			p[i] -= 32;
		}
	return (p);
}
