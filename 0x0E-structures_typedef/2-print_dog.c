#include "dog.h"
/**
 * print_dog- prints a struct dog
 * @d: variable of type dog
 * return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL && d->age == 0.0 && d->owner == NULL)
	printf("%s", "");
	else
	{
	printf("Name: %s\n", d->name ? d->name :"(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner :"(nil)");
	}
}
