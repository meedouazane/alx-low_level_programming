#include "main.h"

/**
 * _strcpy - copier the string
 * @dest: destination
 * @src: the string that we want to copy
 * Return: @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	for (i = 0; src[i] != 0; i++)
		length++;

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}
