#include "main.h"

/**
 *print_diagonal - Prints a diagonal line
 *@n: An integer value
 *
 *Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			j = 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
