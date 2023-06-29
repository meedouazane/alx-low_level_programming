#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: source string
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] = s[i] - 32;
	}
	return (s);
}
