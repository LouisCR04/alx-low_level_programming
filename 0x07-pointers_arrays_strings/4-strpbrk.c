#include "main.h"

/**
 *_strpbrk - Scans s untill it encounters xters not present in accept
 *@s: Pointer to a string
 *@accept: pointer to a buffer containing a string
 *
 *Return: Pointer to that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
