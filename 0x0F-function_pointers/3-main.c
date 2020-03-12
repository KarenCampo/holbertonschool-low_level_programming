#include "3-calc.h"

/**
 * main - Entry point
 * @argc: int variable
 * @argv: char array pointer
 * Return: No 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
