#include <stdio.h>

/**
 *main - Entry point
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	unsigned long n = 2;
	unsigned long m = 612852475143;

	while (n != m)
	{
		if (m % n == 0)
			m = m / n;
		else
			n++;
	}
	printf("%lu\n", m);
	return (0);
}
