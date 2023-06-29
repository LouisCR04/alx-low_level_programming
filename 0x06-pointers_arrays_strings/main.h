#ifndef CMMAIN
#define CMMAIN

/**
 *_strcat - concatenates two strings.
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *
 *Return: Concataned strings
 */
char *_strcat(char *dest, char *src);

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
 *_strncpy - Appends a string to another
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Copies string to nth byte
 */
char *_strncpy(char *dest, char *src, int n);

/**
 *_strcmp - Compares a string to another
 *@s1: A pointer to a string
 *@s2: A pointer to a string
 *
 *Return: Copies string to nth byte
 */
int _strcmp(char *s1, char *s2);

/**
 *reverse_array - Reverses an array of integers
 *@a: A pointer to an integer
 *@n: An integer value
 *
 *Return: Void
 */
void reverse_array(int *a, int n);

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@s: A pointer to an integer
 *
 *Return: A pointer to a string
 */
char *string_toupper(char *s);

#endif
