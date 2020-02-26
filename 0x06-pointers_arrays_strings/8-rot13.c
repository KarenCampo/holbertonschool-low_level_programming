#include "holberton.h"
/**
 * rot13 - Entry point
 *@n: value to return
 *Return: n
 */
char *rot13(char *n)
{
	int i = 0;
	int j = 0;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (n[i] == let[j])
			{
				n[i] = rot13[j];
				break;
			}
		}
	}
return (n);
}
