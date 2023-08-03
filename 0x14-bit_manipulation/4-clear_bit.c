#include "main.h"

/**
 *clear_bit - Sets bit at given index to 0
 *@n: Integer to clear bit
 *@index: Index to clear bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
