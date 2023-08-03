#include "main.h"

/**
 *flip_bits - number of bits you would need to flip to get
 *from one number to another
 *@n: Integer value to start from
 *@m: Integer value to get to
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m = 0, bits = 0;

	n_xor_m = n ^ m;

	while (n_xor_m != 0)
	{
		if (n_xor_m & 1)
			bits++;

		n_xor_m >>= 1;
	}

	return (bits);
}
