#include "main.h"

/**
 *_strcat - concatenates two strings.
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Concataned strings
 */

char *_strcat(char *dest, char *src)
{
	int length, i;

	i = 0;
	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != 0)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
