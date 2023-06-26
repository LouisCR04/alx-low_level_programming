#include "main.h"
#include "2-strlen.c"

/**
 *_strcpy - Copies string
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, lth;

	lth = _strlen(src) + 1;
	for (i = 0; i <= lth; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
