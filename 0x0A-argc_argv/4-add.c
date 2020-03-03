#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: integer counter
 * @argv: character vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] != '\0' ; j++)
			{
				if (isdigit(argv[i][j]))
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
