#include "main.h"

/**
 * strtow- splits a string into words.
 * @str: input string
 * Return: spilted string
 */
char **strtow(char *str)
{
	int i, length;
	char **ar = &str;

	if( str == NULL )
		return NULL;
	length = strlen(str);
	ar = (char **)malloc((length + 1) * sizeof(char *));
	for (i = 0; i < length; i++)
	{
		if(ar[i] == '	')
		{
			printf("\n");
			ar[i] = ar[i + 1];
		}
	}
	return (ar);
}
