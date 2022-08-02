#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - a function that fress dog
 * @d: struct to free
 * Return: return nothing
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
