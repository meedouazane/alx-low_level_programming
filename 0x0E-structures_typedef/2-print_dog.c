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
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		strcpy(d->owner, "nil");
	printf("Owner: %s\n", d->owner);
	}
}
