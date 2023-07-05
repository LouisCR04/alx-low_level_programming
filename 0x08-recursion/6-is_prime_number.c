#include "main.h"

/**
 *prime - checks for prime integers
 *@n: An integer number
 *@divisor: Divisor
 *
 *Return: 1 if prime else 0
 */
int prime(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	else if (n / 2 == divisor)
		return (1);
	else
		return (prime(n, divisor + 1));
}

/**
 *is_prime_number - Checks for prime numbers
 *@n: Integer value
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (prime(n, divisor));
}
