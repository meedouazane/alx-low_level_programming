#include "dog.h"
/**
 * init_dog- initialize a variable of type struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
