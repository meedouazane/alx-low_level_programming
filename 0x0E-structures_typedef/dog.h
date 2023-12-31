#ifndef DOG_H
#define DOG_H
/**
* struct dog - short description
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdlib.h>
#include <string.h>
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
