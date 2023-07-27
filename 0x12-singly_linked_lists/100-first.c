#include <stdio.h>

/**
 *exec_b4main - A fx that executes b4 main is executed
 *
 * Return: void
 */
void exec_b4main(void) __attribute__((constructor));

void exec_b4main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
