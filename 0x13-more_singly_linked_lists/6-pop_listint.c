#include "lists.h"
/**
 * pop_listint - Function that deletes the head node
 * @head: pointer to the first node
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *res;

	if (!(*head && head))
		return (0);

	data = (*head)->n;

	res = *head;
	*head = res->next;
	free(res);

	return (data);
}
