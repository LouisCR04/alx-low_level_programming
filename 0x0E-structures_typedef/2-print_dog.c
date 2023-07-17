#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_dog - Prints the members of struct Dog
 *@d: Pointer to structure
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	return;
}
