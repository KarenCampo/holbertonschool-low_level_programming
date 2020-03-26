#include "lists.h"
/**
 *free_listint2 - This fution sets the head to NULL
 * @head: Pointer to the pointer of the first node
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;/*now tmp is head*/
		*head = tmp->next;
		free(tmp);
	}
}
