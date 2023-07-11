#include "main.h"
#include <stdlib.h>

/**
 *create_array - Creates and initializes an array with c
 *@size: size of buffer to store the array
 *@c: charcter used to initialiaze the array
 *
 * Return: Pointer to the 1st element of the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(c) * size);

	if (size <= 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
