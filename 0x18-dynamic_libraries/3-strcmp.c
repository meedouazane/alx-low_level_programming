#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: destination string
 * @s2: source string
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
		n = ((int)*s1 - 48) - ((int)*s2 - 48);
		break;
		}
		s1++;
		s2++;
	}

	return (n);
}
