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
	int i, j;
	
	j = _strlen(a);
	
	i = j;
	
	while (i > 0)
	{
		c = a[i];
		_putchar(c);
		i--;
	}
	_putchar('\n');
}
