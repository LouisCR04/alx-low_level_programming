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

	for (i = 0; i <= 9; i++)
	{

		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		if (i < 10)
		_putchar('\n');
	}
}
