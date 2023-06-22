#include "main.h"

/**
 *print_line - Prints a line of length n bytes
 *@n: An integer value
 *
 *Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
