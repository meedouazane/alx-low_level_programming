#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalizes value
 */
char *cap_string(char *str)
{
	int i = 0;
for (i = 0; str[i] != 0; i++)
{
if (str[i] == 32 || str[i] == 9 || str[i] == 10 || str[i] == 46)
{
if (str[i + 1] > 97 && str[i + 1] < 122)
str[i + 1] = str[i + 1] - 32;
}
}
for (i = 0; str[i] != 0; i++)
{
if (str[i] == 9)
str[i] = 32;
}
return (str);
}
