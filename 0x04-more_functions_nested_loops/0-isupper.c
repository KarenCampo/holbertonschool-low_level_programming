#include "holberton.h"

/**
 * _isupper - verifies that c is uppercase
 *@C: the character to check
 * Return 1 if C is uppercase, otherwise return 0
 */

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    return (1);
  else
    return (0);
}
