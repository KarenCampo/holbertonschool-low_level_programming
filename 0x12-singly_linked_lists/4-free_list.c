#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: first element in the linked list
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
