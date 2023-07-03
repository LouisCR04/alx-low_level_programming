#include "main.h"
#include "stddef.h"
/**
 *_strchr - Checks for 1st occurence of a character in a string
 *@s: Pointer to a string
 *@c: Character value
 *
 *Return: Pointer to the buffer containing the string if
 *character is found, else NULL
 */

char *_strchr(char *s, char c)
{
	int i, length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return NULL;
}
