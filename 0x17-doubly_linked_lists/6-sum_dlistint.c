#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: The head of the list
 * Return: If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{

	unsigned int sumn = 0;

	while (head)
	{
		sumn += head->n;
		head = head->next;
	}

	return (sumn);
}
