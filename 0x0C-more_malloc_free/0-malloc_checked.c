#include "main.h"
/**
 * malloc_checked- allocates memory using malloc.
 * @b: espace that we need to allocate
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = (char *)malloc (b);

	if (p == NULL)
		exit(98);

	return (p);
}

