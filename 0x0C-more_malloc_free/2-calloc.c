#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: size of the memory
 * @size: size of datatype.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	int i, length = 0;

	length = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	p = (int *)malloc(length);
	if (p == NULL)
		return (NULL);

	while (i < length)
	{
		*(p + i) = 0;
		i++;
	}

	return (p);
}
