#include "lists.h"
/**
 * listint_len - prints the lenght of a list of integers
 * @h: pointer to the head node
 * Return: the number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
