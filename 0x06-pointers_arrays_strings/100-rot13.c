#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded value
 */

char *rot13(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
{
char base = (str[i] >= 'a' && str[i] <= 'z') ? 'a' : 'A';
str[i] = ((str[i] - base + 13) % 26) + base;
}
}

return str;
}
