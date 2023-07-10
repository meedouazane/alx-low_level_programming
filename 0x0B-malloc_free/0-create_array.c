#include "main.h"
/**
 * create_array- create an array of char.
 * @size: the size of the memory to print.
 * @c: char that we'll initialized array with
 * Return: array initialized.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *a;

	a = (char *) malloc(size * sizeof(char));

	if (size > 0)
	{
		while (i < size)
		{
			*(a + i) = c;
			i++;
		}
	return (a);
	}
	else
		return (0);
}
