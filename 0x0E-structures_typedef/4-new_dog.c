#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - Creates a new dog struct
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Name of Owner
 *
 * Return: Pointer to the new structure created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
