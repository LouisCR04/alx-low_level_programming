#include "main.h"
#include <stdio.h>

/**
 *print_array - Prints elements of an array
 *@a: A pointer to an integer value
 *@n: An integer value
 *
 *Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 2 ; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
