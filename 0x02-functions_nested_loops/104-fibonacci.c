#include <stdio.h>

/**
 *main - Entry point
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i = 2;

	long double n = 1;
	long double m = n + 1;
	long double sum = n + m;

	printf("%0.Lf, %0.Lf, ", n, m);
	for (i = 0; i < 98; i++)
	{
		printf("%0.Lf", sum);
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
