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

	if (n < 0 && n != -2147483648)
		z = (-n) % 10;
	else if (n == -2147483648)
		z = 8;
	else
		z = n % 10;
	_putchar(z + '0');
	return (z);
}
