#include "main.h"

/**
 *_strncpy - Appends a string to another
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Copies string to nth byte
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
