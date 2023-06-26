#include "main.h"
#include "2-strlen.c"

/**
 *puts_half - Prints the last half of strings
 *@str: A pointer to a string
 *
 *Return: Void
 */
void puts_half(char *str)
{
	char *a = str;
	char c;
	int i, lth;

	lth = _strlen(a);
	if (lth % 2 == 0)
		i = lth / 2;
	else
		i = (lth + 1) / 2;
	while (i < lth)
	{
		c = a[i];
		_putchar(c);
		i++;
	}
	_putchar('\n');
}
