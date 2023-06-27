#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entery point
 *
 * return: always 0 (Success)
 */

int main(void)
{
	int i;
	char random[20];

	srand(time(NULL));
	for (i = 0; i < 20; i++)
	{
		random[i] = rand() % 26 + '0';
		printf("%c", random[i]);
	}
	return (0);
}
