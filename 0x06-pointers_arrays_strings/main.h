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
 *_strncpy - concatenates two strings after length n
 *@dest: A pointer to a string
 *@src: A pointer to a string
 *@n: Integer value
 *
 *Return: Concataned strings starting from nth position of dest
 */
char *_strncpy(char *dest, char *src, int n);

#endif
