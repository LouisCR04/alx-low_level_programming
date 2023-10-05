#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to update
 * @key: Key
 * @value: Value associated with key
 *
 * Return: 1 if it succeeded, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0, i;
	char *str;
	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	str = strdup(value);
	if (str == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	i = idx;

	while (ht->array[i])
	{
		if ((strcmp(ht->array[i]->key, key)) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = str;
			return (1);
		}

		i++;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(str);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = str;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
