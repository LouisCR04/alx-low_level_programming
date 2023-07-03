#include "main.h"

/**
 *_memcpy - Copies contents in a memory buffer to another buffer
 *@dest: Destination buffer
 *@src: Source buffer
 *@n: Bytes to copy
 *
 *Return: Pointer to the buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
