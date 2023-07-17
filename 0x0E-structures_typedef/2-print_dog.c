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
		char **_name = &(d->name);
		float _age = d->age;
		char **_owner = &(d->owner);
		char *str = "(nil)";

		if (_owner == NULL)
			*_owner = str;
		if (_name == NULL)
			*_name = str;
		if (_age <= 0)
			printf("Name:%s\nAge:%s\nOwner:%s\n", *_name, "(nil)", *_owner);
		else
			printf("Name:%s\nAge:%f\nOwner:%s\n", *_name, _age, *_owner);
	}
}
