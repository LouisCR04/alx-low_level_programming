#include "main.h"

/**
 *_pow_recursion - Finds power of an integer
 *@x: Integer value
 *@y: Power
 *
 * Return: power of an integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
