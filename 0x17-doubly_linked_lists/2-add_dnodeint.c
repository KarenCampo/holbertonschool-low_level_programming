#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: first node of the list
 * @n: Number:
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
