#include "main.h"
/**
 * string_nconcat- concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of char to use in s2.
 * Return: string concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, b, l1, l2, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);
	length = l1 + l2;
	p = (char *) malloc(length + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (i < l1)
	{
		*(p + i) = *(s1 + i);
		i++;
	}

	if (n < l2)
	{
		while (b < n)
		{
			*(p + i) = *(s2 + b);
			i++;
			b++;
		}
	}
	else
		{
			while (b < l2)
			{
				*(p + i) = *(s2 + b);
				i++;
				b++;
			}
		}
	*(p + i) = '\0';
	return (p);
}

