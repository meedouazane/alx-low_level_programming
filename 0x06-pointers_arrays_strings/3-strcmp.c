#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: destination string
 * @s2: source string
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

          for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
          {
          n = s1[i] - s2[i];
          return (n);
          }
}
