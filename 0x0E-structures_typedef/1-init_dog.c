#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: struct dog
 * @name: string for the name
 * @age: integer for the age
 * @owner: string for the owners name
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
