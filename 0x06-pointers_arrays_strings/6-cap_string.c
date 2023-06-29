#include "main.h"

/**
 *special - Checks for special characters
 *@c: - Character
 *
 *Return: True(0) if special else false(0)
 */
int special(char c)
{
	int i = 0;

	char array[] = {'\n', '\t', ' ', '.', ',', ';', ',',
		'!', '?', '(', ')', '{', '}'};

	while (i < 13)
	{
		if (array[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 *cap_string - changes all lowercase letters of a string to uppercase
 *@s: A pointer to an integer
 *
 *Return: A pointer to a string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (special(s[i]))
		{
			i++;
			continue;
		}
		if (s[i] >= 'a' && s[i] <= 'z' && (special(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
