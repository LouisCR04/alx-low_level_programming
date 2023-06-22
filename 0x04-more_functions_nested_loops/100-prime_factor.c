#include <stdio.h>

/**
 *main - Entry point
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	unsigned long long n = 2;
	unsigned long long m = 612852475143;

	while (n != m)
	{
		if (m % n == 0)
			m = m / n;
		else
			n++;
	}
	printf("%llu\n", 
	return (0);
}
