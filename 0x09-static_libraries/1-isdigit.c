#include "holberton.h"

/**
 *_isdigit - checks whether c, which must have the value of an unsigned char
 * @c: variable that is a digit
 * Return: 1 if c is a digit and 0 otherewise
 */

int _isdigit(int c)

{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
