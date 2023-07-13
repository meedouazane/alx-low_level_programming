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
	void *k;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		k = malloc(new_size);
		if (k == NULL)
			return (NULL);
	return (k);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		k = malloc(new_size);
		if (k == NULL)
			return (NULL);
		for (; i < old_size && i < new_size; i++)
		{
			*((char *)k + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
return (k);
}
