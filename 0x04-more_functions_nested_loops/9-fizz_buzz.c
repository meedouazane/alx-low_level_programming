#include "main.h"

/**
 * main - Entery point
 *        numbers multiples of 3 will print Fizz
 *        numbers multiples of 5 will print Buzz
 *        numbers multiples of 3 and 5 will print FizzBuz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz ");
		if (i % 5 == 0)
			printf(" Buzz ");
		if (i % 3 == 0)
		printf(" Fizz ");
		if (i % 3 == 0 || i % 3 == 0 || i % 5 == 0)
			continue;
		else
		printf("%d ", i);
	}
	printf("\n");
	return (0);
}

