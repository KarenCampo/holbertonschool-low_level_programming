#include "holberton.h"

/**
 * _isalpha - verifies if c is lower or uppercase
 * @c: character to check
 * Return: 1 if c is lower or uppercase, else 0
 */

int _isalpha(int c)
{
if ((c >= 67 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
