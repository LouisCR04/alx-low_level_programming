#ifndef _MMAIN_
#define _MMAIN_

/**
 *malloc_checked - Allocated memory and checks if successful
 *@b: Size to allocate
 *
 *Return: Pointer to memory allocated or NUll 98 if unsuccessful
 */
void *malloc_checked(unsigned int b);

/**
 *_putchar - Entry point
 *This is the 1st source file that the gcc
 *is compiling and will be linked to the 0-putchar.c file
 *Just outputs a single character to the console
 *@c: any single character
 *
 * Return:A single character
 */
int _putchar(char c);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
