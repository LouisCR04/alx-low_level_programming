#ifndef _DOGGH_
#define _DOGGH_

/**
 *struct dog - Dog details
 *@name: Pointer to a string containing the dog' name
 *@owner: Pointer to a string containing owner's name
 *@age: Age of dog (Float)
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/*dog_t *new_dog(char *name, float age, char *owner);*/

/*void free_dog(dog_t *d);*/

#endif /*_DOGGH_*/
