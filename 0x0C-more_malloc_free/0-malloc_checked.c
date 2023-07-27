#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocated memory and checks if successful
 *@b: Size to allocate
 *
 *Return: Pointer to memory allocated or NUll 98 if unsuccessful
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
