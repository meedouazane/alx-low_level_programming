#include "dog.h"
/**
 * free_dog- frees dogs.
 * @d: dog that we will free.
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
