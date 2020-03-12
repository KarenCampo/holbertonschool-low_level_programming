#include "function_pointers.h"
/**
  * int_index - function that finds an integer
  * @array: type int array
  * @size: number of elements in the array
  * @cmp: pointer to function
  * Return: If no element matches, return -1; If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ((array == NULL) || (cmp == NULL))
		return (-1);
	for ( ; i < size; i++)
	{
		if ((*cmp)(array[i]))
		return (i);
	}
	return (-1);
}
