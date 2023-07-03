#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the initial segment 
 * @accept: consist only of bytes
 * Return: number of bytes in the intial segments
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			{
			if (s[i] == accept[j])
			{
				break;
			}
			}
			if (accept[j] == '\0')
			{
				break;
			}

			t++;
	}
	return t;
}
