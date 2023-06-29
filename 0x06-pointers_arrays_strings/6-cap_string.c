#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalizes value
 */
char *cap_string(char *str)
{
	int l, i = 0;
	char Sep[] = {9, 10, 32, 33, 34, 35, 59, 40, 41, 46, 123, 63, 125};

for (i = 0; str[i] != 0; i++)
{
	for (l = 0; Sep[l] != 0; l++)
	{
	if (str[i] == Sep[l])
	{
	if (str[i + 1] > 97 && str[i + 1] < 122)
	str[i + 1] = str[i + 1] - 32;
	}
	}
}
	for (i = 0; str[i] != 0; i++)
	{
	if (str[i] == 9)
	str[i] = 32;
	}

	return (str);
}
