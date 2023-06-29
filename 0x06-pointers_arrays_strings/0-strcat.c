#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[j] != 0)
	{
		j++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[j + i] = src[i];
	}
		dest[i + i] = '\0';
		return (dest);
}
