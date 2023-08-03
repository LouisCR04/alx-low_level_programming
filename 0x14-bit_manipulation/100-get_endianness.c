#include "main.h"

/**
 *get_endianness - Checks the order of sequence of storage of bytes in
 *a computer's memory
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *s = (char *)&n;

	/*Least signif in lowest address is Little Endian*/
	if (*s == 1)
		return (1);

	return (0);
}
