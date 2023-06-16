#include <stdio.h>

/**
 *main - Entry point
 *Uses putchar() to print single digit integer numbers
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
