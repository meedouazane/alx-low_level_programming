#include "main.h"

/**
 * print_chessboard- prints the chessboard.
 * @a: input
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
	printf("\n");
	}
}

