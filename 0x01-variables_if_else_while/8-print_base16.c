#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabets[] = "0123456789abcdef\n";
	int i = 0;

	while (alphabets[i] != 0)
	{
		putchar(alphabets[i]);
		i++;
	}
	return (0);
}
