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
		char **namE = &(d->name);
		float agE = d->age;
		char **owneR = &(d->owner);
		char *str = "(nil)";

		if (owneR == NULL)
			*owneR = str;
		if (*namE == NULL)
			*namE = str;
		printf("Name:%s\nAge:%.6f\nOwner:%s\n", *namE, agE, *owneR);
	}
}
