#include "main.h"

/**
 *print_rev - Prints the reverse of a string
 *@s: A pointer to a string
 *
 *Return: Void
 */
void print_rev(char *s)
{
	char *a = s;
	char c;
	int i, lth;

	i = 0;
	lth = 0;

	while (a[i] != '\0')
	{
		lth++;
		i++;
	}
	i = lth - 1;
	while (i > -1)
	{
		c = a[i];
		_putchar(c);
		i--;
	}
	_putchar('\n');
}
