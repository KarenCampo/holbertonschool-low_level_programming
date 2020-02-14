#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Description: Prints the numbers from 1 to 100, followed by a new line. But
 * for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both three
 * and five.
 * print FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%i", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		(i == 100) ? putchar('\n') : putchar(' ');
	}
	return (0);
}
