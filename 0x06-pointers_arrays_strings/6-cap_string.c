#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalizes value
 */
char *cap_string(char *str)
{
int i = 0;
char Sep[] = " ,;.\"!?(){}\t\n";

while (str[i] != '\0')
{
int l;
for (l = 0; Sep[l] != '\0'; l++)
{
if (str[i] == Sep[l])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
}
}
if (str[i] == '\t')
str[i] = ' ';
i++;
}
return (str);
}
