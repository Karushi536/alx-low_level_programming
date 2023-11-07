#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog and its name and owner.
 * @d: Pointer to a struct dog to be freed.
 *
 * Return: Nothing
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
