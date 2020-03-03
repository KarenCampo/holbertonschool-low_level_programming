#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: integer counter
 * @argv: character vector
 * Return: 0 on success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	int i;
	int acu;
	int res;
	int c[5] = {25, 10, 5, 2, 1};
	int x;

	i = acu = res = 0;
	if (argc == 2)
	{
		x = atoi(argv[1]);
		if (x > 0)
		{
			while (x)
			{
				if (x / c[i] >= 1)
				{
					res = x / c[i];
					acu = acu + res;
					x = x - (res * c[i]);
				}
				i++;
			}
			printf("%d\n", acu);
		}
		else
			printf("0\n");
		return (EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
}
