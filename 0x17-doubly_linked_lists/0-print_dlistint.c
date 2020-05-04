#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: Header node
 * Return: Number of nodes
 */


size_t print_dlistint(const dlistint_t *h)

{
	size_t celement = 0;

	for (; h != NULL; h = h->next, celement++)
	{
		printf("%d\n", h->n);
	}
	return (celement);
}
