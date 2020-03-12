#include "function_pointers.h"

/**
 * array_iterator - with function pionter print the array elements
 * @array:  array.
 * @size: size of array size_t.
 * @action: function pointer.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i <= (size - 1); i++)
	{
		(*action)(array[i]);
	}
}
