#include <stdio.h>

/**
 * main - entery point
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
	unsigned long i, b, c, n;

	c = 1;
	b = 0;
	for (i = 2; i < 50; i++)
	{
		n = c + b;
		b = c;
		c = n;
		printf("%lu, ", c);
	}
	printf("\n");
	return (0);
}
