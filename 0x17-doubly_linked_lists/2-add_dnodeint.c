gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of a dlistint_t list.
 * @head: first node of the list
 * @n: Number:
 * Return: The address of the new element, or NULL if it failed 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
		newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
		newnode->n = n;
		newnode->prev = NULL;
		newnode->next = *head;

	while (newnode->next != NULL)
		{
                  newnode++;
		}
		if (*head)
		{
			(*head)->prev = newnode;
		}
	return (newnode);
}
