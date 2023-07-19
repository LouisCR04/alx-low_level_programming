#include "3-calc.h"
#include <string.h>

/**
 *get_op_func - Gets operator
 *@s: Operator from terminal
 *
 * Return: Pointer to function required by operator
 */
int (*get_op_func(char *s))(int, int)
{
	/**
	 *ops - An array structure containing an operation and address
	 *of operation fxs.
	 *
	 */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
