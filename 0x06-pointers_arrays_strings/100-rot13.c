#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 * Return: encoded value
 */
char *rot13(char *str)
{
int j;

char am[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char nz[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *k = str;

	while (*str)
	{
	for (j = 0; j <= 52; j++)
		{
		if (*str == am[j])
			{
			*str = nz[j];
			break;
			}
		}
		str++;
	}
	return (k);
}
