#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: bytes that will be copied
 * Return: @dest copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
