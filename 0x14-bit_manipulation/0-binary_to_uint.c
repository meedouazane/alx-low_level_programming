#include "main.h"
/**
 * _strlen - return length of a string.
 * @s: the string.
 * Return: len length of string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != 0)
	{
	len++;
	s++;
	}

	return (len);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: converted number or 0 .
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, d = 0;
	int l, i, digit;

	l = _strlen(b) - 1;
	if (b == NULL)
		return (0);
	for (i = l; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			digit = b[i] - '0';
			d += digit * k;
			k = k * 2;
		}
		else
			return (0);
	}
	return (d);
}
