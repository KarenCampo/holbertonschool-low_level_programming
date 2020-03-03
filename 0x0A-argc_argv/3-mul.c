#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: integer counter
 * @argv: character vector
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int multi = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	return (0);
}
