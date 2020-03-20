#include "lists.h"

/**
 * print_list - This funtion prints all the elements of a list_t
  * @h: head of the linked list
 * Return: returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	for ( ; h; counter++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
	}
	return (counter);
}
