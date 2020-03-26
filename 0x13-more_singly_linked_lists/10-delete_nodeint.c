#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * @head: Double pointer to the header
 * @index: Element to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *res  = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	ptr = *head;

	if (!index)
	{
		res = res->next;
		free(*head);
		*head = res->next;
		return (1);
	}


	while (count < index - 1)
	{

		if (res == NULL)
		{
			return (-1);
		}

		res = res->next;
		count++;
	}
	ptr = res->next;
	res->next = ptr->next;
	free(ptr);
	return (1);
}
