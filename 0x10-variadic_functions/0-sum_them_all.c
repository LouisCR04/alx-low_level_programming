#include "variadic_functions.h"

/**
 *sum_them_all - Adds all passed args in the variadic fx
 *@n: No of int args? 
 *
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		
		va_end(args);
		return (sum);
	}
	return (0);
}
