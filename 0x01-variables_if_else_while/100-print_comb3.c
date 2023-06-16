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

	for (; i < 10; i++)
	{
		for (b = i + 1; b < 10; b++)
		{
			if (b != i)
			{
			putchar(i + '0');
			putchar(b + '0');
				if (i == 8 && b == 9)
				{
					break;
				}
				else
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
