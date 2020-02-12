#include "holberton.h"

/**
 * _islower - verifies if c is lowercase
 * @c: character to check
 * Return: 0 if c is lowerc, else returns 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
