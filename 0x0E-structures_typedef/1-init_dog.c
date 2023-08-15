#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -function that initialize a
 * variable of type struct dog
 * @d: struct the  dog
 * @name: string for name
 * @age: integer for the age
 * @owner: the owners name
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
