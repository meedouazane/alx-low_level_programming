#include "dog.h"
/**
 * _strlen - return length of a string.
 * @s: the string.
 * Return: len length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}

	return (len);
}
/**
 * _strcpy - copier the string
 * @dest: destination
 * @src: the string that we want to copy
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; src[i] != 0; i++)
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * new_dog- creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(struct dog));
		if (new == NULL)
			return (NULL);

	new->name =malloc(_strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner =malloc(_strlen(owner) + 1);
        if (new->owner == NULL)
	{
		free (new);
		return (NULL);
	}
	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);
	return (new);
}
