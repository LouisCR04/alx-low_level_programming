#include "main.h"
#include <stdlib.h>

/**
 *array_range - Creates an array of integers
 *@min: Lowest integer in the array
 *@max: Highest integer in the array
 *
 * Return:Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int i, length;
	int *ptr;

	if (min > max)
		return (NULL);
	length = 0;
	for (i = min; i <= max; i++)
		length++;
	ptr = malloc(sizeof(int) * length);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
