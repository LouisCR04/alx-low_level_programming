#include <stdio.h>

/**
 *main - Entry point
 *Prints base 16 numbers in lower case
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	char n = '0';
	char l = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
