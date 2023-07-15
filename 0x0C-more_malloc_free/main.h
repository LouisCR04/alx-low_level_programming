#ifndef _MMAIN_
#define _MMAIN_

/**
 *malloc_checked - Allocated memory and checks if successful
 *@b: Size to allocate
 *
 *Return: Pointer to memory allocated or NUll 98 if unsuccessful
 */
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

#endif
