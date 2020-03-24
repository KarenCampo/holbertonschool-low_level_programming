#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer that points to the pointer of the list
 * @str: data to be inluded at the end of the list
 * Return: The address of the new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nd;
	list_t *omega = *head;
	int counter = 0;

	while (*(str + counter) != '\0')
	{
		counter++;
	}

	nd = (list_t *)malloc(sizeof(list_t));
	if (nd == NULL)
	{
		return (NULL);
	}

	(*nd).str = strdup(str);
	(*nd).len = counter;
	(*nd).next = NULL;

	if (*head == NULL)
	{
		*head = nd;
	}
	else
	{
		while (omega->next != NULL)
		{
			omega = omega->next;
		}
		omega->next = nd;
	}
	return (nd);
}
