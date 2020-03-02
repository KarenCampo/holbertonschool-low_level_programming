#include "holberton.h"
/**
 * _strchr- function that fills the fist n
 * @s: number of bytes of the momery area pointed to
 * @c: memory area
 * Return: char k
 */
char *_strchr(char *s, char c)
{
	int i;
	int l = 0;
	char *k;

	for (l = 0; s[l];)
	{
		l++;
	}
	if (l > 0)
	{
		for (i = 0; i <= l; i++)
		{
			if (s[i] == c)
			{
				k = (s + i);
				break;
			}
			k = 0;
			l--;

		}
	} else
		k = 0;
	return (k);
}
