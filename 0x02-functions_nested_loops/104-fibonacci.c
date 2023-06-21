#include <stdio.h>

/**
 *main - Entry point
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i = 2;

	float n = 1;
	float m = n + 1;
	float sum = n + m;

	printf("%.0f, ", n);
	printf("%.0f, ", m);
	while (i < 98)
	{
		i++;
		printf("%.0f", sum);
		n = m;
		m = sum;
		sum = n + m;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
