#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocating memory fuction
 * @b: int variable
 * Return: return a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *alloc; /*alloc = allocate (variable) */

	alloc = malloc(b); /*value position*/

	if (alloc == NULL) /*if noty then terminates in 98*/
		exit(98); /*if not*/
	else
		return (alloc); /*return allocated value*/
}
