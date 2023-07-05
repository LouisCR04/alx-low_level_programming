#include "main.h"

/**
 *fnsqrt - Finds the root of an integer
 *@n: An integer value
 *@root: Acts like a counter towards the root
 *
 * Return: The root
 */
int fnsqrt(int n, int root)
{
	if (root == n / 2)
		return (-1);
	else if ((root * root) == n)
		return (root);
	else
		return (fnsqrt(n, root + 1));
}

/**
 *_sqrt_recursion - Acts as a wrapper for Finding the
 *squaroot of an integer
 *@n: An integer value
 *
 * Return: Squareroot
 */
int _sqrt_recursion(int n)
{
	int root = 2;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (fnsqrt(n, root));
}
