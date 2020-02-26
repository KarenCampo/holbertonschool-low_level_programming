#include "holberton.h"
/**
 * _memset - function  that fills the fist n
 * @n: number of bytes of the momery area pointed to
 * @s: memory area
 * @b: constant byte
 * Return: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for ( ; n; i++)
	{
		*(s + i) = b;
		n--;
	}
return (s);
}
