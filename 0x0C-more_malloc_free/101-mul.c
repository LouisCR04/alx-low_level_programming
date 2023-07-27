#include <stdlib.h>
#include "main.h"

/**
 *_errormsg - Prints error message and terminates program
 *with exit status 98
 *
 * Return:void
 */
void _errormsg(void);

/**
 *invalid_int - Checks if argument is made up of integers
 *@str:pointer to a string
 *
 * Return: -1 if not an int
 */
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

/**
 *invalid_int - Checks if argument is made up of integers
 *@str:pointer to a string
 *
 * Return: -1 if not an int
 */
int invalid_int(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (0);
}

/**
 *_errormsg - Prints error message and terminates program
 *with exit status 98
 *
 * Return:void
 */
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

/**
 *printer - prints a string
 *@str: Pointer to a string to be printed
 *
 * Return:void
 */
void printer(char *str)
{
	int i = 0;

	while (*str)
	{
		_putchar(str[i]);
		i++;
	}
}
