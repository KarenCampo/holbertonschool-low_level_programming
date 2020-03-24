#include "lists.h"
/**
 * add_node - function that adds a node at the beginning of the list_t
 * @head: pointer to first node
 * @str: string to add tothe nre element
 * Return: The new element address, or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nd;
	int counter = 0;

	nd = (list_t *)malloc(sizeof(list_t));
	if (nd == NULL)
	{
		return (NULL);
	}
	while (*(str + counter) != '\0')
	{
		counter++;
	}

	(*nd).len = counter;
	(*nd).str = strdup(str);
	(*nd).next = *head;
	*head = nd;

	return (nd);



}
