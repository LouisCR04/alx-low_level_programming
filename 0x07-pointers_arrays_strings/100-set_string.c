#include "main.h"

/**
 *set_string - sets a pointer to point to a pointer
 *@s: A pointer to set to point a pointer
 *@to: pointer to a string or characters
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
