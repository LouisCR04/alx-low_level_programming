#include "dog.h"
#include <stdlib.h>

/**
 *new_dog - Creates a new dog struct
 *@str: Pointer to a string
 *
 * Return: Length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 *_strcpy - Copies string from src to dest
 *@dest: Pointer to a string
 *@str: Pointer to a string
 *
 * Return: Pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; i < _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

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
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
        if (ptr->owner == NULL)
        {
                free(ptr);
                free(ptr->name);
                return (NULL);
        }
	ptr->name = _strcpy(ptr->name, name);
	ptr->owner = _strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}
