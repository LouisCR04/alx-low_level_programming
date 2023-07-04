#ifndef CMMAIN
#define CMMAIN

/**
 *print_diagsums - Prints the sums of diagonals in square matrix
 *@a: A pointer to array
 *@size: size of columns actually
 *
 * Return: void
 */
void print_diagsums(int *a, int size);

/**
 *_putchar - Just outputs a single character to the console
 *@c: any single character
 *
 * Return:A single character
 */
int _putchar(char c);

/**
 *print_chessboard - Prints the current layout of a
 *chessboard in regards to 2d array location
 *@a: Pointer to a character
 *
 *Return: void
 */
void print_chessboard(char (*a)[8]);

/**
 *_strstr - Searches and returns equal strings
 *@haystack: Pointer to a string
 *@needle: pointer to a buffer containing a string
 *
 *Return: Pointer to that matches strings in needle,
 *or NULL if no such substring is found
 */
char *_strstr(char *haystack, char *needle);

/**
 *_strpbrk - Scans s untill it encounters xters not present in accept
 *@s: Pointer to a string
 *@accept: pointer to a buffer containing a string
 *
 *Return: Pointer to that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 *_strspn - Scans s untill it encounters xters not present in accept
 *@s: Pointer to a string
 *@accept: pointer to a buffer containing a string
 *
 *Return: number of bytes in the initial segment of s which
 *consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 *_strchr - Checks for 1st occurence of a character in a string
 *@s: Pointer to a string
 *@c: Character value
 *
 *Return: Pointer to the buffer containing the string if
 *character is found, else NULL
 */
char *_strchr(char *s, char c);

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
