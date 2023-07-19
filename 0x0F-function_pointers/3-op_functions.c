#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - Adds two integers
 *@a: An integer value
 *@b: An integer value
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - ...
 *@a: ...
 *@b: ...
 *
 * Return: ...
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - ...
 *@a: ...
 *@b: ...
 *
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - ...
 *@a: ...
 *@b: ...
 *
 * Return: ...
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - ...
 *@a: ...
 *@b: ...
 *
 * Return: ...
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
