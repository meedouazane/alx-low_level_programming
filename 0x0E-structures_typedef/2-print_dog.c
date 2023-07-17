#include "dog.h"
/**
 * print_dog- prints a struct dog
 * @d: variable of type dog
 * return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name == NULL)
	strcpy(d->name, "nil");
	if (d->owner == NULL)
	strcpy(d->owner, "nil");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
