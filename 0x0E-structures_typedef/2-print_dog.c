#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function definition
 * @d: parameter structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name : (nill)\n");
	else
		printf("name: %s\n", d->name);
	if (d->age == 0)
		printf("age : (nill)\n");
	else
		printf("age: %f\n", d->age);
	if (d->owner == NULL)
		printf("owner : (nill)\n");
	else
		printf("owner: %s\n", d->owner);
}
