#include "main.h"

/**
 * puts_half - every other character of a string.
 * @str: string.
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, n, length;
	length = 0;

	while (str[length] != 0)
		length++;

	n = (length - 1) / 2;
	for (i = n + 1; i <= length -1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
