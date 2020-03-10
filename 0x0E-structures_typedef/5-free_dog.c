#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs memory space
 * @d: pointer
 * Return: void
 */
void free_dog(dog_t *d)

{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
