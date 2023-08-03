#include "main.h"

/**
 *get_bit - Gets bit at given index
 *@n: Integer value to get bit from
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n)*8))
			return (-1);

	if ((n & (1 << index)) != 0)
		return (1);

	return (0);
}
