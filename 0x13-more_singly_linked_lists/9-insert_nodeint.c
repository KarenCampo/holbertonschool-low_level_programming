#include "lists.h"
/**
 * insert_nodeint_at_index - Function inserts a new node at a given position
 * @head: pointer to the list header
 * @idx:  Index of the list where the new node should be added
 * @n: Data of the new node
 * Return: When no  add the new node at idx, don't add new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *res;
	unsigned int count = 0;

	res = malloc(sizeof(listint_t));

	if (head == NULL || res == NULL)
	{
		return (NULL);
	}
	res->n = n;

	if (!idx)
	{
		res->next = *head;
		*head = res;

		return (res);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	/* Move the list */
	while (count < idx - 1)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr = ptr->next;
		count++;
	}
	res->next = ptr->next;/*return resut*/
	ptr->next = res;
	return (res);
}
