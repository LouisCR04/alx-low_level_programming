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

#endif /*_DOGGH_*/
