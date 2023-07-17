#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees all buffers used by the struct passed
 *@d: Pointer to structure
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
