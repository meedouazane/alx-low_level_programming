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
	char *hay_ptr;
	char *needle_ptr;

	while (*haystack)
	{
		hay_ptr = haystack;
		needle_ptr = needle;

		while (*hay_ptr == *needle_ptr && *needle_ptr)
		{
		hay_ptr++;
		needle_ptr++;
		}

		if (*needle_ptr == '\0')
		return (haystack);

		haystack++;
	}

return (NULL);
}
