#include "holberton.h"
 /**
 * _strncpy - concatenates strings.
 * @dest: concatenates
 * @src: concatenated
 * @n: quantity
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = ('\0');
	}
	return (dest);
}
