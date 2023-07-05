#include "main.h"

/**
 *_puts_recursion - Uses recursion to print a string
 *@s: A pointer to set
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
