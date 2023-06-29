#include "main.h"

/**
 *_strncpy - concatenates two strings after length n
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Concataned strings starting from nth position of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int length, i;

	i = 0;
	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != 0 && i < n)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
