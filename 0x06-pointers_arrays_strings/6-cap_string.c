#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: capitalizes value
 */
char *cap_string(char *s)
{
 int i = 0;
 
 while (s[i] != 0)
{ 
while (!(s[i] >= 97 && s[i] <= 122))
i++;
if (s[i - 1] == 32 || s[i - 1] == 10 ||
s[i - 1] == 9 || s[i - 1] == 33 ||
s[i - 1] == 34 || s[i - 1] == 35 ||
s[i - 1] == 59 || s[i - 1] == 40 ||
s[i - 1] == 41 || s[i - 1] == 46 ||
s[i - 1] == 123 || s[i - 1] == 125 ||
s[i - 1] == 77 || i == 0)
s[i] = s[i] - 32;
i++;
}
return (s);
}
