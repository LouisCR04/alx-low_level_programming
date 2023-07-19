#include "3-calc.h"

/**
 *main- Entry
 *@argc: Argument count
 *@argv: Arguments from terminal
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/**
	  *Initiates to the address of the function (sum/ div etc)
	  *required by the operator passed from the terminal
	  */
	operation = get_op_func(argv[2]);

	if (!operation) /*if null, ie, not the defined operators*/
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
