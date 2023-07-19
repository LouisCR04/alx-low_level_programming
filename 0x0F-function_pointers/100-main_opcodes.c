#include <stdlib.h>
#include <stdio.h>

/**
 *main - entry
 *@argc: No of arguments from terminal
 *@argv: Arguments from terminal
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
