#include "main.h"

/**
 *_strlen_recursion - Uses recursion to get a string length
 *@s: Pointer to a string
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = _strlen_recursion(s + 1);
		length += 1;
		return (length);
	}
	return (0);
}
