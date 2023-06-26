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
	int *s = a;
	int i;

	if (n < 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n - 1 ; i++)
		{
			printf("%d, ", s[i]);
		}
		printf("%d\n", s[n - 1]);
	}
}
