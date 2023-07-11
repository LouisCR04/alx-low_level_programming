#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: A pointerto a string
 *@s2: A pointerto a string
 *
 *Return: A pointer to a newly allocated space in memory
 *which contains the contents of s1, followed by the contents of s2,
 *and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, length1, length2;
	char *ptr;

	i = 0;
	length1 = 0;
	length2 = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != 0)
	{
		i++;
		length1++;
	}
	i = 0;

	while (s2[i] != 0)
	{
		i++;
		length2++;
	}
	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		ptr[i + length1] = s2[i];
	}
	ptr[i + length1] = '\0';
	return (ptr);
}
