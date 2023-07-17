#include "dog.h"
/**
 * new_dog- creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	if (!name || age < 0 || !owner)
		return (NULL);

	new_dog = malloc(sizeof(struct dog));
		if (new_dog == NULL)
			return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
