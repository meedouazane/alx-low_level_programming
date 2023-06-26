#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string.
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	char t;
	int i, b;

	for (i = 0, b = 8; i < b; i++, b--)
	{
		t = s[i];
		s[i] = s[b];
		s[b] = t;
	}
}
