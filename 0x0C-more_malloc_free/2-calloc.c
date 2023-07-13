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

if (nmemb == 0 || size == 0)
return (NULL);

p = (int *)malloc((size * nmemb) * sizeof(int));
if (p == NULL)
return (NULL);

return (p);
}
