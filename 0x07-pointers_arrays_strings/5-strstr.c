#include "main.h"

/**
 *_strstr - Searches and returns equal strings
 *@haystack: Pointer to a string
 *@needle: pointer to a buffer containing a string
 *
 *Return: Pointer to that matches strings in needle,
 *or NULL if no such substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *h = haystack;
			char *n = needle;

			while (*h != '\0' && *n != '\0' && *n == *h)
			{
				h++;
				n++;
			}
			if (*n == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
