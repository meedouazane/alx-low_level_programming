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
	int a;
	for (; i < 10; i++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (a = 1; a < 10; a++ )
				{
			putchar(i + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(a + '0');
				if (i == 9 && b == 8 && c == 9 && a==9)
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
