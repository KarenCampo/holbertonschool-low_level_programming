#include "holberton.h"
/**
 * _strlen - returns the string lenght
 * @s: array pointer
 * Return 1 on success, -1 on error
 */
int _strlen(char *s)

{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
