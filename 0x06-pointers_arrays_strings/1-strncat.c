#include "holberton.h"
/**
 * _strncat - concatenate two strings
 *@dest: prints characters
 *@src: characters
 *@n: quantity
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	while (k < n)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	return (dest);
}
