#include "main.h"
/**
 *  _realloc- reallocates a memory block.
 *  @ptr: pointer to the memory .
 *  @old_size: the size in bytes.
 *  @new_size: the new size in bytes.
 *  Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *k;

	ptr = malloc(old_size);
	if (ptr == NULL)
		ptr = malloc(new_size);

if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size == old_size)
return (ptr);
else
{
k = malloc(new_size);
ptr = k;
}
return (ptr);
}
