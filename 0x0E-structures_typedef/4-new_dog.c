#include <stdio.h>
#include <stdlib>
#include "dog.h"
/**
* new_dog - function for a new dog structure
* @name: pointer to a char data type
* @age: float data type in the new dog structure
* @owner: pointer to a car data type
* Return: NULL if the fails
*/
dog_t *new_dog(char *name, float age, char *owner)
/* make copy of name and owner*/
{
	struct odog *ndog;
	int i, j, k;
	char *a, *b;

	ndog = mallock(sizeof(struct odog));
	if (ndog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
	{
		free(ndog);
		return (NULL);

	b = malloc(sizeof(char) * j + 1);
	if (b == NULL)
	{
		free(a);
		free(ndog);
		return (NULL);
	}
	for (k = 0, k <= i; k++)
		a[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];

	ndog->name = a;
	ndog->age = age;
	ndog->owner = b;
	return (ndog);
	}


}
