#include "main.h"

/**
 * _puts - prints s string.
 * @str: the string we want to print.
 * Return: Always 0 (Success).
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
