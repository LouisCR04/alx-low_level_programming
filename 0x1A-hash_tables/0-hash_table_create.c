#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table else Null if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned long int i = 0;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (h_table->array == NULL)
		return (NULL);

	while (i < size)
	{
		h_table->array[i] = NULL;
		i++;
	}

	return (h_table);
}
