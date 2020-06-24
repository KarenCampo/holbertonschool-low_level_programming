#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes nodes
 * @head: head of the list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx;
	dlistint_t *erase = NULL;

	if (head == NULL)
		return (-1);
	erase = *head;

	for (idx = 0; idx < index && erase != NULL; idx++)
		erase = erase->next;

	if (index - idx == 0 && erase != NULL)
	{
		if (erase->next != NULL)
			erase->next->prev = erase->prev;
		if (erase->prev != NULL)
			erase->prev->next = erase->next;
		if (erase == *head)
			*head = erase->next;
		free(erase);
		return (1);
	}
	return (-1);
}
