#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Return: NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *item;
	char *str = "";

	if (ht == NULL || ht->array == NULL)
		return;

	putchar('{');

	while (idx < ht->size)
	{
		item = ht->array[idx];

		while (item != NULL)
		{
			printf("%s'%s': '%s'", str, item->key, item->value);
			str = ", ";
			item = item->next;
		}

		idx++;
	}

	puts("}");
}
