#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a linked list
 * @head: Head of the linked list
 * @index: Node index
 * Return: If the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;/*initialize counter in 0, has to be unsigned int*/


	if (!head)
		return (NULL);

	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		count++;
	}
return (head);
}
