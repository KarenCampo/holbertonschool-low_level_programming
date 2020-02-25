#include "holberton.h"
/**
 * leet - Entry point
 * @n: pointer to char
 * Return: n
 */
char *leet(char *n)
{

	int i = 0;
	int j = 0;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (n[i] == let[j])
			{
				n[i] = num[j];
			}
		}
	}
return (n);
}
