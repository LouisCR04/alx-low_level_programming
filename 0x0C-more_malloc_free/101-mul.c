#include <stdlib.h>
#include "main.h"

void _errormsg(void);

int invalid_int(char *str);

/**
 *main - Entry point
 *Basically multiplies 2 numbers passed as arguments
 *@argc: argument count
 *@argv: arguments passed from the terminal
 *
 * Return:void
 */

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc != 3)
	{
		_errormsg();
	}
	
	for (i = 0; i < argc; i++)
	{
		for (j = 0; *argv[j] != '\0'; j++)
		{
			if (invalid_int(argv[j]) == -1)
			{
				_errormsg();
			}
		}
	}
	_putchar('5');

	return (0);
}

int invalid_int(char *str)
{
	int i = 0;

	while (*str)
	{
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		str++;
	}
	return (0);
}

void _errormsg(void)
{
	_putchar('e');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');

	exit(98);
}

void printer(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(str[i]);
		i++;
	}
}
