#include "lists.h"
/**
 * list_len - This function returns the number of elements in the linked list
 * @h: pointer to the head node of the list
 * Return: Number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t Zahler = 0;

	for ( ; h; Zahler++)
	{
		h = h->next;
	}
	return (Zahler);
}
