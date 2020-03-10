#include "dog.h"
/**
 * init_dog - Entry Point
 * @d: pointer to the dog structure
 * @name: name of the dog type char
 * @age: age of the dog float type
 * @owner: information of the dog owner char type
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
