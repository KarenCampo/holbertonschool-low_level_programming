#include "lists.h"

/**
 * free_dlistint - Frees  double linked list.
 * @head: The head of the list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(head);
}
