#ifndef CMMAIN
#define CMMAIN

/**
 *_memcopy - Copies contents in a memory buffer to another buffer
 *@dest: Destination buffer
 *@src: Source buffer
 *@n: Bytes to copy
 *
 *Return: Pointer to the buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_memset - Fills memory buffer with specified xter
 *@s: A pointer to a buffer
 *@b: Character used to replace
 *@n: Bytes to fill
 *
 *Return: Pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n);

#endif
