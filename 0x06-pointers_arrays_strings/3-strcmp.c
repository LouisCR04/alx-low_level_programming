#include "main.h"

/**
 *_strcmp - Compares a string to another
 *@s1: A pointer to a string
 *@s2: A pointer to a string
 *
 *Return: Copies string to nth byte
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
