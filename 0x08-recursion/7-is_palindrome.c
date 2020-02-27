#include "holberton.h"

/**
 * strlen_r - string lenght
 * @s: pointer
 * Return: 0 on success
 */

int strlen_r(char *s)
{
	if (!*s) /* Checks if its different to null*/
		return (0);
	else
		return (1 + strlen_r(s + 1));
}

/**
 * palim - compares strings
 * @s: pointer
 * @l: length of s
 * Return: 0 on success
 */

int palim(char *s, int l)
{
	if (l <= 0)
		return (1);
	if (s[0] == s[l - 1])
		return (palim(s + 1, l - 2));
	else
		return (0);
}

/**
 * is_palindrome - Entry point
 * @s: The string.
 * Return: 1 on success or 0 otherwise.
 */

int is_palindrome(char *s)
{
	int l = strlen_r(s);

	if (l <= 1)
		return (0);
	return (palim(s, l));
}
