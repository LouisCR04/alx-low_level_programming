#include "main.h"

/**
 *print_alphabet_x10 - the alphabets a to z 10 times
 *
 *Return:Always 0(Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 10; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	return (0);
}
