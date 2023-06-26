#include "main.h"

/**
 *swap_int - Swaps the argument values
 *@a: A pointer to an integer value
 *@b: A pointer to an integer value
 *
 *Return: Void
 */

void swap_int(int *a, int *b)
{
	int n, m;

	n = *a;
	m = *b;

	*a = m;
	*b = n;
}
