#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: Array
 * Return: New hash table or NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = NULL;

	if (size == 0)
		return (NULL);

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t *) * size);
	if (head->array == NULL)
	{
		free(head);
		return (NULL);
	}
	return (head);
}
