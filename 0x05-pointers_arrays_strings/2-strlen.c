#include "main.h"

/**
 *_strlen - Prints length of string
 *@s: A pointer to a string
 *
 *Return: Length of string pointed by s
 */
int _strlen(char *s)
{
	char *a = s;
	int i, lth;

	i = 0;
	lth = 0;

	while (a[i] != '\0')
	{
		lth++;
		i++;
	}
	return (lth);
}
