#include <stdio.h>

/**
 *main - Entry point
 *@argc: Arguments count
 *@argv: Pointer to arrays containing CL arguments
 *
 *Return:Always 0(Success)
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
