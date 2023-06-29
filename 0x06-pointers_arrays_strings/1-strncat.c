#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n:  bytes from src
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l = 0;

	while (dest[l])
		l++;

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[l++] = src[i];
	}
	dest[l + i] = 0;
	return (dest);
}

