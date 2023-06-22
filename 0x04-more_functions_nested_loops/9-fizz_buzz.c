#include <stdio.h>

/**
 *main - Entry point
 *Prints 1 to 100 but Fizz, Buzz or FizzBuzz
 *when a multiple of 3, 5 and both respectively
 *
 *Return:Always 0(Success)
 */

int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			if ((n % 3) == 0 && (n % 5) == 0)
				printf("FizzBuzz ");
			else if ((n % 3) == 0)
				printf("Fizz ");
			else if ((n % 5) == 0)
				printf("Buzz ");
		}
		else
			printf("%d ", n);
	}
	printf("Buzz\n");
	return (0);
}
