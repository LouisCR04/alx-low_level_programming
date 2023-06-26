#include "main.h"
#include "2-strlen.c"
/**
 *rev_string - Reverses a string
 *@s: A pointer to a string
 *I've just learnt I could include a .c file as a header
 *Not recommended but this time seems efficient
 *
 *Return: Void
 */

void rev_string(char *s)
{
	int lth = _strlen(s);
	int i;
	char c;

	i = 0;
	while (i < lth / 2)
	{
		c = s[i];
		s[i] = s[lth - i - 1];
		s[lth - i - 1] = c;
		i++;
	}
}
