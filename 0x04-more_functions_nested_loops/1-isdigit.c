#include "main.h"

/**
 *_isdigit - Checks for numbers 0-9
 *@c: An integer value
 *
 *Return: 1 if true else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
