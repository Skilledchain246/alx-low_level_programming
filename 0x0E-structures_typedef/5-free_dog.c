#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - unction that frees dogs.
 * @d: pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}