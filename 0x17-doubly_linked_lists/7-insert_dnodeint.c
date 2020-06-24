#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * pointer variable, first node
 * @n: New node data
 * @idx: Node index
 * @h: head of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	size_t size;


	current = *h;
	size = 0;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	if (size < idx)
		return (NULL);
	if (size == idx)
		return (add_dnodeint_end(h, n));
	current = *h;
	while (--idx)
		current = current->next;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
