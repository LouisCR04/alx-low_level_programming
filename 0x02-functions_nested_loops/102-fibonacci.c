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
	float n, m, sum;

	n = 1;
	m = 2;

	printf("1, 2");
	for (i = 1; i <= 48; i++)
	{
		sum = n + m;

		printf(", %.0f", sum);
		if ((i % 2) == 0)
		{
			m = sum;
		}
		else if ((i % 1) == 0)
			n = sum;
	}
	printf("\n");
	return (0);
}
