#include "holberton.h"
/**
 * binary_to_uint - functiontion that converts binary to unsigned int
 * @b: pointer that points to a string of 0 and 1 chars
 * Return: Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, val, pow = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	len = len - 1;

	while (len >= 0)
	{
		val = b[len];
		if (val == 48)
		{
			pow++;
			len--;
		}
		else if (val == 49)
	{
		result = result + (1 << pow);
		pow++;
		len--;
	}
	else
	{
		return (0);
	}
	}
	return (result);
}
