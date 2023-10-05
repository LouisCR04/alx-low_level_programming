#include "hash_tables.h"

/**
 * key_index - Gets index of a key in a hash table
 * @key: Literal key
 * @size: Size of array of the table
 *
 * Return: index at which the key should be stored in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
