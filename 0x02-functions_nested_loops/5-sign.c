#include "main.h"

/**
 *print_sign - Prints the sign of the integer and returns 1
 *in accordance to the conditions
 *@n: An integer value
 *Return:Always 0(Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
