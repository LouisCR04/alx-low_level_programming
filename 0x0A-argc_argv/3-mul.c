#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: Arguments count
 *@argv: Pointer to arrays containing CL arguments
 *
 *Return:Always 0(Success)
 */

int main(int argc, char **argv)
{
	int i;

	if (argc < 3)
		printf("Error\n");
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	return (0);
}
