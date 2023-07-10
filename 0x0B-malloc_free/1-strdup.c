#include "main.h"
/**
 * _strdup- return a pointer to a new string which is a duplicate.
 * @str: input string
 * Return: duplicated string.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int length = 0;

	length = strlen(str);

	p = (char *) malloc(length * sizeof(char));

	if (p == NULL)
		return (p);

	while (i < length)
	{
		*(p + i) = *(str + i);
		i++;
	}
	return (p);
	free(p);
}
