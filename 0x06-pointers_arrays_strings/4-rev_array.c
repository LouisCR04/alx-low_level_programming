#include "main.h"

/**
 *reverse_array - Reverses an array of integers
 *@a: A pointer to an integer
 *@n: An integer value
 *
 *Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
	}
}
