#include "main.h"

/**
 *more_numbers - Prints 0 to 14 ten times
 *
 *Return: void
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
		{
			if (m > 9)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
		_putchar('\n');
	}
}
