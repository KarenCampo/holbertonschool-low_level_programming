#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: string.
 * @needle: substring.
 * Return: Null or 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *hays;
	char *needl;

	while (*haystack != '\0')
	{
		hays = haystack;
		needl = needle;

		while (*haystack != '\0' && *needl != '\0' && *haystack == *needl)
		{
			haystack++;
			needl++;
		}
		if (!*needl)
			return (hays);
		haystack = hays + 1;
	}
	return (0);
}
