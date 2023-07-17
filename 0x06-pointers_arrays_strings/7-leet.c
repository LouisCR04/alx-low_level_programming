#include "main.h"

/**
 *leet - function that encodes a string into 1337.
 *@s: A pointer to an integer
 *
 *Return: A pointer to a string
 */
char *leet(char *s)
{
	char a[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = a[j + 1];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
