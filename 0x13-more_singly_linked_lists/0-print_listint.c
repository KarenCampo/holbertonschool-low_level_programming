#include  "lists.h"
/**
 * print_listint - prints all the elements of a lisint_t listt
 * @h: pointer of a singly linked list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
