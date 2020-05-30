#include "hash_tables.h"

/**
 * hash_table_get - Function that gets the value of a key
 * @ht: pointer to hash table
 * @key: Element key
 * Return: The value associated to the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (!key || strcmp(key, "") == 0 || !ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
