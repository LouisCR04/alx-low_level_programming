#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - Searches for the 1st element that complies to the passed fx
 *@array:An array of elements
 *@size:Size of the array
 *@cmp:A pointer to a function
 *
 * Return: The index of the array element that complies or -1 if not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
