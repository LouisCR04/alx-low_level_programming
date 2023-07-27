#include "main.h"
#include <stdlib.h>

/**
 *_realloc - Reallocated buffer
 *@ptr: Pointer to buffer to reallocate
 *@old_size: Size of ptr
 *@new_size: Size of new buffer
 *
 * Return: pointers or void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		new[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);
	return (new);
}
