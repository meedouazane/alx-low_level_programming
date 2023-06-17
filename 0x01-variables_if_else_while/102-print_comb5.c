#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int b = 0;

	for (i = 0; i < 100; i++)
	{
		for (b = i + 1; b < 100; b++)
		{	
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
				if (i == 98 && b == 99)
				continue;
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
