#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end
 * @head: first element of the list
 * @n: integer to add in the list
 * Return: Address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while ((*head)->next != NULL)
		head = &(*head)->next;

	(*head)->next = new;

	return (new);
}
