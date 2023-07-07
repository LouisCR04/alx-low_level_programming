#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 *checkstring_Ifdigits - Checks if a string is all digits
 *@s: A pointer to a string
 *
 *Return: 1 if only digits else 0
 */
int checkstring_Ifdigits(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}
/**
 *main - Entry point
 *@argc: Arguments count
 *@argv: Pointer to arrays containing CL arguments
 *
 *Return:Always 0(Success)
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checkstring_Ifdigits(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
