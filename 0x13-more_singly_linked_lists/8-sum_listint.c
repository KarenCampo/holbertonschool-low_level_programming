#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all dat(n) of a linked list
 * @head: pointer to header of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
