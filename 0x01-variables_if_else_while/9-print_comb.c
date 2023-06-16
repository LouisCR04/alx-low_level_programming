#include <stdio.h>

/**
 *main - Entry point
 *Prints combo of a numbers 0-9, comma and space
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
