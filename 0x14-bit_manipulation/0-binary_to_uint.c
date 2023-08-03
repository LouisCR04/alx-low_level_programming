#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint - Converts a binary string to an uns integer
 *@b: Pointer to the binary string
 *
 * Return: The integer or 0 if unsuccessful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		n = 2 * n + (b[i] - '0');
		i++;
	}
	return (n);
}
