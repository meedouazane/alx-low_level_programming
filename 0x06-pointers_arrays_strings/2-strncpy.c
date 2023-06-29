#include "main.h"

/**
 * _strncpy - copy two strings
 * @dest: destination string
 * @src: source string
 * @: size
 * Return: concatenated strings
 */
char *_strncpy(char *dest, char *src, int n)
{
     int i = 0;
          
          
          for (i = 0; src[i] != 0 && i < n; i++)
	  {
                dest[i] = src[i];
	  }     
                while (i < n)
                {
                dest[i] = 0;
                 i++;
                }
                
                return (dest);
}

