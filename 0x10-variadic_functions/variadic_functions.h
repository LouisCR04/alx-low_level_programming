#ifndef _VARFX_
#define _VARFX_

#include <stdarg.h>
#include <stdlib.h>

/**
 *_putchar - Writes a single character to the std output
 *@c: single character
 *
 * Return: A single character
 */
int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

typedef struct form_spec
{
	char *specifier;
	void (*f)(char *separator, va_list args);
}f_spec;

#endif /*_VARFX_*/
