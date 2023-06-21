#include <stdio.h>

/**
 *main - Entry point
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i = 2;

	unsigned long n = 1;
	unsigned long m = n + 1;
	unsigned long sum = n + m;

	printf("%lu, %lu, ", n, m);
	for (i = 0; i < 98; i++)
	{
		printf("%lu", sum);
		n = m;
		m = sum;
		sum = n + m;
		if (i < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
