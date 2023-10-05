#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: Key you are looking for
 *
 * Return: Value associated with the element, Null if NOT key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];

	while (node && (strcmp(node->key, key) != 0))
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
