#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer variable
 * @argv: char pointer array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
