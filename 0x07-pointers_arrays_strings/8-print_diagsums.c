#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - Prints the sums of diagonals in square matrix
 *@a: A pointer to array
 *@size: size of columns actually
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int main_diag = 0;
	int sec_diag = 0;


	for (i = 0; i < size; i++)
	{
		main_diag += a[(i * size) + i];
		sec_diag += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", main_diag, sec_diag);
}
