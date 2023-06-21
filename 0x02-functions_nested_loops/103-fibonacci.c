#include <stdio.h>

/**
 *main - Entry point
 *Decided to experiment with while for this one
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i = 0;
	unsigned long n = 1;
	unsigned long m = n;
	unsigned long sum = n + m;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			i += sum;
		}
		n = m;
		m = sum;
		sum = n + m;
	}
	printf("%d\n", i);
	return (0);
}
