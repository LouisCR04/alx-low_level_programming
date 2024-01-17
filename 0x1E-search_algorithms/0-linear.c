#include "search_algos.h"

/**
 *linear_search - Searches a value in an array of integers using Linear S.ALG
 *@array: Pointer to 1st element of the array
 *@size: Number of elements of the array
 *@value: Value to search for in the array
 *
 * Return: Index of array been looked for else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
