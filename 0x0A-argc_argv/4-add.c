#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program
 * @argc: number of arguments being passed into the program
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j;
	char *a;
	int length;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];
			length = strlen(a);

			for (j = 0; j < length; j++)
			{
				if (a[j] < '0' || a[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
		}
	}
	else
	{
		printf("0\n");
	}

	printf("%d\n", sum);
	return (0);
}

