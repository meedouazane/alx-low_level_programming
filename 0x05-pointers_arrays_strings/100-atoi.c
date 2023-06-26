#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: the converted value
 */
int _atoi(char *s)
{
	int i = 0;
	int t = 1;

	do {
		if (*s == '-')
			t = t * -1;
		else if (*s >= '0' && *s <= '9')
			i = i * 10 + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);

	return (i * t);
}
