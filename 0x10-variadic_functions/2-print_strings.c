#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_strings - Prints all passed strings
 *@separator: Separates the strings
 *@n: No of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	if (n > 0)
	{
		va_start(args, n);
		while (i < n)
		{
			s = va_arg(args, char*);

			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
