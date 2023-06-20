#include "main.h"

/**
 * main - entery point
 *
 * return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c != 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
