#include "main.h"

/**
 *_puts - Prints a string to std output
 *@str: A pointer to a string
 *
 *Return: Void
 */
void _puts(char *str)
{
	char *a = str; /* str =Address of str[0] */
	char c;
	int i = 0;

	while (a[i] != '\0')
	{
		c = a[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
