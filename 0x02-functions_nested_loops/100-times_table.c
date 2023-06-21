#include "main.h"

/**
 *print_times_table - Prints the n by n multiplication table.
 *This time I decided to use the words rows and columns for easier following
 *@n: An integer value@n: An integer value.
 *The table will only show for n> 0 && n<15
 *
 *Return: void
 */

void print_times_table(int n)
{
	int row, column, times;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				times = row * column;
				if (column == 0)
					_putchar(times + '0');
				else if (times <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
				else if (times >= 10 && times <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(times / 10 + '0');
					_putchar(times % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(times / 100 + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
