#include "main.h"

/**
 *_islower-Checks for lowercase characters.
 *@c: An integer value
 *
 *Return:1 if lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
