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
	unsigned int i, b, l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;

	p = malloc(l1 + 1 + n * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		*(p + i) = *(s1 + i);

	for (b = 0; b < n; b++)
	{
		*(p + i) = *(s2 + b);
		i++;
	}

	*(p + i) = '\0';
	return (p);
}
