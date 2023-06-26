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
	int length = 0;

	for (i = 0; s[i] != 0; i++)
		length++;

	for (i = 0, b = length - 1; i < b; i++, b--)
	{
		t = s[i];
		s[i] = s[b];
		s[b] = t;
	}
}
