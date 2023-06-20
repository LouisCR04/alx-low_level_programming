#include "main.h"

/**
 *print_alphabet_x10 - the alphabets a to z 10 times
 *
 *Return:Always 0(Success)
 */

void print_alphabet_x10(void)
{
	int i, j;
	char c;

	for (i = 0; i <= 10; i++)
	{
		c = 'a';
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		j = 0;

		for (j = 0; j < 10; j++)
		{
			_putchar('\n');
		}
	}
}
