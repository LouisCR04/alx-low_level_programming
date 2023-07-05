#include "main.h"

/**
 *factorial - Finds factorial of integer numbers
 *@n: integer number
 *
 * Return: Factorial of the integer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return (n * factorial(n - 1));
}
