#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Gets a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: Pointer to a string
 *
 * Return: A pointer
 */

char *_strdup(char *str)
{
	int i;
	int n = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[n] != '\0')
	{
		n++;
	}

	ptr = malloc(sizeof(char) * n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
