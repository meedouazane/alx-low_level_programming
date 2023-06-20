#include <stdio.h>

/**
 * main - entery point
 *
 * return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alph[i] != 0)
	{
	putchar(alph[i]);
	i++;
	}
}
