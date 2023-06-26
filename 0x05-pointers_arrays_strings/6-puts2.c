#include "main.h"
#include "2-strlen.c"

/**
 *puts2 -instr not clear but possibly corresp to even
 *@str: A pointer to a string
 *
 *Return: Void
 */
void puts2(char *str)
{
	char *a = str;
	char c;
	int i, lth;

	lth = _strlen(a);
	i = 0;
	while (i < lth - 1)
	{
		c = a[i];
		if (i % 2 == 0)
			_putchar(c);
		i++;
	}
	_putchar('\n');
}
