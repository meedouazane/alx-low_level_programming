#include "main.h"

/**
 * _strchr - locates a char in string
 * @s: string
 * @c: char
 * Return: Returns a pointer to the first occurrence of the char c in s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
