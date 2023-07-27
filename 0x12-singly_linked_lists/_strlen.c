#include "lists.h"

/**
 * _strlen - return length of a string.
 * @s: the string.
 * Return: len length of string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}

	return (len);
}
