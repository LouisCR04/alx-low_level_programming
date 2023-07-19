#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Prints name via different fxs passed by a pointer
 *@name: Pointer to a string. Name to be printed
 *@f: Pointer to fx that prints the name
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
