#include "main.h"

/**
 * puts2 - every other character of a string.
 * @str: string.
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != 0)
		length++;

	for (i = 0; i <= length - 1; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
