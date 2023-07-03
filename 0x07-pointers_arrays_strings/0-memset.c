#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory to fills
 * @b: constant byte
 * @n: number of the byte that will be filled
 * return: memory filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (0);
}
