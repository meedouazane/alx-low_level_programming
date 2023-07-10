#include "main.h"
/**
 * str_concat- concatenates two strings.
 * @s1: input first string
 * @s2: input second string
 * Return: concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int b = 0;
	int l1, l2 = 0;
	int length = 0;

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
	while (b < l2)
	{
	*(p + i) = *(s2 + b);
	i++;
	b++;
	}
	*(p + i) = '\0';
	return (p);
}
