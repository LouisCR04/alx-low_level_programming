#include <stdio.h>
/**
 *main - entry point
 *Some weird combo, not sure I understand the question but it is what it is
 *Decided to use for loops for simplicity and readability
 *Return: alway returns 0
 *
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 99; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');
			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (!(n == 98 && m == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

