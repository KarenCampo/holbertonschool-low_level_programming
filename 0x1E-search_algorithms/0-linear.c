#include "search_algos.h"

/**
 * linear_search - It searchs for a given value in an array
 * @size: The size of the array
 * @value: The value that I need to find
 * @array: header pointer
 *
 * Return: -1 not present, index number if found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;

	if (array == NULL)
		return (-1);

	while (counter < size)
	{
		printf("Value checked array[%lu] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
		{
			return (counter);
		}
		counter++;
	}
	return (-1);
	}

