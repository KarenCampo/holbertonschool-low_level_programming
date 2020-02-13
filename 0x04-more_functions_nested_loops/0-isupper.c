#include "holberton.h"

/**
 * _isupper - verifies that the variable c is uppercase
 *@c: the character to check
 * Return: 0 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')

return (1);

else

return (0);

}
