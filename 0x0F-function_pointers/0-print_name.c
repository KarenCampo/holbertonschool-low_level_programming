#include "function_pointers.h"

/**
 * print_name - this function prints a name.
 * @name: pinter char type
 * @f: function pointer char type
 * Return: void
 */
void print_name(char *name, void (*f)(char *))

{
	if (f == NULL)
	{
		return;
	}
	f()(name);
}
