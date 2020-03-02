#include "holberton.h"
/**
 * _memcpy - function that fills the fist n
 * @n: number of bytes of the momery area pointed to
 * @src: memory area
 * @dest: constant byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		dest[i] = src[i];
		n--;
	}
return (dest);
}
