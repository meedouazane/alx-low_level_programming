#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int b;
	int c;

	for (; i < 10; i++)
	{
		for (b = i + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
			if (b != i)
				{
			putchar(i + '0');
			putchar(b + '0');
			putchar(c + '0');
				if (i == 7 && b == 8 && c == 9)
					{
					break;
					}
				else
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
