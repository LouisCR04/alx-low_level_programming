#include "main.h"
#include <stdlib.h>

/**
 *_strlen - Finds length of string
 *@s: Pointer to a string
 *
 * Return: Length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 *string_nconcat - Concatenates two strings
 *@s1: The first string
 *@s2: The string to append
 *@n: Bytes of s2 to append to s1
 *
 * Return: Pointer to newly allocated mem location
 *containing the concatenated string else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	unsigned int s1length;
	unsigned int s2length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1length = _strlen(s1);
	s2length = _strlen(s2);

	if (s2length > n)
		s2length = n;
	else
		n = s2length;
	ptr = malloc((sizeof(char)) * ((s1length)) + (s2length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1length; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[i + s1length] = s2[i];
	}
	ptr[i + s1length] = '\0';
	return (ptr);
}
