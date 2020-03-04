#include <stdlib.h>
#include "holberton.h"
/**
  * create_array - for a char array 
  * @size: size of variable
  * @c: counter variable
  * Return: char
  */
char *create_array(unsigned int size, char c) 

{
char *l;

	if (!size)
		return (NULL);

	l = malloc(sizeof(char) * size);

	if (!l)
		return (NULL);
	if (l)
	{
		while (size > 0)
			l[--size] = c;
	}
	return (l);
}
