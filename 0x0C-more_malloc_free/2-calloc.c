#include "main.h"
#include <stdlib.h>

/**
 *_calloc - Allocates memory for nmembers of an arrayof  size 'size' each
 *@nmemb:No of elements of an array
 *@size: Size of Each elements
 *
 * Return: Pointer to allocated Array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
