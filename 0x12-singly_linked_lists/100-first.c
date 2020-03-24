#include "lists.h"
void tortuga(void) __attribute__((constructor));

/**
 * tortuga - Prints beforer main function
 *
 * Return: Void
 */

void tortuga(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
