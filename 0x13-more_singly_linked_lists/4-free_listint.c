#include "lists.h"
/**
 * free_listint - function that frees the listint_t list
 * @head: pointer to the first node
 * Return: head
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}

	if (head->next)
	{
		free_listint(head->next);
	}
	free(head);
}
