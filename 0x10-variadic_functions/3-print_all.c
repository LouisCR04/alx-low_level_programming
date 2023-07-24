#include "variadic_functions.h"

/**
 *Prints Almost anything to the std output
 *@format: list of types of arguments passed to the function 
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_spec f_types[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", str_print}
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *f_types[j].identifier)
			{
				f_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n);
}
}
