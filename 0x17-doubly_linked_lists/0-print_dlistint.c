#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	int num = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	num = i;
	return(num);
