#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabets[i] != 0)
	{
		putchar(alphabets[i]);
		i++;
	}
	return (0);
}
