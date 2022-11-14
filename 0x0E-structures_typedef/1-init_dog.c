#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog's identity
 * @name: dog's name
 * @age: dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
