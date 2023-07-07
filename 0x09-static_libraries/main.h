#ifndef CMAINH
#define CMAINH

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

/**
 *_strcmp - Compares a string to another
 *@s1: A pointer to a string
 *@s2: A pointer to a string
 *
 *Return: Copies string to nth byte
 */
int _strcmp(char *s1, char *s2);

/**
 *_strncpy - Appends a string to another
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Copies string to nth byte
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strncat - concatenates two strings after length n
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Concataned strings to nth position of dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 *_strcat - concatenates two strings.
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Concataned strings
 */
char *_strcat(char *dest, char *src);

/**
 * _atoi - converts string to integer
 * @s: A pointer to a string
 *
 * Return: Integer equivalent of the passed string
 */
int _atoi(char *s);

/**
 *_strcpy - Copies string
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src);

/**
 *_puts - Prints a string to std output
 *@str: A pointer to a string
 *
 *Return: Void
 */
void _puts(char *str);

/**
 *_strlen - Prints length of string
 *@s: A pointer to a string
 *
 *Return: Void
 */
int _strlen(char *s);

/**
 *_isdigit - Checks for numbers 0-9
 *@c: An integer value
 *
 *Return: 1 if true else 0
 */
int _isdigit(int c);

/**
 *_isupper - Checks for Uppercase letters
 *@c: An integer value
 *
 *Return: 1 if uppercase else 0
 */
int _isupper(int c);

/**
 * _putchar - writes the character c to std
 *@c: An Ascii character
 *
 * Return: A character
 */
char _putchar(char c);

/**
 *_islower - Checks if c is a lower alphabet
 *@c: An integer value
 *Return: 1 or 0
 */
int _islower(int c);

/**
 *_isalpha - Checks if c is a letter
 *@c: An integer value
 *
 *Return: 1 or 0
 */
int _isalpha(int c);

/**
 *_abs - Computes the absolute value of input integer
 *and returns 1 if > 0, 0 if == 0 or -1 if <0
 *@int: An integer value
 *
 *Return: Absolute value of input integer
 */
int _abs(int);

#endif
