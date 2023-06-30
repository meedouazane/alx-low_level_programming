#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: encoded value
 */
char *leet(char *str)
{
int i, j = 0;
char leet_s[] = {'A', 'E', 'O', 'T', 'L'};
int leet_n[] = {4, 3, 0, 7, 1};
int l = sizeof(leet_s);

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < l; j++)
{
if (str[i] == leet_s[j] || str[i] == leet_s[j] + 32)
{
str[i] = leet_n[j] + '0';
break;
}
}
}
return (str);
}
