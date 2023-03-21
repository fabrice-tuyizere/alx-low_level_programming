#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function declaration
 * @d: parameter structure
 * @name: structure member1
 * @age:structure member2
 * @owner:structure member3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

