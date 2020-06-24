#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: list
 *@index: Node index
 * Return: If the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int idx = 0;

	while (idx < index)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
		idx++;
	}

	return (temp);

}
