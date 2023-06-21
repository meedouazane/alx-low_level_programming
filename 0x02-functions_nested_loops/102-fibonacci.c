#include <stdio.h>

/**
 * main - entery point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	 long i, b, c, n;

	c = 1;
	b = 0;
	for (i = 2; i <= 51; i++)
	{
		n = c + b;
		b = c;
		c = n;
		printf("%ld", c);
		if (i != 51)
		printf(", ");
		else
			break;
	}
	printf("\n");
	return (0);
}
