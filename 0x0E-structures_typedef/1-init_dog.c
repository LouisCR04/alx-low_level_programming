#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes a variable of type struct dog
 *@dog - Structure called dog (Defined in dog.h header file)
 *@d: - A pointer to a struct dog named d
 *@name: Name of the dog
 *@age: Age of dog
 *@owner: Owner of dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
