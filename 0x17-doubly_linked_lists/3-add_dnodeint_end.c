#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: The first node of the list
 * @n: Number
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new_node->prev = tmp;
		tmp->next = new_node;
	}
	return (new_node);
}
