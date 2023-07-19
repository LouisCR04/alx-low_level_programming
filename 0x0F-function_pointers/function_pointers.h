#ifndef _FXPTR_
#define _FXPTR_

#include <stdlib.h>

/**
 *_putchar - Writes a single character to the std output
 *@c: single character
 *
 * Return: A single character
 */
int _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));

#endif
