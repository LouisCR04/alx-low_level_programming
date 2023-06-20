#include "main.h"

/**
 *print_last_digit - Literally
 *@n: Integer Value
 *
 *Return: Last digit
 */

int print_last_digit(int n)
{
	int z;

	if (n < 0)
		z = (-n) % 10;
	else
	{
		z = n % 10;
	}
	_putchar(z+'0');
	return (z);
}
