#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded value
 */
char *rot13(char *str)
{
int i = 0;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
str[i] = (str[i] + 13);
else if ((str[i] >= 'm' && str[i] <= 'z') || (str[i] >= 'M' && str[i] <= 'z'))
str[i] = (str[i] - 13);
}
return (str);
}
