#include <stdio.h>
#include <stdlib.h>

/**
 * main - Funtion for opcodes
 * @argc: number of counter arguments
 * @argv: vetor arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int h;
	char *plato = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	h = atoi(argv[1]);
	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (h--)
		printf("%02x%c", *plato++ & 0xff, h ? ' ' : '\n');
	return (0);
}
