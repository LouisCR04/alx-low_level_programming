#include <stdio.h>

/**
 *main - Entry point
 *prints 01 to 99 but excludes where i=j & i>j
 *if i is 1st digit and j the second
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i != 7 || j != 8) || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
