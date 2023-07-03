#include "main.h"
#include "2-strchr.c"

/**
 *_strspn - Scans s until it encounters xters not present in accept
 *@s: Pointer to a string
 *@accept: pointer to a buffer containing a string
 *
 *Return: number of bytes in the initial segment of s which
 *consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (_strchr(accept, *s) != 0 && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
