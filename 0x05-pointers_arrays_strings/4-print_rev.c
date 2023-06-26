#include "main.h"
/**
 * print_rev - print a string in reverse.
 * @s: string
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
