#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees memory allocated for a struct dog fn.
 * @d: struct dog (i.e. pointer) to free
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
