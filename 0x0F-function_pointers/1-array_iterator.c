#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - Performs an action over each element of an array
 *@array: The arr to be iterated upon
 *@size: Size of the array
 *@action: A pointer to the function which is to be performed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
