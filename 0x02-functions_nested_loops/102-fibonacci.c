#include <stdio.h>

/**
 *main - Entry point
 *Fibonacci sequence
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i;
	unsigned long n, m, sum;

	n = 1;
	m = n + 1;
	sum = n + m;

	printf("%lu, %lu, ", n, m);

	for (i = 0; i < 48; i++)
	{
		printf("%lu", sum);
		n = m;
		m = sum;
		sum = n + m;

		if (i < 48)
			printf(", ");
	}
	printf("\n");
	return (0);
}
