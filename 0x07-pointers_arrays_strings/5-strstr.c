#include "main.h"
#include <string.h>

/**
 * _strstr-  function finds the first occurrence of the substring
 * @needle: string that we'll look for
 * @haystack: string
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int match_length = strlen(needle);
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0'; j++)
	{
	if (haystack[i] == needle[j])
	{
	if (p == NULL)
	p = &haystack[i];
	if (j == match_length - 1)
	return p;
	i++;
	}
	else
	{
	return (NULL);
	break;
}
}
}
}
